// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBinning.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBinning_Request_
{
  using Type = SetBinning_Request_<ContainerAllocator>;

  explicit SetBinning_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_binning_x = 0ul;
      this->target_binning_y = 0ul;
    }
  }

  explicit SetBinning_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_binning_x = 0ul;
      this->target_binning_y = 0ul;
    }
  }

  // field types and members
  using _target_binning_x_type =
    uint32_t;
  _target_binning_x_type target_binning_x;
  using _target_binning_y_type =
    uint32_t;
  _target_binning_y_type target_binning_y;

  // setters for named parameter idiom
  Type & set__target_binning_x(
    const uint32_t & _arg)
  {
    this->target_binning_x = _arg;
    return *this;
  }
  Type & set__target_binning_y(
    const uint32_t & _arg)
  {
    this->target_binning_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBinning_Request_ & other) const
  {
    if (this->target_binning_x != other.target_binning_x) {
      return false;
    }
    if (this->target_binning_y != other.target_binning_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBinning_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBinning_Request_

// alias to use template instance with default allocator
using SetBinning_Request =
  pylon_ros2_camera_interfaces::srv::SetBinning_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBinning_Response_
{
  using Type = SetBinning_Response_<ContainerAllocator>;

  explicit SetBinning_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_binning_x = 0ul;
      this->reached_binning_y = 0ul;
      this->success = false;
    }
  }

  explicit SetBinning_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_binning_x = 0ul;
      this->reached_binning_y = 0ul;
      this->success = false;
    }
  }

  // field types and members
  using _reached_binning_x_type =
    uint32_t;
  _reached_binning_x_type reached_binning_x;
  using _reached_binning_y_type =
    uint32_t;
  _reached_binning_y_type reached_binning_y;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__reached_binning_x(
    const uint32_t & _arg)
  {
    this->reached_binning_x = _arg;
    return *this;
  }
  Type & set__reached_binning_y(
    const uint32_t & _arg)
  {
    this->reached_binning_y = _arg;
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
    pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__SetBinning_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::SetBinning_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBinning_Response_ & other) const
  {
    if (this->reached_binning_x != other.reached_binning_x) {
      return false;
    }
    if (this->reached_binning_y != other.reached_binning_y) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBinning_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBinning_Response_

// alias to use template instance with default allocator
using SetBinning_Response =
  pylon_ros2_camera_interfaces::srv::SetBinning_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct SetBinning
{
  using Request = pylon_ros2_camera_interfaces::srv::SetBinning_Request;
  using Response = pylon_ros2_camera_interfaces::srv::SetBinning_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_BINNING__STRUCT_HPP_
