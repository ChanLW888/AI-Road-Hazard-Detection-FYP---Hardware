// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/GetPtpStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/get_ptp_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request>()
{
  return ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPtpStatus_Response_message
{
public:
  explicit Init_GetPtpStatus_Response_message(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response message(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response msg_;
};

class Init_GetPtpStatus_Response_success
{
public:
  explicit Init_GetPtpStatus_Response_success(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetPtpStatus_Response_message success(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPtpStatus_Response_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response msg_;
};

class Init_GetPtpStatus_Response_offset_from_master
{
public:
  explicit Init_GetPtpStatus_Response_offset_from_master(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetPtpStatus_Response_success offset_from_master(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response::_offset_from_master_type arg)
  {
    msg_.offset_from_master = std::move(arg);
    return Init_GetPtpStatus_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response msg_;
};

class Init_GetPtpStatus_Response_ptp_servo_status
{
public:
  explicit Init_GetPtpStatus_Response_ptp_servo_status(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetPtpStatus_Response_offset_from_master ptp_servo_status(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response::_ptp_servo_status_type arg)
  {
    msg_.ptp_servo_status = std::move(arg);
    return Init_GetPtpStatus_Response_offset_from_master(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response msg_;
};

class Init_GetPtpStatus_Response_ptp_status
{
public:
  Init_GetPtpStatus_Response_ptp_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPtpStatus_Response_ptp_servo_status ptp_status(::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response::_ptp_status_type arg)
  {
    msg_.ptp_status = std::move(arg);
    return Init_GetPtpStatus_Response_ptp_servo_status(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_GetPtpStatus_Response_ptp_status();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__BUILDER_HPP_
