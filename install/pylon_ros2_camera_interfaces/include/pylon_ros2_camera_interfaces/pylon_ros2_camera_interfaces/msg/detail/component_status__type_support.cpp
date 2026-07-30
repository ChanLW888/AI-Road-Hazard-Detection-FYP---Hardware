// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pylon_ros2_camera_interfaces/msg/detail/component_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ComponentStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::msg::ComponentStatus(_init);
}

void ComponentStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::msg::ComponentStatus *>(message_memory);
  typed_message->~ComponentStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComponentStatus_message_member_array[2] = {
  {
    "status_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::msg::ComponentStatus, status_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::msg::ComponentStatus, status_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComponentStatus_message_members = {
  "pylon_ros2_camera_interfaces::msg",  // message namespace
  "ComponentStatus",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::msg::ComponentStatus),
  ComponentStatus_message_member_array,  // message members
  ComponentStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ComponentStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComponentStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComponentStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::msg::ComponentStatus>()
{
  return &::pylon_ros2_camera_interfaces::msg::rosidl_typesupport_introspection_cpp::ComponentStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, msg, ComponentStatus)() {
  return &::pylon_ros2_camera_interfaces::msg::rosidl_typesupport_introspection_cpp::ComponentStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
