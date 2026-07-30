// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'exposure_times'
// Member 'gain_values'
// Member 'gamma_values'
// Member 'brightness_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Goal
{
  /// Flag which indicates if the exposure times are provided and hence should be
  /// set before grabbing
  bool exposure_given;
  /// Only relevant, if exposure_given is true:
  /// The list of target exposure times in microseconds.
  /// It is possible to grab only one image as well as several images with
  /// different exposure times. This values can be overriden from the brightness
  /// search, in case that the flag exposure_fixed is not true.
  rosidl_runtime_c__float__Sequence exposure_times;
  /// Flag which indicates if the gain is provided and hence should be set before
  /// grabbing
  bool gain_given;
  /// Only relevant, if gain_given is true:
  /// The target gain in percent of the maximal value the camera supports.
  /// For USB cameras, the gain is in dB, for GigE cameras it is given in so
  /// called 'device specific units'. This value can be overriden from the
  /// brightness search, in case that the gain_fixed flag is set to false.
  rosidl_runtime_c__float__Sequence gain_values;
  /// Flag which indicates if the gamma value is provided and hence should be set
  /// before grabbing
  bool gamma_given;
  /// Only relevant, if gain_given is true:
  /// Gamma correction of pixel intensity.
  /// Adjusts the brightness of the pixel values output by the camera's sensor
  /// to account for a non-linearity in the human perception of brightness or
  /// of the display system (such as CRT).
  rosidl_runtime_c__float__Sequence gamma_values;
  /// Flag which indicates if the brightness values are provided and hence should
  /// be set before grabbing
  bool brightness_given;
  /// Only relevant, if brightness_given is true:
  /// The average intensity values of the images. It depends the exposure time
  /// as well as the gain setting.
  rosidl_runtime_c__float__Sequence brightness_values;
  /// Only relevant, if brightness_given is true:
  /// If the camera should try reach the desired brightness, at least one of the
  /// following flags MUST be set. If both are set, the interface will use the
  /// profile that tries to keep the gain at minimum to reduce white noise.
  /// 'exposure_auto' will adapt the exposure time to reach the brightness, wheras
  /// 'gain_auto' does so by adapting the gain. If one of these flags is set to
  /// false, the connected property will be kept fix.
  /// In most of the cases trying to reach a target brightness only by varying the
  /// gain and keeping the exposure time fix is not a good approach, because the
  /// exposure range is many times higher than the gain range.
  bool exposure_auto;
  bool gain_auto;
} pylon_ros2_camera_interfaces__action__GrabImages_Goal;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_Goal.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'images'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'reached_exposure_times'
// Member 'reached_brightness_values'
// Member 'reached_gain_values'
// Member 'reached_gamma_values'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Result
{
  /// The resulting images with the inquired image intensity settings.
  /// The size of the vector equals the size of the exposure_times or the
  /// brightness_values-vector
  sensor_msgs__msg__Image__Sequence images;
  /// The CameraInfo obejct describing the camera properties for the above image
  /// sequence. Static in many cases, but can also support variable binning setting
  sensor_msgs__msg__CameraInfo cam_info;
  /// The reached values of the images e.g., the values that were set to the camera
  /// before the grab
  rosidl_runtime_c__float__Sequence reached_exposure_times;
  rosidl_runtime_c__float__Sequence reached_brightness_values;
  rosidl_runtime_c__float__Sequence reached_gain_values;
  rosidl_runtime_c__float__Sequence reached_gamma_values;
  /// Flag which indicates the success of the grabbing action
  /// In case of failure, the images-vector contains only the images, that could be
  /// grabbed before the failure occurred.
  bool success;
} pylon_ros2_camera_interfaces__action__GrabImages_Result;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_Result.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Feedback
{
  int32_t curr_nr_images_taken;
} pylon_ros2_camera_interfaces__action__GrabImages_Feedback;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_Feedback.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pylon_ros2_camera_interfaces__action__GrabImages_Goal goal;
} pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response
{
  int8_t status;
  pylon_ros2_camera_interfaces__action__GrabImages_Result result;
} pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.h"

/// Struct defined in action/GrabImages in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pylon_ros2_camera_interfaces__action__GrabImages_Feedback feedback;
} pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage.
typedef struct pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_H_
