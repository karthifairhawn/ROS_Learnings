from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Turtle_GUI(Node):

    def __init__(self):
        super().__init__('turtle')
        self.subscription = self.create_subscription(String,'topic',self.listener_callback,10)
        self.subscription  # prevent unused variable warning


    def listener_callback(self, msg):

        self.get_logger().info('I heard: "%s"' % msg.data)

        if(msg.data=="Key.up"):
            t.forward(5)
        elif(msg.data=="Key.down"):
            t.back(5)
        elif(msg.data=="Key.left"):
            t.left(5)
        elif(msg.data=="Key.right"):
            t.right(5)

# draw square in Python Turtle
from time import sleep
import turtle

t = turtle.Turtle()
t.shape("turtle")

s = 10



def main(args=None):

    while True:
        rclpy.init(args=args)
        minimal_subscriber = Turtle_GUI()
        rclpy.spin(minimal_subscriber)
        minimal_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()        