// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/msg/detail/component_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace msg
{

namespace builder
{

class Init_ComponentStatus_status_msg
{
public:
  explicit Init_ComponentStatus_status_msg(::pylon_ros2_camera_interfaces::msg::ComponentStatus & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::msg::ComponentStatus status_msg(::pylon_ros2_camera_interfaces::msg::ComponentStatus::_status_msg_type arg)
  {
    msg_.status_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::ComponentStatus msg_;
};

class Init_ComponentStatus_status_id
{
public:
  Init_ComponentStatus_status_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComponentStatus_status_msg status_id(::pylon_ros2_camera_interfaces::msg::ComponentStatus::_status_id_type arg)
  {
    msg_.status_id = std::move(arg);
    return Init_ComponentStatus_status_msg(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::ComponentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::msg::ComponentStatus>()
{
  return pylon_ros2_camera_interfaces::msg::builder::Init_ComponentStatus_status_id();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
