// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetActionTriggerConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActionTriggerConfiguration_Request_
{
  using Type = SetActionTriggerConfiguration_Request_<ContainerAllocator>;

  explicit SetActionTriggerConfiguration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_device_key = 0l;
      this->action_group_key = 0l;
      this->action_group_mask = 0ul;
      this->registration_mode = 0l;
      this->cleanup = 0l;
    }
  }

  explicit SetActionTriggerConfiguration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_device_key = 0l;
      this->action_group_key = 0l;
      this->action_group_mask = 0ul;
      this->registration_mode = 0l;
      this->cleanup = 0l;
    }
  }

  // field types and members
  using _action_device_key_type =
    int32_t;
  _action_device_key_type action_device_key;
  using _action_group_key_type =
    int32_t;
  _action_group_key_type action_group_key;
  using _action_group_mask_type =
    uint32_t;
  _action_group_mask_type action_group_mask;
  using _registration_mode_type =
    int32_t;
  _registration_mode_type registration_mode;
  using _cleanup_type =
    int32_t;
  _cleanup_type cleanup;

  // setters for named parameter idiom
  Type & set__action_device_key(
    const int32_t & _arg)
  {
    this->action_device_key = _arg;
    return *this;
  }
  Type & set__action_group_key(
    const int32_t & _arg)
  {
    this->action_group_key = _arg;
    return *this;
  }
  Type & set__action_group_mask(
    const uint32_t & _arg)
  {
    this->action_group_mask = _arg;
    return *this;
  }
  Type & set__registration_mode(
    const int32_t & _arg)
  {
    this->registration_mode = _arg;
    return *this;
  }
  Type & set__cleanup(
    const int32_t & _arg)
  {
    this->cleanup = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActionTriggerConfiguration_Request_ & other) const
  {
    if (this->action_device_key != other.action_device_key) {
      return false;
    }
    if (this->action_group_key != other.action_group_key) {
      return false;
    }
    if (this->action_group_mask != other.action_group_mask) {
      return false;
    }
    if (this->registration_mode != other.registration_mode) {
      return false;
    }
    if (this->cleanup != other.cleanup) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActionTriggerConfiguration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActionTriggerConfiguration_Request_

// alias to use template instance with default allocator
using SetActionTriggerConfiguration_Request =
  pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActionTriggerConfiguration_Response_
{
  using Type = SetActionTriggerConfiguration_Response_<ContainerAllocator>;

  explicit SetActionTriggerConfiguration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetActionTriggerConfiguration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
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
    pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActionTriggerConfiguration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActionTriggerConfiguration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActionTriggerConfiguration_Response_

// alias to use template instance with default allocator
using SetActionTriggerConfiguration_Response =
  pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct SetActionTriggerConfiguration
{
  using Request = pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Request;
  using Response = pylon_ros2_camera_interfaces::srv::SetActionTriggerConfiguration_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_ACTION_TRIGGER_CONFIGURATION__STRUCT_HPP_
