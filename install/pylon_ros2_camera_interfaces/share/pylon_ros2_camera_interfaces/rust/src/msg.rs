#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pylon_ros2_camera_interfaces__msg__CurrentParams

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub roi: sensor_msgs::msg::RegionOfInterest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_image_encoding: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_image_encoding: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_image_ros_encoding: std::string::String,

    /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
    pub ptp_status: std::string::String,

    /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
    pub ptp_servo_status: std::string::String,

    /// ptp offset from master in ticks
    pub ptp_offset: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for CurrentParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CurrentParams::default())
  }
}

impl rosidl_runtime_rs::Message for CurrentParams {
  type RmwMsg = super::msg::rmw::CurrentParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        offset_x: msg.offset_x,
        offset_y: msg.offset_y,
        reverse_x: msg.reverse_x,
        reverse_y: msg.reverse_y,
        black_level: msg.black_level,
        pgi_mode: msg.pgi_mode,
        demosaicing_mode: msg.demosaicing_mode,
        noise_reduction: msg.noise_reduction,
        sharpness_enhancement: msg.sharpness_enhancement,
        light_source_preset: msg.light_source_preset,
        balance_white_auto: msg.balance_white_auto,
        sensor_readout_mode: msg.sensor_readout_mode,
        acquisition_frame_count: msg.acquisition_frame_count,
        trigger_selector: msg.trigger_selector,
        trigger_mode: msg.trigger_mode,
        trigger_source: msg.trigger_source,
        trigger_activation: msg.trigger_activation,
        trigger_delay: msg.trigger_delay,
        user_set_selector: msg.user_set_selector,
        user_set_default_selector: msg.user_set_default_selector,
        is_sleeping: msg.is_sleeping,
        brightness: msg.brightness,
        exposure: msg.exposure,
        gain: msg.gain,
        gamma: msg.gamma,
        binning_x: msg.binning_x,
        binning_y: msg.binning_y,
        temperature: msg.temperature,
        max_num_buffer: msg.max_num_buffer,
        roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.roi)).into_owned(),
        available_image_encoding: msg.available_image_encoding
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_image_encoding: msg.current_image_encoding.as_str().into(),
        current_image_ros_encoding: msg.current_image_ros_encoding.as_str().into(),
        ptp_status: msg.ptp_status.as_str().into(),
        ptp_servo_status: msg.ptp_servo_status.as_str().into(),
        ptp_offset: msg.ptp_offset,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      reverse_x: msg.reverse_x,
      reverse_y: msg.reverse_y,
      black_level: msg.black_level,
      pgi_mode: msg.pgi_mode,
      demosaicing_mode: msg.demosaicing_mode,
      noise_reduction: msg.noise_reduction,
      sharpness_enhancement: msg.sharpness_enhancement,
      light_source_preset: msg.light_source_preset,
      balance_white_auto: msg.balance_white_auto,
      sensor_readout_mode: msg.sensor_readout_mode,
      acquisition_frame_count: msg.acquisition_frame_count,
      trigger_selector: msg.trigger_selector,
      trigger_mode: msg.trigger_mode,
      trigger_source: msg.trigger_source,
      trigger_activation: msg.trigger_activation,
      trigger_delay: msg.trigger_delay,
      user_set_selector: msg.user_set_selector,
      user_set_default_selector: msg.user_set_default_selector,
      is_sleeping: msg.is_sleeping,
      brightness: msg.brightness,
      exposure: msg.exposure,
      gain: msg.gain,
      gamma: msg.gamma,
      binning_x: msg.binning_x,
      binning_y: msg.binning_y,
      temperature: msg.temperature,
      max_num_buffer: msg.max_num_buffer,
        roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.roi)).into_owned(),
        available_image_encoding: msg.available_image_encoding
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_image_encoding: msg.current_image_encoding.as_str().into(),
        current_image_ros_encoding: msg.current_image_ros_encoding.as_str().into(),
        ptp_status: msg.ptp_status.as_str().into(),
        ptp_servo_status: msg.ptp_servo_status.as_str().into(),
      ptp_offset: msg.ptp_offset,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      reverse_x: msg.reverse_x,
      reverse_y: msg.reverse_y,
      black_level: msg.black_level,
      pgi_mode: msg.pgi_mode,
      demosaicing_mode: msg.demosaicing_mode,
      noise_reduction: msg.noise_reduction,
      sharpness_enhancement: msg.sharpness_enhancement,
      light_source_preset: msg.light_source_preset,
      balance_white_auto: msg.balance_white_auto,
      sensor_readout_mode: msg.sensor_readout_mode,
      acquisition_frame_count: msg.acquisition_frame_count,
      trigger_selector: msg.trigger_selector,
      trigger_mode: msg.trigger_mode,
      trigger_source: msg.trigger_source,
      trigger_activation: msg.trigger_activation,
      trigger_delay: msg.trigger_delay,
      user_set_selector: msg.user_set_selector,
      user_set_default_selector: msg.user_set_default_selector,
      is_sleeping: msg.is_sleeping,
      brightness: msg.brightness,
      exposure: msg.exposure,
      gain: msg.gain,
      gamma: msg.gamma,
      binning_x: msg.binning_x,
      binning_y: msg.binning_y,
      temperature: msg.temperature,
      max_num_buffer: msg.max_num_buffer,
      roi: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.roi),
      available_image_encoding: msg.available_image_encoding
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      current_image_encoding: msg.current_image_encoding.to_string(),
      current_image_ros_encoding: msg.current_image_ros_encoding.to_string(),
      ptp_status: msg.ptp_status.to_string(),
      ptp_servo_status: msg.ptp_servo_status.to_string(),
      ptp_offset: msg.ptp_offset,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__msg__ComponentStatus
///  component id; it must be unique among all registered components
///  @TODO: use on one topic and identify by id
/// string component_id

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComponentStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status_id: i8,

    /// an individual message for config or error cases
    /// it should describe the type of needed config or occurred error briefly
    /// it should be possible to extract automaticly subsequent actions/instructions from the message if this is needed
    pub status_msg: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ComponentStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ComponentStatus {
  type RmwMsg = super::msg::rmw::ComponentStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status_id: msg.status_id,
        status_msg: msg.status_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status_id: msg.status_id,
        status_msg: msg.status_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status_id: msg.status_id,
      status_msg: msg.status_msg.to_string(),
    }
  }
}


