// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetActionTriggerConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_action_trigger_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetActionTriggerConfiguration_Request_cleanup
{
public:
  explicit Init_SetActionTriggerConfiguration_Request_cleanup(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request cleanup(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request::_cleanup_type arg)
  {
    msg_.cleanup = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request msg_;
};

class Init_SetActionTriggerConfiguration_Request_registration_mode
{
public:
  explicit Init_SetActionTriggerConfiguration_Request_registration_mode(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request & msg)
  : msg_(msg)
  {}
  Init_SetActionTriggerConfiguration_Request_cleanup registration_mode(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request::_registration_mode_type arg)
  {
    msg_.registration_mode = std::move(arg);
    return Init_SetActionTriggerConfiguration_Request_cleanup(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request msg_;
};

class Init_SetActionTriggerConfiguration_Request_action_group_mask
{
public:
  explicit Init_SetActionTriggerConfiguration_Request_action_group_mask(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request & msg)
  : msg_(msg)
  {}
  Init_SetActionTriggerConfiguration_Request_registration_mode action_group_mask(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request::_action_group_mask_type arg)
  {
    msg_.action_group_mask = std::move(arg);
    return Init_SetActionTriggerConfiguration_Request_registration_mode(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request msg_;
};

class Init_SetActionTriggerConfiguration_Request_action_group_key
{
public:
  explicit Init_SetActionTriggerConfiguration_Request_action_group_key(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request & msg)
  : msg_(msg)
  {}
  Init_SetActionTriggerConfiguration_Request_action_group_mask action_group_key(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request::_action_group_key_type arg)
  {
    msg_.action_group_key = std::move(arg);
    return Init_SetActionTriggerConfiguration_Request_action_group_mask(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request msg_;
};

class Init_SetActionTriggerConfiguration_Request_action_device_key
{
public:
  Init_SetActionTriggerConfiguration_Request_action_device_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetActionTriggerConfiguration_Request_action_group_key action_device_key(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request::_action_device_key_type arg)
  {
    msg_.action_device_key = std::move(arg);
    return Init_SetActionTriggerConfiguration_Request_action_group_key(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetActionTriggerConfiguration_Request_action_device_key();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetActionTriggerConfiguration_Response_message
{
public:
  explicit Init_SetActionTriggerConfiguration_Response_message(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response message(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response msg_;
};

class Init_SetActionTriggerConfiguration_Response_success
{
public:
  Init_SetActionTriggerConfiguration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetActionTriggerConfiguration_Response_message success(::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetActionTriggerConfiguration_Response_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetActionTriggerConfiguration_Response_success();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__BUILDER_HPP_
