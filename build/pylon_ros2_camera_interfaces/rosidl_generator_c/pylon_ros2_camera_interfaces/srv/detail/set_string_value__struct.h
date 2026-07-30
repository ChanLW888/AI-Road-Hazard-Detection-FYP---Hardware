// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetStringValue.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringValue in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetStringValue_Request
{
  /// value to be setted
  rosidl_runtime_c__String value;
} pylon_ros2_camera_interfaces__srv__SetStringValue_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetStringValue_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetStringValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringValue in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetStringValue_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g., for error messages
  rosidl_runtime_c__String message;
} pylon_ros2_camera_interfaces__srv__SetStringValue_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetStringValue_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetStringValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__STRUCT_H_
