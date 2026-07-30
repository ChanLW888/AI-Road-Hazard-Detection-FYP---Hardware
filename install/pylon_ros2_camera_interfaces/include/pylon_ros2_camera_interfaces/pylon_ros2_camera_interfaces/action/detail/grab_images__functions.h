// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__FUNCTIONS_H_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__init(pylon_ros2_camera_interfaces__action__GrabImages_Goal * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Goal__fini(pylon_ros2_camera_interfaces__action__GrabImages_Goal * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Goal *
pylon_ros2_camera_interfaces__action__GrabImages_Goal__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Goal__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Goal * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Goal * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Goal * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Goal * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Goal * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_Result
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__init(pylon_ros2_camera_interfaces__action__GrabImages_Result * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Result__fini(pylon_ros2_camera_interfaces__action__GrabImages_Result * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Result *
pylon_ros2_camera_interfaces__action__GrabImages_Result__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Result__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Result * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Result * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Result * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Result * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Result * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init(pylon_ros2_camera_interfaces__action__GrabImages_Feedback * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__fini(pylon_ros2_camera_interfaces__action__GrabImages_Feedback * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Feedback *
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Feedback * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Feedback * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Feedback * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Feedback * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__fini(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request *
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__destroy(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * input,
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__fini(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response *
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__destroy(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * input,
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__fini(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request *
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__destroy(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * input,
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__fini(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response *
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__destroy(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * input,
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence * output);

/// Initialize action/GrabImages message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage
 * )) before or use
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * msg);

/// Finalize action/GrabImages message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__fini(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * msg);

/// Create action/GrabImages message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage *
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__create();

/// Destroy action/GrabImages message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__destroy(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * msg);

/// Check for action/GrabImages message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * rhs);

/// Copy a action/GrabImages message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * input,
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * output);

/// Initialize array of action/GrabImages messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__init(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__fini(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * array);

/// Create array of action/GrabImages messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence *
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GrabImages messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__destroy(pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * array);

/// Check for action/GrabImages message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__are_equal(const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * lhs, const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GrabImages messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__copy(
  const pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * input,
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__FUNCTIONS_H_
