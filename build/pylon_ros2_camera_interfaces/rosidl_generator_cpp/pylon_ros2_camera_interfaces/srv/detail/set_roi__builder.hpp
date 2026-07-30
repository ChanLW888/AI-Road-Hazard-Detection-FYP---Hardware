// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetROI.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetROI_Request_target_roi
{
public:
  Init_SetROI_Request_target_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetROI_Request target_roi(::pylon_ros2_camera_interfaces::srv::SetROI_Request::_target_roi_type arg)
  {
    msg_.target_roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetROI_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetROI_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetROI_Request_target_roi();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetROI_Response_success
{
public:
  explicit Init_SetROI_Response_success(::pylon_ros2_camera_interfaces::srv::SetROI_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetROI_Response success(::pylon_ros2_camera_interfaces::srv::SetROI_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetROI_Response msg_;
};

class Init_SetROI_Response_reached_roi
{
public:
  Init_SetROI_Response_reached_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetROI_Response_success reached_roi(::pylon_ros2_camera_interfaces::srv::SetROI_Response::_reached_roi_type arg)
  {
    msg_.reached_roi = std::move(arg);
    return Init_SetROI_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetROI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetROI_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetROI_Response_reached_roi();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ROI__BUILDER_HPP_
