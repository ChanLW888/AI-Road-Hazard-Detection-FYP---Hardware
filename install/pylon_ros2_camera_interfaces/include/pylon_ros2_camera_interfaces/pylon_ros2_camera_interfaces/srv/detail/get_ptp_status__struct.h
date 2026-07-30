// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/GetPtpStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPtpStatus in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request.
typedef struct pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ptp_status'
// Member 'ptp_servo_status'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPtpStatus in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response
{
  /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
  rosidl_runtime_c__String ptp_status;
  /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
  rosidl_runtime_c__String ptp_servo_status;
  /// ptp offset from master in ticks
  int64_t offset_from_master;
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g., for error messages
  rosidl_runtime_c__String message;
} pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response.
typedef struct pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_H_
