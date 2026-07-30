// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_Goal_gain_auto
{
public:
  explicit Init_GrabImages_Goal_gain_auto(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal gain_auto(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_gain_auto_type arg)
  {
    msg_.gain_auto = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_exposure_auto
{
public:
  explicit Init_GrabImages_Goal_exposure_auto(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_gain_auto exposure_auto(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_exposure_auto_type arg)
  {
    msg_.exposure_auto = std::move(arg);
    return Init_GrabImages_Goal_gain_auto(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_brightness_values
{
public:
  explicit Init_GrabImages_Goal_brightness_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_exposure_auto brightness_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_brightness_values_type arg)
  {
    msg_.brightness_values = std::move(arg);
    return Init_GrabImages_Goal_exposure_auto(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_brightness_given
{
public:
  explicit Init_GrabImages_Goal_brightness_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_brightness_values brightness_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_brightness_given_type arg)
  {
    msg_.brightness_given = std::move(arg);
    return Init_GrabImages_Goal_brightness_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_gamma_values
{
public:
  explicit Init_GrabImages_Goal_gamma_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_brightness_given gamma_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_gamma_values_type arg)
  {
    msg_.gamma_values = std::move(arg);
    return Init_GrabImages_Goal_brightness_given(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_gamma_given
{
public:
  explicit Init_GrabImages_Goal_gamma_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_gamma_values gamma_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_gamma_given_type arg)
  {
    msg_.gamma_given = std::move(arg);
    return Init_GrabImages_Goal_gamma_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_gain_values
{
public:
  explicit Init_GrabImages_Goal_gain_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_gamma_given gain_values(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_gain_values_type arg)
  {
    msg_.gain_values = std::move(arg);
    return Init_GrabImages_Goal_gamma_given(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_gain_given
{
public:
  explicit Init_GrabImages_Goal_gain_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_gain_values gain_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_gain_given_type arg)
  {
    msg_.gain_given = std::move(arg);
    return Init_GrabImages_Goal_gain_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_exposure_times
{
public:
  explicit Init_GrabImages_Goal_exposure_times(::pylon_ros2_camera_interfaces::action::GrabImages_Goal & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Goal_gain_given exposure_times(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_exposure_times_type arg)
  {
    msg_.exposure_times = std::move(arg);
    return Init_GrabImages_Goal_gain_given(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

class Init_GrabImages_Goal_exposure_given
{
public:
  Init_GrabImages_Goal_exposure_given()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_Goal_exposure_times exposure_given(::pylon_ros2_camera_interfaces::action::GrabImages_Goal::_exposure_given_type arg)
  {
    msg_.exposure_given = std::move(arg);
    return Init_GrabImages_Goal_exposure_times(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_Goal>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_Goal_exposure_given();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_Result_success
{
public:
  explicit Init_GrabImages_Result_success(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result success(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_reached_gamma_values
{
public:
  explicit Init_GrabImages_Result_reached_gamma_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Result_success reached_gamma_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_reached_gamma_values_type arg)
  {
    msg_.reached_gamma_values = std::move(arg);
    return Init_GrabImages_Result_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_reached_gain_values
{
public:
  explicit Init_GrabImages_Result_reached_gain_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Result_reached_gamma_values reached_gain_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_reached_gain_values_type arg)
  {
    msg_.reached_gain_values = std::move(arg);
    return Init_GrabImages_Result_reached_gamma_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_reached_brightness_values
{
public:
  explicit Init_GrabImages_Result_reached_brightness_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Result_reached_gain_values reached_brightness_values(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_reached_brightness_values_type arg)
  {
    msg_.reached_brightness_values = std::move(arg);
    return Init_GrabImages_Result_reached_gain_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_reached_exposure_times
{
public:
  explicit Init_GrabImages_Result_reached_exposure_times(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Result_reached_brightness_values reached_exposure_times(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_reached_exposure_times_type arg)
  {
    msg_.reached_exposure_times = std::move(arg);
    return Init_GrabImages_Result_reached_brightness_values(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_cam_info
{
public:
  explicit Init_GrabImages_Result_cam_info(::pylon_ros2_camera_interfaces::action::GrabImages_Result & msg)
  : msg_(msg)
  {}
  Init_GrabImages_Result_reached_exposure_times cam_info(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_cam_info_type arg)
  {
    msg_.cam_info = std::move(arg);
    return Init_GrabImages_Result_reached_exposure_times(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

class Init_GrabImages_Result_images
{
public:
  Init_GrabImages_Result_images()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_Result_cam_info images(::pylon_ros2_camera_interfaces::action::GrabImages_Result::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_GrabImages_Result_cam_info(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_Result>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_Result_images();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_Feedback_curr_nr_images_taken
{
public:
  Init_GrabImages_Feedback_curr_nr_images_taken()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_Feedback curr_nr_images_taken(::pylon_ros2_camera_interfaces::action::GrabImages_Feedback::_curr_nr_images_taken_type arg)
  {
    msg_.curr_nr_images_taken = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_Feedback>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_Feedback_curr_nr_images_taken();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_SendGoal_Request_goal
{
public:
  explicit Init_GrabImages_SendGoal_Request_goal(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request goal(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request msg_;
};

class Init_GrabImages_SendGoal_Request_goal_id
{
public:
  Init_GrabImages_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_SendGoal_Request_goal goal_id(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GrabImages_SendGoal_Request_goal(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_SendGoal_Request_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_SendGoal_Response_stamp
{
public:
  explicit Init_GrabImages_SendGoal_Response_stamp(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response stamp(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response msg_;
};

class Init_GrabImages_SendGoal_Response_accepted
{
public:
  Init_GrabImages_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_SendGoal_Response_stamp accepted(::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GrabImages_SendGoal_Response_stamp(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_SendGoal_Response_accepted();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_GetResult_Request_goal_id
{
public:
  Init_GrabImages_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request goal_id(::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_GetResult_Request_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_GetResult_Response_result
{
public:
  explicit Init_GrabImages_GetResult_Response_result(::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response result(::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response msg_;
};

class Init_GrabImages_GetResult_Response_status
{
public:
  Init_GrabImages_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_GetResult_Response_result status(::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GrabImages_GetResult_Response_result(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_GetResult_Response_status();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabImages_FeedbackMessage_feedback
{
public:
  explicit Init_GrabImages_FeedbackMessage_feedback(::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage feedback(::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage msg_;
};

class Init_GrabImages_FeedbackMessage_goal_id
{
public:
  Init_GrabImages_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabImages_FeedbackMessage_feedback goal_id(::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GrabImages_FeedbackMessage_feedback(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabImages_FeedbackMessage_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__BUILDER_HPP_
