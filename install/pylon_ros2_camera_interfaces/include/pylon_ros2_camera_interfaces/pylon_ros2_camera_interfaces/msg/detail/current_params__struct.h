// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'available_image_encoding'
// Member 'current_image_encoding'
// Member 'current_image_ros_encoding'
// Member 'ptp_status'
// Member 'ptp_servo_status'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CurrentParams in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__msg__CurrentParams
{
  /// -20000 = Error
  uint32_t offset_x;
  /// -20000 = Error
  uint32_t offset_y;
  bool reverse_x;
  bool reverse_y;
  /// -10000 = error/not available
  int32_t black_level;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = On
  int32_t pgi_mode;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Simple, 1 = BaslerPGI
  int32_t demosaicing_mode;
  /// -20000.0 = Error, -10000.0 = Not available
  float noise_reduction;
  /// -20000.0 = Error, -10000.0 = Not available
  float sharpness_enhancement;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = Daylight5000K, 2 = Daylight6500K, 3 = Tungsten2800K
  int32_t light_source_preset;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = Once, 2 = Continuous
  int32_t balance_white_auto;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Normal, 1 = Fast
  int32_t sensor_readout_mode;
  /// -20000 = Error, -10000 = Not available
  int32_t acquisition_frame_count;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = FrameStart, 1 = FrameBurstStart(USB)/AcquisitionStart(GigE)
  int32_t trigger_selector;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = On
  int32_t trigger_mode;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Software, 1 = Line1, 2 = Line3, 3 = Line4, 4 = Action1(Selected Gige)
  int32_t trigger_source;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = RisingEdge, 1 = FallingEdge
  int32_t trigger_activation;
  /// -20000.0 = Error, -10000.0 = Not available
  float trigger_delay;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Default, 1 = UserSet1, 2 = UserSet2, 3 = UserSet3, 4 = HighGain, 5 = AutoFunctions, 6 = ColorRaw
  int32_t user_set_selector;
  /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Default, 1 = UserSet1, 2 = UserSet2, 3 = UserSet3, 4 = HighGain, 5 = AutoFunctions, 6 = ColorRaw
  int32_t user_set_default_selector;
  bool is_sleeping;
  float brightness;
  float exposure;
  float gain;
  float gamma;
  uint32_t binning_x;
  uint32_t binning_y;
  /// Shows the camera temperature. If not available, then 0.0. USB uses DeviceTemperature and GigE TemperatureAbs parameters.
  float temperature;
  /// -2 = Error, -1 = Not available
  int32_t max_num_buffer;
  sensor_msgs__msg__RegionOfInterest roi;
  rosidl_runtime_c__String__Sequence available_image_encoding;
  rosidl_runtime_c__String current_image_encoding;
  rosidl_runtime_c__String current_image_ros_encoding;
  /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
  rosidl_runtime_c__String ptp_status;
  /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
  rosidl_runtime_c__String ptp_servo_status;
  /// ptp offset from master in ticks
  int64_t ptp_offset;
  bool success;
  rosidl_runtime_c__String message;
} pylon_ros2_camera_interfaces__msg__CurrentParams;

// Struct for a sequence of pylon_ros2_camera_interfaces__msg__CurrentParams.
typedef struct pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence
{
  pylon_ros2_camera_interfaces__msg__CurrentParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_H_
