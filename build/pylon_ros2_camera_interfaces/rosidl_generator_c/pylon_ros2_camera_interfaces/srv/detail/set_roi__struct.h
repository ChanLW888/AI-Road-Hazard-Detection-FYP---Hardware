// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetROI.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in srv/SetROI in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetROI_Request
{
  sensor_msgs__msg__RegionOfInterest target_roi;
} pylon_ros2_camera_interfaces__srv__SetROI_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetROI_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetROI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reached_roi'
// already included above
// #include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in srv/SetROI in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetROI_Response
{
  sensor_msgs__msg__RegionOfInterest reached_roi;
  bool success;
} pylon_ros2_camera_interfaces__srv__SetROI_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetROI_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetROI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__STRUCT_H_
