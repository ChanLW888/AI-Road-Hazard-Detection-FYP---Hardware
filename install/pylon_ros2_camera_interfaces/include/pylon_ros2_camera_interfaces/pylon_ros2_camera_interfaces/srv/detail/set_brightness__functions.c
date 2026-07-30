// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_brightness__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(pylon_ros2_camera_interfaces__srv__SetBrightness_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_brightness
  // brightness_continuous
  // exposure_auto
  // gain_auto
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__fini(pylon_ros2_camera_interfaces__srv__SetBrightness_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_brightness
  // brightness_continuous
  // exposure_auto
  // gain_auto
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__are_equal(const pylon_ros2_camera_interfaces__srv__SetBrightness_Request * lhs, const pylon_ros2_camera_interfaces__srv__SetBrightness_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_brightness
  if (lhs->target_brightness != rhs->target_brightness) {
    return false;
  }
  // brightness_continuous
  if (lhs->brightness_continuous != rhs->brightness_continuous) {
    return false;
  }
  // exposure_auto
  if (lhs->exposure_auto != rhs->exposure_auto) {
    return false;
  }
  // gain_auto
  if (lhs->gain_auto != rhs->gain_auto) {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__copy(
  const pylon_ros2_camera_interfaces__srv__SetBrightness_Request * input,
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_brightness
  output->target_brightness = input->target_brightness;
  // brightness_continuous
  output->brightness_continuous = input->brightness_continuous;
  // exposure_auto
  output->exposure_auto = input->exposure_auto;
  // gain_auto
  output->gain_auto = input->gain_auto;
  return true;
}

pylon_ros2_camera_interfaces__srv__SetBrightness_Request *
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request * msg = (pylon_ros2_camera_interfaces__srv__SetBrightness_Request *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Request));
  bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__destroy(pylon_ros2_camera_interfaces__srv__SetBrightness_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetBrightness_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__init(pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetBrightness_Request *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetBrightness_Request__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetBrightness_Request__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence *
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetBrightness_Request * data =
      (pylon_ros2_camera_interfaces__srv__SetBrightness_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetBrightness_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(pylon_ros2_camera_interfaces__srv__SetBrightness_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reached_brightness
  // reached_exposure_time
  // reached_gain_value
  // success
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__fini(pylon_ros2_camera_interfaces__srv__SetBrightness_Response * msg)
{
  if (!msg) {
    return;
  }
  // reached_brightness
  // reached_exposure_time
  // reached_gain_value
  // success
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__are_equal(const pylon_ros2_camera_interfaces__srv__SetBrightness_Response * lhs, const pylon_ros2_camera_interfaces__srv__SetBrightness_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached_brightness
  if (lhs->reached_brightness != rhs->reached_brightness) {
    return false;
  }
  // reached_exposure_time
  if (lhs->reached_exposure_time != rhs->reached_exposure_time) {
    return false;
  }
  // reached_gain_value
  if (lhs->reached_gain_value != rhs->reached_gain_value) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__copy(
  const pylon_ros2_camera_interfaces__srv__SetBrightness_Response * input,
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reached_brightness
  output->reached_brightness = input->reached_brightness;
  // reached_exposure_time
  output->reached_exposure_time = input->reached_exposure_time;
  // reached_gain_value
  output->reached_gain_value = input->reached_gain_value;
  // success
  output->success = input->success;
  return true;
}

pylon_ros2_camera_interfaces__srv__SetBrightness_Response *
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response * msg = (pylon_ros2_camera_interfaces__srv__SetBrightness_Response *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Response));
  bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__destroy(pylon_ros2_camera_interfaces__srv__SetBrightness_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetBrightness_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__init(pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetBrightness_Response *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetBrightness_Response__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetBrightness_Response__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence *
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetBrightness_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetBrightness_Response * data =
      (pylon_ros2_camera_interfaces__srv__SetBrightness_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetBrightness_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetBrightness_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
