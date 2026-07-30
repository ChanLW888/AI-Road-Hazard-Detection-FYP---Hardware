// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Request_target_exposure
{
public:
  Init_SetExposure_Request_target_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetExposure_Request target_exposure(::pylon_ros2_camera_interfaces::srv::SetExposure_Request::_target_exposure_type arg)
  {
    msg_.target_exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetExposure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetExposure_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetExposure_Request_target_exposure();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Response_success
{
public:
  explicit Init_SetExposure_Response_success(::pylon_ros2_camera_interfaces::srv::SetExposure_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetExposure_Response success(::pylon_ros2_camera_interfaces::srv::SetExposure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetExposure_Response msg_;
};

class Init_SetExposure_Response_reached_exposure
{
public:
  Init_SetExposure_Response_reached_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExposure_Response_success reached_exposure(::pylon_ros2_camera_interfaces::srv::SetExposure_Response::_reached_exposure_type arg)
  {
    msg_.reached_exposure = std::move(arg);
    return Init_SetExposure_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetExposure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetExposure_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetExposure_Response_reached_exposure();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
