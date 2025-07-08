#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from geometry_msgs.msg import Twist
from coordinate_follower.action import FollowTarget  # generated from your action file

import time

class FollowerServer(Node):
    def __init__(self):
        super().__init__('follower_server')

        # Create the Action server
        self._action_server = ActionServer(
            self,
            FollowTarget,
            'follow_target',
            self.execute_callback,
            callback_group=ReentrantCallbackGroup()
        )

        # Publisher to cmd_vel topic
        self.cmd_vel_publisher = self.create_publisher(Twist, 'cmd_vel', 10)

        self.get_logger().info('Follower Server is up and ready!')

    async def execute_callback(self, goal_handle):
        self.get_logger().info(f"Received goal: x={goal_handle.request.x}, y={goal_handle.request.y}")

        # Create and publish Twist message
        twist = Twist()
        twist.linear.x = float(goal_handle.request.x)
        twist.angular.z = float(goal_handle.request.y)
        self.cmd_vel_publisher.publish(twist)

        self.get_logger().info("Published cmd_vel command to move robot")

        # Simulate some work (e.g., move for 2 seconds)
        time.sleep(2.0)

        # Stop the robot
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.cmd_vel_publisher.publish(twist)

        self.get_logger().info("Robot stopped")

        # Prepare result
        result = FollowTarget.Result()
        result.success = True
        result.message = "Target followed successfully."
        return result

def main(args=None):
    rclpy.init(args=args)
    node = FollowerServer()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
