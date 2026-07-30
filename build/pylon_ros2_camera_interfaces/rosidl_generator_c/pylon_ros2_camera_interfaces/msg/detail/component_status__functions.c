// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:msg/ComponentStatus.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/msg/detail/component_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__init(pylon_ros2_camera_interfaces__msg__ComponentStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status_id
  // status_msg
  if (!rosidl_runtime_c__String__init(&msg->status_msg)) {
    pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(pylon_ros2_camera_interfaces__msg__ComponentStatus * msg)
{
  if (!msg) {
    return;
  }
  // status_id
  // status_msg
  rosidl_runtime_c__String__fini(&msg->status_msg);
}

bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__are_equal(const pylon_ros2_camera_interfaces__msg__ComponentStatus * lhs, const pylon_ros2_camera_interfaces__msg__ComponentStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status_id
  if (lhs->status_id != rhs->status_id) {
    return false;
  }
  // status_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_msg), &(rhs->status_msg)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__copy(
  const pylon_ros2_camera_interfaces__msg__ComponentStatus * input,
  pylon_ros2_camera_interfaces__msg__ComponentStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status_id
  output->status_id = input->status_id;
  // status_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->status_msg), &(output->status_msg)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__msg__ComponentStatus *
pylon_ros2_camera_interfaces__msg__ComponentStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__ComponentStatus * msg = (pylon_ros2_camera_interfaces__msg__ComponentStatus *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus));
  bool success = pylon_ros2_camera_interfaces__msg__ComponentStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__msg__ComponentStatus__destroy(pylon_ros2_camera_interfaces__msg__ComponentStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__init(pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__ComponentStatus * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__msg__ComponentStatus *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__msg__ComponentStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__fini(pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * array)
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
      pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence *
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * array = (pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__destroy(pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__are_equal(const pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * lhs, const pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__msg__ComponentStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__copy(
  const pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * input,
  pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__msg__ComponentStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__msg__ComponentStatus * data =
      (pylon_ros2_camera_interfaces__msg__ComponentStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__msg__ComponentStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__msg__ComponentStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__msg__ComponentStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
