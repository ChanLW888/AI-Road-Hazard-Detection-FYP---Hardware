// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_Goal_
{
  using Type = GrabBlazeData_Goal_<ContainerAllocator>;

  explicit GrabBlazeData_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_given = false;
    }
  }

  explicit GrabBlazeData_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_given = false;
    }
  }

  // field types and members
  using _exposure_given_type =
    bool;
  _exposure_given_type exposure_given;
  using _exposure_times_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _exposure_times_type exposure_times;

  // setters for named parameter idiom
  Type & set__exposure_given(
    const bool & _arg)
  {
    this->exposure_given = _arg;
    return *this;
  }
  Type & set__exposure_times(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->exposure_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_Goal_ & other) const
  {
    if (this->exposure_given != other.exposure_given) {
      return false;
    }
    if (this->exposure_times != other.exposure_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_Goal_

// alias to use template instance with default allocator
using GrabBlazeData_Goal =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'point_clouds'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'intensity_maps'
// Member 'depth_maps'
// Member 'depth_color_maps'
// Member 'confidence_maps'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_Result_
{
  using Type = GrabBlazeData_Result_<ContainerAllocator>;

  explicit GrabBlazeData_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cam_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GrabBlazeData_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cam_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _point_clouds_type =
    std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>>;
  _point_clouds_type point_clouds;
  using _intensity_maps_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _intensity_maps_type intensity_maps;
  using _depth_maps_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _depth_maps_type depth_maps;
  using _depth_color_maps_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _depth_color_maps_type depth_color_maps;
  using _confidence_maps_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _confidence_maps_type confidence_maps;
  using _cam_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _cam_info_type cam_info;
  using _reached_exposure_times_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _reached_exposure_times_type reached_exposure_times;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__point_clouds(
    const std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>> & _arg)
  {
    this->point_clouds = _arg;
    return *this;
  }
  Type & set__intensity_maps(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->intensity_maps = _arg;
    return *this;
  }
  Type & set__depth_maps(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->depth_maps = _arg;
    return *this;
  }
  Type & set__depth_color_maps(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->depth_color_maps = _arg;
    return *this;
  }
  Type & set__confidence_maps(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->confidence_maps = _arg;
    return *this;
  }
  Type & set__cam_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->cam_info = _arg;
    return *this;
  }
  Type & set__reached_exposure_times(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->reached_exposure_times = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_Result_ & other) const
  {
    if (this->point_clouds != other.point_clouds) {
      return false;
    }
    if (this->intensity_maps != other.intensity_maps) {
      return false;
    }
    if (this->depth_maps != other.depth_maps) {
      return false;
    }
    if (this->depth_color_maps != other.depth_color_maps) {
      return false;
    }
    if (this->confidence_maps != other.confidence_maps) {
      return false;
    }
    if (this->cam_info != other.cam_info) {
      return false;
    }
    if (this->reached_exposure_times != other.reached_exposure_times) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_Result_

// alias to use template instance with default allocator
using GrabBlazeData_Result =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_Feedback_
{
  using Type = GrabBlazeData_Feedback_<ContainerAllocator>;

  explicit GrabBlazeData_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_nr_data_acquired = 0l;
    }
  }

  explicit GrabBlazeData_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_nr_data_acquired = 0l;
    }
  }

  // field types and members
  using _curr_nr_data_acquired_type =
    int32_t;
  _curr_nr_data_acquired_type curr_nr_data_acquired;

  // setters for named parameter idiom
  Type & set__curr_nr_data_acquired(
    const int32_t & _arg)
  {
    this->curr_nr_data_acquired = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_Feedback_ & other) const
  {
    if (this->curr_nr_data_acquired != other.curr_nr_data_acquired) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_Feedback_

// alias to use template instance with default allocator
using GrabBlazeData_Feedback =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_SendGoal_Request_
{
  using Type = GrabBlazeData_SendGoal_Request_<ContainerAllocator>;

  explicit GrabBlazeData_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GrabBlazeData_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_SendGoal_Request_

// alias to use template instance with default allocator
using GrabBlazeData_SendGoal_Request =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_SendGoal_Response_
{
  using Type = GrabBlazeData_SendGoal_Response_<ContainerAllocator>;

  explicit GrabBlazeData_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GrabBlazeData_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_SendGoal_Response_

// alias to use template instance with default allocator
using GrabBlazeData_SendGoal_Response =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace action
{

struct GrabBlazeData_SendGoal
{
  using Request = pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request;
  using Response = pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response;
};

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_GetResult_Request_
{
  using Type = GrabBlazeData_GetResult_Request_<ContainerAllocator>;

  explicit GrabBlazeData_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GrabBlazeData_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_GetResult_Request_

// alias to use template instance with default allocator
using GrabBlazeData_GetResult_Request =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_GetResult_Response_
{
  using Type = GrabBlazeData_GetResult_Response_<ContainerAllocator>;

  explicit GrabBlazeData_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GrabBlazeData_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_GetResult_Response_

// alias to use template instance with default allocator
using GrabBlazeData_GetResult_Response =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace action
{

struct GrabBlazeData_GetResult
{
  using Request = pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request;
  using Response = pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response;
};

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabBlazeData_FeedbackMessage_
{
  using Type = GrabBlazeData_FeedbackMessage_<ContainerAllocator>;

  explicit GrabBlazeData_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GrabBlazeData_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabBlazeData_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabBlazeData_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabBlazeData_FeedbackMessage_

// alias to use template instance with default allocator
using GrabBlazeData_FeedbackMessage =
  pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

struct GrabBlazeData
{
  /// The goal message defined in the action definition.
  using Goal = pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal;
  /// The result message defined in the action definition.
  using Result = pylon_ros2_camera_interfaces::action::GrabBlazeData_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GrabBlazeData GrabBlazeData;

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_BLAZE_DATA__STRUCT_HPP_
