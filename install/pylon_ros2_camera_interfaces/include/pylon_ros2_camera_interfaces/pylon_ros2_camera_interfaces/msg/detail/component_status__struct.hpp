// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__msg__ComponentStatus __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__msg__ComponentStatus __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComponentStatus_
{
  using Type = ComponentStatus_<ContainerAllocator>;

  explicit ComponentStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_id = 0;
      this->status_msg = "";
    }
  }

  explicit ComponentStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_id = 0;
      this->status_msg = "";
    }
  }

  // field types and members
  using _status_id_type =
    int8_t;
  _status_id_type status_id;
  using _status_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_msg_type status_msg;

  // setters for named parameter idiom
  Type & set__status_id(
    const int8_t & _arg)
  {
    this->status_id = _arg;
    return *this;
  }
  Type & set__status_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_msg = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INITIALIZED =
    0;
  static constexpr int8_t STOPPED =
    1;
  static constexpr int8_t RUNNING =
    2;
  static constexpr int8_t CONFIG_NEEDED =
    3;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr int8_t ERROR =
    4;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr int8_t INTERACTION_REQUEST =
    5;
  static constexpr int8_t DEACTIVATED =
    6;

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__msg__ComponentStatus
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__msg__ComponentStatus
    std::shared_ptr<pylon_ros2_camera_interfaces::msg::ComponentStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComponentStatus_ & other) const
  {
    if (this->status_id != other.status_id) {
      return false;
    }
    if (this->status_msg != other.status_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComponentStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComponentStatus_

// alias to use template instance with default allocator
using ComponentStatus =
  pylon_ros2_camera_interfaces::msg::ComponentStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::INITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::CONFIG_NEEDED;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::INTERACTION_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ComponentStatus_<ContainerAllocator>::DEACTIVATED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__MSG__DETAIL__COMPONENT_STATUS__STRUCT_HPP_
