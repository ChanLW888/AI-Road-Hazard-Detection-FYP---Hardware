// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `exposure_times`
// Member `gain_values`
// Member `gamma_values`
// Member `brightness_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__fini(message_memory);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__exposure_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__exposure_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__exposure_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__exposure_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__exposure_times(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__exposure_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__exposure_times(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__exposure_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__gain_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gain_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gain_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__gain_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gain_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__gain_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gain_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__gain_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__gamma_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gamma_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gamma_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__gamma_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gamma_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__gamma_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gamma_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__gamma_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__brightness_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__brightness_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__brightness_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__brightness_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__brightness_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__brightness_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__brightness_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__brightness_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_member_array[10] = {
  {
    "exposure_given",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, exposure_given),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exposure_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, exposure_times),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__exposure_times,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__exposure_times,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__exposure_times,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__exposure_times,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__exposure_times,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__exposure_times  // resize(index) function pointer
  },
  {
    "gain_given",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, gain_given),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, gain_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__gain_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gain_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gain_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__gain_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__gain_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__gain_values  // resize(index) function pointer
  },
  {
    "gamma_given",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, gamma_given),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamma_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, gamma_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__gamma_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__gamma_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__gamma_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__gamma_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__gamma_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__gamma_values  // resize(index) function pointer
  },
  {
    "brightness_given",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, brightness_given),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brightness_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, brightness_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__size_function__GrabImages_Goal__brightness_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Goal__brightness_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__get_function__GrabImages_Goal__brightness_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Goal__brightness_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__assign_function__GrabImages_Goal__brightness_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__resize_function__GrabImages_Goal__brightness_values  // resize(index) function pointer
  },
  {
    "exposure_auto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, exposure_auto),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain_auto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Goal, gain_auto),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_Goal",  // message name
  10,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_Goal),
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Goal)() {
  if (!pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_Goal__rosidl_typesupport_introspection_c__GrabImages_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `images`
#include "sensor_msgs/msg/image.h"
// Member `images`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `cam_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `cam_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `reached_exposure_times`
// Member `reached_brightness_values`
// Member `reached_gain_values`
// Member `reached_gamma_values`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_Result__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_Result__fini(message_memory);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__images(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__images(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_exposure_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_exposure_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_exposure_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_exposure_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_exposure_times(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_exposure_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_exposure_times(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_exposure_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_brightness_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_brightness_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_brightness_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_brightness_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_brightness_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_brightness_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_brightness_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_brightness_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_gain_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gain_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gain_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_gain_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gain_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_gain_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gain_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_gain_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_gamma_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gamma_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gamma_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_gamma_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gamma_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_gamma_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gamma_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_gamma_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_member_array[7] = {
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, images),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__images,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__images,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__images,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__images,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__images,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__images  // resize(index) function pointer
  },
  {
    "cam_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, cam_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reached_exposure_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, reached_exposure_times),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_exposure_times,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_exposure_times,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_exposure_times,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_exposure_times,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_exposure_times,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_exposure_times  // resize(index) function pointer
  },
  {
    "reached_brightness_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, reached_brightness_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_brightness_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_brightness_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_brightness_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_brightness_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_brightness_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_brightness_values  // resize(index) function pointer
  },
  {
    "reached_gain_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, reached_gain_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_gain_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gain_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gain_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_gain_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_gain_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_gain_values  // resize(index) function pointer
  },
  {
    "reached_gamma_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, reached_gamma_values),  // bytes offset in struct
    NULL,  // default value
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__size_function__GrabImages_Result__reached_gamma_values,  // size() function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_const_function__GrabImages_Result__reached_gamma_values,  // get_const(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__get_function__GrabImages_Result__reached_gamma_values,  // get(index) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__fetch_function__GrabImages_Result__reached_gamma_values,  // fetch(index, &value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__assign_function__GrabImages_Result__reached_gamma_values,  // assign(index, value) function pointer
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__resize_function__GrabImages_Result__reached_gamma_values  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_Result",  // message name
  7,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_Result),
  pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Result)() {
  pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_Result__rosidl_typesupport_introspection_c__GrabImages_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_member_array[1] = {
  {
    "curr_nr_images_taken",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_Feedback, curr_nr_images_taken),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_Feedback",  // message name
  1,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_Feedback),
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Feedback)() {
  if (!pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_Feedback__rosidl_typesupport_introspection_c__GrabImages_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pylon_ros2_camera_interfaces/action/grab_images.h"
// Member `goal`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request),
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)() {
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Goal)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response),
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)() {
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_members = {
  "pylon_ros2_camera_interfaces__action",  // service namespace
  "GrabImages_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal)() {
  if (!pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)()->data;
  }

  return &pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request),
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)() {
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pylon_ros2_camera_interfaces/action/grab_images.h"
// Member `result`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response),
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)() {
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Result)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_members = {
  "pylon_ros2_camera_interfaces__action",  // service namespace
  "GrabImages_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult)() {
  if (!pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)()->data;
  }

  return &pylon_ros2_camera_interfaces__action__detail__grab_images__rosidl_typesupport_introspection_c__GrabImages_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__functions.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pylon_ros2_camera_interfaces/action/grab_images.h"
// Member `feedback`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init(message_memory);
}

void pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_fini_function(void * message_memory)
{
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_members = {
  "pylon_ros2_camera_interfaces__action",  // message namespace
  "GrabImages_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage),
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_member_array,  // message members
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_type_support_handle = {
  0,
  &pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_FeedbackMessage)() {
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pylon_ros2_camera_interfaces, action, GrabImages_Feedback)();
  if (!pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__rosidl_typesupport_introspection_c__GrabImages_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
