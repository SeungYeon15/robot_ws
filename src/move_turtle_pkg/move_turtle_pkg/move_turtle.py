import rclpy
from rclpy.qos import QoSProfile
from rclpy.node import Node
from geometry_msgs.msg import Twist

class Move_turtle(Node):
    def __init__(self):
        super().__init__('move_turtle')
        self.qos_profile = QoSProfile(depth = 10)
        self.message_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', self.qos_profile)
        self.timer = self.create_timer(0.1, self.turtle_move)
        self.velocity = 0.0

    def turtle_move(self):
        msg = Twist()
        msg.linear.x = self.velocity
        msg.linear.y = 0.0
        msg.linear.z = 0.0

        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 1.0
        self.message_publisher.publish(msg)
        self.get_logger().info(f'Publisher message:{msg.linear},{msg.angular}')
        self.velocity += 0.01


def main(args=None):
    rclpy.init(args=args)
    node = Move_turtle()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt ! ! !')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main':
    main()