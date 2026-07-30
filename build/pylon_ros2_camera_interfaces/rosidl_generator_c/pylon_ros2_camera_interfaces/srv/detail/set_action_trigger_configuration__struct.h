// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetActionTriggerConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetActionTriggerConfiguration in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request
{
  int32_t action_device_key;
  int32_t action_group_key;
  uint32_t action_group_mask;
  /// ERegistrationMode: 1 -> RegistrationMode_Append, 2 -> RegistrationMode_ReplaceAll
  int32_t registration_mode;
  /// ECleanup: 1 -> Cleanup_None, 2 -> Cleanup_Delete
  int32_t cleanup;
} pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetActionTriggerConfiguration in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response
{
  /// success or not
  bool success;
  /// status message
  rosidl_runtime_c__String message;
} pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_H_
