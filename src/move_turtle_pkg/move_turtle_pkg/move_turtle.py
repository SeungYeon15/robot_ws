import rclpy
# import rospy
from rclpy.qos import QoSProfile
from rclpy.node import Node
from geometry_msgs.msg import Twist

class Move_turtle(Node):
    def __init__(self):
        super().__init__('move_turtle')
        self.qos_profile = QoSProfile(depth = 10)
        self.message_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', self.qos_profile)
        self.message_publisher2 = self.create_publisher(Twist, 'turtle2/cmd_vel', self.qos_profile)
        self.message_publisher3 = self.create_publisher(Twist, 'turtle3/cmd_vel', self.qos_profile)
        self.message_publisher4 = self.create_publisher(Twist, 'turtle4/cmd_vel', self.qos_profile)
        self.timer = self.create_timer(0.1, self.turtle_move)
        # self.timer = self.create_timer(0.1, self.rotate)
        self.velocity = 0.0

    # def rotate():
    #     PI = 3.1415926535897
    #     rospy.init_node('robot_cleaner', anonymous=True)
    #     velocity_publisher = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
    #     vel_msg = Twist()
    #     angular_speed = 10*2*PI/360
    #     relative_angle = 60*2*PI/360

    #     vel_msg.linear.x=0
    #     vel_msg.linear.y=0
    #     vel_msg.linear.z=0
    #     vel_msg.angular.x = 0
    #     vel_msg.angular.y = 0
    #     vel_msg.angular.z = abs(angular_speed)
    #     t0 = rospy.Time.now().to_sec()
    #     current_angle = 0

    #     while(current_angle < relative_angle):
    #         velocity_publisher.publish(vel_msg)
    #         t1 = rospy.Time.now().to_sec()
    #         current_angle = angular_speed*(t1-t0)



    #     vel_msg.angular.z = 0
    #     velocity_publisher.publish(vel_msg)
    #     rospy.spin()

    def turtle_move(self):
        msg = Twist()
        # msg.linear.x = self.velocity
        msg.linear.x = 1.0
        msg.linear.y = 0.0
        msg.linear.z = 0.0

        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 1.0
        self.message_publisher.publish(msg)
        self.message_publisher2.publish(msg)
        self.message_publisher3.publish(msg)
        self.message_publisher4.publish(msg)
        self.get_logger().info(f'Publisher message:{msg.linear},{msg.angular}')
        # self.velocity += 0.01


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