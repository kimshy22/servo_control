cmake_minimum_required(VERSION 3.8)
project(servo_control)

# Default C++ standard
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(serial REQUIRED)
# Generate the custom service
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/SetServoAngle.srv"
)

# Build the C++ node
add_executable(servo_service_node src/servo_service_node.cpp)
ament_target_dependencies(servo_service_node rclcpp serial)

# Get type support target for linking
rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(servo_service_node "${cpp_typesupport_target}")

# Install the executable
install(TARGETS
  servo_service_node
  DESTINATION lib/${PROJECT_NAME}
)
# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()

