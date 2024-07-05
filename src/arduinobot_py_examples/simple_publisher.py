import rclpy
from rclpy.node import Node 
from std_msgs.msg import String

class SimplePublisher(Node):
    def __init__(self):
        super().__init__('simple_publisher') 
        self.publisher_ = self.create_publisher(String, 'chatter', 10)
        self.counter = 0
        self.frequency = 1.0
        self.get_logger().info('Publishing at %d Hz' % self.frequency)
        self.timer = self.create_timer(self.frequency, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = 'Hello ROS2: %d' % self.counter
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.counter += 1

def main():
    rclpy.init()
    simple_publisher = SimplePublisher()
    rclpy.spin(simple_publisher)
    simple_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
   main()
