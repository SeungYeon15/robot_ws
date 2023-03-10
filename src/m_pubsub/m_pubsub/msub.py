import rclpy
from rclpy.qos import QoSProfile
from rclpy.node import Node
from std_msgs.msg import String

class M_sub(Node):
    def __init__(self):
        super().__init__('subscriber_message')
        self.qos_profile = QoSProfile(depth = 10)
        self.message_publisher = self.create_subscription(String, 'message', self.subscriber_message, self.qos_profile)

    def subscriber_message(self,msg):
        self.get_logger().info(f'Publisher message: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    node = M_sub()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt ! ! !')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main':
    main()