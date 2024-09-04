import rclpy  # type: ignore
from rclpy.node import Node # type: ignore
from rcl_interfaces.msg import SetParametersResult # type: ignore
from rclpy.parameter import Parameter # type: ignore

class SimpleParameter(Node):
    def __init__(self):
        super().__init__('simple_parameter')
        self.declare_parameter('lol_parameter', 28)
        self.declare_parameter('lol_string_parameter', "Lololol")
        lol_parameter = self.get_parameter('lol_parameter').value
        self.get_logger().info('lol_parameter: %s' % lol_parameter)

        self.add_on_set_parameters_callback(self.parameterrrrCallBack)

    def parameterrrrCallBack(self, parameters):
        result = SetParametersResult()
        
        for parameter in parameters:
            if parameter.name == 'lol_parameter' and parameter.type_ == Parameter.Type.INTEGER:
                self.get_logger().info('New value for lol_parameter: %s' % parameter.value)
                result.successful = True
            if parameter.name == 'lol_string_parameter' and parameter.type_ == Parameter.Type.STRING:
                self.get_logger().info('New value for lol_string_parameter: %s' % parameter.value)
                result.successful = True

        return result

def main ():
    rclpy.init()
    simple_parameter = SimpleParameter()
    rclpy.spin(simple_parameter)
    simple_parameter.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()