#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class ObstacleAvoider(Node):
    def __init__(self):
        super().__init__('obstacle_avoider')

        # Publisher for movement
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Subscriber for LaserScan
        self.scan_sub = self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)

        # Timer to continuously publish the latest command
        self.current_twist = Twist()
        self.timer = self.create_timer(0.1, self.publish_cmd)

        self.get_logger().info('Obstacle Avoider Node has been started.')

    def scan_callback(self, msg):
        # Use front-facing LaserScan range: 0-10 degrees and 350-359 degrees
        front_ranges = msg.ranges[0:10] + msg.ranges[350:360]

        # Filter out 'inf' or invalid readings
        front_ranges = [r for r in front_ranges if r > 0.0]

        if not front_ranges:
            self.get_logger().warn('No valid scan data in front. Skipping decision.')
            return

        min_distance = min(front_ranges)
        self.get_logger().info(f"Front min distance: {min_distance:.2f} meters")

        # Decision logic
        if min_distance > 0.9:
            self.current_twist.linear.x = 0.1
            self.current_twist.angular.z = 0.0
            self.get_logger().info('Moving forward')
        else:
            self.current_twist.linear.x = 0.0
            self.current_twist.angular.z = -0.5
            self.get_logger().info('Obstacle detected, turning right')

    def publish_cmd(self):
        self.cmd_pub.publish(self.current_twist)

def main(args=None):
    rclpy.init(args=args)
    node = ObstacleAvoider()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
