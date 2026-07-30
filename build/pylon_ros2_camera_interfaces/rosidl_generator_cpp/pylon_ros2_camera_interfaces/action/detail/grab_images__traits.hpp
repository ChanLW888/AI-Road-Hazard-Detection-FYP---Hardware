// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__TRAITS_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_Goal & msg,
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
    out << ", ";
  }

  // member: gain_given
  {
    out << "gain_given: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_given, out);
    out << ", ";
  }

  // member: gain_values
  {
    if (msg.gain_values.size() == 0) {
      out << "gain_values: []";
    } else {
      out << "gain_values: [";
      size_t pending_items = msg.gain_values.size();
      for (auto item : msg.gain_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gamma_given
  {
    out << "gamma_given: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_given, out);
    out << ", ";
  }

  // member: gamma_values
  {
    if (msg.gamma_values.size() == 0) {
      out << "gamma_values: []";
    } else {
      out << "gamma_values: [";
      size_t pending_items = msg.gamma_values.size();
      for (auto item : msg.gamma_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: brightness_given
  {
    out << "brightness_given: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_given, out);
    out << ", ";
  }

  // member: brightness_values
  {
    if (msg.brightness_values.size() == 0) {
      out << "brightness_values: []";
    } else {
      out << "brightness_values: [";
      size_t pending_items = msg.brightness_values.size();
      for (auto item : msg.brightness_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: exposure_auto
  {
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << ", ";
  }

  // member: gain_auto
  {
    out << "gain_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_auto, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabImages_Goal & msg,
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

  // member: gain_given
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_given: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_given, out);
    out << "\n";
  }

  // member: gain_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gain_values.size() == 0) {
      out << "gain_values: []\n";
    } else {
      out << "gain_values:\n";
      for (auto item : msg.gain_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gamma_given
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma_given: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_given, out);
    out << "\n";
  }

  // member: gamma_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gamma_values.size() == 0) {
      out << "gamma_values: []\n";
    } else {
      out << "gamma_values:\n";
      for (auto item : msg.gamma_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: brightness_given
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_given: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_given, out);
    out << "\n";
  }

  // member: brightness_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.brightness_values.size() == 0) {
      out << "brightness_values: []\n";
    } else {
      out << "brightness_values:\n";
      for (auto item : msg.brightness_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: exposure_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << "\n";
  }

  // member: gain_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_auto, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabImages_Goal & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_Goal>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_Goal";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_Goal>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_Goal";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'images'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: images
  {
    if (msg.images.size() == 0) {
      out << "images: []";
    } else {
      out << "images: [";
      size_t pending_items = msg.images.size();
      for (auto item : msg.images) {
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

  // member: reached_brightness_values
  {
    if (msg.reached_brightness_values.size() == 0) {
      out << "reached_brightness_values: []";
    } else {
      out << "reached_brightness_values: [";
      size_t pending_items = msg.reached_brightness_values.size();
      for (auto item : msg.reached_brightness_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reached_gain_values
  {
    if (msg.reached_gain_values.size() == 0) {
      out << "reached_gain_values: []";
    } else {
      out << "reached_gain_values: [";
      size_t pending_items = msg.reached_gain_values.size();
      for (auto item : msg.reached_gain_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reached_gamma_values
  {
    if (msg.reached_gamma_values.size() == 0) {
      out << "reached_gamma_values: []";
    } else {
      out << "reached_gamma_values: [";
      size_t pending_items = msg.reached_gamma_values.size();
      for (auto item : msg.reached_gamma_values) {
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
  const GrabImages_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.images.size() == 0) {
      out << "images: []\n";
    } else {
      out << "images:\n";
      for (auto item : msg.images) {
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

  // member: reached_brightness_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reached_brightness_values.size() == 0) {
      out << "reached_brightness_values: []\n";
    } else {
      out << "reached_brightness_values:\n";
      for (auto item : msg.reached_brightness_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reached_gain_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reached_gain_values.size() == 0) {
      out << "reached_gain_values: []\n";
    } else {
      out << "reached_gain_values:\n";
      for (auto item : msg.reached_gain_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reached_gamma_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reached_gamma_values.size() == 0) {
      out << "reached_gamma_values: []\n";
    } else {
      out << "reached_gamma_values:\n";
      for (auto item : msg.reached_gamma_values) {
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

inline std::string to_yaml(const GrabImages_Result & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_Result>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_Result";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_Result>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_Result";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: curr_nr_images_taken
  {
    out << "curr_nr_images_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_nr_images_taken, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabImages_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: curr_nr_images_taken
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_nr_images_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_nr_images_taken, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabImages_Feedback & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_Feedback & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_Feedback";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_Feedback";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_SendGoal_Request & msg,
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
  const GrabImages_SendGoal_Request & msg,
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

inline std::string to_yaml(const GrabImages_SendGoal_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_SendGoal_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>
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
  const GrabImages_SendGoal_Response & msg,
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
  const GrabImages_SendGoal_Response & msg,
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

inline std::string to_yaml(const GrabImages_SendGoal_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_SendGoal_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_SendGoal";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_SendGoal";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>
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
  const GrabImages_GetResult_Request & msg,
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
  const GrabImages_GetResult_Request & msg,
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

inline std::string to_yaml(const GrabImages_GetResult_Request & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_GetResult_Request";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_GetResult_Response & msg,
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
  const GrabImages_GetResult_Response & msg,
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

inline std::string to_yaml(const GrabImages_GetResult_Response & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_GetResult_Response";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Result>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Result>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_GetResult";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_GetResult";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>::value &&
    has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>::value &&
    has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__traits.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GrabImages_FeedbackMessage & msg,
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
  const GrabImages_FeedbackMessage & msg,
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

inline std::string to_yaml(const GrabImages_FeedbackMessage & msg, bool use_flow_style = false)
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
  const pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pylon_ros2_camera_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pylon_ros2_camera_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage & msg)
{
  return pylon_ros2_camera_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>()
{
  return "pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage";
}

template<>
inline const char * name<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>()
{
  return "pylon_ros2_camera_interfaces/action/GrabImages_FeedbackMessage";
}

template<>
struct has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pylon_ros2_camera_interfaces::action::GrabImages>
  : std::true_type
{
};

template<>
struct is_action_goal<pylon_ros2_camera_interfaces::action::GrabImages_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pylon_ros2_camera_interfaces::action::GrabImages_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__TRAITS_HPP_
