// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/IssueActionCommand.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IssueActionCommand_Request_
{
  using Type = IssueActionCommand_Request_<ContainerAllocator>;

  explicit IssueActionCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_key = 0l;
      this->group_key = 0l;
      this->group_mask = 0ul;
      this->broadcast_address = "";
    }
  }

  explicit IssueActionCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : broadcast_address(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_key = 0l;
      this->group_key = 0l;
      this->group_mask = 0ul;
      this->broadcast_address = "";
    }
  }

  // field types and members
  using _device_key_type =
    int32_t;
  _device_key_type device_key;
  using _group_key_type =
    int32_t;
  _group_key_type group_key;
  using _group_mask_type =
    uint32_t;
  _group_mask_type group_mask;
  using _broadcast_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _broadcast_address_type broadcast_address;

  // setters for named parameter idiom
  Type & set__device_key(
    const int32_t & _arg)
  {
    this->device_key = _arg;
    return *this;
  }
  Type & set__group_key(
    const int32_t & _arg)
  {
    this->group_key = _arg;
    return *this;
  }
  Type & set__group_mask(
    const uint32_t & _arg)
  {
    this->group_mask = _arg;
    return *this;
  }
  Type & set__broadcast_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->broadcast_address = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IssueActionCommand_Request_ & other) const
  {
    if (this->device_key != other.device_key) {
      return false;
    }
    if (this->group_key != other.group_key) {
      return false;
    }
    if (this->group_mask != other.group_mask) {
      return false;
    }
    if (this->broadcast_address != other.broadcast_address) {
      return false;
    }
    return true;
  }
  bool operator!=(const IssueActionCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IssueActionCommand_Request_

// alias to use template instance with default allocator
using IssueActionCommand_Request =
  pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IssueActionCommand_Response_
{
  using Type = IssueActionCommand_Response_<ContainerAllocator>;

  explicit IssueActionCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit IssueActionCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IssueActionCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const IssueActionCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IssueActionCommand_Response_

// alias to use template instance with default allocator
using IssueActionCommand_Response =
  pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct IssueActionCommand
{
  using Request = pylon_ros2_camera_interfaces::srv::IssueActionCommand_Request;
  using Response = pylon_ros2_camera_interfaces::srv::IssueActionCommand_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__ISSUE_ACTION_COMMAND__STRUCT_HPP_
