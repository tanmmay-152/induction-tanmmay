import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtlePublisher(Node):
    def __init__(self):
        super().__init__('turtle_publisher')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.publish_velocity)  # 10 Hz

    def publish_velocity(self):
        msg = Twist()
        msg.linear.x = 0.1
        msg.angular.z = 0.25
        self.publisher_.publish(msg)
        self.get_logger().info(
            f'Publishing: linear.x = {msg.linear.x}, angular.z = {msg.angular.z}'
        )

def main(args=None):
    rclpy.init(args=args)
    node = TurtlePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
