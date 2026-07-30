// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetWhiteBalance.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWhiteBalance_Request_
{
  using Type = SetWhiteBalance_Request_<ContainerAllocator>;

  explicit SetWhiteBalance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->balance_ratio_red = 0.0f;
      this->balance_ratio_green = 0.0f;
      this->balance_ratio_blue = 0.0f;
    }
  }

  explicit SetWhiteBalance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->balance_ratio_red = 0.0f;
      this->balance_ratio_green = 0.0f;
      this->balance_ratio_blue = 0.0f;
    }
  }

  // field types and members
  using _balance_ratio_red_type =
    float;
  _balance_ratio_red_type balance_ratio_red;
  using _balance_ratio_green_type =
    float;
  _balance_ratio_green_type balance_ratio_green;
  using _balance_ratio_blue_type =
    float;
  _balance_ratio_blue_type balance_ratio_blue;

  // setters for named parameter idiom
  Type & set__balance_ratio_red(
    const float & _arg)
  {
    this->balance_ratio_red = _arg;
    return *this;
  }
  Type & set__balance_ratio_green(
    const float & _arg)
  {
    this->balance_ratio_green = _arg;
    return *this;
  }
  Type & set__balance_ratio_blue(
    const float & _arg)
  {
    this->balance_ratio_blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWhiteBalance_Request_ & other) const
  {
    if (this->balance_ratio_red != other.balance_ratio_red) {
      return false;
    }
    if (this->balance_ratio_green != other.balance_ratio_green) {
      return false;
    }
    if (this->balance_ratio_blue != other.balance_ratio_blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWhiteBalance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWhiteBalance_Request_

// alias to use template instance with default allocator
using SetWhiteBalance_Request =
  pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWhiteBalance_Response_
{
  using Type = SetWhiteBalance_Response_<ContainerAllocator>;

  explicit SetWhiteBalance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetWhiteBalance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWhiteBalance_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWhiteBalance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWhiteBalance_Response_

// alias to use template instance with default allocator
using SetWhiteBalance_Response =
  pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct SetWhiteBalance
{
  using Request = pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Request;
  using Response = pylon_ros2_camera_interfaces::srv::SetWhiteBalance_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_WHITE_BALANCE__STRUCT_HPP_
