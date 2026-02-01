cmake_minimum_required(VERSION 3.8)
project(ros2_subscriber)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

<<<<<<< HEAD
=======
# find dependencies
>>>>>>> 0af5982ac57a4d0c3036fcbcafe23c806a58e3fd
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

<<<<<<< HEAD
add_executable(subscriber_node src/subscriber_node.cpp)

ament_target_dependencies(
  subscriber_node
  rclcpp
  std_msgs
)

install(
  TARGETS subscriber_node
  DESTINATION lib/${PROJECT_NAME}
)
=======
# TODO: Add the executable target named 'subscriber_node'
# 1. Add executable using src/subscriber_node.cpp
# 2. Add dependencies (ament_target_dependencies) for rclcpp and std_msgs
# 3. Install the target to the DESTINATION lib/${PROJECT_NAME}

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()
>>>>>>> 0af5982ac57a4d0c3036fcbcafe23c806a58e3fd

ament_package()
