// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetGain.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetGain in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetGain_Request
{
  float target_gain;
} pylon_ros2_camera_interfaces__srv__SetGain_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetGain_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetGain_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetGain in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetGain_Response
{
  float reached_gain;
  bool success;
} pylon_ros2_camera_interfaces__srv__SetGain_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetGain_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetGain_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_
