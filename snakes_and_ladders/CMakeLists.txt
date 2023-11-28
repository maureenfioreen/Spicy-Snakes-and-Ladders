cmake_minimum_required(VERSION 3.8)
project(snakes_and_ladders)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)

set(msg_files "msg/game_state_msg.msg")
rosidl_generate_interfaces(${snakes_and_ladders} ${msg_files})

add_executable(snakes_and_ladders_game C++/board_controller.cpp)

add_executable(player_node C++/player.cpp)


# uncomment the following section in order to fill in
# further dependencies manually.
ament_export_dependencies(rclcpp std_msgs)
ament_export_dependencies(rosidl_default_runtime)
# find_package(<dependency> REQUIRED)


ament_target_depedencies(snakes_and_ladders_game rclcpp)
ament_target_dependencies(player_node rclcpp)


install (TARGETS 
	snakes_and_ladders_game
	player_node
	DESTINATION ${snakes_and_ladders})

  rosidl_target_interfaces(snakes_and_ladders_game
	${snakes_and_ladders} "rosidl_typesupport_cpp")



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
