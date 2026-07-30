# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target pylon_ros2_camera_interfaces::pylon_ros2_camera_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${pylon_ros2_camera_interfaces_TARGETS}.
if(pylon_ros2_camera_interfaces_TARGETS AND NOT TARGET pylon_ros2_camera_interfaces::pylon_ros2_camera_interfaces)
  add_library(pylon_ros2_camera_interfaces::pylon_ros2_camera_interfaces INTERFACE IMPORTED)
  set_target_properties(pylon_ros2_camera_interfaces::pylon_ros2_camera_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${pylon_ros2_camera_interfaces_TARGETS}")
endif()
