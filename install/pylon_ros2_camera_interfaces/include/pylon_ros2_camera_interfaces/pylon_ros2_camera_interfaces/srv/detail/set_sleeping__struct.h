// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetSleeping.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSleeping in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetSleeping_Request
{
  bool set_sleeping;
} pylon_ros2_camera_interfaces__srv__SetSleeping_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetSleeping_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetSleeping_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetSleeping in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetSleeping_Response
{
  bool success;
} pylon_ros2_camera_interfaces__srv__SetSleeping_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetSleeping_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetSleeping_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__STRUCT_H_
