// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetGain.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_gain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGain_Request_target_gain
{
public:
  Init_SetGain_Request_target_gain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetGain_Request target_gain(::pylon_ros2_camera_interfaces::srv::SetGain_Request::_target_gain_type arg)
  {
    msg_.target_gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetGain_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetGain_Request_target_gain();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGain_Response_success
{
public:
  explicit Init_SetGain_Response_success(::pylon_ros2_camera_interfaces::srv::SetGain_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetGain_Response success(::pylon_ros2_camera_interfaces::srv::SetGain_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGain_Response msg_;
};

class Init_SetGain_Response_reached_gain
{
public:
  Init_SetGain_Response_reached_gain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGain_Response_success reached_gain(::pylon_ros2_camera_interfaces::srv::SetGain_Response::_reached_gain_type arg)
  {
    msg_.reached_gain = std::move(arg);
    return Init_SetGain_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetGain_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetGain_Response_reached_gain();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_
