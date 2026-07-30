// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__msg__CurrentParams __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__msg__CurrentParams __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentParams_
{
  using Type = CurrentParams_<ContainerAllocator>;

  explicit CurrentParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_x = 0ul;
      this->offset_y = 0ul;
      this->reverse_x = false;
      this->reverse_y = false;
      this->black_level = 0l;
      this->pgi_mode = 0l;
      this->demosaicing_mode = 0l;
      this->noise_reduction = 0.0f;
      this->sharpness_enhancement = 0.0f;
      this->light_source_preset = 0l;
      this->balance_white_auto = 0l;
      this->sensor_readout_mode = 0l;
      this->acquisition_frame_count = 0l;
      this->trigger_selector = 0l;
      this->trigger_mode = 0l;
      this->trigger_source = 0l;
      this->trigger_activation = 0l;
      this->trigger_delay = 0.0f;
      this->user_set_selector = 0l;
      this->user_set_default_selector = 0l;
      this->is_sleeping = false;
      this->brightness = 0.0f;
      this->exposure = 0.0f;
      this->gain = 0.0f;
      this->gamma = 0.0f;
      this->binning_x = 0ul;
      this->binning_y = 0ul;
      this->temperature = 0.0f;
      this->max_num_buffer = 0l;
      this->current_image_encoding = "";
      this->current_image_ros_encoding = "";
      this->ptp_status = "";
      this->ptp_servo_status = "";
      this->ptp_offset = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  explicit CurrentParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init),
    current_image_encoding(_alloc),
    current_image_ros_encoding(_alloc),
    ptp_status(_alloc),
    ptp_servo_status(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_x = 0ul;
      this->offset_y = 0ul;
      this->reverse_x = false;
      this->reverse_y = false;
      this->black_level = 0l;
      this->pgi_mode = 0l;
      this->demosaicing_mode = 0l;
      this->noise_reduction = 0.0f;
      this->sharpness_enhancement = 0.0f;
      this->light_source_preset = 0l;
      this->balance_white_auto = 0l;
      this->sensor_readout_mode = 0l;
      this->acquisition_frame_count = 0l;
      this->trigger_selector = 0l;
      this->trigger_mode = 0l;
      this->trigger_source = 0l;
      this->trigger_activation = 0l;
      this->trigger_delay = 0.0f;
      this->user_set_selector = 0l;
      this->user_set_default_selector = 0l;
      this->is_sleeping = false;
      this->brightness = 0.0f;
      this->exposure = 0.0f;
      this->gain = 0.0f;
      this->gamma = 0.0f;
      this->binning_x = 0ul;
      this->binning_y = 0ul;
      this->temperature = 0.0f;
      this->max_num_buffer = 0l;
      this->current_image_encoding = "";
      this->current_image_ros_encoding = "";
      this->ptp_status = "";
      this->ptp_servo_status = "";
      this->ptp_offset = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _offset_x_type =
    uint32_t;
  _offset_x_type offset_x;
  using _offset_y_type =
    uint32_t;
  _offset_y_type offset_y;
  using _reverse_x_type =
    bool;
  _reverse_x_type reverse_x;
  using _reverse_y_type =
    bool;
  _reverse_y_type reverse_y;
  using _black_level_type =
    int32_t;
  _black_level_type black_level;
  using _pgi_mode_type =
    int32_t;
  _pgi_mode_type pgi_mode;
  using _demosaicing_mode_type =
    int32_t;
  _demosaicing_mode_type demosaicing_mode;
  using _noise_reduction_type =
    float;
  _noise_reduction_type noise_reduction;
  using _sharpness_enhancement_type =
    float;
  _sharpness_enhancement_type sharpness_enhancement;
  using _light_source_preset_type =
    int32_t;
  _light_source_preset_type light_source_preset;
  using _balance_white_auto_type =
    int32_t;
  _balance_white_auto_type balance_white_auto;
  using _sensor_readout_mode_type =
    int32_t;
  _sensor_readout_mode_type sensor_readout_mode;
  using _acquisition_frame_count_type =
    int32_t;
  _acquisition_frame_count_type acquisition_frame_count;
  using _trigger_selector_type =
    int32_t;
  _trigger_selector_type trigger_selector;
  using _trigger_mode_type =
    int32_t;
  _trigger_mode_type trigger_mode;
  using _trigger_source_type =
    int32_t;
  _trigger_source_type trigger_source;
  using _trigger_activation_type =
    int32_t;
  _trigger_activation_type trigger_activation;
  using _trigger_delay_type =
    float;
  _trigger_delay_type trigger_delay;
  using _user_set_selector_type =
    int32_t;
  _user_set_selector_type user_set_selector;
  using _user_set_default_selector_type =
    int32_t;
  _user_set_default_selector_type user_set_default_selector;
  using _is_sleeping_type =
    bool;
  _is_sleeping_type is_sleeping;
  using _brightness_type =
    float;
  _brightness_type brightness;
  using _exposure_type =
    float;
  _exposure_type exposure;
  using _gain_type =
    float;
  _gain_type gain;
  using _gamma_type =
    float;
  _gamma_type gamma;
  using _binning_x_type =
    uint32_t;
  _binning_x_type binning_x;
  using _binning_y_type =
    uint32_t;
  _binning_y_type binning_y;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _max_num_buffer_type =
    int32_t;
  _max_num_buffer_type max_num_buffer;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _available_image_encoding_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_image_encoding_type available_image_encoding;
  using _current_image_encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_image_encoding_type current_image_encoding;
  using _current_image_ros_encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_image_ros_encoding_type current_image_ros_encoding;
  using _ptp_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ptp_status_type ptp_status;
  using _ptp_servo_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ptp_servo_status_type ptp_servo_status;
  using _ptp_offset_type =
    int64_t;
  _ptp_offset_type ptp_offset;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__offset_x(
    const uint32_t & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const uint32_t & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__reverse_x(
    const bool & _arg)
  {
    this->reverse_x = _arg;
    return *this;
  }
  Type & set__reverse_y(
    const bool & _arg)
  {
    this->reverse_y = _arg;
    return *this;
  }
  Type & set__black_level(
    const int32_t & _arg)
  {
    this->black_level = _arg;
    return *this;
  }
  Type & set__pgi_mode(
    const int32_t & _arg)
  {
    this->pgi_mode = _arg;
    return *this;
  }
  Type & set__demosaicing_mode(
    const int32_t & _arg)
  {
    this->demosaicing_mode = _arg;
    return *this;
  }
  Type & set__noise_reduction(
    const float & _arg)
  {
    this->noise_reduction = _arg;
    return *this;
  }
  Type & set__sharpness_enhancement(
    const float & _arg)
  {
    this->sharpness_enhancement = _arg;
    return *this;
  }
  Type & set__light_source_preset(
    const int32_t & _arg)
  {
    this->light_source_preset = _arg;
    return *this;
  }
  Type & set__balance_white_auto(
    const int32_t & _arg)
  {
    this->balance_white_auto = _arg;
    return *this;
  }
  Type & set__sensor_readout_mode(
    const int32_t & _arg)
  {
    this->sensor_readout_mode = _arg;
    return *this;
  }
  Type & set__acquisition_frame_count(
    const int32_t & _arg)
  {
    this->acquisition_frame_count = _arg;
    return *this;
  }
  Type & set__trigger_selector(
    const int32_t & _arg)
  {
    this->trigger_selector = _arg;
    return *this;
  }
  Type & set__trigger_mode(
    const int32_t & _arg)
  {
    this->trigger_mode = _arg;
    return *this;
  }
  Type & set__trigger_source(
    const int32_t & _arg)
  {
    this->trigger_source = _arg;
    return *this;
  }
  Type & set__trigger_activation(
    const int32_t & _arg)
  {
    this->trigger_activation = _arg;
    return *this;
  }
  Type & set__trigger_delay(
    const float & _arg)
  {
    this->trigger_delay = _arg;
    return *this;
  }
  Type & set__user_set_selector(
    const int32_t & _arg)
  {
    this->user_set_selector = _arg;
    return *this;
  }
  Type & set__user_set_default_selector(
    const int32_t & _arg)
  {
    this->user_set_default_selector = _arg;
    return *this;
  }
  Type & set__is_sleeping(
    const bool & _arg)
  {
    this->is_sleeping = _arg;
    return *this;
  }
  Type & set__brightness(
    const float & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__exposure(
    const float & _arg)
  {
    this->exposure = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__gamma(
    const float & _arg)
  {
    this->gamma = _arg;
    return *this;
  }
  Type & set__binning_x(
    const uint32_t & _arg)
  {
    this->binning_x = _arg;
    return *this;
  }
  Type & set__binning_y(
    const uint32_t & _arg)
  {
    this->binning_y = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__max_num_buffer(
    const int32_t & _arg)
  {
    this->max_num_buffer = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__available_image_encoding(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_image_encoding = _arg;
    return *this;
  }
  Type & set__current_image_encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_image_encoding = _arg;
    return *this;
  }
  Type & set__current_image_ros_encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_image_ros_encoding = _arg;
    return *this;
  }
  Type & set__ptp_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ptp_status = _arg;
    return *this;
  }
  Type & set__ptp_servo_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ptp_servo_status = _arg;
    return *this;
  }
  Type & set__ptp_offset(
    const int64_t & _arg)
  {
    this->ptp_offset = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__msg__CurrentParams
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__msg__CurrentParams
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::CurrentParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentParams_ & other) const
  {
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->reverse_x != other.reverse_x) {
      return false;
    }
    if (this->reverse_y != other.reverse_y) {
      return false;
    }
    if (this->black_level != other.black_level) {
      return false;
    }
    if (this->pgi_mode != other.pgi_mode) {
      return false;
    }
    if (this->demosaicing_mode != other.demosaicing_mode) {
      return false;
    }
    if (this->noise_reduction != other.noise_reduction) {
      return false;
    }
    if (this->sharpness_enhancement != other.sharpness_enhancement) {
      return false;
    }
    if (this->light_source_preset != other.light_source_preset) {
      return false;
    }
    if (this->balance_white_auto != other.balance_white_auto) {
      return false;
    }
    if (this->sensor_readout_mode != other.sensor_readout_mode) {
      return false;
    }
    if (this->acquisition_frame_count != other.acquisition_frame_count) {
      return false;
    }
    if (this->trigger_selector != other.trigger_selector) {
      return false;
    }
    if (this->trigger_mode != other.trigger_mode) {
      return false;
    }
    if (this->trigger_source != other.trigger_source) {
      return false;
    }
    if (this->trigger_activation != other.trigger_activation) {
      return false;
    }
    if (this->trigger_delay != other.trigger_delay) {
      return false;
    }
    if (this->user_set_selector != other.user_set_selector) {
      return false;
    }
    if (this->user_set_default_selector != other.user_set_default_selector) {
      return false;
    }
    if (this->is_sleeping != other.is_sleeping) {
      return false;
    }
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->exposure != other.exposure) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->gamma != other.gamma) {
      return false;
    }
    if (this->binning_x != other.binning_x) {
      return false;
    }
    if (this->binning_y != other.binning_y) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->max_num_buffer != other.max_num_buffer) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    if (this->available_image_encoding != other.available_image_encoding) {
      return false;
    }
    if (this->current_image_encoding != other.current_image_encoding) {
      return false;
    }
    if (this->current_image_ros_encoding != other.current_image_ros_encoding) {
      return false;
    }
    if (this->ptp_status != other.ptp_status) {
      return false;
    }
    if (this->ptp_servo_status != other.ptp_servo_status) {
      return false;
    }
    if (this->ptp_offset != other.ptp_offset) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentParams_

// alias to use template instance with default allocator
using CurrentParams =
  pylon_ros2_camera_interfaces::msg::CurrentParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__CURRENT_PARAMS__STRUCT_HPP_
