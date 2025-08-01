#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
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
        goal_x = goal_handle.request.x
        goal_y = goal_handle.request.y

        feedback_msg = FollowTarget.Feedback()
        result = FollowTarget.Result()

        rate = self.create_rate(10)
        arrive_threshold = 0.05

        self.get_logger().info(f"Received goal: ({goal_x:.2f}, {goal_y:.2f})")

        while rclpy.ok():
            dx = goal_x - self.current_x
            dy = goal_y - self.current_y
            dist = math.hypot(dx, dy)

            if dist < arrive_threshold:
                self.cmd_pub.publish(Twist())  # stop
                result.success = True
                result.message = "Reached target."
                goal_handle.succeed()
                self.get_logger().info("Goal reached successfully.")
                return result

            angle_to_goal = math.atan2(dy, dx)
            angle_diff = angle_to_goal - self.current_yaw
            angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))

            cmd = Twist()

            if abs(angle_diff) > 0.1:
                cmd.angular.z = 0.4 * (1 if angle_diff > 0 else -1)
            else:
                cmd.linear.x = min(0.3, 0.8 * dist)

            self.cmd_pub.publish(cmd)

            feedback_msg.current_x = self.current_x
            feedback_msg.current_y = self.current_y
            feedback_msg.distance_remaining = dist
            goal_handle.publish_feedback(feedback_msg)

            rate.sleep()

        goal_handle.abort()
        result.success = False
        result.message = "Goal aborted unexpectedly."
        return result

def main(args=None):
    rclpy.init(args=args)
    node = FollowTargetServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
