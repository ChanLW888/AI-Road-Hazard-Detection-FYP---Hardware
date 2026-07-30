// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pylon_ros2_camera_interfaces/msg/detail/component_status__rosidl_typesupport_introspection_c.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pylon_ros2_camera_interfaces/msg/detail/component_status__functions.h"
#include "pylon_ros2_camera_interfaces/msg/detail/component_status__struct.h"


// Include directives for member types
// Member `status_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__msg__ComponentStatus__init(message_memory);
}

void pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_member_array[2] = {
  {
    "status_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__msg__ComponentStatus, status_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__msg__ComponentStatus, status_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_members = {
  "pylon_ros2_camera_interfaces__msg",  // message namespace
  "ComponentStatus",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus),
  pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_member_array,  // message members
  pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, msg, ComponentStatus)() {
  if (!pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__msg__ComponentStatus__rosidl_typesupport_introspection_c__ComponentStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
