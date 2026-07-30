// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pylon_ros2_camera_interfaces:srv/SetIntegerValue.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_INTEGER_VALUE__FUNCTIONS_H_
#define PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_INTEGER_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pylon_ros2_camera_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pylon_ros2_camera_interfaces/srv/detail/set_integer_value__struct.h"

/// Initialize srv/SetIntegerValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request
 * )) before or use
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * msg);

/// Finalize srv/SetIntegerValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__fini(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * msg);

/// Create srv/SetIntegerValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request *
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__create();

/// Destroy srv/SetIntegerValue message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__destroy(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * msg);

/// Check for srv/SetIntegerValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__are_equal(const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * lhs, const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * rhs);

/// Copy a srv/SetIntegerValue message.
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
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__copy(
  const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * input,
  pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request * output);

/// Initialize array of srv/SetIntegerValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__init(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetIntegerValue messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * array);

/// Create array of srv/SetIntegerValue messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence *
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetIntegerValue messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * array);

/// Check for srv/SetIntegerValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * rhs);

/// Copy an array of srv/SetIntegerValue messages.
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
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence * output);

/// Initialize srv/SetIntegerValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response
 * )) before or use
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * msg);

/// Finalize srv/SetIntegerValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__fini(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * msg);

/// Create srv/SetIntegerValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response *
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__create();

/// Destroy srv/SetIntegerValue message.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__destroy(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * msg);

/// Check for srv/SetIntegerValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__are_equal(const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * lhs, const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * rhs);

/// Copy a srv/SetIntegerValue message.
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
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__copy(
  const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * input,
  pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response * output);

/// Initialize array of srv/SetIntegerValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__init(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetIntegerValue messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__fini(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * array);

/// Create array of srv/SetIntegerValue messages.
/**
 * It allocates the memory for the array and calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence *
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetIntegerValue messages.
/**
 * It calls
 * pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
void
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__destroy(pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * array);

/// Check for srv/SetIntegerValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pylon_ros2_camera_interfaces
bool
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__are_equal(const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * lhs, const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * rhs);

/// Copy an array of srv/SetIntegerValue messages.
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
pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__copy(
  const pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * input,
  pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__SRV__DETAIL__SET_INTEGER_VALUE__FUNCTIONS_H_
