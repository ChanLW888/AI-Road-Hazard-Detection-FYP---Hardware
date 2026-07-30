#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIntegerValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetIntegerValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetIntegerValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetIntegerValue_Request {
  type RmwMsg = super::srv::rmw::GetIntegerValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIntegerValue_Response {
    /// returned value
    pub value: i64,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for GetIntegerValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetIntegerValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetIntegerValue_Response {
  type RmwMsg = super::srv::rmw::GetIntegerValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetFloatValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloatValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloatValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloatValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloatValue_Request {
  type RmwMsg = super::srv::rmw::GetFloatValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetFloatValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloatValue_Response {
    /// returned value
    pub value: f32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for GetFloatValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloatValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloatValue_Response {
  type RmwMsg = super::srv::rmw::GetFloatValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetStringValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetStringValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringValue_Request {
  type RmwMsg = super::srv::rmw::GetStringValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetStringValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringValue_Response {
    /// returned value
    pub value: std::string::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for GetStringValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringValue_Response {
  type RmwMsg = super::srv::rmw::GetStringValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value.as_str().into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value.as_str().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value.to_string(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPtpStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetPtpStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPtpStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPtpStatus_Request {
  type RmwMsg = super::srv::rmw::GetPtpStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPtpStatus_Response {
    /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
    pub ptp_status: std::string::String,

    /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
    pub ptp_servo_status: std::string::String,

    /// ptp offset from master in ticks
    pub offset_from_master: i64,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for GetPtpStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPtpStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPtpStatus_Response {
  type RmwMsg = super::srv::rmw::GetPtpStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ptp_status: msg.ptp_status.as_str().into(),
        ptp_servo_status: msg.ptp_servo_status.as_str().into(),
        offset_from_master: msg.offset_from_master,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ptp_status: msg.ptp_status.as_str().into(),
        ptp_servo_status: msg.ptp_servo_status.as_str().into(),
      offset_from_master: msg.offset_from_master,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ptp_status: msg.ptp_status.to_string(),
      ptp_servo_status: msg.ptp_servo_status.to_string(),
      offset_from_master: msg.offset_from_master,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetBinning_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBinning_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_binning_x: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_binning_y: u32,

}



impl Default for SetBinning_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBinning_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBinning_Request {
  type RmwMsg = super::srv::rmw::SetBinning_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_binning_x: msg.target_binning_x,
        target_binning_y: msg.target_binning_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_binning_x: msg.target_binning_x,
      target_binning_y: msg.target_binning_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_binning_x: msg.target_binning_x,
      target_binning_y: msg.target_binning_y,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetBinning_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBinning_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_binning_x: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_binning_y: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetBinning_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBinning_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBinning_Response {
  type RmwMsg = super::srv::rmw::SetBinning_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_binning_x: msg.reached_binning_x,
        reached_binning_y: msg.reached_binning_y,
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reached_binning_x: msg.reached_binning_x,
      reached_binning_y: msg.reached_binning_y,
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_binning_x: msg.reached_binning_x,
      reached_binning_y: msg.reached_binning_y,
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetBrightness_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBrightness_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_brightness: i32,

    /// The brightness_continuous flag controls the auto brightness function.
    /// If it is set to false, the given brightness will only be reached once.
    /// Hence changing light conditions lead to changing brightness values.
    /// If it is set to true, the given brightness will be reached continuously,
    /// trying to adapt to changing light conditions. The 'brightness_contunuous'
    /// mode is is only possible for values in the possible auto range of the pylon
    /// API which is e.g., for acA2500-14um and acA1920-40gm
    pub brightness_continuous: bool,

    /// If the camera should try reach or keep the desired brightness, hence adapting
    /// to changing light conditions, at least one of the following flags MUST be set.
    /// If both are set, the interface will use the profile that tries to keep the
    /// gain at minimum to reduce white noise.
    /// 'exposure_auto' will adapt the exposure time to reach the brightness, wheras
    /// 'gain_auto' does so by adapting the gain.
    pub exposure_auto: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gain_auto: bool,

}



impl Default for SetBrightness_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBrightness_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBrightness_Request {
  type RmwMsg = super::srv::rmw::SetBrightness_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_brightness: msg.target_brightness,
        brightness_continuous: msg.brightness_continuous,
        exposure_auto: msg.exposure_auto,
        gain_auto: msg.gain_auto,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_brightness: msg.target_brightness,
      brightness_continuous: msg.brightness_continuous,
      exposure_auto: msg.exposure_auto,
      gain_auto: msg.gain_auto,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_brightness: msg.target_brightness,
      brightness_continuous: msg.brightness_continuous,
      exposure_auto: msg.exposure_auto,
      gain_auto: msg.gain_auto,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetBrightness_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBrightness_Response {
    /// Exact match can not always be reached
    pub reached_brightness: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_exposure_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gain_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetBrightness_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBrightness_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBrightness_Response {
  type RmwMsg = super::srv::rmw::SetBrightness_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_brightness: msg.reached_brightness,
        reached_exposure_time: msg.reached_exposure_time,
        reached_gain_value: msg.reached_gain_value,
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reached_brightness: msg.reached_brightness,
      reached_exposure_time: msg.reached_exposure_time,
      reached_gain_value: msg.reached_gain_value,
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_brightness: msg.reached_brightness,
      reached_exposure_time: msg.reached_exposure_time,
      reached_gain_value: msg.reached_gain_value,
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetExposure_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExposure_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_exposure: f32,

}



impl Default for SetExposure_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetExposure_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetExposure_Request {
  type RmwMsg = super::srv::rmw::SetExposure_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_exposure: msg.target_exposure,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_exposure: msg.target_exposure,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_exposure: msg.target_exposure,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetExposure_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExposure_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_exposure: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetExposure_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetExposure_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetExposure_Response {
  type RmwMsg = super::srv::rmw::SetExposure_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_exposure: msg.reached_exposure,
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reached_exposure: msg.reached_exposure,
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_exposure: msg.reached_exposure,
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetGain_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_gain: f32,

}



impl Default for SetGain_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGain_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGain_Request {
  type RmwMsg = super::srv::rmw::SetGain_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_gain: msg.target_gain,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_gain: msg.target_gain,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_gain: msg.target_gain,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetGain_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gain: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetGain_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGain_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGain_Response {
  type RmwMsg = super::srv::rmw::SetGain_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_gain: msg.reached_gain,
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reached_gain: msg.reached_gain,
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_gain: msg.reached_gain,
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetGamma_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGamma_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_gamma: f32,

}



impl Default for SetGamma_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGamma_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGamma_Request {
  type RmwMsg = super::srv::rmw::SetGamma_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_gamma: msg.target_gamma,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_gamma: msg.target_gamma,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_gamma: msg.target_gamma,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetGamma_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGamma_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gamma: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetGamma_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGamma_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGamma_Response {
  type RmwMsg = super::srv::rmw::SetGamma_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_gamma: msg.reached_gamma,
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reached_gamma: msg.reached_gamma,
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_gamma: msg.reached_gamma,
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetROI_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetROI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_roi: sensor_msgs::msg::RegionOfInterest,

}



impl Default for SetROI_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetROI_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetROI_Request {
  type RmwMsg = super::srv::rmw::SetROI_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.target_roi)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_roi)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_roi: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.target_roi),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetROI_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetROI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_roi: sensor_msgs::msg::RegionOfInterest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetROI_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetROI_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetROI_Response {
  type RmwMsg = super::srv::rmw::SetROI_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.reached_roi)).into_owned(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reached_roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reached_roi)).into_owned(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reached_roi: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.reached_roi),
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetSleeping_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSleeping_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub set_sleeping: bool,

}



impl Default for SetSleeping_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSleeping_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSleeping_Request {
  type RmwMsg = super::srv::rmw::SetSleeping_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        set_sleeping: msg.set_sleeping,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      set_sleeping: msg.set_sleeping,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      set_sleeping: msg.set_sleeping,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetSleeping_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSleeping_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSleeping_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSleeping_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSleeping_Response {
  type RmwMsg = super::srv::rmw::SetSleeping_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWhiteBalance_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub balance_ratio_red: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub balance_ratio_green: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub balance_ratio_blue: f32,

}



impl Default for SetWhiteBalance_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWhiteBalance_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetWhiteBalance_Request {
  type RmwMsg = super::srv::rmw::SetWhiteBalance_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        balance_ratio_red: msg.balance_ratio_red,
        balance_ratio_green: msg.balance_ratio_green,
        balance_ratio_blue: msg.balance_ratio_blue,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      balance_ratio_red: msg.balance_ratio_red,
      balance_ratio_green: msg.balance_ratio_green,
      balance_ratio_blue: msg.balance_ratio_blue,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      balance_ratio_red: msg.balance_ratio_red,
      balance_ratio_green: msg.balance_ratio_green,
      balance_ratio_blue: msg.balance_ratio_blue,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWhiteBalance_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for SetWhiteBalance_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWhiteBalance_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetWhiteBalance_Response {
  type RmwMsg = super::srv::rmw::SetWhiteBalance_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIntegerValue_Request {
    /// value to be setted
    pub value: i64,

}



impl Default for SetIntegerValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIntegerValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetIntegerValue_Request {
  type RmwMsg = super::srv::rmw::SetIntegerValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIntegerValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for SetIntegerValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIntegerValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetIntegerValue_Response {
  type RmwMsg = super::srv::rmw::SetIntegerValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetFloatValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloatValue_Request {
    /// value to be setted
    pub value: f32,

}



impl Default for SetFloatValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloatValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloatValue_Request {
  type RmwMsg = super::srv::rmw::SetFloatValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetFloatValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloatValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for SetFloatValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloatValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloatValue_Response {
  type RmwMsg = super::srv::rmw::SetFloatValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetStringValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringValue_Request {
    /// value to be setted
    pub value: std::string::String,

}



impl Default for SetStringValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringValue_Request {
  type RmwMsg = super::srv::rmw::SetStringValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetStringValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: std::string::String,

}



impl Default for SetStringValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringValue_Response {
  type RmwMsg = super::srv::rmw::SetStringValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetActionTriggerConfiguration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action_device_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action_group_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action_group_mask: u32,

    /// ERegistrationMode: 1 -> RegistrationMode_Append, 2 -> RegistrationMode_ReplaceAll
    pub registration_mode: i32,

    /// ECleanup: 1 -> Cleanup_None, 2 -> Cleanup_Delete
    pub cleanup: i32,

}



impl Default for SetActionTriggerConfiguration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetActionTriggerConfiguration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetActionTriggerConfiguration_Request {
  type RmwMsg = super::srv::rmw::SetActionTriggerConfiguration_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action_device_key: msg.action_device_key,
        action_group_key: msg.action_group_key,
        action_group_mask: msg.action_group_mask,
        registration_mode: msg.registration_mode,
        cleanup: msg.cleanup,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      action_device_key: msg.action_device_key,
      action_group_key: msg.action_group_key,
      action_group_mask: msg.action_group_mask,
      registration_mode: msg.registration_mode,
      cleanup: msg.cleanup,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action_device_key: msg.action_device_key,
      action_group_key: msg.action_group_key,
      action_group_mask: msg.action_group_mask,
      registration_mode: msg.registration_mode,
      cleanup: msg.cleanup,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetActionTriggerConfiguration_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: std::string::String,

}



impl Default for SetActionTriggerConfiguration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetActionTriggerConfiguration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetActionTriggerConfiguration_Response {
  type RmwMsg = super::srv::rmw::SetActionTriggerConfiguration_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueActionCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_mask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub broadcast_address: std::string::String,

}



impl Default for IssueActionCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IssueActionCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IssueActionCommand_Request {
  type RmwMsg = super::srv::rmw::IssueActionCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_key: msg.device_key,
        group_key: msg.group_key,
        group_mask: msg.group_mask,
        broadcast_address: msg.broadcast_address.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_key: msg.device_key,
      group_key: msg.group_key,
      group_mask: msg.group_mask,
        broadcast_address: msg.broadcast_address.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_key: msg.device_key,
      group_key: msg.group_key,
      group_mask: msg.group_mask,
      broadcast_address: msg.broadcast_address.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueActionCommand_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: std::string::String,

}



impl Default for IssueActionCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IssueActionCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IssueActionCommand_Response {
  type RmwMsg = super::srv::rmw::IssueActionCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueScheduledActionCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_key: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_mask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action_time_ns_from_current_timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub broadcast_address: std::string::String,

}



impl Default for IssueScheduledActionCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IssueScheduledActionCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IssueScheduledActionCommand_Request {
  type RmwMsg = super::srv::rmw::IssueScheduledActionCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_key: msg.device_key,
        group_key: msg.group_key,
        group_mask: msg.group_mask,
        action_time_ns_from_current_timestamp: msg.action_time_ns_from_current_timestamp,
        broadcast_address: msg.broadcast_address.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_key: msg.device_key,
      group_key: msg.group_key,
      group_mask: msg.group_mask,
      action_time_ns_from_current_timestamp: msg.action_time_ns_from_current_timestamp,
        broadcast_address: msg.broadcast_address.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_key: msg.device_key,
      group_key: msg.group_key,
      group_mask: msg.group_mask,
      action_time_ns_from_current_timestamp: msg.action_time_ns_from_current_timestamp,
      broadcast_address: msg.broadcast_address.to_string(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueScheduledActionCommand_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: std::string::String,

}



impl Default for IssueScheduledActionCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IssueScheduledActionCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IssueScheduledActionCommand_Response {
  type RmwMsg = super::srv::rmw::IssueScheduledActionCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetIntegerValue
#[allow(missing_docs, non_camel_case_types)]
pub struct GetIntegerValue;

impl rosidl_runtime_rs::Service for GetIntegerValue {
    type Request = GetIntegerValue_Request;
    type Response = GetIntegerValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetFloatValue
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloatValue;

impl rosidl_runtime_rs::Service for GetFloatValue {
    type Request = GetFloatValue_Request;
    type Response = GetFloatValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetStringValue
#[allow(missing_docs, non_camel_case_types)]
pub struct GetStringValue;

impl rosidl_runtime_rs::Service for GetStringValue {
    type Request = GetStringValue_Request;
    type Response = GetStringValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetPtpStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPtpStatus;

impl rosidl_runtime_rs::Service for GetPtpStatus {
    type Request = GetPtpStatus_Request;
    type Response = GetPtpStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBinning
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBinning;

impl rosidl_runtime_rs::Service for SetBinning {
    type Request = SetBinning_Request;
    type Response = SetBinning_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBrightness
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBrightness;

impl rosidl_runtime_rs::Service for SetBrightness {
    type Request = SetBrightness_Request;
    type Response = SetBrightness_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetExposure
#[allow(missing_docs, non_camel_case_types)]
pub struct SetExposure;

impl rosidl_runtime_rs::Service for SetExposure {
    type Request = SetExposure_Request;
    type Response = SetExposure_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGain
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGain;

impl rosidl_runtime_rs::Service for SetGain {
    type Request = SetGain_Request;
    type Response = SetGain_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGamma
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGamma;

impl rosidl_runtime_rs::Service for SetGamma {
    type Request = SetGamma_Request;
    type Response = SetGamma_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetROI
#[allow(missing_docs, non_camel_case_types)]
pub struct SetROI;

impl rosidl_runtime_rs::Service for SetROI {
    type Request = SetROI_Request;
    type Response = SetROI_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetSleeping
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSleeping;

impl rosidl_runtime_rs::Service for SetSleeping {
    type Request = SetSleeping_Request;
    type Response = SetSleeping_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetWhiteBalance
#[allow(missing_docs, non_camel_case_types)]
pub struct SetWhiteBalance;

impl rosidl_runtime_rs::Service for SetWhiteBalance {
    type Request = SetWhiteBalance_Request;
    type Response = SetWhiteBalance_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetIntegerValue
#[allow(missing_docs, non_camel_case_types)]
pub struct SetIntegerValue;

impl rosidl_runtime_rs::Service for SetIntegerValue {
    type Request = SetIntegerValue_Request;
    type Response = SetIntegerValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetFloatValue
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloatValue;

impl rosidl_runtime_rs::Service for SetFloatValue {
    type Request = SetFloatValue_Request;
    type Response = SetFloatValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetStringValue
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStringValue;

impl rosidl_runtime_rs::Service for SetStringValue {
    type Request = SetStringValue_Request;
    type Response = SetStringValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration
#[allow(missing_docs, non_camel_case_types)]
pub struct SetActionTriggerConfiguration;

impl rosidl_runtime_rs::Service for SetActionTriggerConfiguration {
    type Request = SetActionTriggerConfiguration_Request;
    type Response = SetActionTriggerConfiguration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueActionCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct IssueActionCommand;

impl rosidl_runtime_rs::Service for IssueActionCommand {
    type Request = IssueActionCommand_Request;
    type Response = IssueActionCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand() }
    }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct IssueScheduledActionCommand;

impl rosidl_runtime_rs::Service for IssueScheduledActionCommand {
    type Request = IssueScheduledActionCommand_Request;
    type Response = IssueScheduledActionCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand() }
    }
}


