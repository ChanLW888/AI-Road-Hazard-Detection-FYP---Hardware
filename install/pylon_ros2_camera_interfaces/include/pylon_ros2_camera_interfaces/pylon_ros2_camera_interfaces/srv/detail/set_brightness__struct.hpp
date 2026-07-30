// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBrightness_Request_
{
  using Type = SetBrightness_Request_<ContainerAllocator>;

  explicit SetBrightness_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_brightness = 0l;
      this->brightness_continuous = false;
      this->exposure_auto = false;
      this->gain_auto = false;
    }
  }

  explicit SetBrightness_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_brightness = 0l;
      this->brightness_continuous = false;
      this->exposure_auto = false;
      this->gain_auto = false;
    }
  }

  // field types and members
  using _target_brightness_type =
    int32_t;
  _target_brightness_type target_brightness;
  using _brightness_continuous_type =
    bool;
  _brightness_continuous_type brightness_continuous;
  using _exposure_auto_type =
    bool;
  _exposure_auto_type exposure_auto;
  using _gain_auto_type =
    bool;
  _gain_auto_type gain_auto;

  // setters for named parameter idiom
  Type & set__target_brightness(
    const int32_t & _arg)
  {
    this->target_brightness = _arg;
    return *this;
  }
  Type & set__brightness_continuous(
    const bool & _arg)
  {
    this->brightness_continuous = _arg;
    return *this;
  }
  Type & set__exposure_auto(
    const bool & _arg)
  {
    this->exposure_auto = _arg;
    return *this;
  }
  Type & set__gain_auto(
    const bool & _arg)
  {
    this->gain_auto = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBrightness_Request_ & other) const
  {
    if (this->target_brightness != other.target_brightness) {
      return false;
    }
    if (this->brightness_continuous != other.brightness_continuous) {
      return false;
    }
    if (this->exposure_auto != other.exposure_auto) {
      return false;
    }
    if (this->gain_auto != other.gain_auto) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBrightness_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBrightness_Request_

// alias to use template instance with default allocator
using SetBrightness_Request =
  pylon_ros2_camera_interfaces::srv::SetBrightness_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBrightness_Response_
{
  using Type = SetBrightness_Response_<ContainerAllocator>;

  explicit SetBrightness_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_brightness = 0l;
      this->reached_exposure_time = 0.0f;
      this->reached_gain_value = 0.0f;
      this->success = false;
    }
  }

  explicit SetBrightness_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_brightness = 0l;
      this->reached_exposure_time = 0.0f;
      this->reached_gain_value = 0.0f;
      this->success = false;
    }
  }

  // field types and members
  using _reached_brightness_type =
    int32_t;
  _reached_brightness_type reached_brightness;
  using _reached_exposure_time_type =
    float;
  _reached_exposure_time_type reached_exposure_time;
  using _reached_gain_value_type =
    float;
  _reached_gain_value_type reached_gain_value;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__reached_brightness(
    const int32_t & _arg)
  {
    this->reached_brightness = _arg;
    return *this;
  }
  Type & set__reached_exposure_time(
    const float & _arg)
  {
    this->reached_exposure_time = _arg;
    return *this;
  }
  Type & set__reached_gain_value(
    const float & _arg)
  {
    this->reached_gain_value = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBrightness_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBrightness_Response_ & other) const
  {
    if (this->reached_brightness != other.reached_brightness) {
      return false;
    }
    if (this->reached_exposure_time != other.reached_exposure_time) {
      return false;
    }
    if (this->reached_gain_value != other.reached_gain_value) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBrightness_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBrightness_Response_

// alias to use template instance with default allocator
using SetBrightness_Response =
  pylon_ros2_camera_interfaces::srv::SetBrightness_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct SetBrightness
{
  using Request = pylon_ros2_camera_interfaces::srv::SetBrightness_Request;
  using Response = pylon_ros2_camera_interfaces::srv::SetBrightness_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BRIGHTNESS__STRUCT_HPP_
