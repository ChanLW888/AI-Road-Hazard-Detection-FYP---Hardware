// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetWhiteBalance.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/set_white_balance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWhiteBalance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: balance_ratio_red
  {
    out << "balance_ratio_red: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_red, out);
    out << ", ";
  }

  // member: balance_ratio_green
  {
    out << "balance_ratio_green: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_green, out);
    out << ", ";
  }

  // member: balance_ratio_blue
  {
    out << "balance_ratio_blue: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_blue, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetWhiteBalance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: balance_ratio_red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_ratio_red: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_red, out);
    out << "\n";
  }

  // member: balance_ratio_green
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_ratio_green: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_green, out);
    out << "\n";
  }

  // member: balance_ratio_blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_ratio_blue: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ratio_blue, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWhiteBalance_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/SetWhiteBalance_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWhiteBalance_Response & msg,
  std::ostream & out)
{
  out << "{";
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
  const SetWhiteBalance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const SetWhiteBalance_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/SetWhiteBalance_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetWhiteBalance>()
{
  return "pylon_ros2_camera_interfaces::srv::SetWhiteBalance";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetWhiteBalance>()
{
  return "pylon_ros2_camera_interfaces/srv/SetWhiteBalance";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::SetWhiteBalance>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__TRAITS_HPP_
