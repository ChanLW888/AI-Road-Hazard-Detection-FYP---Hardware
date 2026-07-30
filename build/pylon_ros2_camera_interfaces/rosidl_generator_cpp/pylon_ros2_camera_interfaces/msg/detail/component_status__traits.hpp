// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/msg/detail/component_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComponentStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status_id
  {
    out << "status_id: ";
    rosidl_generator_traits::value_to_yaml(msg.status_id, out);
    out << ", ";
  }

  // member: status_msg
  {
    out << "status_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.status_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComponentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_id: ";
    rosidl_generator_traits::value_to_yaml(msg.status_id, out);
    out << "\n";
  }

  // member: status_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.status_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComponentStatus & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::msg::ComponentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::msg::ComponentStatus & msg)
{
  return pylon_ros2_camera_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::msg::ComponentStatus>()
{
  return "pylon_ros2_camera_interfaces::msg::ComponentStatus";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::msg::ComponentStatus>()
{
  return "pylon_ros2_camera_interfaces/msg/ComponentStatus";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::msg::ComponentStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::msg::ComponentStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::msg::ComponentStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__TRAITS_HPP_
