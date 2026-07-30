// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `exposure_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // exposure_given
  // exposure_times
  if (!rosidl_runtime_c__float__Sequence__init(&msg->exposure_times, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * msg)
{
  if (!msg) {
    return;
  }
  // exposure_given
  // exposure_times
  rosidl_runtime_c__float__Sequence__fini(&msg->exposure_times);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exposure_given
  if (lhs->exposure_given != rhs->exposure_given) {
    return false;
  }
  // exposure_times
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->exposure_times), &(rhs->exposure_times)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // exposure_given
  output->exposure_given = input->exposure_given;
  // exposure_times
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->exposure_times), &(output->exposure_times)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `point_clouds`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `intensity_maps`
// Member `depth_maps`
// Member `depth_color_maps`
// Member `confidence_maps`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `cam_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `reached_exposure_times`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * msg)
{
  if (!msg) {
    return false;
  }
  // point_clouds
  if (!sensor_msgs__msg__PointCloud2__Sequence__init(&msg->point_clouds, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // intensity_maps
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->intensity_maps, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // depth_maps
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->depth_maps, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // depth_color_maps
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->depth_color_maps, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // confidence_maps
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->confidence_maps, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // cam_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->cam_info)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // reached_exposure_times
  if (!rosidl_runtime_c__float__Sequence__init(&msg->reached_exposure_times, 0)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
    return false;
  }
  // success
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * msg)
{
  if (!msg) {
    return;
  }
  // point_clouds
  sensor_msgs__msg__PointCloud2__Sequence__fini(&msg->point_clouds);
  // intensity_maps
  sensor_msgs__msg__Image__Sequence__fini(&msg->intensity_maps);
  // depth_maps
  sensor_msgs__msg__Image__Sequence__fini(&msg->depth_maps);
  // depth_color_maps
  sensor_msgs__msg__Image__Sequence__fini(&msg->depth_color_maps);
  // confidence_maps
  sensor_msgs__msg__Image__Sequence__fini(&msg->confidence_maps);
  // cam_info
  sensor_msgs__msg__CameraInfo__fini(&msg->cam_info);
  // reached_exposure_times
  rosidl_runtime_c__float__Sequence__fini(&msg->reached_exposure_times);
  // success
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point_clouds
  if (!sensor_msgs__msg__PointCloud2__Sequence__are_equal(
      &(lhs->point_clouds), &(rhs->point_clouds)))
  {
    return false;
  }
  // intensity_maps
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->intensity_maps), &(rhs->intensity_maps)))
  {
    return false;
  }
  // depth_maps
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->depth_maps), &(rhs->depth_maps)))
  {
    return false;
  }
  // depth_color_maps
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->depth_color_maps), &(rhs->depth_color_maps)))
  {
    return false;
  }
  // confidence_maps
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->confidence_maps), &(rhs->confidence_maps)))
  {
    return false;
  }
  // cam_info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->cam_info), &(rhs->cam_info)))
  {
    return false;
  }
  // reached_exposure_times
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->reached_exposure_times), &(rhs->reached_exposure_times)))
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // point_clouds
  if (!sensor_msgs__msg__PointCloud2__Sequence__copy(
      &(input->point_clouds), &(output->point_clouds)))
  {
    return false;
  }
  // intensity_maps
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->intensity_maps), &(output->intensity_maps)))
  {
    return false;
  }
  // depth_maps
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->depth_maps), &(output->depth_maps)))
  {
    return false;
  }
  // depth_color_maps
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->depth_color_maps), &(output->depth_color_maps)))
  {
    return false;
  }
  // confidence_maps
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->confidence_maps), &(output->confidence_maps)))
  {
    return false;
  }
  // cam_info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->cam_info), &(output->cam_info)))
  {
    return false;
  }
  // reached_exposure_times
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->reached_exposure_times), &(output->reached_exposure_times)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_Result *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Result *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Result *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // curr_nr_data_acquired
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // curr_nr_data_acquired
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // curr_nr_data_acquired
  if (lhs->curr_nr_data_acquired != rhs->curr_nr_data_acquired) {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // curr_nr_data_acquired
  output->curr_nr_data_acquired = input->curr_nr_data_acquired;
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(&msg->goal)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__fini(&msg->goal);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request *
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response *
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request *
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(&msg->result)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__fini(&msg->result);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response *
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__functions.h"

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(&msg->feedback)) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__fini(&msg->feedback);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage *
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * msg = (pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage));
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__init(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * data = NULL;

  if (size) {
    data = (pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(&data[i - 1]);
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
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * array)
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
      pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(&array->data[i]);
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

pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence *
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * array = (pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * data =
      (pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
