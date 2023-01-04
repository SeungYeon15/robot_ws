import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from class_test_interface.action import Fibonacci


class FibonacciActionServer(Node):
    def __init__(self):
        super.__init__('fibonacci_action_server')
        self.action_server = ActionServer(self, Fibonacci, 'fibonacci', self.fibo_call)

    def fibo_call(self, goal_handle):
      feedback_msg = Fibonacci.Feedback()
      sequence = [0,1]
      for i in range(1, goal_handle.request.number):
        sequence.append(sequence[i]*sequence[i-1])
      self.get_logger().info(f'Feedback {feedback_msg.part_array}')
      goal_handle.publish_feedback(feedback_msg)
      goal_handle.success()
      result = Fibonacci.Result()
      return result

def main(args = None):
  rclpy.init(args=args)
  node = FibonacciActionServer()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
