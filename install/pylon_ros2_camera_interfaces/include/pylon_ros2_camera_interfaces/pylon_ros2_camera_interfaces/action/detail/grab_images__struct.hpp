// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#ifndef PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_HPP_
#define PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Goal __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_Goal_
{
  using Type = GrabImages_Goal_<ContainerAllocator>;

  explicit GrabImages_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_given = false;
      this->gain_given = false;
      this->gamma_given = false;
      this->brightness_given = false;
      this->exposure_auto = false;
      this->gain_auto = false;
    }
  }

  explicit GrabImages_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_given = false;
      this->gain_given = false;
      this->gamma_given = false;
      this->brightness_given = false;
      this->exposure_auto = false;
      this->gain_auto = false;
    }
  }

  // field types and members
  using _exposure_given_type =
    bool;
  _exposure_given_type exposure_given;
  using _exposure_times_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _exposure_times_type exposure_times;
  using _gain_given_type =
    bool;
  _gain_given_type gain_given;
  using _gain_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gain_values_type gain_values;
  using _gamma_given_type =
    bool;
  _gamma_given_type gamma_given;
  using _gamma_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gamma_values_type gamma_values;
  using _brightness_given_type =
    bool;
  _brightness_given_type brightness_given;
  using _brightness_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _brightness_values_type brightness_values;
  using _exposure_auto_type =
    bool;
  _exposure_auto_type exposure_auto;
  using _gain_auto_type =
    bool;
  _gain_auto_type gain_auto;

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
  Type & set__gain_given(
    const bool & _arg)
  {
    this->gain_given = _arg;
    return *this;
  }
  Type & set__gain_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gain_values = _arg;
    return *this;
  }
  Type & set__gamma_given(
    const bool & _arg)
  {
    this->gamma_given = _arg;
    return *this;
  }
  Type & set__gamma_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gamma_values = _arg;
    return *this;
  }
  Type & set__brightness_given(
    const bool & _arg)
  {
    this->brightness_given = _arg;
    return *this;
  }
  Type & set__brightness_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->brightness_values = _arg;
    return *this;
  }
  Type & set__exposure_auto(
    const bool & _arg)
  {
    this->exposure_auto = _arg;
    return *this;
  }
  Type & set__gain_auto(
    const bool & _arg)
  {
    this->gain_auto = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Goal
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Goal
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_Goal_ & other) const
  {
    if (this->exposure_given != other.exposure_given) {
      return false;
    }
    if (this->exposure_times != other.exposure_times) {
      return false;
    }
    if (this->gain_given != other.gain_given) {
      return false;
    }
    if (this->gain_values != other.gain_values) {
      return false;
    }
    if (this->gamma_given != other.gamma_given) {
      return false;
    }
    if (this->gamma_values != other.gamma_values) {
      return false;
    }
    if (this->brightness_given != other.brightness_given) {
      return false;
    }
    if (this->brightness_values != other.brightness_values) {
      return false;
    }
    if (this->exposure_auto != other.exposure_auto) {
      return false;
    }
    if (this->gain_auto != other.gain_auto) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_Goal_

// alias to use template instance with default allocator
using GrabImages_Goal =
  pylon_ros2_camera_interfaces::action::GrabImages_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'images'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'cam_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Result __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Result __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_Result_
{
  using Type = GrabImages_Result_<ContainerAllocator>;

  explicit GrabImages_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cam_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GrabImages_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cam_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _images_type images;
  using _cam_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _cam_info_type cam_info;
  using _reached_exposure_times_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _reached_exposure_times_type reached_exposure_times;
  using _reached_brightness_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _reached_brightness_values_type reached_brightness_values;
  using _reached_gain_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _reached_gain_values_type reached_gain_values;
  using _reached_gamma_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _reached_gamma_values_type reached_gamma_values;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__images(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->images = _arg;
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
  Type & set__reached_brightness_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->reached_brightness_values = _arg;
    return *this;
  }
  Type & set__reached_gain_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->reached_gain_values = _arg;
    return *this;
  }
  Type & set__reached_gamma_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->reached_gamma_values = _arg;
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
    pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Result
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Result
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_Result_ & other) const
  {
    if (this->images != other.images) {
      return false;
    }
    if (this->cam_info != other.cam_info) {
      return false;
    }
    if (this->reached_exposure_times != other.reached_exposure_times) {
      return false;
    }
    if (this->reached_brightness_values != other.reached_brightness_values) {
      return false;
    }
    if (this->reached_gain_values != other.reached_gain_values) {
      return false;
    }
    if (this->reached_gamma_values != other.reached_gamma_values) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_Result_

// alias to use template instance with default allocator
using GrabImages_Result =
  pylon_ros2_camera_interfaces::action::GrabImages_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Feedback __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_Feedback_
{
  using Type = GrabImages_Feedback_<ContainerAllocator>;

  explicit GrabImages_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_nr_images_taken = 0l;
    }
  }

  explicit GrabImages_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_nr_images_taken = 0l;
    }
  }

  // field types and members
  using _curr_nr_images_taken_type =
    int32_t;
  _curr_nr_images_taken_type curr_nr_images_taken;

  // setters for named parameter idiom
  Type & set__curr_nr_images_taken(
    const int32_t & _arg)
  {
    this->curr_nr_images_taken = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Feedback
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_Feedback
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_Feedback_ & other) const
  {
    if (this->curr_nr_images_taken != other.curr_nr_images_taken) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_Feedback_

// alias to use template instance with default allocator
using GrabImages_Feedback =
  pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_SendGoal_Request_
{
  using Type = GrabImages_SendGoal_Request_<ContainerAllocator>;

  explicit GrabImages_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GrabImages_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pylon_ros2_camera_interfaces::action::GrabImages_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_SendGoal_Request_

// alias to use template instance with default allocator
using GrabImages_SendGoal_Request =
  pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_SendGoal_Response_
{
  using Type = GrabImages_SendGoal_Response_<ContainerAllocator>;

  explicit GrabImages_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GrabImages_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_SendGoal_Response_

// alias to use template instance with default allocator
using GrabImages_SendGoal_Response =
  pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace action
{

struct GrabImages_SendGoal
{
  using Request = pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request;
  using Response = pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response;
};

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_GetResult_Request_
{
  using Type = GrabImages_GetResult_Request_<ContainerAllocator>;

  explicit GrabImages_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GrabImages_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_GetResult_Request_

// alias to use template instance with default allocator
using GrabImages_GetResult_Request =
  pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_GetResult_Response_
{
  using Type = GrabImages_GetResult_Response_<ContainerAllocator>;

  explicit GrabImages_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GrabImages_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pylon_ros2_camera_interfaces::action::GrabImages_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_GetResult_Response_

// alias to use template instance with default allocator
using GrabImages_GetResult_Response =
  pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace pylon_ros2_camera_interfaces
{

namespace action
{

struct GrabImages_GetResult
{
  using Request = pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request;
  using Response = pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response;
};

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage __declspec(deprecated)
#endif

namespace pylon_ros2_camera_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GrabImages_FeedbackMessage_
{
  using Type = GrabImages_FeedbackMessage_<ContainerAllocator>;

  explicit GrabImages_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GrabImages_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pylon_ros2_camera_interfaces::action::GrabImages_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage
    std::shared_ptr<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabImages_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabImages_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabImages_FeedbackMessage_

// alias to use template instance with default allocator
using GrabImages_FeedbackMessage =
  pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage_<std::allocator<void>>;

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

struct GrabImages
{
  /// The goal message defined in the action definition.
  using Goal = pylon_ros2_camera_interfaces::action::GrabImages_Goal;
  /// The result message defined in the action definition.
  using Result = pylon_ros2_camera_interfaces::action::GrabImages_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pylon_ros2_camera_interfaces::action::GrabImages_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pylon_ros2_camera_interfaces::action::GrabImages_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pylon_ros2_camera_interfaces::action::GrabImages_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GrabImages GrabImages;

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

#endif  // PYLON_ROS2_CAMERA_INTERFACES__ACTION__DETAIL__GRAB_IMAGES__STRUCT_HPP_
