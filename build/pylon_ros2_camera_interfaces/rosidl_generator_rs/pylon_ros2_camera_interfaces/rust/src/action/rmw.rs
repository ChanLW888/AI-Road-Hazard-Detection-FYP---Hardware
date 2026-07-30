
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_Goal__init(msg: *mut GrabImages_Goal) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Goal>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Goal>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Goal>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_Goal {
    /// Flag which indicates if the exposure times are provided and hence should be
    /// set before grabbing
    pub exposure_given: bool,

    /// Only relevant, if exposure_given is true:
    /// The list of target exposure times in microseconds.
    /// It is possible to grab only one image as well as several images with
    /// different exposure times. This values can be overriden from the brightness
    /// search, in case that the flag exposure_fixed is not true.
    pub exposure_times: rosidl_runtime_rs::Sequence<f32>,

    /// Flag which indicates if the gain is provided and hence should be set before
    /// grabbing
    pub gain_given: bool,

    /// Only relevant, if gain_given is true:
    /// The target gain in percent of the maximal value the camera supports.
    /// For USB cameras, the gain is in dB, for GigE cameras it is given in so
    /// called 'device specific units'. This value can be overriden from the
    /// brightness search, in case that the gain_fixed flag is set to false.
    pub gain_values: rosidl_runtime_rs::Sequence<f32>,

    /// Flag which indicates if the gamma value is provided and hence should be set
    /// before grabbing
    pub gamma_given: bool,

    /// Only relevant, if gain_given is true:
    /// Gamma correction of pixel intensity.
    /// Adjusts the brightness of the pixel values output by the camera's sensor
    /// to account for a non-linearity in the human perception of brightness or
    /// of the display system (such as CRT).
    pub gamma_values: rosidl_runtime_rs::Sequence<f32>,

    /// Flag which indicates if the brightness values are provided and hence should
    /// be set before grabbing
    pub brightness_given: bool,

    /// Only relevant, if brightness_given is true:
    /// The average intensity values of the images. It depends the exposure time
    /// as well as the gain setting.
    pub brightness_values: rosidl_runtime_rs::Sequence<f32>,

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
    pub exposure_auto: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gain_auto: bool,

}



impl Default for GrabImages_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_Goal__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Goal() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Result() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_Result__init(msg: *mut GrabImages_Result) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Result>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Result>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Result>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_Result {
    /// The resulting images with the inquired image intensity settings.
    /// The size of the vector equals the size of the exposure_times or the
    /// brightness_values-vector
    pub images: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::Image>,

    /// The CameraInfo obejct describing the camera properties for the above image
    /// sequence. Static in many cases, but can also support variable binning setting
    pub cam_info: sensor_msgs::msg::rmw::CameraInfo,

    /// The reached values of the images e.g., the values that were set to the camera
    /// before the grab
    pub reached_exposure_times: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_brightness_values: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gain_values: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gamma_values: rosidl_runtime_rs::Sequence<f32>,

    /// Flag which indicates the success of the grabbing action
    /// In case of failure, the images-vector contains only the images, that could be
    /// grabbed before the failure occurred.
    pub success: bool,

}



impl Default for GrabImages_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_Result__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Result() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init(msg: *mut GrabImages_Feedback) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Feedback>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Feedback>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_Feedback>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub curr_nr_images_taken: i32,

}



impl Default for GrabImages_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_Feedback() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init(msg: *mut GrabImages_FeedbackMessage) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_FeedbackMessage>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_FeedbackMessage>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_FeedbackMessage>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GrabImages_Feedback,

}



impl Default for GrabImages_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(msg: *mut GrabBlazeData_Goal) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Goal>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Goal>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Goal>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_Goal {
    /// Flag which indicates if the exposure times are provided and hence should be
    /// set before grabbing
    pub exposure_given: bool,

    /// Only relevant, if exposure_given is true:
    /// The list of target exposure times in microseconds.
    /// It is possible to grab only one image as well as several images with
    /// different exposure times. This values can be overriden from the brightness
    /// search, in case that the flag exposure_fixed is not true.
    pub exposure_times: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for GrabBlazeData_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(msg: *mut GrabBlazeData_Result) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Result>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Result>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Result>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_Result {
    /// Data acquired from blaze
    pub point_clouds: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::PointCloud2>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub intensity_maps: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_maps: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_color_maps: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence_maps: rosidl_runtime_rs::Sequence<sensor_msgs::msg::rmw::Image>,

    /// The CameraInfo obejct describing the camera properties for the above image
    /// sequence. Static in many cases, but can also support variable binning setting
    pub cam_info: sensor_msgs::msg::rmw::CameraInfo,

    /// The reached values of the images e.g., the values that were set to the camera
    /// before the grab
    pub reached_exposure_times: rosidl_runtime_rs::Sequence<f32>,

    /// Flag which indicates the success of the grabbing action
    /// In case of failure, the images-vector contains only the images, that could be
    /// grabbed before the failure occurred.
    pub success: bool,

}



impl Default for GrabBlazeData_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Result() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(msg: *mut GrabBlazeData_Feedback) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Feedback>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Feedback>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_Feedback>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub curr_nr_data_acquired: i32,

}



impl Default for GrabBlazeData_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(msg: *mut GrabBlazeData_FeedbackMessage) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_FeedbackMessage>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_FeedbackMessage>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_FeedbackMessage>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GrabBlazeData_Feedback,

}



impl Default for GrabBlazeData_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage() }
  }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init(msg: *mut GrabImages_SendGoal_Request) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Request>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GrabImages_Goal,

}



impl Default for GrabImages_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init(msg: *mut GrabImages_SendGoal_Response) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Response>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_SendGoal_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GrabImages_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init(msg: *mut GrabImages_GetResult_Request) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Request>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GrabImages_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init(msg: *mut GrabImages_GetResult_Response) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Response>);
    fn pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabImages_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabImages_GetResult_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GrabImages_Result,

}



impl Default for GrabImages_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabImages_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabImages_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabImages_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabImages_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(msg: *mut GrabBlazeData_SendGoal_Request) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Request>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GrabBlazeData_Goal,

}



impl Default for GrabBlazeData_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(msg: *mut GrabBlazeData_SendGoal_Response) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Response>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_SendGoal_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GrabBlazeData_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(msg: *mut GrabBlazeData_GetResult_Request) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Request>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GrabBlazeData_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(msg: *mut GrabBlazeData_GetResult_Response) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Response>);
    fn pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GrabBlazeData_GetResult_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GrabBlazeData_Result,

}



impl Default for GrabBlazeData_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GrabBlazeData_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GrabBlazeData_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/action/GrabBlazeData_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response() }
  }
}






#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabImages_SendGoal;

impl rosidl_runtime_rs::Service for GrabImages_SendGoal {
    type Request = GrabImages_SendGoal_Request;
    type Response = GrabImages_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_SendGoal() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabImages_GetResult;

impl rosidl_runtime_rs::Service for GrabImages_GetResult {
    type Request = GrabImages_GetResult_Request;
    type Response = GrabImages_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages_GetResult() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabBlazeData_SendGoal;

impl rosidl_runtime_rs::Service for GrabBlazeData_SendGoal {
    type Request = GrabBlazeData_SendGoal_Request;
    type Response = GrabBlazeData_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabBlazeData_GetResult;

impl rosidl_runtime_rs::Service for GrabBlazeData_GetResult {
    type Request = GrabBlazeData_GetResult_Request;
    type Response = GrabBlazeData_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult() }
    }
}


