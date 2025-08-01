#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from coordinate_follower.action import FollowTarget
import time

class FollowTargetClient(Node):
    def __init__(self):
        super().__init__('follow_target_client')
        self._client = ActionClient(self, FollowTarget, 'follow_target')

    def send_goals_from_file(self, file_path):
        self._client.wait_for_server()
        self.get_logger().info("Action server is ready")

        with open(file_path, 'r') as f:
            for line in f:
                if not line.strip():
                    continue

                try:
                    x_str, y_str = line.strip().split()
                    x = float(x_str)
                    y = float(y_str)
                except ValueError:
                    self.get_logger().warn(f"Invalid format in line: {line}")
                    continue

                goal = FollowTarget.Goal()
                goal.x = x
                goal.y = y
                self.get_logger().info(f"Sending goal: ({x}, {y})")

                future = self._client.send_goal_async(goal)
                rclpy.spin_until_future_complete(self, future)

                goal_handle = future.result()
                if not goal_handle.accepted:
                    self.get_logger().warn("Goal rejected")
                    continue

                result_future = goal_handle.get_result_async()
                rclpy.spin_until_future_complete(self, result_future)

                result = result_future.result().result
                self.get_logger().info(f"Result: success = {result.success} | {result.message}")
                time.sleep(1)

def main():
    rclpy.init()
    client = FollowTargetClient()
    client.send_goals_from_file('/home/your_user/ros2_ws/src/coordinate_follower/scripts/coordinates.txt')
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
