// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetGamma.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAMMA__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAMMA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGamma_Request_target_gamma
{
public:
  Init_SetGamma_Request_target_gamma()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetGamma_Request target_gamma(::pylon_ros2_camera_interfaces::srv::SetGamma_Request::_target_gamma_type arg)
  {
    msg_.target_gamma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGamma_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetGamma_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetGamma_Request_target_gamma();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGamma_Response_success
{
public:
  explicit Init_SetGamma_Response_success(::pylon_ros2_camera_interfaces::srv::SetGamma_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetGamma_Response success(::pylon_ros2_camera_interfaces::srv::SetGamma_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGamma_Response msg_;
};

class Init_SetGamma_Response_reached_gamma
{
public:
  Init_SetGamma_Response_reached_gamma()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGamma_Response_success reached_gamma(::pylon_ros2_camera_interfaces::srv::SetGamma_Response::_reached_gamma_type arg)
  {
    msg_.reached_gamma = std::move(arg);
    return Init_SetGamma_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetGamma_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetGamma_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetGamma_Response_reached_gamma();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_GAMMA__BUILDER_HPP_
