// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/IssueScheduledActionCommand.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_SCHEDULED_ACTION_COMMAND__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_SCHEDULED_ACTION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/issue_scheduled_action_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_IssueScheduledActionCommand_Request_broadcast_address
{
public:
  explicit Init_IssueScheduledActionCommand_Request_broadcast_address(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request broadcast_address(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request::_broadcast_address_type arg)
  {
    msg_.broadcast_address = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request msg_;
};

class Init_IssueScheduledActionCommand_Request_action_time_ns_from_current_timestamp
{
public:
  explicit Init_IssueScheduledActionCommand_Request_action_time_ns_from_current_timestamp(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request & msg)
  : msg_(msg)
  {}
  Init_IssueScheduledActionCommand_Request_broadcast_address action_time_ns_from_current_timestamp(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request::_action_time_ns_from_current_timestamp_type arg)
  {
    msg_.action_time_ns_from_current_timestamp = std::move(arg);
    return Init_IssueScheduledActionCommand_Request_broadcast_address(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request msg_;
};

class Init_IssueScheduledActionCommand_Request_group_mask
{
public:
  explicit Init_IssueScheduledActionCommand_Request_group_mask(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request & msg)
  : msg_(msg)
  {}
  Init_IssueScheduledActionCommand_Request_action_time_ns_from_current_timestamp group_mask(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request::_group_mask_type arg)
  {
    msg_.group_mask = std::move(arg);
    return Init_IssueScheduledActionCommand_Request_action_time_ns_from_current_timestamp(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request msg_;
};

class Init_IssueScheduledActionCommand_Request_group_key
{
public:
  explicit Init_IssueScheduledActionCommand_Request_group_key(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request & msg)
  : msg_(msg)
  {}
  Init_IssueScheduledActionCommand_Request_group_mask group_key(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request::_group_key_type arg)
  {
    msg_.group_key = std::move(arg);
    return Init_IssueScheduledActionCommand_Request_group_mask(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request msg_;
};

class Init_IssueScheduledActionCommand_Request_device_key
{
public:
  Init_IssueScheduledActionCommand_Request_device_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IssueScheduledActionCommand_Request_group_key device_key(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request::_device_key_type arg)
  {
    msg_.device_key = std::move(arg);
    return Init_IssueScheduledActionCommand_Request_group_key(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_IssueScheduledActionCommand_Request_device_key();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_IssueScheduledActionCommand_Response_message
{
public:
  explicit Init_IssueScheduledActionCommand_Response_message(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response message(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response msg_;
};

class Init_IssueScheduledActionCommand_Response_success
{
public:
  Init_IssueScheduledActionCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IssueScheduledActionCommand_Response_message success(::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IssueScheduledActionCommand_Response_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::IssueScheduledActionCommand_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_IssueScheduledActionCommand_Response_success();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_SCHEDULED_ACTION_COMMAND__BUILDER_HPP_
