clear 

colcon build

echo "Build done"

source /opt/ros/humble/setup.bash
source install/setup.bash

ros2 run game controller_publisher
