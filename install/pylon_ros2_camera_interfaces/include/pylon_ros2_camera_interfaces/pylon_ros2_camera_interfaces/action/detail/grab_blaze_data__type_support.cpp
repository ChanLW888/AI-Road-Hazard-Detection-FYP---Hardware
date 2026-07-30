// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal(_init);
}

void GrabBlazeData_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal *>(message_memory);
  typed_message->~GrabBlazeData_Goal();
}

size_t size_function__GrabBlazeData_Goal__exposure_times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Goal__exposure_times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Goal__exposure_times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Goal__exposure_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GrabBlazeData_Goal__exposure_times(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Goal__exposure_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GrabBlazeData_Goal__exposure_times(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Goal__exposure_times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_Goal_message_member_array[2] = {
  {
    "exposure_given",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal, exposure_given),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exposure_times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal, exposure_times),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Goal__exposure_times,  // size() function pointer
    get_const_function__GrabBlazeData_Goal__exposure_times,  // get_const(index) function pointer
    get_function__GrabBlazeData_Goal__exposure_times,  // get(index) function pointer
    fetch_function__GrabBlazeData_Goal__exposure_times,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Goal__exposure_times,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Goal__exposure_times  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_Goal_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_Goal",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal),
  GrabBlazeData_Goal_message_member_array,  // message members
  GrabBlazeData_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Goal)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_Result(_init);
}

void GrabBlazeData_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result *>(message_memory);
  typed_message->~GrabBlazeData_Result();
}

