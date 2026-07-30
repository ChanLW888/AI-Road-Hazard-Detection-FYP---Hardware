// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/IssueActionCommand.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'broadcast_address'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IssueActionCommand in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request
{
  int32_t device_key;
  int32_t group_key;
  uint32_t group_mask;
  rosidl_runtime_c__String broadcast_address;
} pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request.
typedef struct pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IssueActionCommand in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response
{
  /// success or not
  bool success;
  /// status message
  rosidl_runtime_c__String message;
} pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response.
typedef struct pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_H_
