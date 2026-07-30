// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.h"
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__functions.h"
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

#include "rosidl_runtime_c/string.h"  // available_image_encoding, current_image_encoding, current_image_ros_encoding, message, ptp_servo_status, ptp_status
#include "rosidl_runtime_c/string_functions.h"  // available_image_encoding, current_image_encoding, current_image_ros_encoding, message, ptp_servo_status, ptp_status
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // roi

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pylon_ros2_camera_interfaces
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pylon_ros2_camera_interfaces
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pylon_ros2_camera_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();


using _CurrentParams__ros_msg_type = pylon_ros2_camera_interfaces__msg__CurrentParams;

static bool _CurrentParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CurrentParams__ros_msg_type * ros_message = static_cast<const _CurrentParams__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: reverse_x
  {
    cdr << (ros_message->reverse_x ? true : false);
  }

  // Field name: reverse_y
  {
    cdr << (ros_message->reverse_y ? true : false);
  }

  // Field name: black_level
  {
    cdr << ros_message->black_level;
  }

  // Field name: pgi_mode
  {
    cdr << ros_message->pgi_mode;
  }

  // Field name: demosaicing_mode
  {
    cdr << ros_message->demosaicing_mode;
  }

  // Field name: noise_reduction
  {
    cdr << ros_message->noise_reduction;
  }

  // Field name: sharpness_enhancement
  {
    cdr << ros_message->sharpness_enhancement;
  }

  // Field name: light_source_preset
  {
    cdr << ros_message->light_source_preset;
  }

  // Field name: balance_white_auto
  {
    cdr << ros_message->balance_white_auto;
  }

  // Field name: sensor_readout_mode
  {
    cdr << ros_message->sensor_readout_mode;
  }

  // Field name: acquisition_frame_count
  {
    cdr << ros_message->acquisition_frame_count;
  }

  // Field name: trigger_selector
  {
    cdr << ros_message->trigger_selector;
  }

  // Field name: trigger_mode
  {
    cdr << ros_message->trigger_mode;
  }

  // Field name: trigger_source
  {
    cdr << ros_message->trigger_source;
  }

  // Field name: trigger_activation
  {
    cdr << ros_message->trigger_activation;
  }

  // Field name: trigger_delay
  {
    cdr << ros_message->trigger_delay;
  }

  // Field name: user_set_selector
  {
    cdr << ros_message->user_set_selector;
  }

  // Field name: user_set_default_selector
  {
    cdr << ros_message->user_set_default_selector;
  }

  // Field name: is_sleeping
  {
    cdr << (ros_message->is_sleeping ? true : false);
  }

  // Field name: brightness
  {
    cdr << ros_message->brightness;
  }

  // Field name: exposure
  {
    cdr << ros_message->exposure;
  }

  // Field name: gain
  {
    cdr << ros_message->gain;
  }

  // Field name: gamma
  {
    cdr << ros_message->gamma;
  }

  // Field name: binning_x
  {
    cdr << ros_message->binning_x;
  }

  // Field name: binning_y
  {
    cdr << ros_message->binning_y;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: max_num_buffer
  {
    cdr << ros_message->max_num_buffer;
  }

  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roi, cdr))
    {
      return false;
    }
  }

  // Field name: available_image_encoding
  {
    size_t size = ros_message->available_image_encoding.size;
    auto array_ptr = ros_message->available_image_encoding.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: current_image_encoding
  {
    const rosidl_runtime_c__String * str = &ros_message->current_image_encoding;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_image_ros_encoding
  {
    const rosidl_runtime_c__String * str = &ros_message->current_image_ros_encoding;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ptp_status
  {
    const rosidl_runtime_c__String * str = &ros_message->ptp_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ptp_servo_status
  {
    const rosidl_runtime_c__String * str = &ros_message->ptp_servo_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ptp_offset
  {
    cdr << ros_message->ptp_offset;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CurrentParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CurrentParams__ros_msg_type * ros_message = static_cast<_CurrentParams__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: reverse_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverse_x = tmp ? true : false;
  }

  // Field name: reverse_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverse_y = tmp ? true : false;
  }

  // Field name: black_level
  {
    cdr >> ros_message->black_level;
  }

  // Field name: pgi_mode
  {
    cdr >> ros_message->pgi_mode;
  }

  // Field name: demosaicing_mode
  {
    cdr >> ros_message->demosaicing_mode;
  }

  // Field name: noise_reduction
  {
    cdr >> ros_message->noise_reduction;
  }

  // Field name: sharpness_enhancement
  {
    cdr >> ros_message->sharpness_enhancement;
  }

  // Field name: light_source_preset
  {
    cdr >> ros_message->light_source_preset;
  }

  // Field name: balance_white_auto
  {
    cdr >> ros_message->balance_white_auto;
  }

  // Field name: sensor_readout_mode
  {
    cdr >> ros_message->sensor_readout_mode;
  }

  // Field name: acquisition_frame_count
  {
    cdr >> ros_message->acquisition_frame_count;
  }

  // Field name: trigger_selector
  {
    cdr >> ros_message->trigger_selector;
  }

  // Field name: trigger_mode
  {
    cdr >> ros_message->trigger_mode;
  }

  // Field name: trigger_source
  {
    cdr >> ros_message->trigger_source;
  }

  // Field name: trigger_activation
  {
    cdr >> ros_message->trigger_activation;
  }

  // Field name: trigger_delay
  {
    cdr >> ros_message->trigger_delay;
  }

  // Field name: user_set_selector
  {
    cdr >> ros_message->user_set_selector;
  }

  // Field name: user_set_default_selector
  {
    cdr >> ros_message->user_set_default_selector;
  }

  // Field name: is_sleeping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_sleeping = tmp ? true : false;
  }

  // Field name: brightness
  {
    cdr >> ros_message->brightness;
  }

  // Field name: exposure
  {
    cdr >> ros_message->exposure;
  }

  // Field name: gain
  {
    cdr >> ros_message->gain;
  }

  // Field name: gamma
  {
    cdr >> ros_message->gamma;
  }

  // Field name: binning_x
  {
    cdr >> ros_message->binning_x;
  }

  // Field name: binning_y
  {
    cdr >> ros_message->binning_y;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: max_num_buffer
  {
    cdr >> ros_message->max_num_buffer;
  }

  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roi))
    {
      return false;
    }
  }

  // Field name: available_image_encoding
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->available_image_encoding.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->available_image_encoding);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->available_image_encoding, size)) {
      fprintf(stderr, "failed to create array for field 'available_image_encoding'");
      return false;
    }
    auto array_ptr = ros_message->available_image_encoding.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'available_image_encoding'\n");
        return false;
      }
    }
  }

  // Field name: current_image_encoding
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_image_encoding.data) {
      rosidl_runtime_c__String__init(&ros_message->current_image_encoding);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_image_encoding,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_image_encoding'\n");
      return false;
    }
  }

  // Field name: current_image_ros_encoding
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_image_ros_encoding.data) {
      rosidl_runtime_c__String__init(&ros_message->current_image_ros_encoding);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_image_ros_encoding,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_image_ros_encoding'\n");
      return false;
    }
  }

  // Field name: ptp_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ptp_status.data) {
      rosidl_runtime_c__String__init(&ros_message->ptp_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ptp_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ptp_status'\n");
      return false;
    }
  }

  // Field name: ptp_servo_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ptp_servo_status.data) {
      rosidl_runtime_c__String__init(&ros_message->ptp_servo_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ptp_servo_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ptp_servo_status'\n");
      return false;
    }
  }

  // Field name: ptp_offset
  {
    cdr >> ros_message->ptp_offset;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t get_serialized_size_pylon_ros2_camera_interfaces__msg__CurrentParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurrentParams__ros_msg_type * ros_message = static_cast<const _CurrentParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse_x
  {
    size_t item_size = sizeof(ros_message->reverse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse_y
  {
    size_t item_size = sizeof(ros_message->reverse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name black_level
  {
    size_t item_size = sizeof(ros_message->black_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pgi_mode
  {
    size_t item_size = sizeof(ros_message->pgi_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name demosaicing_mode
  {
    size_t item_size = sizeof(ros_message->demosaicing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise_reduction
  {
    size_t item_size = sizeof(ros_message->noise_reduction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sharpness_enhancement
  {
    size_t item_size = sizeof(ros_message->sharpness_enhancement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_source_preset
  {
    size_t item_size = sizeof(ros_message->light_source_preset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_white_auto
  {
    size_t item_size = sizeof(ros_message->balance_white_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_readout_mode
  {
    size_t item_size = sizeof(ros_message->sensor_readout_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acquisition_frame_count
  {
    size_t item_size = sizeof(ros_message->acquisition_frame_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger_selector
  {
    size_t item_size = sizeof(ros_message->trigger_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger_mode
  {
    size_t item_size = sizeof(ros_message->trigger_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger_source
  {
    size_t item_size = sizeof(ros_message->trigger_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger_activation
  {
    size_t item_size = sizeof(ros_message->trigger_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger_delay
  {
    size_t item_size = sizeof(ros_message->trigger_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_set_selector
  {
    size_t item_size = sizeof(ros_message->user_set_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_set_default_selector
  {
    size_t item_size = sizeof(ros_message->user_set_default_selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_sleeping
  {
    size_t item_size = sizeof(ros_message->is_sleeping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightness
  {
    size_t item_size = sizeof(ros_message->brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exposure
  {
    size_t item_size = sizeof(ros_message->exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gain
  {
    size_t item_size = sizeof(ros_message->gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gamma
  {
    size_t item_size = sizeof(ros_message->gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name binning_x
  {
    size_t item_size = sizeof(ros_message->binning_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name binning_y
  {
    size_t item_size = sizeof(ros_message->binning_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_num_buffer
  {
    size_t item_size = sizeof(ros_message->max_num_buffer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roi

  current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->roi), current_alignment);
  // field.name available_image_encoding
  {
    size_t array_size = ros_message->available_image_encoding.size;
    auto array_ptr = ros_message->available_image_encoding.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name current_image_encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_image_encoding.size + 1);
  // field.name current_image_ros_encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_image_ros_encoding.size + 1);
  // field.name ptp_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ptp_status.size + 1);
  // field.name ptp_servo_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ptp_servo_status.size + 1);
  // field.name ptp_offset
  {
    size_t item_size = sizeof(ros_message->ptp_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CurrentParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pylon_ros2_camera_interfaces__msg__CurrentParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pylon_ros2_camera_interfaces
size_t max_serialized_size_pylon_ros2_camera_interfaces__msg__CurrentParams(
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

  // member: offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reverse_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reverse_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: black_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pgi_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: demosaicing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: noise_reduction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sharpness_enhancement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: light_source_preset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: balance_white_auto
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor_readout_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acquisition_frame_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trigger_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trigger_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trigger_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trigger_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trigger_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: user_set_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: user_set_default_selector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_sleeping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gamma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: binning_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: binning_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_num_buffer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roi
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: available_image_encoding
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_image_encoding
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_image_ros_encoding
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ptp_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ptp_servo_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ptp_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pylon_ros2_camera_interfaces__msg__CurrentParams;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CurrentParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pylon_ros2_camera_interfaces__msg__CurrentParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CurrentParams = {
  "pylon_ros2_camera_interfaces::msg",
  "CurrentParams",
  _CurrentParams__cdr_serialize,
  _CurrentParams__cdr_deserialize,
  _CurrentParams__get_serialized_size,
  _CurrentParams__max_serialized_size
};

static rosidl_message_type_support_t _CurrentParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CurrentParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pylon_ros2_camera_interfaces, msg, CurrentParams)() {
  return &_CurrentParams__type_support;
}

#if defined(__cplusplus)
}
#endif
