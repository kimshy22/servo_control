from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='servo_control',
            executable='servo_service_node',
            name='servo_service_node',
            parameters=[{'serial_port': '/dev/ttyACM0', 'baud_rate': 9600}]
        )
    ])
