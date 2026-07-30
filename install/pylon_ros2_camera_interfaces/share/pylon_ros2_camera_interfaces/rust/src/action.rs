
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub exposure_times: Vec<f32>,

    /// Flag which indicates if the gain is provided and hence should be set before
    /// grabbing
    pub gain_given: bool,

    /// Only relevant, if gain_given is true:
    /// The target gain in percent of the maximal value the camera supports.
    /// For USB cameras, the gain is in dB, for GigE cameras it is given in so
    /// called 'device specific units'. This value can be overriden from the
    /// brightness search, in case that the gain_fixed flag is set to false.
    pub gain_values: Vec<f32>,

    /// Flag which indicates if the gamma value is provided and hence should be set
    /// before grabbing
    pub gamma_given: bool,

    /// Only relevant, if gain_given is true:
    /// Gamma correction of pixel intensity.
    /// Adjusts the brightness of the pixel values output by the camera's sensor
    /// to account for a non-linearity in the human perception of brightness or
    /// of the display system (such as CRT).
    pub gamma_values: Vec<f32>,

    /// Flag which indicates if the brightness values are provided and hence should
    /// be set before grabbing
    pub brightness_given: bool,

    /// Only relevant, if brightness_given is true:
    /// The average intensity values of the images. It depends the exposure time
    /// as well as the gain setting.
    pub brightness_values: Vec<f32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Goal {
  type RmwMsg = super::action::rmw::GrabImages_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        exposure_given: msg.exposure_given,
        exposure_times: msg.exposure_times.into(),
        gain_given: msg.gain_given,
        gain_values: msg.gain_values.into(),
        gamma_given: msg.gamma_given,
        gamma_values: msg.gamma_values.into(),
        brightness_given: msg.brightness_given,
        brightness_values: msg.brightness_values.into(),
        exposure_auto: msg.exposure_auto,
        gain_auto: msg.gain_auto,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      exposure_given: msg.exposure_given,
        exposure_times: msg.exposure_times.as_slice().into(),
      gain_given: msg.gain_given,
        gain_values: msg.gain_values.as_slice().into(),
      gamma_given: msg.gamma_given,
        gamma_values: msg.gamma_values.as_slice().into(),
      brightness_given: msg.brightness_given,
        brightness_values: msg.brightness_values.as_slice().into(),
      exposure_auto: msg.exposure_auto,
      gain_auto: msg.gain_auto,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      exposure_given: msg.exposure_given,
      exposure_times: msg.exposure_times
          .into_iter()
          .collect(),
      gain_given: msg.gain_given,
      gain_values: msg.gain_values
          .into_iter()
          .collect(),
      gamma_given: msg.gamma_given,
      gamma_values: msg.gamma_values
          .into_iter()
          .collect(),
      brightness_given: msg.brightness_given,
      brightness_values: msg.brightness_values
          .into_iter()
          .collect(),
      exposure_auto: msg.exposure_auto,
      gain_auto: msg.gain_auto,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_Result {
    /// The resulting images with the inquired image intensity settings.
    /// The size of the vector equals the size of the exposure_times or the
    /// brightness_values-vector
    pub images: Vec<sensor_msgs::msg::Image>,

    /// The CameraInfo obejct describing the camera properties for the above image
    /// sequence. Static in many cases, but can also support variable binning setting
    pub cam_info: sensor_msgs::msg::CameraInfo,

    /// The reached values of the images e.g., the values that were set to the camera
    /// before the grab
    pub reached_exposure_times: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_brightness_values: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gain_values: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_gamma_values: Vec<f32>,

    /// Flag which indicates the success of the grabbing action
    /// In case of failure, the images-vector contains only the images, that could be
    /// grabbed before the failure occurred.
    pub success: bool,

}



impl Default for GrabImages_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Result {
  type RmwMsg = super::action::rmw::GrabImages_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        images: msg.images
          .into_iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cam_info: sensor_msgs::msg::CameraInfo::into_rmw_message(std::borrow::Cow::Owned(msg.cam_info)).into_owned(),
        reached_exposure_times: msg.reached_exposure_times.into(),
        reached_brightness_values: msg.reached_brightness_values.into(),
        reached_gain_values: msg.reached_gain_values.into(),
        reached_gamma_values: msg.reached_gamma_values.into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        images: msg.images
          .iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cam_info: sensor_msgs::msg::CameraInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cam_info)).into_owned(),
        reached_exposure_times: msg.reached_exposure_times.as_slice().into(),
        reached_brightness_values: msg.reached_brightness_values.as_slice().into(),
        reached_gain_values: msg.reached_gain_values.as_slice().into(),
        reached_gamma_values: msg.reached_gamma_values.as_slice().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      images: msg.images
          .into_iter()
          .map(sensor_msgs::msg::Image::from_rmw_message)
          .collect(),
      cam_info: sensor_msgs::msg::CameraInfo::from_rmw_message(msg.cam_info),
      reached_exposure_times: msg.reached_exposure_times
          .into_iter()
          .collect(),
      reached_brightness_values: msg.reached_brightness_values
          .into_iter()
          .collect(),
      reached_gain_values: msg.reached_gain_values
          .into_iter()
          .collect(),
      reached_gamma_values: msg.reached_gamma_values
          .into_iter()
          .collect(),
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub curr_nr_images_taken: i32,

}



