// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/IssueActionCommand.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/issue_action_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IssueActionCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_key
  {
    out << "device_key: ";
    rosidl_generator_traits::value_to_yaml(msg.device_key, out);
    out << ", ";
  }

  // member: group_key
  {
    out << "group_key: ";
    rosidl_generator_traits::value_to_yaml(msg.group_key, out);
    out << ", ";
  }

  // member: group_mask
  {
    out << "group_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.group_mask, out);
    out << ", ";
  }

  // member: broadcast_address
  {
    out << "broadcast_address: ";
    rosidl_generator_traits::value_to_yaml(msg.broadcast_address, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IssueActionCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_key: ";
    rosidl_generator_traits::value_to_yaml(msg.device_key, out);
    out << "\n";
  }

  // member: group_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_key: ";
    rosidl_generator_traits::value_to_yaml(msg.group_key, out);
    out << "\n";
  }

  // member: group_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.group_mask, out);
    out << "\n";
  }

  // member: broadcast_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "broadcast_address: ";
    rosidl_generator_traits::value_to_yaml(msg.broadcast_address, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IssueActionCommand_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/IssueActionCommand_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IssueActionCommand_Response & msg,
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
  const IssueActionCommand_Response & msg,
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

inline std::string to_yaml(const IssueActionCommand_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/IssueActionCommand_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::IssueActionCommand>()
{
  return "pylon_ros2_camera_interfaces::srv::IssueActionCommand";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::IssueActionCommand>()
{
  return "pylon_ros2_camera_interfaces/srv/IssueActionCommand";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::IssueActionCommand>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__TRAITS_HPP_
