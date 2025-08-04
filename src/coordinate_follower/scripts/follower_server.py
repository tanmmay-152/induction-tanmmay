#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from tf_transformations import euler_from_quaternion
from coordinate_follower.action import FollowTarget

class FollowTargetServer(Node):
    def __init__(self):
        super().__init__('follow_target_server')
        self._action_server = ActionServer(
            self,
            FollowTarget,
            'follow_target',
            self.execute_callback
        )

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.create_subscription(Odometry, '/odom', self.odom_callback, 10)

        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0

    def odom_callback(self, msg):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y
        q = msg.pose.pose.orientation
        _, _, self.current_yaw = euler_from_quaternion([q.x, q.y, q.z, q.w])

    def execute_callback(self, goal_handle):
        gx = goal_handle.request.x
        gy = goal_handle.request.y

        feedback = FollowTarget.Feedback()
        result = FollowTarget.Result()
        rate = self.create_rate(10)

        ARRIVE_THRESH = 0.05
        ALIGN_THRESH = 0.05
        REALIGN_THRESH = 0.10

        self.get_logger().info(f"New goal received: ({gx:.2f}, {gy:.2f})")

        # Phase 1: Align to goal
        while rclpy.ok():
            dx = gx - self.current_x
            dy = gy - self.current_y
            dist = math.hypot(dx, dy)
            angle_to_goal = math.atan2(dy, dx)
            yaw_err = math.atan2(math.sin(angle_to_goal - self.current_yaw),
                                 math.cos(angle_to_goal - self.current_yaw))

            if abs(yaw_err) < ALIGN_THRESH:
                break

            cmd = Twist()
            cmd.angular.z = 0.5 * (1 if yaw_err > 0 else -1)
            self.cmd_pub.publish(cmd)
            rate.sleep()

        aligned_heading = angle_to_goal
        prev_dist = None
        success = False

        # Phase 2: Drive straight
        while rclpy.ok():
            dx = gx - self.current_x
            dy = gy - self.current_y
            dist = math.hypot(dx, dy)

            feedback.current_x = self.current_x
            feedback.current_y = self.current_y
            feedback.distance_remaining = dist
            goal_handle.publish_feedback(feedback)

            if dist < ARRIVE_THRESH or (prev_dist is not None and dist > prev_dist):
                success = True
                break

            yaw_diff = math.atan2(math.sin(aligned_heading - self.current_yaw),
                                  math.cos(aligned_heading - self.current_yaw))

            cmd = Twist()
            if abs(yaw_diff) > REALIGN_THRESH:
                cmd.angular.z = 0.5 * (1 if yaw_diff > 0 else -1)
            else:
                cmd.linear.x = min(0.2, 0.8 * dist)
                cmd.angular.z = 0.0

            self.cmd_pub.publish(cmd)
            prev_dist = dist
            rate.sleep()

        self.cmd_pub.publish(Twist())  # stop robot

        if success:
            goal_handle.succeed()
            result.success = True
            result.message = "Target reached"
            self.get_logger().info("Goal reached.")
        else:
            goal_handle.abort()
            result.success = False
            result.message = "Failed to reach goal"
            self.get_logger().warn("Goal aborted.")

        return result

def main(args=None):
    rclpy.init(args=args)
    node = FollowTargetServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
