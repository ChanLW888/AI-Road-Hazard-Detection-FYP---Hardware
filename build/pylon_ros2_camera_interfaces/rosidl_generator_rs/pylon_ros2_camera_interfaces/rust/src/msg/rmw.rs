#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__msg__CurrentParams() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__msg__CurrentParams__init(msg: *mut CurrentParams) -> bool;
    fn pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CurrentParams>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CurrentParams>);
    fn pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CurrentParams>, out_seq: *mut rosidl_runtime_rs::Sequence<CurrentParams>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__msg__CurrentParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CurrentParams {
    /// -20000 = Error
    pub offset_x: u32,

    /// -20000 = Error
    pub offset_y: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reverse_x: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reverse_y: bool,

    /// -10000 = error/not available
    pub black_level: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = On
    pub pgi_mode: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Simple, 1 = BaslerPGI
    pub demosaicing_mode: i32,

    /// -20000.0 = Error, -10000.0 = Not available
    pub noise_reduction: f32,

    /// -20000.0 = Error, -10000.0 = Not available
    pub sharpness_enhancement: f32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = Daylight5000K, 2 = Daylight6500K, 3 = Tungsten2800K
    pub light_source_preset: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = Once, 2 = Continuous
    pub balance_white_auto: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Normal, 1 = Fast
    pub sensor_readout_mode: i32,

    /// -20000 = Error, -10000 = Not available
    pub acquisition_frame_count: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = FrameStart, 1 = FrameBurstStart(USB)/AcquisitionStart(GigE)
    pub trigger_selector: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Off, 1 = On
    pub trigger_mode: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Software, 1 = Line1, 2 = Line3, 3 = Line4, 4 = Action1(Selected Gige)
    pub trigger_source: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = RisingEdge, 1 = FallingEdge
    pub trigger_activation: i32,

    /// -20000.0 = Error, -10000.0 = Not available
    pub trigger_delay: f32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Default, 1 = UserSet1, 2 = UserSet2, 3 = UserSet3, 4 = HighGain, 5 = AutoFunctions, 6 = ColorRaw
    pub user_set_selector: i32,

    /// -3 = Unknown, -2 = Error, -1 = Not available, 0 = Default, 1 = UserSet1, 2 = UserSet2, 3 = UserSet3, 4 = HighGain, 5 = AutoFunctions, 6 = ColorRaw
    pub user_set_default_selector: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_sleeping: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brightness: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub exposure: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gain: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gamma: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub binning_x: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub binning_y: u32,

    /// Shows the camera temperature. If not available, then 0.0. USB uses DeviceTemperature and GigE TemperatureAbs parameters.
    pub temperature: f32,

    /// -2 = Error, -1 = Not available
    pub max_num_buffer: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roi: sensor_msgs::msg::rmw::RegionOfInterest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_image_encoding: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_image_encoding: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_image_ros_encoding: rosidl_runtime_rs::String,

    /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
    pub ptp_status: rosidl_runtime_rs::String,

    /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
    pub ptp_servo_status: rosidl_runtime_rs::String,

    /// ptp offset from master in ticks
    pub ptp_offset: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CurrentParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__msg__CurrentParams__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__msg__CurrentParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CurrentParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__CurrentParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CurrentParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CurrentParams where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/msg/CurrentParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__msg__CurrentParams() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__msg__ComponentStatus() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__msg__ComponentStatus__init(msg: *mut ComponentStatus) -> bool;
    fn pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComponentStatus>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComponentStatus>);
    fn pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComponentStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ComponentStatus>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__msg__ComponentStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

///  component id; it must be unique among all registered components
///  @TODO: use on one topic and identify by id
/// string component_id

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComponentStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status_id: i8,

    /// an individual message for config or error cases
    /// it should describe the type of needed config or occurred error briefly
    /// it should be possible to extract automaticly subsequent actions/instructions from the message if this is needed
    pub status_msg: rosidl_runtime_rs::String,

}

impl ComponentStatus {
    /// the official status id of the component
    /// possible values are
    pub const INITIALIZED: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOPPED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RUNNING: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONFIG_NEEDED: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INTERACTION_REQUEST: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEACTIVATED: i8 = 6;

}


impl Default for ComponentStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__msg__ComponentStatus__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__msg__ComponentStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComponentStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__msg__ComponentStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComponentStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComponentStatus where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/msg/ComponentStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__msg__ComponentStatus() }
  }
}


