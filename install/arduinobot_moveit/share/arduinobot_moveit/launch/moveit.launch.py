import os
from launch import LaunchDescription
from moveit_configs_utils import MoveItConfigsBuilder
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    is_sim = LaunchConfiguration('is_sim')

    is_sim_arg = DeclareLaunchArgument(
        'is_sim',
        default_value='True'
    )

    # Build MoveIt configuration
    moveit_config = (
        MoveItConfigsBuilder("arduinobot", package_name="arduinobot_moveit")
        .robot_description(file_path=os.path.join(
            get_package_share_directory("arduinobot_description"),
            "urdf",
            "arduinobot.urdf.xacro"
        ))
        .robot_description_semantic(file_path=os.path.join(
            get_package_share_directory("arduinobot_moveit"),
            "config",
            "arduinobot.srdf"
        ))
        .trajectory_execution(file_path=os.path.join(
            get_package_share_directory("arduinobot_moveit"),
            "config",
            "moveit_controllers.yaml"
        ))
        .to_moveit_configs()
    )

    # Debugging prints
    print("Robot Description:", moveit_config.robot_description)
    print("Semantic Description:", moveit_config.robot_description_semantic)
    print("Trajectory Execution:", moveit_config.trajectory_execution)

    if moveit_config.robot_description is None:
        raise ValueError("robot_description is None")
    if moveit_config.robot_description_semantic is None:
        raise ValueError("robot_description_semantic is None")

    # Node definition for Move Group
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config.to_dict(), 
                    {'use_sim_time': is_sim},
                    {'publish_robot_description_semantic': True}],
        arguments=["--ros-args", "--log-level", "info"],
    )

    # RViz node setup
    rviz_config = os.path.join(
        get_package_share_directory("arduinobot_moveit"),
        "config",
        "moveit.rviz",
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config],
        parameters=[
            moveit_config.to_dict(),  # Pass the entire config as a dict
            {'use_sim_time': is_sim},
            {'publish_robot_description_semantic': True},
        ],
    )

    return LaunchDescription(
        [
            is_sim_arg,
            move_group_node, 
            rviz_node
        ]
    )
