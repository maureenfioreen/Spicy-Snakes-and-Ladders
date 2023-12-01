cmake_minimum_required(VERSION 3.8)
project(game)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}:msg/GameStateMsg.msg" LIBRARY_NAME ${PROJECT_NAME})

add_executable(controller_publisher src/controller_publisher.cpp)
ament_target_dependencies(controller_publisher rclcpp)

ament_export_dependencies(rosidl_default_runtime)

install(TARGETS
  controller_publisher
  DESTINATION lib/${PROJECT_NAME})


rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

target_link_libraries(controller_publisher "${cpp_typesupport_target}")




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
