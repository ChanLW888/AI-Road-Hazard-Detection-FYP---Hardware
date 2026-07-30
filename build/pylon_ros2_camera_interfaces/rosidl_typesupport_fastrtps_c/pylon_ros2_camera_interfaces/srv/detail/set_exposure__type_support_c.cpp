// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetExposure.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__struct.h"
#include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetExposure_Request__ros_msg_type = pylon_ros2_camera_interfaces__srv__SetExposure_Request;

static bool _SetExposure_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetExposure_Request__ros_msg_type * ros_message = static_cast<const _SetExposure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_exposure
  {
    cdr << ros_message->target_exposure;
  }

  return true;
}

static bool _SetExposure_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetExposure_Request__ros_msg_type * ros_message = static_cast<_SetExposure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_exposure
  {
    cdr >> ros_message->target_exposure;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t get_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetExposure_Request__ros_msg_type * ros_message = static_cast<const _SetExposure_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_exposure
  {
    size_t item_size = sizeof(ros_message->target_exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetExposure_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t max_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: target_exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pylon_ros2_camera_interfaces__srv__SetExposure_Request;
    is_plain =
      (
      offsetof(DataType, target_exposure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetExposure_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetExposure_Request = {
  "pylon_ros2_camera_interfaces::srv",
  "SetExposure_Request",
  _SetExposure_Request__cdr_serialize,
  _SetExposure_Request__cdr_deserialize,
  _SetExposure_Request__get_serialized_size,
  _SetExposure_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetExposure_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetExposure_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetExposure_Request)() {
  return &_SetExposure_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/set_exposure__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetExposure_Response__ros_msg_type = pylon_ros2_camera_interfaces__srv__SetExposure_Response;

static bool _SetExposure_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetExposure_Response__ros_msg_type * ros_message = static_cast<const _SetExposure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached_exposure
  {
    cdr << ros_message->reached_exposure;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetExposure_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetExposure_Response__ros_msg_type * ros_message = static_cast<_SetExposure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached_exposure
  {
    cdr >> ros_message->reached_exposure;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t get_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetExposure_Response__ros_msg_type * ros_message = static_cast<const _SetExposure_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reached_exposure
  {
    size_t item_size = sizeof(ros_message->reached_exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetExposure_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t max_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: reached_exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pylon_ros2_camera_interfaces__srv__SetExposure_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetExposure_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pylon_ros2_camera_interfaces__srv__SetExposure_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetExposure_Response = {
  "pylon_ros2_camera_interfaces::srv",
  "SetExposure_Response",
  _SetExposure_Response__cdr_serialize,
  _SetExposure_Response__cdr_deserialize,
  _SetExposure_Response__get_serialized_size,
  _SetExposure_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetExposure_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetExposure_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetExposure_Response)() {
  return &_SetExposure_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pylon_ros2_camera_interfaces/srv/set_exposure.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetExposure__callbacks = {
  "pylon_ros2_camera_interfaces::srv",
  "SetExposure",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetExposure_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetExposure_Response)(),
};

static rosidl_service_type_support_t SetExposure__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetExposure__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetExposure)() {
  return &SetExposure__handle;
}

#if defined(__cplusplus)
}
#endif
