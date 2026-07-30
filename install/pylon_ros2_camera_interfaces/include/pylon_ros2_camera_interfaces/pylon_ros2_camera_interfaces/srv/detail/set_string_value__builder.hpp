// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetStringValue.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_string_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStringValue_Request_value
{
public:
  Init_SetStringValue_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetStringValue_Request value(::pylon_ros2_camera_interfaces::srv::SetStringValue_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetStringValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetStringValue_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetStringValue_Request_value();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStringValue_Response_message
{
public:
  explicit Init_SetStringValue_Response_message(::pylon_ros2_camera_interfaces::srv::SetStringValue_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetStringValue_Response message(::pylon_ros2_camera_interfaces::srv::SetStringValue_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetStringValue_Response msg_;
};

class Init_SetStringValue_Response_success
{
public:
  Init_SetStringValue_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStringValue_Response_message success(::pylon_ros2_camera_interfaces::srv::SetStringValue_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetStringValue_Response_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetStringValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetStringValue_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetStringValue_Response_success();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_STRING_VALUE__BUILDER_HPP_
