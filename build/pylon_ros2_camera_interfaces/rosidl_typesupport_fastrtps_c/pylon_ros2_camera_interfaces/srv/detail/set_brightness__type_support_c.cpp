// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__struct.h"
#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__functions.h"
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


using _SetBrightness_Request__ros_msg_type = pylon_ros2_camera_interfaces__srv__SetBrightness_Request;

static bool _SetBrightness_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetBrightness_Request__ros_msg_type * ros_message = static_cast<const _SetBrightness_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_brightness
  {
    cdr << ros_message->target_brightness;
  }

  // Field name: brightness_continuous
  {
    cdr << (ros_message->brightness_continuous ? true : false);
  }

  // Field name: exposure_auto
  {
    cdr << (ros_message->exposure_auto ? true : false);
  }

  // Field name: gain_auto
  {
    cdr << (ros_message->gain_auto ? true : false);
  }

  return true;
}

static bool _SetBrightness_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetBrightness_Request__ros_msg_type * ros_message = static_cast<_SetBrightness_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_brightness
  {
    cdr >> ros_message->target_brightness;
  }

  // Field name: brightness_continuous
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brightness_continuous = tmp ? true : false;
  }

  // Field name: exposure_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->exposure_auto = tmp ? true : false;
  }

  // Field name: gain_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gain_auto = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t get_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetBrightness_Request__ros_msg_type * ros_message = static_cast<const _SetBrightness_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_brightness
  {
    size_t item_size = sizeof(ros_message->target_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightness_continuous
  {
    size_t item_size = sizeof(ros_message->brightness_continuous);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exposure_auto
  {
    size_t item_size = sizeof(ros_message->exposure_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gain_auto
  {
    size_t item_size = sizeof(ros_message->gain_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetBrightness_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t max_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Request(
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

  // member: target_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brightness_continuous
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: exposure_auto
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gain_auto
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
    using DataType = pylon_ros2_camera_interfaces__srv__SetBrightness_Request;
    is_plain =
      (
      offsetof(DataType, gain_auto) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetBrightness_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetBrightness_Request = {
  "pylon_ros2_camera_interfaces::srv",
  "SetBrightness_Request",
  _SetBrightness_Request__cdr_serialize,
  _SetBrightness_Request__cdr_deserialize,
  _SetBrightness_Request__get_serialized_size,
  _SetBrightness_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetBrightness_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetBrightness_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetBrightness_Request)() {
  return &_SetBrightness_Request__type_support;
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
// #include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__functions.h"
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


using _SetBrightness_Response__ros_msg_type = pylon_ros2_camera_interfaces__srv__SetBrightness_Response;

static bool _SetBrightness_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetBrightness_Response__ros_msg_type * ros_message = static_cast<const _SetBrightness_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached_brightness
  {
    cdr << ros_message->reached_brightness;
  }

  // Field name: reached_exposure_time
  {
    cdr << ros_message->reached_exposure_time;
  }

  // Field name: reached_gain_value
  {
    cdr << ros_message->reached_gain_value;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetBrightness_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetBrightness_Response__ros_msg_type * ros_message = static_cast<_SetBrightness_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reached_brightness
  {
    cdr >> ros_message->reached_brightness;
  }

  // Field name: reached_exposure_time
  {
    cdr >> ros_message->reached_exposure_time;
  }

  // Field name: reached_gain_value
  {
    cdr >> ros_message->reached_gain_value;
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
size_t get_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetBrightness_Response__ros_msg_type * ros_message = static_cast<const _SetBrightness_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reached_brightness
  {
    size_t item_size = sizeof(ros_message->reached_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reached_exposure_time
  {
    size_t item_size = sizeof(ros_message->reached_exposure_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reached_gain_value
  {
    size_t item_size = sizeof(ros_message->reached_gain_value);
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

static uint32_t _SetBrightness_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t max_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Response(
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

  // member: reached_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reached_exposure_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reached_gain_value
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
    using DataType = pylon_ros2_camera_interfaces__srv__SetBrightness_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetBrightness_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pylon_ros2_camera_interfaces__srv__SetBrightness_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetBrightness_Response = {
  "pylon_ros2_camera_interfaces::srv",
  "SetBrightness_Response",
  _SetBrightness_Response__cdr_serialize,
  _SetBrightness_Response__cdr_deserialize,
  _SetBrightness_Response__get_serialized_size,
  _SetBrightness_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetBrightness_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetBrightness_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetBrightness_Response)() {
  return &_SetBrightness_Response__type_support;
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
#include "pylon_ros2_camera_interfaces/srv/set_brightness.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetBrightness__callbacks = {
  "pylon_ros2_camera_interfaces::srv",
  "SetBrightness",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetBrightness_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetBrightness_Response)(),
};

static rosidl_service_type_support_t SetBrightness__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetBrightness__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, srv, SetBrightness)() {
  return &SetBrightness__handle;
}

#if defined(__cplusplus)
}
#endif
