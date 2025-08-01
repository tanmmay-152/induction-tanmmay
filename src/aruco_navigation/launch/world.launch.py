from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    world_path = os.path.join(
        get_package_share_directory('aruco_navigation'),
        'worlds',
        'aruco_world.world'
    )

    return LaunchDescription([
        # Launch Gazebo with your world
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')
            ),
            launch_arguments={'world': world_path}.items(),
        ),

        # Spawn TurtleBot3 into Gazebo
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'turtlebot3',
                '-topic', 'robot_description',
            ],
            output='screen'
        )
    ])
