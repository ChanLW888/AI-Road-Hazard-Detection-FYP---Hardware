// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:srv/SetGamma.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_serialize(
  const pylon_ros2_camera_interfaces::srv::SetGamma_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_gamma
  cdr << ros_message.target_gamma;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pylon_ros2_camera_interfaces::srv::SetGamma_Request & ros_message)
{
  // Member: target_gamma
  cdr >> ros_message.target_gamma;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
get_serialized_size(
  const pylon_ros2_camera_interfaces::srv::SetGamma_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_gamma
  {
    size_t item_size = sizeof(ros_message.target_gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
max_serialized_size_SetGamma_Request(
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


  // Member: target_gamma
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
    using DataType = pylon_ros2_camera_interfaces::srv::SetGamma_Request;
    is_plain =
      (
      offsetof(DataType, target_gamma) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetGamma_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::srv::SetGamma_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetGamma_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pylon_ros2_camera_interfaces::srv::SetGamma_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetGamma_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::srv::SetGamma_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetGamma_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetGamma_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetGamma_Request__callbacks = {
  "pylon_ros2_camera_interfaces::srv",
  "SetGamma_Request",
  _SetGamma_Request__cdr_serialize,
  _SetGamma_Request__cdr_deserialize,
  _SetGamma_Request__get_serialized_size,
  _SetGamma_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetGamma_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetGamma_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::srv::SetGamma_Request>()
{
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, srv, SetGamma_Request)() {
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_serialize(
  const pylon_ros2_camera_interfaces::srv::SetGamma_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: reached_gamma
  cdr << ros_message.reached_gamma;
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pylon_ros2_camera_interfaces::srv::SetGamma_Response & ros_message)
{
  // Member: reached_gamma
  cdr >> ros_message.reached_gamma;

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
get_serialized_size(
  const pylon_ros2_camera_interfaces::srv::SetGamma_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: reached_gamma
  {
    size_t item_size = sizeof(ros_message.reached_gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pylon_ros2_camera_interfaces
max_serialized_size_SetGamma_Response(
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


  // Member: reached_gamma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: success
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
    using DataType = pylon_ros2_camera_interfaces::srv::SetGamma_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetGamma_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::srv::SetGamma_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetGamma_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pylon_ros2_camera_interfaces::srv::SetGamma_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetGamma_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pylon_ros2_camera_interfaces::srv::SetGamma_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetGamma_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetGamma_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetGamma_Response__callbacks = {
  "pylon_ros2_camera_interfaces::srv",
  "SetGamma_Response",
  _SetGamma_Response__cdr_serialize,
  _SetGamma_Response__cdr_deserialize,
  _SetGamma_Response__get_serialized_size,
  _SetGamma_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetGamma_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetGamma_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::srv::SetGamma_Response>()
{
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, srv, SetGamma_Response)() {
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetGamma__callbacks = {
  "pylon_ros2_camera_interfaces::srv",
  "SetGamma",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, srv, SetGamma_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, srv, SetGamma_Response)(),
};

static rosidl_service_type_support_t _SetGamma__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetGamma__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pylon_ros2_camera_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::srv::SetGamma>()
{
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, srv, SetGamma)() {
  return &pylon_ros2_camera_interfaces::srv::typesupport_fastrtps_cpp::_SetGamma__handle;
}

#ifdef __cplusplus
}
#endif
