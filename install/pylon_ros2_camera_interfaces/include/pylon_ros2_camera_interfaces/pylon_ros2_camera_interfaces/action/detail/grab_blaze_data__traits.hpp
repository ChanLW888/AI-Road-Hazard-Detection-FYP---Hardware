// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: exposure_given
  {
    out << "exposure_given: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_given, out);
    out << ", ";
  }

  // member: exposure_times
  {
    if (msg.exposure_times.size() == 0) {
      out << "exposure_times: []";
    } else {
      out << "exposure_times: [";
      size_t pending_items = msg.exposure_times.size();
      for (auto item : msg.exposure_times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exposure_given
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_given: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_given, out);
    out << "\n";
  }

  // member: exposure_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exposure_times.size() == 0) {
      out << "exposure_times: []\n";
    } else {
      out << "exposure_times:\n";
      for (auto item : msg.exposure_times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_Goal";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point_clouds'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'intensity_maps'
// Member 'depth_maps'
// Member 'depth_color_maps'
// Member 'confidence_maps'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: point_clouds
  {
    if (msg.point_clouds.size() == 0) {
      out << "point_clouds: []";
    } else {
      out << "point_clouds: [";
      size_t pending_items = msg.point_clouds.size();
      for (auto item : msg.point_clouds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensity_maps
  {
    if (msg.intensity_maps.size() == 0) {
      out << "intensity_maps: []";
    } else {
      out << "intensity_maps: [";
      size_t pending_items = msg.intensity_maps.size();
      for (auto item : msg.intensity_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depth_maps
  {
    if (msg.depth_maps.size() == 0) {
      out << "depth_maps: []";
    } else {
      out << "depth_maps: [";
      size_t pending_items = msg.depth_maps.size();
      for (auto item : msg.depth_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depth_color_maps
  {
    if (msg.depth_color_maps.size() == 0) {
      out << "depth_color_maps: []";
    } else {
      out << "depth_color_maps: [";
      size_t pending_items = msg.depth_color_maps.size();
      for (auto item : msg.depth_color_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidence_maps
  {
    if (msg.confidence_maps.size() == 0) {
      out << "confidence_maps: []";
    } else {
      out << "confidence_maps: [";
      size_t pending_items = msg.confidence_maps.size();
      for (auto item : msg.confidence_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cam_info
  {
    out << "cam_info: ";
    to_flow_style_yaml(msg.cam_info, out);
    out << ", ";
  }

  // member: reached_exposure_times
  {
    if (msg.reached_exposure_times.size() == 0) {
      out << "reached_exposure_times: []";
    } else {
      out << "reached_exposure_times: [";
      size_t pending_items = msg.reached_exposure_times.size();
      for (auto item : msg.reached_exposure_times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point_clouds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point_clouds.size() == 0) {
      out << "point_clouds: []\n";
    } else {
      out << "point_clouds:\n";
      for (auto item : msg.point_clouds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intensity_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensity_maps.size() == 0) {
      out << "intensity_maps: []\n";
    } else {
      out << "intensity_maps:\n";
      for (auto item : msg.intensity_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: depth_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depth_maps.size() == 0) {
      out << "depth_maps: []\n";
    } else {
      out << "depth_maps:\n";
      for (auto item : msg.depth_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: depth_color_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depth_color_maps.size() == 0) {
      out << "depth_color_maps: []\n";
    } else {
      out << "depth_color_maps:\n";
      for (auto item : msg.depth_color_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: confidence_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidence_maps.size() == 0) {
      out << "confidence_maps: []\n";
    } else {
      out << "confidence_maps:\n";
      for (auto item : msg.confidence_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cam_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_info:\n";
    to_block_style_yaml(msg.cam_info, out, indentation + 2);
  }

  // member: reached_exposure_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reached_exposure_times.size() == 0) {
      out << "reached_exposure_times: []\n";
    } else {
      out << "reached_exposure_times:\n";
      for (auto item : msg.reached_exposure_times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_Result";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_Result";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: curr_nr_data_acquired
  {
    out << "curr_nr_data_acquired: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_nr_data_acquired, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: curr_nr_data_acquired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_nr_data_acquired: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_nr_data_acquired, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_Feedback";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_SendGoal_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_SendGoal_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_SendGoal";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_GetResult_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_GetResult_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_GetResult";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabBlazeData_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBlazeData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBlazeData_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pylon_ros2_camera_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>()
{
  return "pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>()
{
  return "pylon_ros2_camera_interfaces/action/GrabBlazeData_FeedbackMessage";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pylon_ros2_camera_interfaces::action::GrabBlazeData>
  : std::true_type
{
};

template<>
struct is_action_goal<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__TRAITS_HPP_
