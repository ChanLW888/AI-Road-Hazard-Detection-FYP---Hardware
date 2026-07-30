// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:srv/GetStringValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pylon_ros2_camera_interfaces/srv/detail/get_string_value__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetStringValue_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::srv::GetStringValue_Request(_init);
}

void GetStringValue_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::srv::GetStringValue_Request *>(message_memory);
  typed_message->~GetStringValue_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStringValue_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::srv::GetStringValue_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStringValue_Request_message_members = {
  "pylon_ros2_camera_interfaces::srv",  // message namespace
  "GetStringValue_Request",  // message name
  1,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::srv::GetStringValue_Request),
  GetStringValue_Request_message_member_array,  // message members
  GetStringValue_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStringValue_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStringValue_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStringValue_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::srv::GetStringValue_Request>()
{
  return &::pylon_ros2_camera_interfaces::srv::rosidl_typesupport_introspection_cpp::GetStringValue_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, srv, GetStringValue_Request)() {
  return &::pylon_ros2_camera_interfaces::srv::rosidl_typesupport_introspection_cpp::GetStringValue_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/get_string_value__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetStringValue_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::srv::GetStringValue_Response(_init);
}

void GetStringValue_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::srv::GetStringValue_Response *>(message_memory);
  typed_message->~GetStringValue_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStringValue_Response_message_member_array[3] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::srv::GetStringValue_Response, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::srv::GetStringValue_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::srv::GetStringValue_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStringValue_Response_message_members = {
  "pylon_ros2_camera_interfaces::srv",  // message namespace
  "GetStringValue_Response",  // message name
  3,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::srv::GetStringValue_Response),
  GetStringValue_Response_message_member_array,  // message members
  GetStringValue_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStringValue_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStringValue_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStringValue_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::srv::GetStringValue_Response>()
{
  return &::pylon_ros2_camera_interfaces::srv::rosidl_typesupport_introspection_cpp::GetStringValue_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, srv, GetStringValue_Response)() {
  return &::pylon_ros2_camera_interfaces::srv::rosidl_typesupport_introspection_cpp::GetStringValue_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/get_string_value__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetStringValue_service_members = {
  "pylon_ros2_camera_interfaces::srv",  // service namespace
  "GetStringValue",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pylon_ros2_camera_interfaces::srv::GetStringValue>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetStringValue_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStringValue_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::srv::GetStringValue>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pylon_ros2_camera_interfaces::srv::rosidl_typesupport_introspection_cpp::GetStringValue_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::srv::GetStringValue_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::srv::GetStringValue_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, srv, GetStringValue)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::srv::GetStringValue>();
}

#ifdef __cplusplus
}
#endif
