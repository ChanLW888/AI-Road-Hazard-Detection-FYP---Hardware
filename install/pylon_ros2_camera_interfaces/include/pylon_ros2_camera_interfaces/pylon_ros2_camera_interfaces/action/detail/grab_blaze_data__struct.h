// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_H_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal
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
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point_clouds'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'intensity_maps'
// Member 'depth_maps'
// Member 'depth_color_maps'
// Member 'confidence_maps'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'reached_exposure_times'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Result
{
  /// Data acquired from blaze
  sensor_msgs__msg__PointCloud2__Sequence point_clouds;
  sensor_msgs__msg__Image__Sequence intensity_maps;
  sensor_msgs__msg__Image__Sequence depth_maps;
  sensor_msgs__msg__Image__Sequence depth_color_maps;
  sensor_msgs__msg__Image__Sequence confidence_maps;
  /// The CameraInfo obejct describing the camera properties for the above image
  /// sequence. Static in many cases, but can also support variable binning setting
  sensor_msgs__msg__CameraInfo cam_info;
  /// The reached values of the images e.g., the values that were set to the camera
  /// before the grab
  rosidl_runtime_c__float__Sequence reached_exposure_times;
  /// Flag which indicates the success of the grabbing action
  /// In case of failure, the images-vector contains only the images, that could be
  /// grabbed before the failure occurred.
  bool success;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Result;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_Result.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback
{
  int32_t curr_nr_data_acquired;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal goal;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response
{
  int8_t status;
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Result result;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.h"

/// Struct defined in action/GrabBlazeData in the package pylon_ros2_camera_interfaces.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback feedback;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage;

// Struct for a sequence of pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage.
typedef struct pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence
{
  pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_H_
