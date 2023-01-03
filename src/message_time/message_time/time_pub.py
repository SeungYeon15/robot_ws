import rclpy
from rclpy.qos import QoSProfile
from rclpy.node import Node
from std_msgs.msg import String
from datetime import datetime
from std_msgs.msg import Header

class M_pub(Node):
    def __init__(self):
        super().__init__('time_publisher')
        self.qos_profile = QoSProfile(depth = 10)
        self.message_publisher = self.create_publisher(String, 'time', self.qos_profile)
        self.timer = self.create_timer(1, self.m_publisher)

    def m_publisher(self):
        msg = String()

        now =  datetime.now()
        msg.data = f"time : {now.time()}"
        self.message_publisher.publish(msg)
        self.get_logger().info(f'time_publisher:{msg.data}')


def main(args=None):
    rclpy.init(args=args)
    node = M_pub()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt ! ! !')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main':
    main()