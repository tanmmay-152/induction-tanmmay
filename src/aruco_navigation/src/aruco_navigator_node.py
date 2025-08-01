#!/usr/bin/env python3

import math, time

import rclpy
from rclpy.node import Node

import cv2
import numpy as np

from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from cv_bridge import CvBridge, CvBridgeError
from tf_transformations import euler_from_quaternion


class ArucoNavigator(Node):
    def __init__(self):
        super().__init__('aruco_navigator')
        self.bridge = CvBridge()

        # Subscriptions & Publisher
        self.create_subscription(Image, '/camera/image_raw', self.image_cb, 10)
        self.create_subscription(CameraInfo, '/camera/camera_info', self.caminfo_cb, 10)
        self.create_subscription(Odometry, '/odom', self.odom_cb, 10)
        self.cmd_pub = self.create_publisher(Twist, 'cmd_vel', 10)

        # ArUco setup
        self.aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_ARUCO_ORIGINAL)
        self.aruco_params = cv2.aruco.DetectorParameters_create()

        # Navigation params
        self.MARKER_LEN = 0.1778  # meters
        self.TARGET_DIST = 1.0  # meters
        self.FWD_SPEED = 0.2  # m/s
        self.TURN_SPEED = math.radians(20)  # rad/s
        self.MAX_TAGS = 5

        # Search & peek tuning
        self.SEARCH_STEP_DIST = 0.3  # meters per forward step
        self.LOOK_ANGLE = math.radians(35)  # WAS 20, now 35 degrees
        self.SEARCH_STEP_TIME = self.SEARCH_STEP_DIST / self.FWD_SPEED
        self.LOOK_TIME = abs(self.LOOK_ANGLE) / self.TURN_SPEED

        # Align/approach tuning
        self.ALIGN_KP = 2.0
        self.ALIGN_TOL = math.radians(3)
        self.APPROACH_KP = 1.0

        # State machine
        self.state = 'SEARCH_STEP'
        self.tags_done = 0
        self.current_id = None
        self.last_tvec = None

        # Timing
        self.step_start_time = None
        self.look_start_time = None

        # Robot pose
        self.robot_yaw = None
        self.camera_matrix = None
        self.dist_coeffs = None
        self.turn_start_yaw = None

        # Main control loop
        self.create_timer(0.05, self.control_loop)
        self.get_logger().info("🚀 ArucoNavigator initialized")

    def caminfo_cb(self, msg: CameraInfo):
        if self.camera_matrix is None:
            self.camera_matrix = np.array(msg.k).reshape(3, 3)
            self.dist_coeffs = np.array(msg.d)
            self.get_logger().info("📷 Camera intrinsics received")

    def odom_cb(self, msg: Odometry):
        q = msg.pose.pose.orientation
        _, _, self.robot_yaw = euler_from_quaternion([q.x, q.y, q.z, q.w])

    def image_cb(self, msg: Image):
        if self.state in ('TURN', 'DONE') or self.camera_matrix is None:
            return

        try:
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        except CvBridgeError:
            return

        corners, ids, _ = cv2.aruco.detectMarkers(frame, self.aruco_dict, parameters=self.aruco_params)
        if ids is None:
            return

        for i, tid in enumerate(ids.flatten()):
            if tid not in (0, 1):
                continue

            _, tvecs, _ = cv2.aruco.estimatePoseSingleMarkers(
                [corners[i]], self.MARKER_LEN, self.camera_matrix, self.dist_coeffs)
            self.last_tvec = tvecs[0][0]
            self.current_id = int(tid)

            if self.state in ('SEARCH_STEP', 'LOOK_LEFT', 'LOOK_RIGHT'):
                self.get_logger().info(f"🔍 Tag {tid} detected → ALIGN")
                self.state = 'ALIGN'
            break

    def control_loop(self):
        twist = Twist()

        if self.state == 'DONE':
            self.cmd_pub.publish(twist)
            return

        # 1) Forward step
        if self.state == 'SEARCH_STEP':
            if self.step_start_time is None:
                self.step_start_time = time.time()
            if time.time() - self.step_start_time < self.SEARCH_STEP_TIME:
                twist.linear.x = self.FWD_SPEED
            else:
                self.state = 'LOOK_LEFT'
                self.look_start_time = time.time()
                self.step_start_time = None

        # 2) Look left +35°
        elif self.state == 'LOOK_LEFT':
            if time.time() - self.look_start_time < self.LOOK_TIME:
                twist.angular.z = self.TURN_SPEED
            else:
                self.state = 'LOOK_RIGHT'
                self.look_start_time = time.time()

        # 3) Look right −35°
        elif self.state == 'LOOK_RIGHT':
            if time.time() - self.look_start_time < 2 * self.LOOK_TIME:
                twist.angular.z = -self.TURN_SPEED
            else:
                self.state = 'SEARCH_STEP'
                self.look_start_time = None

        # 4) Align to tag
        elif self.state == 'ALIGN' and self.last_tvec is not None:
            x, _, z = self.last_tvec
            err = math.atan2(x, z)
            if abs(err) > self.ALIGN_TOL:
                twist.angular.z = -err * self.ALIGN_KP
            else:
                self.get_logger().info("🔧 Aligned → APPROACH")
                self.state = 'APPROACH'

        # 5) Approach tag
        elif self.state == 'APPROACH' and self.last_tvec is not None:
            x, _, z = self.last_tvec
            err = math.atan2(x, z)
            if z > self.TARGET_DIST:
                twist.linear.x = self.FWD_SPEED
                twist.angular.z = -err * self.APPROACH_KP
            else:
                self.get_logger().info(f"↻ Reached tag at {z:.2f} m → TURN")
                self.turn_start_yaw = self.robot_yaw
                self.state = 'TURN'

        # 6) Turn ±90°
        elif self.state == 'TURN' and self.robot_yaw is not None:
            desired = (math.pi / 2) * (1 if self.current_id == 1 else -1)
            delta = self._angle_diff(self.robot_yaw, self.turn_start_yaw)

            if abs(delta) < abs(desired):
                twist.angular.z = math.copysign(self.TURN_SPEED, desired)
            else:
                self.tags_done += 1
                if self.tags_done < self.MAX_TAGS:
                    self.get_logger().info(f"✅ Completed Tag {self.current_id} ({self.tags_done}/{self.MAX_TAGS})")
                    self.state = 'SEARCH_STEP'
                else:
                    self.get_logger().info("🏁 All tags completed. Stopping.")
                    self.state = 'DONE'

        self.cmd_pub.publish(twist)

    @staticmethod
    def _angle_diff(a, b):
        d = a - b
        while d > math.pi: d -= 2 * math.pi
        while d < -math.pi: d += 2 * math.pi
        return d


def main():
    rclpy.init()
    node = ArucoNavigator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