impl Default for GrabImages_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_Feedback {
  type RmwMsg = super::action::rmw::GrabImages_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        curr_nr_images_taken: msg.curr_nr_images_taken,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      curr_nr_images_taken: msg.curr_nr_images_taken,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      curr_nr_images_taken: msg.curr_nr_images_taken,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GrabImages_Feedback,

}



impl Default for GrabImages_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_FeedbackMessage {
  type RmwMsg = super::action::rmw::GrabImages_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GrabImages_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GrabImages_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GrabImages_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub exposure_times: Vec<f32>,

}



impl Default for GrabBlazeData_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Goal {
  type RmwMsg = super::action::rmw::GrabBlazeData_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        exposure_given: msg.exposure_given,
        exposure_times: msg.exposure_times.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      exposure_given: msg.exposure_given,
        exposure_times: msg.exposure_times.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      exposure_given: msg.exposure_given,
      exposure_times: msg.exposure_times
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_Result {
    /// Data acquired from blaze
    pub point_clouds: Vec<sensor_msgs::msg::PointCloud2>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub intensity_maps: Vec<sensor_msgs::msg::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_maps: Vec<sensor_msgs::msg::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth_color_maps: Vec<sensor_msgs::msg::Image>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence_maps: Vec<sensor_msgs::msg::Image>,

    /// The CameraInfo obejct describing the camera properties for the above image
    /// sequence. Static in many cases, but can also support variable binning setting
    pub cam_info: sensor_msgs::msg::CameraInfo,

    /// The reached values of the images e.g., the values that were set to the camera
    /// before the grab
    pub reached_exposure_times: Vec<f32>,

    /// Flag which indicates the success of the grabbing action
    /// In case of failure, the images-vector contains only the images, that could be
    /// grabbed before the failure occurred.
    pub success: bool,

}



impl Default for GrabBlazeData_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Result {
  type RmwMsg = super::action::rmw::GrabBlazeData_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_clouds: msg.point_clouds
          .into_iter()
          .map(|elem| sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        intensity_maps: msg.intensity_maps
          .into_iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        depth_maps: msg.depth_maps
          .into_iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        depth_color_maps: msg.depth_color_maps
          .into_iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        confidence_maps: msg.confidence_maps
          .into_iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cam_info: sensor_msgs::msg::CameraInfo::into_rmw_message(std::borrow::Cow::Owned(msg.cam_info)).into_owned(),
        reached_exposure_times: msg.reached_exposure_times.into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_clouds: msg.point_clouds
          .iter()
          .map(|elem| sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        intensity_maps: msg.intensity_maps
          .iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        depth_maps: msg.depth_maps
          .iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        depth_color_maps: msg.depth_color_maps
          .iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        confidence_maps: msg.confidence_maps
          .iter()
          .map(|elem| sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cam_info: sensor_msgs::msg::CameraInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cam_info)).into_owned(),
        reached_exposure_times: msg.reached_exposure_times.as_slice().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point_clouds: msg.point_clouds
          .into_iter()
          .map(sensor_msgs::msg::PointCloud2::from_rmw_message)
          .collect(),
      intensity_maps: msg.intensity_maps
          .into_iter()
          .map(sensor_msgs::msg::Image::from_rmw_message)
          .collect(),
      depth_maps: msg.depth_maps
          .into_iter()
          .map(sensor_msgs::msg::Image::from_rmw_message)
          .collect(),
      depth_color_maps: msg.depth_color_maps
          .into_iter()
          .map(sensor_msgs::msg::Image::from_rmw_message)
          .collect(),
      confidence_maps: msg.confidence_maps
          .into_iter()
          .map(sensor_msgs::msg::Image::from_rmw_message)
          .collect(),
      cam_info: sensor_msgs::msg::CameraInfo::from_rmw_message(msg.cam_info),
      reached_exposure_times: msg.reached_exposure_times
          .into_iter()
          .collect(),
      success: msg.success,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub curr_nr_data_acquired: i32,

}



impl Default for GrabBlazeData_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_Feedback {
  type RmwMsg = super::action::rmw::GrabBlazeData_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        curr_nr_data_acquired: msg.curr_nr_data_acquired,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      curr_nr_data_acquired: msg.curr_nr_data_acquired,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      curr_nr_data_acquired: msg.curr_nr_data_acquired,
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GrabBlazeData_Feedback,

}



impl Default for GrabBlazeData_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_FeedbackMessage {
  type RmwMsg = super::action::rmw::GrabBlazeData_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GrabBlazeData_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GrabBlazeData_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GrabBlazeData_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GrabImages_Goal,

}



impl Default for GrabImages_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_SendGoal_Request {
  type RmwMsg = super::action::rmw::GrabImages_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GrabImages_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GrabImages_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GrabImages_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GrabImages_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_SendGoal_Response {
  type RmwMsg = super::action::rmw::GrabImages_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GrabImages_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_GetResult_Request {
  type RmwMsg = super::action::rmw::GrabImages_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabImages_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GrabImages_Result,

}



impl Default for GrabImages_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabImages_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GrabImages_GetResult_Response {
  type RmwMsg = super::action::rmw::GrabImages_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GrabImages_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GrabImages_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GrabImages_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GrabBlazeData_Goal,

}



impl Default for GrabBlazeData_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_SendGoal_Request {
  type RmwMsg = super::action::rmw::GrabBlazeData_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GrabBlazeData_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GrabBlazeData_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GrabBlazeData_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GrabBlazeData_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_SendGoal_Response {
  type RmwMsg = super::action::rmw::GrabBlazeData_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GrabBlazeData_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_GetResult_Request {
  type RmwMsg = super::action::rmw::GrabBlazeData_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GrabBlazeData_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GrabBlazeData_Result,

}



impl Default for GrabBlazeData_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GrabBlazeData_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GrabBlazeData_GetResult_Response {
  type RmwMsg = super::action::rmw::GrabBlazeData_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GrabBlazeData_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GrabBlazeData_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GrabBlazeData_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabImages
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabImages;

impl rosidl_runtime_rs::Action for GrabImages {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GrabImages_Goal;

  /// The result message defined in the action definition.
  type Result = GrabImages_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GrabImages_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GrabImages_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GrabImages_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GrabImages_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__pylon_ros2_camera_interfaces__action__GrabImages() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GrabImages_Goal,
  ) -> super::action::rmw::GrabImages_SendGoal_Request {
   super::action::rmw::GrabImages_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GrabImages_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GrabImages_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GrabImages_SendGoal_Response {
   super::action::rmw::GrabImages_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GrabImages_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GrabImages_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GrabImages_Feedback,
  ) -> super::action::rmw::GrabImages_FeedbackMessage {
    let mut message = super::action::rmw::GrabImages_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GrabImages_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GrabImages_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GrabImages_GetResult_Request {
   super::action::rmw::GrabImages_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GrabImages_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GrabImages_Result,
  ) -> super::action::rmw::GrabImages_GetResult_Response {
   super::action::rmw::GrabImages_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GrabImages_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GrabImages_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData() -> *const std::ffi::c_void;
}

// Corresponds to pylon_ros2_camera_interfaces__action__GrabBlazeData
#[allow(missing_docs, non_camel_case_types)]
pub struct GrabBlazeData;

impl rosidl_runtime_rs::Action for GrabBlazeData {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GrabBlazeData_Goal;

  /// The result message defined in the action definition.
  type Result = GrabBlazeData_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GrabBlazeData_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GrabBlazeData_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GrabBlazeData_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GrabBlazeData_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__pylon_ros2_camera_interfaces__action__GrabBlazeData() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GrabBlazeData_Goal,
  ) -> super::action::rmw::GrabBlazeData_SendGoal_Request {
   super::action::rmw::GrabBlazeData_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GrabBlazeData_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GrabBlazeData_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GrabBlazeData_SendGoal_Response {
   super::action::rmw::GrabBlazeData_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GrabBlazeData_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GrabBlazeData_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GrabBlazeData_Feedback,
  ) -> super::action::rmw::GrabBlazeData_FeedbackMessage {
    let mut message = super::action::rmw::GrabBlazeData_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GrabBlazeData_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GrabBlazeData_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GrabBlazeData_GetResult_Request {
   super::action::rmw::GrabBlazeData_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GrabBlazeData_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GrabBlazeData_Result,
  ) -> super::action::rmw::GrabBlazeData_GetResult_Response {
   super::action::rmw::GrabBlazeData_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GrabBlazeData_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GrabBlazeData_Result,
  ) {
    (response.status, response.result)
  }
}


