// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetWhiteBalance.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_white_balance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWhiteBalance_Request_balance_ratio_blue
{
public:
  explicit Init_SetWhiteBalance_Request_balance_ratio_blue(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request balance_ratio_blue(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request::_balance_ratio_blue_type arg)
  {
    msg_.balance_ratio_blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request msg_;
};

class Init_SetWhiteBalance_Request_balance_ratio_green
{
public:
  explicit Init_SetWhiteBalance_Request_balance_ratio_green(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request & msg)
  : msg_(msg)
  {}
  Init_SetWhiteBalance_Request_balance_ratio_blue balance_ratio_green(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request::_balance_ratio_green_type arg)
  {
    msg_.balance_ratio_green = std::move(arg);
    return Init_SetWhiteBalance_Request_balance_ratio_blue(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request msg_;
};

class Init_SetWhiteBalance_Request_balance_ratio_red
{
public:
  Init_SetWhiteBalance_Request_balance_ratio_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWhiteBalance_Request_balance_ratio_green balance_ratio_red(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request::_balance_ratio_red_type arg)
  {
    msg_.balance_ratio_red = std::move(arg);
    return Init_SetWhiteBalance_Request_balance_ratio_green(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetWhiteBalance_Request_balance_ratio_red();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWhiteBalance_Response_message
{
public:
  explicit Init_SetWhiteBalance_Response_message(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response message(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response msg_;
};

class Init_SetWhiteBalance_Response_success
{
public:
  Init_SetWhiteBalance_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWhiteBalance_Response_message success(::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetWhiteBalance_Response_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetWhiteBalance_Response_success();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__BUILDER_HPP_
