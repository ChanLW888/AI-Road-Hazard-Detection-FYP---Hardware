// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBrightness_Request_gain_auto
{
public:
  explicit Init_SetBrightness_Request_gain_auto(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Request gain_auto(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request::_gain_auto_type arg)
  {
    msg_.gain_auto = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Request msg_;
};

class Init_SetBrightness_Request_exposure_auto
{
public:
  explicit Init_SetBrightness_Request_exposure_auto(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request & msg)
  : msg_(msg)
  {}
  Init_SetBrightness_Request_gain_auto exposure_auto(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request::_exposure_auto_type arg)
  {
    msg_.exposure_auto = std::move(arg);
    return Init_SetBrightness_Request_gain_auto(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Request msg_;
};

class Init_SetBrightness_Request_brightness_continuous
{
public:
  explicit Init_SetBrightness_Request_brightness_continuous(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request & msg)
  : msg_(msg)
  {}
  Init_SetBrightness_Request_exposure_auto brightness_continuous(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request::_brightness_continuous_type arg)
  {
    msg_.brightness_continuous = std::move(arg);
    return Init_SetBrightness_Request_exposure_auto(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Request msg_;
};

class Init_SetBrightness_Request_target_brightness
{
public:
  Init_SetBrightness_Request_target_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBrightness_Request_brightness_continuous target_brightness(::pylon_ros2_camera_interfaces::srv::SetBrightness_Request::_target_brightness_type arg)
  {
    msg_.target_brightness = std::move(arg);
    return Init_SetBrightness_Request_brightness_continuous(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetBrightness_Request>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetBrightness_Request_target_brightness();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBrightness_Response_success
{
public:
  explicit Init_SetBrightness_Response_success(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Response success(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Response msg_;
};

class Init_SetBrightness_Response_reached_gain_value
{
public:
  explicit Init_SetBrightness_Response_reached_gain_value(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response & msg)
  : msg_(msg)
  {}
  Init_SetBrightness_Response_success reached_gain_value(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response::_reached_gain_value_type arg)
  {
    msg_.reached_gain_value = std::move(arg);
    return Init_SetBrightness_Response_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Response msg_;
};

class Init_SetBrightness_Response_reached_exposure_time
{
public:
  explicit Init_SetBrightness_Response_reached_exposure_time(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response & msg)
  : msg_(msg)
  {}
  Init_SetBrightness_Response_reached_gain_value reached_exposure_time(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response::_reached_exposure_time_type arg)
  {
    msg_.reached_exposure_time = std::move(arg);
    return Init_SetBrightness_Response_reached_gain_value(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Response msg_;
};

class Init_SetBrightness_Response_reached_brightness
{
public:
  Init_SetBrightness_Response_reached_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBrightness_Response_reached_exposure_time reached_brightness(::pylon_ros2_camera_interfaces::srv::SetBrightness_Response::_reached_brightness_type arg)
  {
    msg_.reached_brightness = std::move(arg);
    return Init_SetBrightness_Response_reached_exposure_time(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::srv::SetBrightness_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::srv::SetBrightness_Response>()
{
  return pylon_ros2_camera_interfaces::srv::builder::Init_SetBrightness_Response_reached_brightness();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__BUILDER_HPP_