size_t size_function__GrabBlazeData_Result__point_clouds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__point_clouds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__point_clouds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__point_clouds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::PointCloud2 *>(
    get_const_function__GrabBlazeData_Result__point_clouds(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::PointCloud2 *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__point_clouds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::PointCloud2 *>(
    get_function__GrabBlazeData_Result__point_clouds(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::PointCloud2 *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__point_clouds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GrabBlazeData_Result__intensity_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__intensity_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__intensity_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__intensity_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__GrabBlazeData_Result__intensity_maps(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__intensity_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__GrabBlazeData_Result__intensity_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__intensity_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GrabBlazeData_Result__depth_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__depth_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__depth_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__depth_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__GrabBlazeData_Result__depth_maps(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__depth_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__GrabBlazeData_Result__depth_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__depth_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GrabBlazeData_Result__depth_color_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__depth_color_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__depth_color_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__depth_color_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__GrabBlazeData_Result__depth_color_maps(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__depth_color_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__GrabBlazeData_Result__depth_color_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__depth_color_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GrabBlazeData_Result__confidence_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__confidence_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__confidence_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__confidence_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__GrabBlazeData_Result__confidence_maps(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__confidence_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__GrabBlazeData_Result__confidence_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__confidence_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GrabBlazeData_Result__reached_exposure_times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GrabBlazeData_Result__reached_exposure_times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GrabBlazeData_Result__reached_exposure_times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__GrabBlazeData_Result__reached_exposure_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GrabBlazeData_Result__reached_exposure_times(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GrabBlazeData_Result__reached_exposure_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GrabBlazeData_Result__reached_exposure_times(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__GrabBlazeData_Result__reached_exposure_times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_Result_message_member_array[8] = {
  {
    "point_clouds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, point_clouds),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__point_clouds,  // size() function pointer
    get_const_function__GrabBlazeData_Result__point_clouds,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__point_clouds,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__point_clouds,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__point_clouds,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__point_clouds  // resize(index) function pointer
  },
  {
    "intensity_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, intensity_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__intensity_maps,  // size() function pointer
    get_const_function__GrabBlazeData_Result__intensity_maps,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__intensity_maps,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__intensity_maps,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__intensity_maps,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__intensity_maps  // resize(index) function pointer
  },
  {
    "depth_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, depth_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__depth_maps,  // size() function pointer
    get_const_function__GrabBlazeData_Result__depth_maps,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__depth_maps,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__depth_maps,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__depth_maps,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__depth_maps  // resize(index) function pointer
  },
  {
    "depth_color_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, depth_color_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__depth_color_maps,  // size() function pointer
    get_const_function__GrabBlazeData_Result__depth_color_maps,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__depth_color_maps,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__depth_color_maps,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__depth_color_maps,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__depth_color_maps  // resize(index) function pointer
  },
  {
    "confidence_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, confidence_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__confidence_maps,  // size() function pointer
    get_const_function__GrabBlazeData_Result__confidence_maps,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__confidence_maps,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__confidence_maps,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__confidence_maps,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__confidence_maps  // resize(index) function pointer
  },
  {
    "cam_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::CameraInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, cam_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reached_exposure_times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, reached_exposure_times),  // bytes offset in struct
    nullptr,  // default value
    size_function__GrabBlazeData_Result__reached_exposure_times,  // size() function pointer
    get_const_function__GrabBlazeData_Result__reached_exposure_times,  // get_const(index) function pointer
    get_function__GrabBlazeData_Result__reached_exposure_times,  // get(index) function pointer
    fetch_function__GrabBlazeData_Result__reached_exposure_times,  // fetch(index, &value) function pointer
    assign_function__GrabBlazeData_Result__reached_exposure_times,  // assign(index, value) function pointer
    resize_function__GrabBlazeData_Result__reached_exposure_times  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_Result_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_Result",  // message name
  8,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Result),
  GrabBlazeData_Result_message_member_array,  // message members
  GrabBlazeData_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Result)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback(_init);
}

void GrabBlazeData_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback *>(message_memory);
  typed_message->~GrabBlazeData_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_Feedback_message_member_array[1] = {
  {
    "curr_nr_data_acquired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback, curr_nr_data_acquired),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_Feedback_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_Feedback",  // message name
  1,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback),
  GrabBlazeData_Feedback_message_member_array,  // message members
  GrabBlazeData_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Feedback)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request(_init);
}

void GrabBlazeData_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request *>(message_memory);
  typed_message->~GrabBlazeData_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_SendGoal_Request_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request),
  GrabBlazeData_SendGoal_Request_message_member_array,  // message members
  GrabBlazeData_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Request)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response(_init);
}

void GrabBlazeData_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response *>(message_memory);
  typed_message->~GrabBlazeData_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_SendGoal_Response_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response),
  GrabBlazeData_SendGoal_Response_message_member_array,  // message members
  GrabBlazeData_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Response)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GrabBlazeData_SendGoal_service_members = {
  "pylon_ros2_camera_interfaces::action",  // service namespace
  "GrabBlazeData_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GrabBlazeData_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request(_init);
}

void GrabBlazeData_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request *>(message_memory);
  typed_message->~GrabBlazeData_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_GetResult_Request_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request),
  GrabBlazeData_GetResult_Request_message_member_array,  // message members
  GrabBlazeData_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Request)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response(_init);
}

void GrabBlazeData_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response *>(message_memory);
  typed_message->~GrabBlazeData_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_GetResult_Response_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response),
  GrabBlazeData_GetResult_Response_message_member_array,  // message members
  GrabBlazeData_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Response)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GrabBlazeData_GetResult_service_members = {
  "pylon_ros2_camera_interfaces::action",  // service namespace
  "GrabBlazeData_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GrabBlazeData_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GrabBlazeData_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage(_init);
}

void GrabBlazeData_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage *>(message_memory);
  typed_message->~GrabBlazeData_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GrabBlazeData_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GrabBlazeData_FeedbackMessage_message_members = {
  "pylon_ros2_camera_interfaces::action",  // message namespace
  "GrabBlazeData_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage),
  GrabBlazeData_FeedbackMessage_message_member_array,  // message members
  GrabBlazeData_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GrabBlazeData_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GrabBlazeData_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GrabBlazeData_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_FeedbackMessage)() {
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_introspection_cpp::GrabBlazeData_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
