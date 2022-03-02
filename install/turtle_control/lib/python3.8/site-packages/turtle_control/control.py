import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from pynput.keyboard import Key, Listener



# Collect events until released


class Keyboard_Input(Node):

    def on_press(self,key):
        msg = String()
        # print('{0} pressed'.format(key))
        msg.data = format(key)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)

    def on_release(self,key):
        msg = String()
        # print('{0} release'.format(key))
        msg.data = format(key)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        if key == Key.esc:
            return False

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        timer_period = 0.5  # seconds
        with Listener(on_press=self.on_press,on_release=self.on_release) as listener:listener.join()




def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = Keyboard_Input()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
