// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INITIALIZED'.
/**
  * the official status id of the component
  * possible values are
 */
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__INITIALIZED = 0
};

/// Constant 'STOPPED'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__STOPPED = 1
};

/// Constant 'RUNNING'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__RUNNING = 2
};

/// Constant 'CONFIG_NEEDED'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__CONFIG_NEEDED = 3
};

/// Constant 'ERROR'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__ERROR = 4
};

/// Constant 'INTERACTION_REQUEST'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__INTERACTION_REQUEST = 5
};

/// Constant 'DEACTIVATED'.
enum
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__DEACTIVATED = 6
};

// Include directives for member types
// Member 'status_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ComponentStatus in the package pylon_ros2_camera_interfaces.
/**
  *  component id; it must be unique among all registered components
  *  @TODO: use on one topic and identify by id
  * string component_id
 */
typedef struct pylon_ros2_camera_interfaces__msg__ComponentStatus
{
  int8_t status_id;
  /// an individual message for config or error cases
  /// it should describe the type of needed config or occurred error briefly
  /// it should be possible to extract automaticly subsequent actions/instructions from the message if this is needed
  rosidl_runtime_c__String status_msg;
} pylon_ros2_camera_interfaces__msg__ComponentStatus;

// Struct for a sequence of pylon_ros2_camera_interfaces__msg__ComponentStatus.
typedef struct pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_H_
