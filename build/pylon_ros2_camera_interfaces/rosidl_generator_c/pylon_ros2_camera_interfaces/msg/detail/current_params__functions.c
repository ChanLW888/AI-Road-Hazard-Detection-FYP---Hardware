// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
// Member `available_image_encoding`
// Member `current_image_encoding`
// Member `current_image_ros_encoding`
// Member `ptp_status`
// Member `ptp_servo_status`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
pylon_ros2_camera_interfaces__msg__CurrentParams__init(pylon_ros2_camera_interfaces__msg__CurrentParams * msg)
{
  if (!msg) {
    return false;
  }
  // offset_x
  // offset_y
  // reverse_x
  // reverse_y
  // black_level
  // pgi_mode
  // demosaicing_mode
  // noise_reduction
  // sharpness_enhancement
  // light_source_preset
  // balance_white_auto
  // sensor_readout_mode
  // acquisition_frame_count
  // trigger_selector
  // trigger_mode
  // trigger_source
  // trigger_activation
  // trigger_delay
  // user_set_selector
  // user_set_default_selector
  // is_sleeping
  // brightness
  // exposure
  // gain
  // gamma
  // binning_x
  // binning_y
  // temperature
  // max_num_buffer
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // available_image_encoding
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_image_encoding, 0)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // current_image_encoding
  if (!rosidl_runtime_c__String__init(&msg->current_image_encoding)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // current_image_ros_encoding
  if (!rosidl_runtime_c__String__init(&msg->current_image_ros_encoding)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // ptp_status
  if (!rosidl_runtime_c__String__init(&msg->ptp_status)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // ptp_servo_status
  if (!rosidl_runtime_c__String__init(&msg->ptp_servo_status)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  // ptp_offset
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__msg__CurrentParams__fini(pylon_ros2_camera_interfaces__msg__CurrentParams * msg)
{
  if (!msg) {
    return;
  }
  // offset_x
  // offset_y
  // reverse_x
  // reverse_y
  // black_level
  // pgi_mode
  // demosaicing_mode
  // noise_reduction
  // sharpness_enhancement
  // light_source_preset
  // balance_white_auto
  // sensor_readout_mode
  // acquisition_frame_count
  // trigger_selector
  // trigger_mode
  // trigger_source
  // trigger_activation
  // trigger_delay
  // user_set_selector
  // user_set_default_selector
  // is_sleeping
  // brightness
  // exposure
  // gain
  // gamma
  // binning_x
  // binning_y
  // temperature
  // max_num_buffer
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // available_image_encoding
  rosidl_runtime_c__String__Sequence__fini(&msg->available_image_encoding);
  // current_image_encoding
  rosidl_runtime_c__String__fini(&msg->current_image_encoding);
  // current_image_ros_encoding
  rosidl_runtime_c__String__fini(&msg->current_image_ros_encoding);
  // ptp_status
  rosidl_runtime_c__String__fini(&msg->ptp_status);
  // ptp_servo_status
  rosidl_runtime_c__String__fini(&msg->ptp_servo_status);
  // ptp_offset
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
pylon_ros2_camera_interfaces__msg__CurrentParams__are_equal(const pylon_ros2_camera_interfaces__msg__CurrentParams * lhs, const pylon_ros2_camera_interfaces__msg__CurrentParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  // reverse_x
  if (lhs->reverse_x != rhs->reverse_x) {
    return false;
  }
  // reverse_y
  if (lhs->reverse_y != rhs->reverse_y) {
    return false;
  }
  // black_level
  if (lhs->black_level != rhs->black_level) {
    return false;
  }
  // pgi_mode
  if (lhs->pgi_mode != rhs->pgi_mode) {
    return false;
  }
  // demosaicing_mode
  if (lhs->demosaicing_mode != rhs->demosaicing_mode) {
    return false;
  }
  // noise_reduction
  if (lhs->noise_reduction != rhs->noise_reduction) {
    return false;
  }
  // sharpness_enhancement
  if (lhs->sharpness_enhancement != rhs->sharpness_enhancement) {
    return false;
  }
  // light_source_preset
  if (lhs->light_source_preset != rhs->light_source_preset) {
    return false;
  }
  // balance_white_auto
  if (lhs->balance_white_auto != rhs->balance_white_auto) {
    return false;
  }
  // sensor_readout_mode
  if (lhs->sensor_readout_mode != rhs->sensor_readout_mode) {
    return false;
  }
  // acquisition_frame_count
  if (lhs->acquisition_frame_count != rhs->acquisition_frame_count) {
    return false;
  }
  // trigger_selector
  if (lhs->trigger_selector != rhs->trigger_selector) {
    return false;
  }
  // trigger_mode
  if (lhs->trigger_mode != rhs->trigger_mode) {
    return false;
  }
  // trigger_source
  if (lhs->trigger_source != rhs->trigger_source) {
    return false;
  }
  // trigger_activation
  if (lhs->trigger_activation != rhs->trigger_activation) {
    return false;
  }
  // trigger_delay
  if (lhs->trigger_delay != rhs->trigger_delay) {
    return false;
  }
  // user_set_selector
  if (lhs->user_set_selector != rhs->user_set_selector) {
    return false;
  }
  // user_set_default_selector
  if (lhs->user_set_default_selector != rhs->user_set_default_selector) {
    return false;
  }
  // is_sleeping
  if (lhs->is_sleeping != rhs->is_sleeping) {
    return false;
  }
  // brightness
  if (lhs->brightness != rhs->brightness) {
    return false;
  }
  // exposure
  if (lhs->exposure != rhs->exposure) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // gamma
  if (lhs->gamma != rhs->gamma) {
    return false;
  }
  // binning_x
  if (lhs->binning_x != rhs->binning_x) {
    return false;
  }
  // binning_y
  if (lhs->binning_y != rhs->binning_y) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // max_num_buffer
  if (lhs->max_num_buffer != rhs->max_num_buffer) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // available_image_encoding
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_image_encoding), &(rhs->available_image_encoding)))
  {
    return false;
  }
  // current_image_encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_image_encoding), &(rhs->current_image_encoding)))
  {
    return false;
  }
  // current_image_ros_encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_image_ros_encoding), &(rhs->current_image_ros_encoding)))
  {
    return false;
  }
  // ptp_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ptp_status), &(rhs->ptp_status)))
  {
    return false;
  }
  // ptp_servo_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ptp_servo_status), &(rhs->ptp_servo_status)))
  {
    return false;
  }
  // ptp_offset
  if (lhs->ptp_offset != rhs->ptp_offset) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__msg__CurrentParams__copy(
  const pylon_ros2_camera_interfaces__msg__CurrentParams * input,
  pylon_ros2_camera_interfaces__msg__CurrentParams * output)
{
  if (!input || !output) {
    return false;
  }
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  // reverse_x
  output->reverse_x = input->reverse_x;
  // reverse_y
  output->reverse_y = input->reverse_y;
  // black_level
  output->black_level = input->black_level;
  // pgi_mode
  output->pgi_mode = input->pgi_mode;
  // demosaicing_mode
  output->demosaicing_mode = input->demosaicing_mode;
  // noise_reduction
  output->noise_reduction = input->noise_reduction;
  // sharpness_enhancement
  output->sharpness_enhancement = input->sharpness_enhancement;
  // light_source_preset
  output->light_source_preset = input->light_source_preset;
  // balance_white_auto
  output->balance_white_auto = input->balance_white_auto;
  // sensor_readout_mode
  output->sensor_readout_mode = input->sensor_readout_mode;
  // acquisition_frame_count
  output->acquisition_frame_count = input->acquisition_frame_count;
  // trigger_selector
  output->trigger_selector = input->trigger_selector;
  // trigger_mode
  output->trigger_mode = input->trigger_mode;
  // trigger_source
  output->trigger_source = input->trigger_source;
  // trigger_activation
  output->trigger_activation = input->trigger_activation;
  // trigger_delay
  output->trigger_delay = input->trigger_delay;
  // user_set_selector
  output->user_set_selector = input->user_set_selector;
  // user_set_default_selector
  output->user_set_default_selector = input->user_set_default_selector;
  // is_sleeping
  output->is_sleeping = input->is_sleeping;
  // brightness
  output->brightness = input->brightness;
  // exposure
  output->exposure = input->exposure;
  // gain
  output->gain = input->gain;
  // gamma
  output->gamma = input->gamma;
  // binning_x
  output->binning_x = input->binning_x;
  // binning_y
  output->binning_y = input->binning_y;
  // temperature
  output->temperature = input->temperature;
  // max_num_buffer
  output->max_num_buffer = input->max_num_buffer;
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // available_image_encoding
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_image_encoding), &(output->available_image_encoding)))
  {
    return false;
  }
  // current_image_encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->current_image_encoding), &(output->current_image_encoding)))
  {
    return false;
  }
  // current_image_ros_encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->current_image_ros_encoding), &(output->current_image_ros_encoding)))
  {
    return false;
  }
  // ptp_status
  if (!rosidl_runtime_c__String__copy(
      &(input->ptp_status), &(output->ptp_status)))
  {
    return false;
  }
  // ptp_servo_status
  if (!rosidl_runtime_c__String__copy(
      &(input->ptp_servo_status), &(output->ptp_servo_status)))
  {
    return false;
  }
  // ptp_offset
  output->ptp_offset = input->ptp_offset;
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__msg__CurrentParams *
pylon_ros2_camera_interfaces__msg__CurrentParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__CurrentParams * msg = (pylon_ros2_camera_interfaces__msg__CurrentParams *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__msg__CurrentParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__msg__CurrentParams));
  bool success = pylon_ros2_camera_interfaces__msg__CurrentParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__msg__CurrentParams__destroy(pylon_ros2_camera_interfaces__msg__CurrentParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__init(pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__CurrentParams * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__msg__CurrentParams *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__msg__CurrentParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__msg__CurrentParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__msg__CurrentParams__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__fini(pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pylon_ros2_camera_interfaces__msg__CurrentParams__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence *
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * array = (pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__destroy(pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__are_equal(const pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * lhs, const pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__msg__CurrentParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__copy(
  const pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * input,
  pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__msg__CurrentParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__msg__CurrentParams * data =
      (pylon_ros2_camera_interfaces__msg__CurrentParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__msg__CurrentParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__msg__CurrentParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__msg__CurrentParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
