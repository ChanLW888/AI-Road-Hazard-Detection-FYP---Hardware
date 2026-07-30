// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::RegionOfInterest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::RegionOfInterest &);
size_t get_serialized_size(
  const sensor_msgs::msg::RegionOfInterest &,
  size_t current_alignment);
size_t
max_serialized_size_RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace pylon_ros2_camera_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_serialize(
  const pylon_ros2_camera_interfaces::msg::CurrentParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: offset_x
  cdr << ros_message.offset_x;
  // Member: offset_y
  cdr << ros_message.offset_y;
  // Member: reverse_x
  cdr << (ros_message.reverse_x ? true : false);
  // Member: reverse_y
  cdr << (ros_message.reverse_y ? true : false);
  // Member: black_level
  cdr << ros_message.black_level;
  // Member: pgi_mode
  cdr << ros_message.pgi_mode;
  // Member: demosaicing_mode
  cdr << ros_message.demosaicing_mode;
  // Member: noise_reduction
  cdr << ros_message.noise_reduction;
  // Member: sharpness_enhancement
  cdr << ros_message.sharpness_enhancement;
  // Member: light_source_preset
  cdr << ros_message.light_source_preset;
  // Member: balance_white_auto
  cdr << ros_message.balance_white_auto;
  // Member: sensor_readout_mode
  cdr << ros_message.sensor_readout_mode;
  // Member: acquisition_frame_count
  cdr << ros_message.acquisition_frame_count;
  // Member: trigger_selector
  cdr << ros_message.trigger_selector;
  // Member: trigger_mode
  cdr << ros_message.trigger_mode;
  // Member: trigger_source
  cdr << ros_message.trigger_source;
  // Member: trigger_activation
  cdr << ros_message.trigger_activation;
  // Member: trigger_delay
  cdr << ros_message.trigger_delay;
  // Member: user_set_selector
  cdr << ros_message.user_set_selector;
  // Member: user_set_default_selector
  cdr << ros_message.user_set_default_selector;
  // Member: is_sleeping
  cdr << (ros_message.is_sleeping ? true : false);
  // Member: brightness
  cdr << ros_message.brightness;
  // Member: exposure
  cdr << ros_message.exposure;
  // Member: gain
  cdr << ros_message.gain;
  // Member: gamma
  cdr << ros_message.gamma;
  // Member: binning_x
  cdr << ros_message.binning_x;
  // Member: binning_y
  cdr << ros_message.binning_y;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: max_num_buffer
  cdr << ros_message.max_num_buffer;
  // Member: roi
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.roi,
    cdr);
  // Member: available_image_encoding
  {
    cdr << ros_message.available_image_encoding;
  }
  // Member: current_image_encoding
  cdr << ros_message.current_image_encoding;
  // Member: current_image_ros_encoding
  cdr << ros_message.current_image_ros_encoding;
  // Member: ptp_status
  cdr << ros_message.ptp_status;
  // Member: ptp_servo_status
  cdr << ros_message.ptp_servo_status;
  // Member: ptp_offset
  cdr << ros_message.ptp_offset;
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pylon_ros2_camera_interfaces::msg::CurrentParams & ros_message)
{
  // Member: offset_x
  cdr >> ros_message.offset_x;

  // Member: offset_y
  cdr >> ros_message.offset_y;

  // Member: reverse_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse_x = tmp ? true : false;
  }

  // Member: reverse_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse_y = tmp ? true : false;
  }

  // Member: black_level
  cdr >> ros_message.black_level;

  // Member: pgi_mode
  cdr >> ros_message.pgi_mode;

  // Member: demosaicing_mode
  cdr >> ros_message.demosaicing_mode;

  // Member: noise_reduction
  cdr >> ros_message.noise_reduction;

  // Member: sharpness_enhancement
  cdr >> ros_message.sharpness_enhancement;

  // Member: light_source_preset
  cdr >> ros_message.light_source_preset;

  // Member: balance_white_auto
  cdr >> ros_message.balance_white_auto;

  // Member: sensor_readout_mode
  cdr >> ros_message.sensor_readout_mode;

  // Member: acquisition_frame_count
  cdr >> ros_message.acquisition_frame_count;

  // Member: trigger_selector
  cdr >> ros_message.trigger_selector;

  // Member: trigger_mode
  cdr >> ros_message.trigger_mode;

  // Member: trigger_source
  cdr >> ros_message.trigger_source;

  // Member: trigger_activation
  cdr >> ros_message.trigger_activation;

  // Member: trigger_delay
  cdr >> ros_message.trigger_delay;

  // Member: user_set_selector
  cdr >> ros_message.user_set_selector;

  // Member: user_set_default_selector
  cdr >> ros_message.user_set_default_selector;

  // Member: is_sleeping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_sleeping = tmp ? true : false;
  }

  // Member: brightness
  cdr >> ros_message.brightness;

  // Member: exposure
  cdr >> ros_message.exposure;

  // Member: gain
  cdr >> ros_message.gain;

  // Member: gamma
  cdr >> ros_message.gamma;

  // Member: binning_x
  cdr >> ros_message.binning_x;

  // Member: binning_y
  cdr >> ros_message.binning_y;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: max_num_buffer
  cdr >> ros_message.max_num_buffer;

  // Member: roi
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.roi);

  // Member: available_image_encoding
  {
    cdr >> ros_message.available_image_encoding;
  }

  // Member: current_image_encoding
  cdr >> ros_message.current_image_encoding;

  // Member: current_image_ros_encoding
  cdr >> ros_message.current_image_ros_encoding;

  // Member: ptp_status
  cdr >> ros_message.ptp_status;

  // Member: ptp_servo_status
  cdr >> ros_message.ptp_servo_status;

  // Member: ptp_offset
  cdr >> ros_message.ptp_offset;

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
get_serialized_size(
  const pylon_ros2_camera_interfaces::msg::CurrentParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: offset_x
  {
    size_t item_size = sizeof(ros_message.offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset_y
  {
    size_t item_size = sizeof(ros_message.offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reverse_x
  {
    size_t item_size = sizeof(ros_message.reverse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reverse_y
  {
    size_t item_size = sizeof(ros_message.reverse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: black_level
  {
    size_t item_size = sizeof(ros_message.black_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pgi_mode
  {
    size_t item_size = sizeof(ros_message.pgi_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: demosaicing_mode
  {
    size_t item_size = sizeof(ros_message.demosaicing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: noise_reduction
  {
    size_t item_size = sizeof(ros_message.noise_reduction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sharpness_enhancement
  {
    size_t item_size = sizeof(ros_message.sharpness_enhancement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_source_preset
  {
    size_t item_size = sizeof(ros_message.light_source_preset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_white_auto
  {
    size_t item_size = sizeof(ros_message.balance_white_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_readout_mode
  {
    size_t item_size = sizeof(ros_message.sensor_readout_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acquisition_frame_count
  {
    size_t item_size = sizeof(ros_message.acquisition_frame_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trigger_selector
  {
    size_t item_size = sizeof(ros_message.trigger_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trigger_mode
  {
    size_t item_size = sizeof(ros_message.trigger_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trigger_source
  {
    size_t item_size = sizeof(ros_message.trigger_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trigger_activation
  {
    size_t item_size = sizeof(ros_message.trigger_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trigger_delay
  {
    size_t item_size = sizeof(ros_message.trigger_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_set_selector
  {
    size_t item_size = sizeof(ros_message.user_set_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_set_default_selector
  {
    size_t item_size = sizeof(ros_message.user_set_default_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_sleeping
  {
    size_t item_size = sizeof(ros_message.is_sleeping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brightness
  {
    size_t item_size = sizeof(ros_message.brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exposure
  {
    size_t item_size = sizeof(ros_message.exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain
  {
    size_t item_size = sizeof(ros_message.gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gamma
  {
    size_t item_size = sizeof(ros_message.gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: binning_x
  {
    size_t item_size = sizeof(ros_message.binning_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: binning_y
  {
    size_t item_size = sizeof(ros_message.binning_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_num_buffer
  {
    size_t item_size = sizeof(ros_message.max_num_buffer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roi

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.roi, current_alignment);
  // Member: available_image_encoding
  {
    size_t array_size = ros_message.available_image_encoding.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.available_image_encoding[index].size() + 1);
    }
  }
  // Member: current_image_encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_image_encoding.size() + 1);
  // Member: current_image_ros_encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_image_ros_encoding.size() + 1);
  // Member: ptp_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ptp_status.size() + 1);
  // Member: ptp_servo_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ptp_servo_status.size() + 1);
  // Member: ptp_offset
  {
    size_t item_size = sizeof(ros_message.ptp_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
max_serialized_size_CurrentParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reverse_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reverse_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: black_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pgi_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: demosaicing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: noise_reduction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sharpness_enhancement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: light_source_preset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: balance_white_auto
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sensor_readout_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acquisition_frame_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trigger_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trigger_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trigger_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trigger_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trigger_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: user_set_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: user_set_default_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_sleeping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gamma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: binning_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: binning_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_num_buffer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roi
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: available_image_encoding
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: current_image_encoding
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: current_image_ros_encoding
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: ptp_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: ptp_servo_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: ptp_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pylon_ros2_camera_interfaces::msg::CurrentParams;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CurrentParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::msg::CurrentParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CurrentParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pylon_ros2_camera_interfaces::msg::CurrentParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CurrentParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::msg::CurrentParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CurrentParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CurrentParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CurrentParams__callbacks = {
  "pylon_ros2_camera_interfaces::msg",
  "CurrentParams",
  _CurrentParams__cdr_serialize,
  _CurrentParams__cdr_deserialize,
  _CurrentParams__get_serialized_size,
  _CurrentParams__max_serialized_size
};

static rosidl_message_type_support_t _CurrentParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CurrentParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::msg::CurrentParams>()
{
  return &pylon_ros2_camera_interfaces::msg::typesupport_fastrtps_cpp::_CurrentParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, msg, CurrentParams)() {
  return &pylon_ros2_camera_interfaces::msg::typesupport_fastrtps_cpp::_CurrentParams__handle;
}

#ifdef __cplusplus
}
#endif
