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
            turtle.forward(5)
        elif(msg.data=="Key.down"):
            turtle.back(5)
        elif(msg.data=="Key.left"):
            turtle.left(5)
        elif(msg.data=="Key.right"):
            turtle.right(5)
        elif(msg.data.find("change_color")!=-1):            
            turtle.Screen().bgcolor("orange")

# draw square in Python Turtle
from time import sleep
import turtle

turtle.bgcolor("blue")
# t = turtle.Turtle()
turtle.shape("turtle")


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