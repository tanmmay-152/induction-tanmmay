#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from coordinate_follower.action import FollowTarget
import time
import os

class FollowerClient(Node):
    def __init__(self):
        super().__init__('follower_client')
        self._client = ActionClient(self, FollowTarget, 'follow_target')

    def send_goals_from_file(self, file_path):
        # Wait for the server to be available
        self._client.wait_for_server()
        self.get_logger().info("Action server is ready")

        # Check file exists
        if not os.path.exists(file_path):
            self.get_logger().error(f"Coordinates file not found: {file_path}")
            return

        with open(file_path, 'r') as file:
            for line in file:
                line = line.strip()
                if not line:
                    continue
                try:
                    x_str, y_str = line.split(',')
                    x, y = float(x_str.strip()), float(y_str.strip())
                except ValueError:
                    self.get_logger().error(f"Invalid line format: {line}")
                    continue

                goal_msg = FollowTarget.Goal()
                goal_msg.x = x
                goal_msg.y = y

                self.get_logger().info(f"Sending goal: x={x}, y={y}")
                future = self._client.send_goal_async(goal_msg)
                rclpy.spin_until_future_complete(self, future)
                goal_handle = future.result()

                if not goal_handle.accepted:
                    self.get_logger().warn(f"Goal rejected: x={x}, y={y}")
                    continue

                result_future = goal_handle.get_result_async()
                rclpy.spin_until_future_complete(self, result_future)
                result = result_future.result().result

                if result.success:
                    self.get_logger().info(f"Goal succeeded: {result.message}")
                else:
                    self.get_logger().warn(f"Goal failed: {result.message}")

                time.sleep(1)  # small pause before next goal

def main(args=None):
    rclpy.init(args=args)
    node = FollowerClient()

    # Build absolute path to coordinates.txt inside scripts folder
    current_dir = os.path.dirname(os.path.realpath(__file__))
    file_path = os.path.join(current_dir, 'coordinates.txt')

    node.send_goals_from_file(file_path)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
