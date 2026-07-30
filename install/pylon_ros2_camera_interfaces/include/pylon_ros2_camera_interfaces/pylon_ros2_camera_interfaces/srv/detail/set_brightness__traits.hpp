// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBrightness_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_brightness
  {
    out << "target_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.target_brightness, out);
    out << ", ";
  }

  // member: brightness_continuous
  {
    out << "brightness_continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_continuous, out);
    out << ", ";
  }

  // member: exposure_auto
  {
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << ", ";
  }

  // member: gain_auto
  {
    out << "gain_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_auto, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBrightness_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.target_brightness, out);
    out << "\n";
  }

  // member: brightness_continuous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_continuous, out);
    out << "\n";
  }

  // member: exposure_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << "\n";
  }

  // member: gain_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_auto, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBrightness_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::srv::SetBrightness_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetBrightness_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::SetBrightness_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/SetBrightness_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBrightness_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached_brightness
  {
    out << "reached_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_brightness, out);
    out << ", ";
  }

  // member: reached_exposure_time
  {
    out << "reached_exposure_time: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_exposure_time, out);
    out << ", ";
  }

  // member: reached_gain_value
  {
    out << "reached_gain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_gain_value, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBrightness_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached_brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_brightness, out);
    out << "\n";
  }

  // member: reached_exposure_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_exposure_time: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_exposure_time, out);
    out << "\n";
  }

  // member: reached_gain_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_gain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_gain_value, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBrightness_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::srv::SetBrightness_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetBrightness_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::SetBrightness_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/SetBrightness_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetBrightness>()
{
  return "pylon_ros2_camera_interfaces::srv::SetBrightness";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetBrightness>()
{
  return "pylon_ros2_camera_interfaces/srv/SetBrightness";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetBrightness>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetBrightness>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::SetBrightness>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::SetBrightness_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::SetBrightness_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__TRAITS_HPP_
