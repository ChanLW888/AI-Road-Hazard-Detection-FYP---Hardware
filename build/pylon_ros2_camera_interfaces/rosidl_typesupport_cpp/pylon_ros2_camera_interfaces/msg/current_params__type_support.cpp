// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _CurrentParams_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CurrentParams_type_support_ids_t;

static const _CurrentParams_type_support_ids_t _CurrentParams_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CurrentParams_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CurrentParams_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CurrentParams_type_support_symbol_names_t _CurrentParams_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, msg, CurrentParams)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, msg, CurrentParams)),
  }
};

typedef struct _CurrentParams_type_support_data_t
{
  void * data[2];
} _CurrentParams_type_support_data_t;

static _CurrentParams_type_support_data_t _CurrentParams_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CurrentParams_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_CurrentParams_message_typesupport_ids.typesupport_identifier[0],
  &_CurrentParams_message_typesupport_symbol_names.symbol_name[0],
  &_CurrentParams_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CurrentParams_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CurrentParams_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::msg::CurrentParams>()
{
  return &::pylon_ros2_camera_interfaces::msg::rosidl_typesupport_cpp::CurrentParams_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, msg, CurrentParams)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::msg::CurrentParams>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
