// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBinning.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_binning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBinning_Request_target_binning_y
{
public:
  explicit Init_SetBinning_Request_target_binning_y(::pylon_ros2_camera_interfaces::srv::SetBinning_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Request target_binning_y(::pylon_ros2_camera_interfaces::srv::SetBinning_Request::_target_binning_y_type arg)
  {
    msg_.target_binning_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Request msg_;
};

class Init_SetBinning_Request_target_binning_x
{
public:
  Init_SetBinning_Request_target_binning_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBinning_Request_target_binning_y target_binning_x(::pylon_ros2_camera_interfaces::srv::SetBinning_Request::_target_binning_x_type arg)
  {
    msg_.target_binning_x = std::move(arg);
    return Init_SetBinning_Request_target_binning_y(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetBinning_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetBinning_Request_target_binning_x();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBinning_Response_success
{
public:
  explicit Init_SetBinning_Response_success(::pylon_ros2_camera_interfaces::srv::SetBinning_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Response success(::pylon_ros2_camera_interfaces::srv::SetBinning_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Response msg_;
};

class Init_SetBinning_Response_reached_binning_y
{
public:
  explicit Init_SetBinning_Response_reached_binning_y(::pylon_ros2_camera_interfaces::srv::SetBinning_Response & msg)
  : msg_(msg)
  {}
  Init_SetBinning_Response_success reached_binning_y(::pylon_ros2_camera_interfaces::srv::SetBinning_Response::_reached_binning_y_type arg)
  {
    msg_.reached_binning_y = std::move(arg);
    return Init_SetBinning_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Response msg_;
};

class Init_SetBinning_Response_reached_binning_x
{
public:
  Init_SetBinning_Response_reached_binning_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBinning_Response_reached_binning_y reached_binning_x(::pylon_ros2_camera_interfaces::srv::SetBinning_Response::_reached_binning_x_type arg)
  {
    msg_.reached_binning_x = std::move(arg);
    return Init_SetBinning_Response_reached_binning_y(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBinning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetBinning_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetBinning_Response_reached_binning_x();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__BUILDER_HPP_
