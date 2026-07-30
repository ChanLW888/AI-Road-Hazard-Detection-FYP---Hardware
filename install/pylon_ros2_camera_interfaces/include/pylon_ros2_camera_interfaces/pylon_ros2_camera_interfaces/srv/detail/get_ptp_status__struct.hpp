// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:srv/GetPtpStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPtpStatus_Request_
{
  using Type = GetPtpStatus_Request_<ContainerAllocator>;

  explicit GetPtpStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetPtpStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPtpStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPtpStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPtpStatus_Request_

// alias to use template instance with default allocator
using GetPtpStatus_Request =
  pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPtpStatus_Response_
{
  using Type = GetPtpStatus_Response_<ContainerAllocator>;

  explicit GetPtpStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptp_status = "";
      this->ptp_servo_status = "";
      this->offset_from_master = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  explicit GetPtpStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ptp_status(_alloc),
    ptp_servo_status(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptp_status = "";
      this->ptp_servo_status = "";
      this->offset_from_master = 0ll;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _ptp_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ptp_status_type ptp_status;
  using _ptp_servo_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ptp_servo_status_type ptp_servo_status;
  using _offset_from_master_type =
    int64_t;
  _offset_from_master_type offset_from_master;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
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
  Type & set__offset_from_master(
    const int64_t & _arg)
  {
    this->offset_from_master = _arg;
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
    pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPtpStatus_Response_ & other) const
  {
    if (this->ptp_status != other.ptp_status) {
      return false;
    }
    if (this->ptp_servo_status != other.ptp_servo_status) {
      return false;
    }
    if (this->offset_from_master != other.offset_from_master) {
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
  bool operator!=(const GetPtpStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPtpStatus_Response_

// alias to use template instance with default allocator
using GetPtpStatus_Response =
  pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

struct GetPtpStatus
{
  using Request = pylon_ros2_camera_interfaces::srv::GetPtpStatus_Request;
  using Response = pylon_ros2_camera_interfaces::srv::GetPtpStatus_Response;
};

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__GET_PTP_STATUS__STRUCT_HPP_
