// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: reverse_x
  {
    out << "reverse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_x, out);
    out << ", ";
  }

  // member: reverse_y
  {
    out << "reverse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_y, out);
    out << ", ";
  }

  // member: black_level
  {
    out << "black_level: ";
    rosidl_generator_traits::value_to_yaml(msg.black_level, out);
    out << ", ";
  }

  // member: pgi_mode
  {
    out << "pgi_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pgi_mode, out);
    out << ", ";
  }

  // member: demosaicing_mode
  {
    out << "demosaicing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.demosaicing_mode, out);
    out << ", ";
  }

  // member: noise_reduction
  {
    out << "noise_reduction: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_reduction, out);
    out << ", ";
  }

  // member: sharpness_enhancement
  {
    out << "sharpness_enhancement: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness_enhancement, out);
    out << ", ";
  }

  // member: light_source_preset
  {
    out << "light_source_preset: ";
    rosidl_generator_traits::value_to_yaml(msg.light_source_preset, out);
    out << ", ";
  }

  // member: balance_white_auto
  {
    out << "balance_white_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_white_auto, out);
    out << ", ";
  }

  // member: sensor_readout_mode
  {
    out << "sensor_readout_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_readout_mode, out);
    out << ", ";
  }

  // member: acquisition_frame_count
  {
    out << "acquisition_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_frame_count, out);
    out << ", ";
  }

  // member: trigger_selector
  {
    out << "trigger_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_selector, out);
    out << ", ";
  }

  // member: trigger_mode
  {
    out << "trigger_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_mode, out);
    out << ", ";
  }

  // member: trigger_source
  {
    out << "trigger_source: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_source, out);
    out << ", ";
  }

  // member: trigger_activation
  {
    out << "trigger_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_activation, out);
    out << ", ";
  }

  // member: trigger_delay
  {
    out << "trigger_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_delay, out);
    out << ", ";
  }

  // member: user_set_selector
  {
    out << "user_set_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.user_set_selector, out);
    out << ", ";
  }

  // member: user_set_default_selector
  {
    out << "user_set_default_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.user_set_default_selector, out);
    out << ", ";
  }

  // member: is_sleeping
  {
    out << "is_sleeping: ";
    rosidl_generator_traits::value_to_yaml(msg.is_sleeping, out);
    out << ", ";
  }

  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: exposure
  {
    out << "exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: gamma
  {
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << ", ";
  }

  // member: binning_x
  {
    out << "binning_x: ";
    rosidl_generator_traits::value_to_yaml(msg.binning_x, out);
    out << ", ";
  }

  // member: binning_y
  {
    out << "binning_y: ";
    rosidl_generator_traits::value_to_yaml(msg.binning_y, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: max_num_buffer
  {
    out << "max_num_buffer: ";
    rosidl_generator_traits::value_to_yaml(msg.max_num_buffer, out);
    out << ", ";
  }

  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
    out << ", ";
  }

  // member: available_image_encoding
  {
    if (msg.available_image_encoding.size() == 0) {
      out << "available_image_encoding: []";
    } else {
      out << "available_image_encoding: [";
      size_t pending_items = msg.available_image_encoding.size();
      for (auto item : msg.available_image_encoding) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_image_encoding
  {
    out << "current_image_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image_encoding, out);
    out << ", ";
  }

  // member: current_image_ros_encoding
  {
    out << "current_image_ros_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image_ros_encoding, out);
    out << ", ";
  }

  // member: ptp_status
  {
    out << "ptp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_status, out);
    out << ", ";
  }

  // member: ptp_servo_status
  {
    out << "ptp_servo_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_servo_status, out);
    out << ", ";
  }

  // member: ptp_offset
  {
    out << "ptp_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_offset, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: reverse_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_x, out);
    out << "\n";
  }

  // member: reverse_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_y, out);
    out << "\n";
  }

  // member: black_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "black_level: ";
    rosidl_generator_traits::value_to_yaml(msg.black_level, out);
    out << "\n";
  }

  // member: pgi_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgi_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pgi_mode, out);
    out << "\n";
  }

  // member: demosaicing_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "demosaicing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.demosaicing_mode, out);
    out << "\n";
  }

  // member: noise_reduction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_reduction: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_reduction, out);
    out << "\n";
  }

  // member: sharpness_enhancement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sharpness_enhancement: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness_enhancement, out);
    out << "\n";
  }

  // member: light_source_preset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_source_preset: ";
    rosidl_generator_traits::value_to_yaml(msg.light_source_preset, out);
    out << "\n";
  }

  // member: balance_white_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_white_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_white_auto, out);
    out << "\n";
  }

  // member: sensor_readout_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_readout_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_readout_mode, out);
    out << "\n";
  }

  // member: acquisition_frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_frame_count, out);
    out << "\n";
  }

  // member: trigger_selector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_selector, out);
    out << "\n";
  }

  // member: trigger_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_mode, out);
    out << "\n";
  }

  // member: trigger_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_source: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_source, out);
    out << "\n";
  }

  // member: trigger_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_activation, out);
    out << "\n";
  }

  // member: trigger_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_delay, out);
    out << "\n";
  }

  // member: user_set_selector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_set_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.user_set_selector, out);
    out << "\n";
  }

  // member: user_set_default_selector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_set_default_selector: ";
    rosidl_generator_traits::value_to_yaml(msg.user_set_default_selector, out);
    out << "\n";
  }

  // member: is_sleeping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_sleeping: ";
    rosidl_generator_traits::value_to_yaml(msg.is_sleeping, out);
    out << "\n";
  }

  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << "\n";
  }

  // member: binning_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binning_x: ";
    rosidl_generator_traits::value_to_yaml(msg.binning_x, out);
    out << "\n";
  }

  // member: binning_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binning_y: ";
    rosidl_generator_traits::value_to_yaml(msg.binning_y, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: max_num_buffer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_num_buffer: ";
    rosidl_generator_traits::value_to_yaml(msg.max_num_buffer, out);
    out << "\n";
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }

  // member: available_image_encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_image_encoding.size() == 0) {
      out << "available_image_encoding: []\n";
    } else {
      out << "available_image_encoding:\n";
      for (auto item : msg.available_image_encoding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_image_encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_image_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image_encoding, out);
    out << "\n";
  }

  // member: current_image_ros_encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_image_ros_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image_ros_encoding, out);
    out << "\n";
  }

  // member: ptp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_status, out);
    out << "\n";
  }

  // member: ptp_servo_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptp_servo_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_servo_status, out);
    out << "\n";
  }

  // member: ptp_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptp_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.ptp_offset, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentParams & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::msg::CurrentParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
{
  return pylon_ros2_camera_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::msg::CurrentParams>()
{
  return "pylon_ros2_camera_interfaces::msg::CurrentParams";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::msg::CurrentParams>()
{
  return "pylon_ros2_camera_interfaces/msg/CurrentParams";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::msg::CurrentParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::msg::CurrentParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::msg::CurrentParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__TRAITS_HPP_
