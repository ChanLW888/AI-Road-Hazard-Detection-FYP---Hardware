// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:srv/SetROI.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_roi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__init(pylon_ros2_camera_interfaces__srv__SetROI_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->target_roi)) {
    pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(pylon_ros2_camera_interfaces__srv__SetROI_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->target_roi);
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__are_equal(const pylon_ros2_camera_interfaces__srv__SetROI_Request * lhs, const pylon_ros2_camera_interfaces__srv__SetROI_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->target_roi), &(rhs->target_roi)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__copy(
  const pylon_ros2_camera_interfaces__srv__SetROI_Request * input,
  pylon_ros2_camera_interfaces__srv__SetROI_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->target_roi), &(output->target_roi)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__srv__SetROI_Request *
pylon_ros2_camera_interfaces__srv__SetROI_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Request * msg = (pylon_ros2_camera_interfaces__srv__SetROI_Request *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Request));
  bool success = pylon_ros2_camera_interfaces__srv__SetROI_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Request__destroy(pylon_ros2_camera_interfaces__srv__SetROI_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__init(pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Request * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetROI_Request *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetROI_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence *
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetROI_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetROI_Request * data =
      (pylon_ros2_camera_interfaces__srv__SetROI_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetROI_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetROI_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetROI_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reached_roi`
// already included above
// #include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__init(pylon_ros2_camera_interfaces__srv__SetROI_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reached_roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->reached_roi)) {
    pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(pylon_ros2_camera_interfaces__srv__SetROI_Response * msg)
{
  if (!msg) {
    return;
  }
  // reached_roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->reached_roi);
  // success
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__are_equal(const pylon_ros2_camera_interfaces__srv__SetROI_Response * lhs, const pylon_ros2_camera_interfaces__srv__SetROI_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached_roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->reached_roi), &(rhs->reached_roi)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__copy(
  const pylon_ros2_camera_interfaces__srv__SetROI_Response * input,
  pylon_ros2_camera_interfaces__srv__SetROI_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reached_roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->reached_roi), &(output->reached_roi)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pylon_ros2_camera_interfaces__srv__SetROI_Response *
pylon_ros2_camera_interfaces__srv__SetROI_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Response * msg = (pylon_ros2_camera_interfaces__srv__SetROI_Response *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Response));
  bool success = pylon_ros2_camera_interfaces__srv__SetROI_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Response__destroy(pylon_ros2_camera_interfaces__srv__SetROI_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__init(pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Response * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetROI_Response *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetROI_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence *
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetROI_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetROI_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetROI_Response * data =
      (pylon_ros2_camera_interfaces__srv__SetROI_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetROI_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetROI_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetROI_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
