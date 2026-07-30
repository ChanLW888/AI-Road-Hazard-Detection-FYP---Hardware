// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetSleeping.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/set_sleeping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSleeping_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_sleeping
  {
    out << "set_sleeping: ";
    rosidl_generator_traits::value_to_yaml(msg.set_sleeping, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSleeping_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_sleeping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_sleeping: ";
    rosidl_generator_traits::value_to_yaml(msg.set_sleeping, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSleeping_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetSleeping_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetSleeping_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::SetSleeping_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/SetSleeping_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSleeping_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSleeping_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSleeping_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetSleeping_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetSleeping_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::SetSleeping_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/SetSleeping_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetSleeping>()
{
  return "pylon_ros2_camera_interfaces::srv::SetSleeping";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetSleeping>()
{
  return "pylon_ros2_camera_interfaces/srv/SetSleeping";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetSleeping>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetSleeping>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::SetSleeping>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::SetSleeping_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::SetSleeping_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_SLEEPING__TRAITS_HPP_
