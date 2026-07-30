// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:srv/SetActionTriggerConfiguration.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/srv/detail/set_action_trigger_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action_device_key
  // action_group_key
  // action_group_mask
  // registration_mode
  // cleanup
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__fini(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * msg)
{
  if (!msg) {
    return;
  }
  // action_device_key
  // action_group_key
  // action_group_mask
  // registration_mode
  // cleanup
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__are_equal(const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * lhs, const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_device_key
  if (lhs->action_device_key != rhs->action_device_key) {
    return false;
  }
  // action_group_key
  if (lhs->action_group_key != rhs->action_group_key) {
    return false;
  }
  // action_group_mask
  if (lhs->action_group_mask != rhs->action_group_mask) {
    return false;
  }
  // registration_mode
  if (lhs->registration_mode != rhs->registration_mode) {
    return false;
  }
  // cleanup
  if (lhs->cleanup != rhs->cleanup) {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__copy(
  const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * input,
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action_device_key
  output->action_device_key = input->action_device_key;
  // action_group_key
  output->action_group_key = input->action_group_key;
  // action_group_mask
  output->action_group_mask = input->action_group_mask;
  // registration_mode
  output->registration_mode = input->registration_mode;
  // cleanup
  output->cleanup = input->cleanup;
  return true;
}

pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request *
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * msg = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request));
  bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__destroy(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__init(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence *
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request * data =
      (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__are_equal(const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * lhs, const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * rhs)
{
  if (!lhs || !rhs) {
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
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__copy(
  const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * input,
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * output)
{
  if (!input || !output) {
    return false;
  }
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

pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response *
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * msg = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response));
  bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__destroy(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__init(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * array)
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
      pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence *
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * array = (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response * data =
      (pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
