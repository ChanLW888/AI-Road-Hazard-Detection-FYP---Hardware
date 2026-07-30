// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetROI.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/srv/detail/set_roi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetROI_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_roi
  {
    out << "target_roi: ";
    to_flow_style_yaml(msg.target_roi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetROI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_roi:\n";
    to_block_style_yaml(msg.target_roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetROI_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetROI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetROI_Request & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetROI_Request>()
{
  return "pylon_ros2_camera_interfaces::srv::SetROI_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetROI_Request>()
{
  return "pylon_ros2_camera_interfaces/srv/SetROI_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetROI_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetROI_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetROI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'reached_roi'
// already included above
// #include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetROI_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached_roi
  {
    out << "reached_roi: ";
    to_flow_style_yaml(msg.reached_roi, out);
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
  const SetROI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_roi:\n";
    to_block_style_yaml(msg.reached_roi, out, indentation + 2);
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

inline std::string to_yaml(const SetROI_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::srv::SetROI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::srv::SetROI_Response & msg)
{
  return pylon_ros2_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetROI_Response>()
{
  return "pylon_ros2_camera_interfaces::srv::SetROI_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetROI_Response>()
{
  return "pylon_ros2_camera_interfaces/srv/SetROI_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetROI_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetROI_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::srv::SetROI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::srv::SetROI>()
{
  return "pylon_ros2_camera_interfaces::srv::SetROI";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::srv::SetROI>()
{
  return "pylon_ros2_camera_interfaces/srv/SetROI";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::srv::SetROI>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetROI_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::srv::SetROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::srv::SetROI>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetROI_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::srv::SetROI_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::srv::SetROI>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::srv::SetROI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::srv::SetROI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__TRAITS_HPP_
