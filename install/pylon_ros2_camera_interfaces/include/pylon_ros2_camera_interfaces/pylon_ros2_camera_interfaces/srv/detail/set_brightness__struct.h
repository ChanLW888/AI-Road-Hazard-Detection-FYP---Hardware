// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetBrightness in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetBrightness_Request
{
  int32_t target_brightness;
  /// The brightness_continuous flag controls the auto brightness function.
  /// If it is set to false, the given brightness will only be reached once.
  /// Hence changing light conditions lead to changing brightness values.
  /// If it is set to true, the given brightness will be reached continuously,
  /// trying to adapt to changing light conditions. The 'brightness_contunuous'
  /// mode is is only possible for values in the possible auto range of the pylon
  /// API which is e.g., for acA2500-14um and acA1920-40gm
  bool brightness_continuous;
  /// If the camera should try reach or keep the desired brightness, hence adapting
  /// to changing light conditions, at least one of the following flags MUST be set.
  /// If both are set, the interface will use the profile that tries to keep the
  /// gain at minimum to reduce white noise.
  /// 'exposure_auto' will adapt the exposure time to reach the brightness, wheras
  /// 'gain_auto' does so by adapting the gain.
  bool exposure_auto;
  bool gain_auto;
} pylon_ros2_camera_interfaces__srv__SetBrightness_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetBrightness_Request.
typedef struct pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetBrightness in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__srv__SetBrightness_Response
{
  /// Exact match can not always be reached
  int32_t reached_brightness;
  float reached_exposure_time;
  float reached_gain_value;
  bool success;
} pylon_ros2_camera_interfaces__srv__SetBrightness_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__srv__SetBrightness_Response.
typedef struct pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence
{
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_H_
