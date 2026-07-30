#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__init(msg: *mut GetIntegerValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetIntegerValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIntegerValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetIntegerValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetIntegerValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetIntegerValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetIntegerValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetIntegerValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__init(msg: *mut GetIntegerValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetIntegerValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetIntegerValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIntegerValue_Response {
    /// returned value
    pub value: i64,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetIntegerValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetIntegerValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetIntegerValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetIntegerValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetIntegerValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetIntegerValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__init(msg: *mut GetFloatValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloatValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetFloatValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloatValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloatValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloatValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloatValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloatValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetFloatValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__init(msg: *mut GetFloatValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloatValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloatValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetFloatValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloatValue_Response {
    /// returned value
    pub value: f32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetFloatValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloatValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetFloatValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloatValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloatValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetFloatValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetFloatValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Request__init(msg: *mut GetStringValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetStringValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetStringValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetStringValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetStringValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetStringValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Response__init(msg: *mut GetStringValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetStringValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringValue_Response {
    /// returned value
    pub value: rosidl_runtime_rs::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetStringValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetStringValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetStringValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetStringValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetStringValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetStringValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__init(msg: *mut GetPtpStatus_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Request>);
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPtpStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPtpStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetPtpStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPtpStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPtpStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPtpStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetPtpStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__init(msg: *mut GetPtpStatus_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Response>);
    fn pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPtpStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPtpStatus_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPtpStatus_Response {
    /// latched state of the PTP clock, see https://ja.docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpStatusEnum
    pub ptp_status: rosidl_runtime_rs::String,

    /// latched state of the clock servo, see https://docs.baslerweb.com/pylonapi/net/T_Basler_Pylon_PLCamera_PtpServoStatusEnum
    pub ptp_servo_status: rosidl_runtime_rs::String,

    /// ptp offset from master in ticks
    pub offset_from_master: i64,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetPtpStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPtpStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPtpStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPtpStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/GetPtpStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__GetPtpStatus_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Request__init(msg: *mut SetBinning_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBinning_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBinning_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetBinning_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetBinning_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBinning_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBinning_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBinning_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetBinning_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Response__init(msg: *mut SetBinning_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBinning_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBinning_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBinning_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetBinning_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetBinning_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBinning_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBinning_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBinning_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBinning_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetBinning_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBinning_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(msg: *mut SetBrightness_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBrightness_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBrightness_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetBrightness_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBrightness_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBrightness_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBrightness_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetBrightness_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(msg: *mut SetBrightness_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBrightness_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBrightness_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetBrightness_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetBrightness_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBrightness_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetBrightness_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBrightness_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBrightness_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetBrightness_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetBrightness_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Request__init(msg: *mut SetExposure_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetExposure_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetExposure_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExposure_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_exposure: f32,

}



impl Default for SetExposure_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetExposure_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetExposure_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetExposure_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetExposure_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetExposure_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetExposure_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Response__init(msg: *mut SetExposure_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetExposure_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetExposure_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetExposure_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetExposure_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetExposure_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetExposure_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetExposure_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetExposure_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetExposure_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetExposure_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetExposure_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetGain_Request__init(msg: *mut SetGain_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGain_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGain_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_gain: f32,

}



impl Default for SetGain_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetGain_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetGain_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGain_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGain_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGain_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetGain_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetGain_Response__init(msg: *mut SetGain_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGain_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGain_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetGain_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetGain_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGain_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGain_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGain_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGain_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetGain_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGain_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Request__init(msg: *mut SetGamma_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGamma_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGamma_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGamma_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_gamma: f32,

}



impl Default for SetGamma_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetGamma_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetGamma_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGamma_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGamma_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGamma_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetGamma_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Response__init(msg: *mut SetGamma_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGamma_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGamma_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetGamma_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetGamma_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetGamma_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGamma_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetGamma_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGamma_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGamma_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetGamma_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetGamma_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetROI_Request__init(msg: *mut SetROI_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetROI_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetROI_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetROI_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetROI_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetROI_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetROI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_roi: sensor_msgs::msg::rmw::RegionOfInterest,

}



impl Default for SetROI_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetROI_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetROI_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetROI_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetROI_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetROI_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetROI_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetROI_Response__init(msg: *mut SetROI_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetROI_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetROI_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetROI_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetROI_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetROI_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetROI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_roi: sensor_msgs::msg::rmw::RegionOfInterest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetROI_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetROI_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetROI_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetROI_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetROI_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetROI_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetROI_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetROI_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetROI_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Request__init(msg: *mut SetSleeping_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSleeping_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetSleeping_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSleeping_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub set_sleeping: bool,

}



impl Default for SetSleeping_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetSleeping_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetSleeping_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSleeping_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSleeping_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSleeping_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetSleeping_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Response__init(msg: *mut SetSleeping_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSleeping_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSleeping_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetSleeping_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSleeping_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSleeping_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetSleeping_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetSleeping_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSleeping_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetSleeping_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSleeping_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSleeping_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetSleeping_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetSleeping_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__init(msg: *mut SetWhiteBalance_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWhiteBalance_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWhiteBalance_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWhiteBalance_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWhiteBalance_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetWhiteBalance_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__init(msg: *mut SetWhiteBalance_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWhiteBalance_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWhiteBalance_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWhiteBalance_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetWhiteBalance_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWhiteBalance_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWhiteBalance_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWhiteBalance_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetWhiteBalance_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetWhiteBalance_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init(msg: *mut SetIntegerValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIntegerValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIntegerValue_Request {
    /// value to be setted
    pub value: i64,

}



impl Default for SetIntegerValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIntegerValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIntegerValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIntegerValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetIntegerValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init(msg: *mut SetIntegerValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIntegerValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIntegerValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIntegerValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetIntegerValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIntegerValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIntegerValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIntegerValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetIntegerValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetIntegerValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__init(msg: *mut SetFloatValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloatValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetFloatValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloatValue_Request {
    /// value to be setted
    pub value: f32,

}



impl Default for SetFloatValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloatValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloatValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloatValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetFloatValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__init(msg: *mut SetFloatValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloatValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloatValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetFloatValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloatValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloatValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloatValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetFloatValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloatValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloatValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetFloatValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetFloatValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Request__init(msg: *mut SetStringValue_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetStringValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringValue_Request {
    /// value to be setted
    pub value: rosidl_runtime_rs::String,

}



impl Default for SetStringValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetStringValue_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetStringValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetStringValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Response__init(msg: *mut SetStringValue_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringValue_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetStringValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringValue_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g., for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetStringValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetStringValue_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetStringValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetStringValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetStringValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetStringValue_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(msg: *mut SetActionTriggerConfiguration_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Request>);
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetActionTriggerConfiguration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetActionTriggerConfiguration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetActionTriggerConfiguration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetActionTriggerConfiguration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(msg: *mut SetActionTriggerConfiguration_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Response>);
    fn pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetActionTriggerConfiguration_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetActionTriggerConfiguration_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetActionTriggerConfiguration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetActionTriggerConfiguration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetActionTriggerConfiguration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetActionTriggerConfiguration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/SetActionTriggerConfiguration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__SetActionTriggerConfiguration_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__init(msg: *mut IssueActionCommand_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Request>);
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IssueActionCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub broadcast_address: rosidl_runtime_rs::String,

}



impl Default for IssueActionCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IssueActionCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IssueActionCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IssueActionCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/IssueActionCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__init(msg: *mut IssueActionCommand_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Response>);
    fn pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IssueActionCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IssueActionCommand_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueActionCommand_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: rosidl_runtime_rs::String,

}



impl Default for IssueActionCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IssueActionCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IssueActionCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IssueActionCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/IssueActionCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueActionCommand_Response() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__init(msg: *mut IssueScheduledActionCommand_Request) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Request>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Request>);
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Request>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub broadcast_address: rosidl_runtime_rs::String,

}



impl Default for IssueScheduledActionCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IssueScheduledActionCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IssueScheduledActionCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IssueScheduledActionCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/IssueScheduledActionCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request() }
  }
}


#[link(name = "pylon_ros2_camera_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "pylon_ros2_camera_interfaces__rosidl_generator_c")]
extern "C" {
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__init(msg: *mut IssueScheduledActionCommand_Response) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Response>, size: usize) -> bool;
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Response>);
    fn pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IssueScheduledActionCommand_Response>) -> bool;
}

// Corresponds to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IssueScheduledActionCommand_Response {
    /// success or not
    pub success: bool,

    /// status message
    pub message: rosidl_runtime_rs::String,

}



impl Default for IssueScheduledActionCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IssueScheduledActionCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IssueScheduledActionCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IssueScheduledActionCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pylon_ros2_camera_interfaces/srv/IssueScheduledActionCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response() }
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


