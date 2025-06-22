import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtleCommander(Node):
    def __init__(self):
        super().__init__('turtle_commander')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.publish_velocity)
        self.get_logger().info('Publishing velocity to /turtle1/cmd_vel...')

    def publish_velocity(self):
        msg = Twist()
        msg.linear.x = 1.0  # Forward
        msg.angular.z = 1.0  # Rotate
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: Linear={msg.linear.x}, Angular={msg.angular.z}')

def main(args=None):
    rclpy.init(args=args)
    node = TurtleCommander()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
