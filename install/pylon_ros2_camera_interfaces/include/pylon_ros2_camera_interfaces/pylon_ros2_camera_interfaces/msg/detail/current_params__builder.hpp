// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentParams_message
{
public:
  explicit Init_CurrentParams_message(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::msg::CurrentParams message(::pylon_ros2_camera_interfaces::msg::CurrentParams::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_success
{
public:
  explicit Init_CurrentParams_success(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_message success(::pylon_ros2_camera_interfaces::msg::CurrentParams::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CurrentParams_message(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_ptp_offset
{
public:
  explicit Init_CurrentParams_ptp_offset(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_success ptp_offset(::pylon_ros2_camera_interfaces::msg::CurrentParams::_ptp_offset_type arg)
  {
    msg_.ptp_offset = std::move(arg);
    return Init_CurrentParams_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_ptp_servo_status
{
public:
  explicit Init_CurrentParams_ptp_servo_status(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_ptp_offset ptp_servo_status(::pylon_ros2_camera_interfaces::msg::CurrentParams::_ptp_servo_status_type arg)
  {
    msg_.ptp_servo_status = std::move(arg);
    return Init_CurrentParams_ptp_offset(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_ptp_status
{
public:
  explicit Init_CurrentParams_ptp_status(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_ptp_servo_status ptp_status(::pylon_ros2_camera_interfaces::msg::CurrentParams::_ptp_status_type arg)
  {
    msg_.ptp_status = std::move(arg);
    return Init_CurrentParams_ptp_servo_status(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_current_image_ros_encoding
{
public:
  explicit Init_CurrentParams_current_image_ros_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_ptp_status current_image_ros_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams::_current_image_ros_encoding_type arg)
  {
    msg_.current_image_ros_encoding = std::move(arg);
    return Init_CurrentParams_ptp_status(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_current_image_encoding
{
public:
  explicit Init_CurrentParams_current_image_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_current_image_ros_encoding current_image_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams::_current_image_encoding_type arg)
  {
    msg_.current_image_encoding = std::move(arg);
    return Init_CurrentParams_current_image_ros_encoding(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_available_image_encoding
{
public:
  explicit Init_CurrentParams_available_image_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_current_image_encoding available_image_encoding(::pylon_ros2_camera_interfaces::msg::CurrentParams::_available_image_encoding_type arg)
  {
    msg_.available_image_encoding = std::move(arg);
    return Init_CurrentParams_current_image_encoding(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_roi
{
public:
  explicit Init_CurrentParams_roi(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_available_image_encoding roi(::pylon_ros2_camera_interfaces::msg::CurrentParams::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_CurrentParams_available_image_encoding(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_max_num_buffer
{
public:
  explicit Init_CurrentParams_max_num_buffer(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_roi max_num_buffer(::pylon_ros2_camera_interfaces::msg::CurrentParams::_max_num_buffer_type arg)
  {
    msg_.max_num_buffer = std::move(arg);
    return Init_CurrentParams_roi(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_temperature
{
public:
  explicit Init_CurrentParams_temperature(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_max_num_buffer temperature(::pylon_ros2_camera_interfaces::msg::CurrentParams::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CurrentParams_max_num_buffer(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_binning_y
{
public:
  explicit Init_CurrentParams_binning_y(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_temperature binning_y(::pylon_ros2_camera_interfaces::msg::CurrentParams::_binning_y_type arg)
  {
    msg_.binning_y = std::move(arg);
    return Init_CurrentParams_temperature(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_binning_x
{
public:
  explicit Init_CurrentParams_binning_x(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_binning_y binning_x(::pylon_ros2_camera_interfaces::msg::CurrentParams::_binning_x_type arg)
  {
    msg_.binning_x = std::move(arg);
    return Init_CurrentParams_binning_y(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_gamma
{
public:
  explicit Init_CurrentParams_gamma(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_binning_x gamma(::pylon_ros2_camera_interfaces::msg::CurrentParams::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return Init_CurrentParams_binning_x(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_gain
{
public:
  explicit Init_CurrentParams_gain(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_gamma gain(::pylon_ros2_camera_interfaces::msg::CurrentParams::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_CurrentParams_gamma(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_exposure
{
public:
  explicit Init_CurrentParams_exposure(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_gain exposure(::pylon_ros2_camera_interfaces::msg::CurrentParams::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return Init_CurrentParams_gain(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_brightness
{
public:
  explicit Init_CurrentParams_brightness(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_exposure brightness(::pylon_ros2_camera_interfaces::msg::CurrentParams::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CurrentParams_exposure(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_is_sleeping
{
public:
  explicit Init_CurrentParams_is_sleeping(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_brightness is_sleeping(::pylon_ros2_camera_interfaces::msg::CurrentParams::_is_sleeping_type arg)
  {
    msg_.is_sleeping = std::move(arg);
    return Init_CurrentParams_brightness(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_user_set_default_selector
{
public:
  explicit Init_CurrentParams_user_set_default_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_is_sleeping user_set_default_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams::_user_set_default_selector_type arg)
  {
    msg_.user_set_default_selector = std::move(arg);
    return Init_CurrentParams_is_sleeping(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_user_set_selector
{
public:
  explicit Init_CurrentParams_user_set_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_user_set_default_selector user_set_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams::_user_set_selector_type arg)
  {
    msg_.user_set_selector = std::move(arg);
    return Init_CurrentParams_user_set_default_selector(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_trigger_delay
{
public:
  explicit Init_CurrentParams_trigger_delay(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_user_set_selector trigger_delay(::pylon_ros2_camera_interfaces::msg::CurrentParams::_trigger_delay_type arg)
  {
    msg_.trigger_delay = std::move(arg);
    return Init_CurrentParams_user_set_selector(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_trigger_activation
{
public:
  explicit Init_CurrentParams_trigger_activation(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_trigger_delay trigger_activation(::pylon_ros2_camera_interfaces::msg::CurrentParams::_trigger_activation_type arg)
  {
    msg_.trigger_activation = std::move(arg);
    return Init_CurrentParams_trigger_delay(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_trigger_source
{
public:
  explicit Init_CurrentParams_trigger_source(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_trigger_activation trigger_source(::pylon_ros2_camera_interfaces::msg::CurrentParams::_trigger_source_type arg)
  {
    msg_.trigger_source = std::move(arg);
    return Init_CurrentParams_trigger_activation(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_trigger_mode
{
public:
  explicit Init_CurrentParams_trigger_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_trigger_source trigger_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams::_trigger_mode_type arg)
  {
    msg_.trigger_mode = std::move(arg);
    return Init_CurrentParams_trigger_source(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_trigger_selector
{
public:
  explicit Init_CurrentParams_trigger_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_trigger_mode trigger_selector(::pylon_ros2_camera_interfaces::msg::CurrentParams::_trigger_selector_type arg)
  {
    msg_.trigger_selector = std::move(arg);
    return Init_CurrentParams_trigger_mode(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_acquisition_frame_count
{
public:
  explicit Init_CurrentParams_acquisition_frame_count(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_trigger_selector acquisition_frame_count(::pylon_ros2_camera_interfaces::msg::CurrentParams::_acquisition_frame_count_type arg)
  {
    msg_.acquisition_frame_count = std::move(arg);
    return Init_CurrentParams_trigger_selector(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_sensor_readout_mode
{
public:
  explicit Init_CurrentParams_sensor_readout_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_acquisition_frame_count sensor_readout_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams::_sensor_readout_mode_type arg)
  {
    msg_.sensor_readout_mode = std::move(arg);
    return Init_CurrentParams_acquisition_frame_count(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_balance_white_auto
{
public:
  explicit Init_CurrentParams_balance_white_auto(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_sensor_readout_mode balance_white_auto(::pylon_ros2_camera_interfaces::msg::CurrentParams::_balance_white_auto_type arg)
  {
    msg_.balance_white_auto = std::move(arg);
    return Init_CurrentParams_sensor_readout_mode(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_light_source_preset
{
public:
  explicit Init_CurrentParams_light_source_preset(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_balance_white_auto light_source_preset(::pylon_ros2_camera_interfaces::msg::CurrentParams::_light_source_preset_type arg)
  {
    msg_.light_source_preset = std::move(arg);
    return Init_CurrentParams_balance_white_auto(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_sharpness_enhancement
{
public:
  explicit Init_CurrentParams_sharpness_enhancement(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_light_source_preset sharpness_enhancement(::pylon_ros2_camera_interfaces::msg::CurrentParams::_sharpness_enhancement_type arg)
  {
    msg_.sharpness_enhancement = std::move(arg);
    return Init_CurrentParams_light_source_preset(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_noise_reduction
{
public:
  explicit Init_CurrentParams_noise_reduction(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_sharpness_enhancement noise_reduction(::pylon_ros2_camera_interfaces::msg::CurrentParams::_noise_reduction_type arg)
  {
    msg_.noise_reduction = std::move(arg);
    return Init_CurrentParams_sharpness_enhancement(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_demosaicing_mode
{
public:
  explicit Init_CurrentParams_demosaicing_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_noise_reduction demosaicing_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams::_demosaicing_mode_type arg)
  {
    msg_.demosaicing_mode = std::move(arg);
    return Init_CurrentParams_noise_reduction(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_pgi_mode
{
public:
  explicit Init_CurrentParams_pgi_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_demosaicing_mode pgi_mode(::pylon_ros2_camera_interfaces::msg::CurrentParams::_pgi_mode_type arg)
  {
    msg_.pgi_mode = std::move(arg);
    return Init_CurrentParams_demosaicing_mode(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_black_level
{
public:
  explicit Init_CurrentParams_black_level(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_pgi_mode black_level(::pylon_ros2_camera_interfaces::msg::CurrentParams::_black_level_type arg)
  {
    msg_.black_level = std::move(arg);
    return Init_CurrentParams_pgi_mode(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_reverse_y
{
public:
  explicit Init_CurrentParams_reverse_y(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_black_level reverse_y(::pylon_ros2_camera_interfaces::msg::CurrentParams::_reverse_y_type arg)
  {
    msg_.reverse_y = std::move(arg);
    return Init_CurrentParams_black_level(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_reverse_x
{
public:
  explicit Init_CurrentParams_reverse_x(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_reverse_y reverse_x(::pylon_ros2_camera_interfaces::msg::CurrentParams::_reverse_x_type arg)
  {
    msg_.reverse_x = std::move(arg);
    return Init_CurrentParams_reverse_y(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_offset_y
{
public:
  explicit Init_CurrentParams_offset_y(::pylon_ros2_camera_interfaces::msg::CurrentParams & msg)
  : msg_(msg)
  {}
  Init_CurrentParams_reverse_x offset_y(::pylon_ros2_camera_interfaces::msg::CurrentParams::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_CurrentParams_reverse_x(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

class Init_CurrentParams_offset_x
{
public:
  Init_CurrentParams_offset_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentParams_offset_y offset_x(::pylon_ros2_camera_interfaces::msg::CurrentParams::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_CurrentParams_offset_y(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::msg::CurrentParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::msg::CurrentParams>()
{
  return pylon_ros2_camera_interfaces::msg::builder::Init_CurrentParams_offset_x();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__BUILDER_HPP_
