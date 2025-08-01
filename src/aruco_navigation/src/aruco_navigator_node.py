#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

import cv2
import numpy as np
import math
import time

from sensor_msgs.msg import Image, CameraInfo
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge
from tf_transformations import euler_from_quaternion


class ArucoNavigator(Node):
    def __init__(self):
        super().__init__('aruco_navigator_node')
        self.bridge = CvBridge()

        # Subscriptions and publishers
        self.create_subscription(Image, '/camera/image_raw', self.process_image, 10)
        self.create_subscription(CameraInfo, '/camera/camera_info', self.set_camera_info, 10)
        self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.cmd_pub = self.create_publisher(Twist, 'cmd_vel', 10)

        # ArUco detection setup
        self.marker_length = 0.1778  # meters
        self.aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_ARUCO_ORIGINAL)
        self.detector_params = cv2.aruco.DetectorParameters_create()

        # Motion parameters
        self.target_distance = 1.0
        self.linear_speed = 0.2
        self.angular_speed = math.radians(30)
        self.max_tags = 5

        # Search config
        self.scan_step_distance = 0.3
        self.scan_step_time = self.scan_step_distance / self.linear_speed
        self.scan_angle = math.radians(30)
        self.scan_duration = abs(self.scan_angle) / self.angular_speed

        # Control tuning
        self.align_kp = 2.5
        self.align_tolerance = math.radians(3)
        self.approach_kp = 1.0

        # State management
        self.state = 'FORWARD_SCAN'
        self.tag_seen = False
        self.current_tag_id = None
        self.tags_visited = 0
        self.tag_position = None
        self.start_yaw = None
        self.yaw = None

        # Time tracking
        self.step_start = None
        self.turn_start = None

        # Camera intrinsics
        self.camera_matrix = None
        self.dist_coeffs = None

        # Control loop timer
        self.create_timer(0.05, self.update)

        self.get_logger().info("🚗 ArucoNavigator node initialized.")

    def set_camera_info(self, msg):
        if self.camera_matrix is None:
            self.camera_matrix = np.array(msg.k).reshape(3, 3)
            self.dist_coeffs = np.array(msg.d)
            self.get_logger().info("📸 Camera calibration loaded.")

    def odom_callback(self, msg):
        q = msg.pose.pose.orientation
        _, _, self.yaw = euler_from_quaternion([q.x, q.y, q.z, q.w])

    def process_image(self, msg):
        if self.state in ('TURN_AROUND', 'FINISHED') or self.camera_matrix is None:
            return
        try:
            image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        except:
            return

        corners, ids, _ = cv2.aruco.detectMarkers(image, self.aruco_dict, parameters=self.detector_params)
        if ids is None:
            return

        for i, marker_id in enumerate(ids.flatten()):
            if marker_id not in (0, 1):
                continue

            _, tvecs, _ = cv2.aruco.estimatePoseSingleMarkers(
                [corners[i]], self.marker_length,
                self.camera_matrix, self.dist_coeffs)
            self.tag_position = tvecs[0][0]
            self.current_tag_id = int(marker_id)
            if self.state.startswith('FORWARD') or self.state.startswith('SWEEP'):
                self.get_logger().info(f"🎯 Tag {marker_id} detected — switching to ALIGN")
                self.state = 'ALIGN'
            break

    def update(self):
        cmd = Twist()

        if self.state == 'FINISHED':
            self.cmd_pub.publish(cmd)
            return

        # 1. Move forward
        if self.state == 'FORWARD_SCAN':
            if self.step_start is None:
                self.step_start = time.time()
            if time.time() - self.step_start < self.scan_step_time:
                cmd.linear.x = self.linear_speed
            else:
                self.step_start = None
                self.state = 'SWEEP_LEFT'
                self.turn_start = time.time()

        # 2. Sweep left
        elif self.state == 'SWEEP_LEFT':
            if time.time() - self.turn_start < self.scan_duration:
                cmd.angular.z = self.angular_speed
            else:
                self.turn_start = time.time()
                self.state = 'SWEEP_RIGHT'

        # 3. Sweep right (double time)
        elif self.state == 'SWEEP_RIGHT':
            if time.time() - self.turn_start < 2 * self.scan_duration:
                cmd.angular.z = -self.angular_speed
            else:
                self.state = 'FORWARD_SCAN'
                self.turn_start = None

        # 4. Align with tag
        elif self.state == 'ALIGN' and self.tag_position is not None:
            x, _, z = self.tag_position
            heading_error = math.atan2(x, z)
            if abs(heading_error) > self.align_tolerance:
                cmd.angular.z = -heading_error * self.align_kp
            else:
                self.get_logger().info("🧭 Aligned. Proceeding to approach.")
                self.state = 'APPROACH'

        # 5. Approach tag while staying centered
        elif self.state == 'APPROACH' and self.tag_position is not None:
            x, _, z = self.tag_position
            heading_error = math.atan2(x, z)
            if z > self.target_distance:
                cmd.linear.x = self.linear_speed
                cmd.angular.z = -heading_error * self.approach_kp
            else:
                self.get_logger().info(f"📍 Tag {self.current_tag_id} reached at {z:.2f} m — turning...")
                self.state = 'TURN_AROUND'
                self.start_yaw = self.yaw

        # 6. Turn ±90° depending on tag
        elif self.state == 'TURN_AROUND' and self.yaw is not None:
            target_angle = math.pi/2 if self.current_tag_id == 1 else -math.pi/2
            angle_moved = self._angle_difference(self.yaw, self.start_yaw)
            if abs(angle_moved) < abs(target_angle):
                cmd.angular.z = math.copysign(self.angular_speed, target_angle)
            else:
                self.tags_visited += 1
                if self.tags_visited >= self.max_tags:
                    self.get_logger().info("🏁 All tags visited. Mission complete.")
                    self.state = 'FINISHED'
                else:
                    self.get_logger().info(f"✅ Tag {self.current_tag_id} done ({self.tags_visited}/{self.max_tags}). Resuming scan.")
                    self.state = 'FORWARD_SCAN'

        self.cmd_pub.publish(cmd)

    @staticmethod
    def _angle_difference(current, previous):
        diff = current - previous
        while diff > math.pi:
            diff -= 2 * math.pi
        while diff < -math.pi:
            diff += 2 * math.pi
        return diff


def main():
    rclpy.init()
    node = ArucoNavigator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
