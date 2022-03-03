from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class BGcolor_Service(Node):

    def __init__(self):
        super().__init__('color_service')
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.add_two_ints_callback)

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
        # Change_Color.Change()
        temp = Change_Color(request.a, request.b)
        return response


class Change_Color(Node):        

    def __init__(self,a,b):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        timer_period = 0.5  # seconds
        msg = String()
        # print('{0} release'.format(key))
        msg.data = "change_color 100 200 200"
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    minimal_service = BGcolor_Service()
    rclpy.spin(minimal_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()