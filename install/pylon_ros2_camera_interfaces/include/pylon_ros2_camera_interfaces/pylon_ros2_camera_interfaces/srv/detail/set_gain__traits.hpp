// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetGain.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/set_gain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGain_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_gain
  {
    out << "target_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.target_gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.target_gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGain_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetGain_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetGain_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::SetGain_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetGain_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/SetGain_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetGain_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGain_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached_gain
  {
    out << "reached_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_gain, out);
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
  const SetGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_gain, out);
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

inline std::string to_yaml(const SetGain_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetGain_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetGain_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::SetGain_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetGain_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/SetGain_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetGain_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetGain>()
{
  return "pylon_ros2_camera_interfaces::srv::SetGain";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetGain>()
{
  return "pylon_ros2_camera_interfaces/srv/SetGain";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetGain>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetGain_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetGain_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetGain>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetGain_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetGain_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::SetGain>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::SetGain_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::SetGain_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__TRAITS_HPP_
