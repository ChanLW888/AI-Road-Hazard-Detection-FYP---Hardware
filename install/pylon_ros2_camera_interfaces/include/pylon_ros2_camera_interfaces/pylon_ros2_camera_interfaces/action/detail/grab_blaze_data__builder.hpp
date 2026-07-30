// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__BUILDER_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_Goal_exposure_times
{
public:
  explicit Init_GrabBlazeData_Goal_exposure_times(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal exposure_times(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal::_exposure_times_type arg)
  {
    msg_.exposure_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal msg_;
};

class Init_GrabBlazeData_Goal_exposure_given
{
public:
  Init_GrabBlazeData_Goal_exposure_given()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_Goal_exposure_times exposure_given(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal::_exposure_given_type arg)
  {
    msg_.exposure_given = std::move(arg);
    return Init_GrabBlazeData_Goal_exposure_times(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_Goal_exposure_given();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_Result_success
{
public:
  explicit Init_GrabBlazeData_Result_success(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result success(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_reached_exposure_times
{
public:
  explicit Init_GrabBlazeData_Result_reached_exposure_times(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_success reached_exposure_times(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_reached_exposure_times_type arg)
  {
    msg_.reached_exposure_times = std::move(arg);
    return Init_GrabBlazeData_Result_success(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_cam_info
{
public:
  explicit Init_GrabBlazeData_Result_cam_info(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_reached_exposure_times cam_info(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_cam_info_type arg)
  {
    msg_.cam_info = std::move(arg);
    return Init_GrabBlazeData_Result_reached_exposure_times(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_confidence_maps
{
public:
  explicit Init_GrabBlazeData_Result_confidence_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_cam_info confidence_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_confidence_maps_type arg)
  {
    msg_.confidence_maps = std::move(arg);
    return Init_GrabBlazeData_Result_cam_info(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_depth_color_maps
{
public:
  explicit Init_GrabBlazeData_Result_depth_color_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_confidence_maps depth_color_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_depth_color_maps_type arg)
  {
    msg_.depth_color_maps = std::move(arg);
    return Init_GrabBlazeData_Result_confidence_maps(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_depth_maps
{
public:
  explicit Init_GrabBlazeData_Result_depth_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_depth_color_maps depth_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_depth_maps_type arg)
  {
    msg_.depth_maps = std::move(arg);
    return Init_GrabBlazeData_Result_depth_color_maps(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_intensity_maps
{
public:
  explicit Init_GrabBlazeData_Result_intensity_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result & msg)
  : msg_(msg)
  {}
  Init_GrabBlazeData_Result_depth_maps intensity_maps(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_intensity_maps_type arg)
  {
    msg_.intensity_maps = std::move(arg);
    return Init_GrabBlazeData_Result_depth_maps(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

class Init_GrabBlazeData_Result_point_clouds
{
public:
  Init_GrabBlazeData_Result_point_clouds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_Result_intensity_maps point_clouds(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result::_point_clouds_type arg)
  {
    msg_.point_clouds = std::move(arg);
    return Init_GrabBlazeData_Result_intensity_maps(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_Result_point_clouds();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_Feedback_curr_nr_data_acquired
{
public:
  Init_GrabBlazeData_Feedback_curr_nr_data_acquired()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback curr_nr_data_acquired(::pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback::_curr_nr_data_acquired_type arg)
  {
    msg_.curr_nr_data_acquired = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_Feedback_curr_nr_data_acquired();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_SendGoal_Request_goal
{
public:
  explicit Init_GrabBlazeData_SendGoal_Request_goal(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request goal(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request msg_;
};

class Init_GrabBlazeData_SendGoal_Request_goal_id
{
public:
  Init_GrabBlazeData_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_SendGoal_Request_goal goal_id(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GrabBlazeData_SendGoal_Request_goal(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_SendGoal_Request_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_SendGoal_Response_stamp
{
public:
  explicit Init_GrabBlazeData_SendGoal_Response_stamp(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response stamp(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response msg_;
};

class Init_GrabBlazeData_SendGoal_Response_accepted
{
public:
  Init_GrabBlazeData_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_SendGoal_Response_stamp accepted(::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GrabBlazeData_SendGoal_Response_stamp(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_SendGoal_Response_accepted();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_GetResult_Request_goal_id
{
public:
  Init_GrabBlazeData_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request goal_id(::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_GetResult_Request_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_GetResult_Response_result
{
public:
  explicit Init_GrabBlazeData_GetResult_Response_result(::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response result(::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response msg_;
};

class Init_GrabBlazeData_GetResult_Response_status
{
public:
  Init_GrabBlazeData_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_GetResult_Response_result status(::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GrabBlazeData_GetResult_Response_result(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_GetResult_Response_status();
}

}  // namespace pylon_ros2_camera_interfaces


namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace builder
{

class Init_GrabBlazeData_FeedbackMessage_feedback
{
public:
  explicit Init_GrabBlazeData_FeedbackMessage_feedback(::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage feedback(::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage msg_;
};

class Init_GrabBlazeData_FeedbackMessage_goal_id
{
public:
  Init_GrabBlazeData_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrabBlazeData_FeedbackMessage_feedback goal_id(::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GrabBlazeData_FeedbackMessage_feedback(msg_);
  }

private:
  ::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>()
{
  return pylon_ros2_camera_interfaces::action::builder::Init_GrabBlazeData_FeedbackMessage_goal_id();
}

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__BUILDER_HPP_
