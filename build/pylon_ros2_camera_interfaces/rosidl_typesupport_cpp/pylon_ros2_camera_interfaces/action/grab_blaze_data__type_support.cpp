// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_Goal_type_support_ids_t;

static const _GrabBlazeData_Goal_type_support_ids_t _GrabBlazeData_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_Goal_type_support_symbol_names_t _GrabBlazeData_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Goal)),
  }
};

typedef struct _GrabBlazeData_Goal_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_Goal_type_support_data_t;

static _GrabBlazeData_Goal_type_support_data_t _GrabBlazeData_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_Goal_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Goal)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_Result_type_support_ids_t;

static const _GrabBlazeData_Result_type_support_ids_t _GrabBlazeData_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_Result_type_support_symbol_names_t _GrabBlazeData_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Result)),
  }
};

typedef struct _GrabBlazeData_Result_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_Result_type_support_data_t;

static _GrabBlazeData_Result_type_support_data_t _GrabBlazeData_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_Result_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Result)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_Feedback_type_support_ids_t;

static const _GrabBlazeData_Feedback_type_support_ids_t _GrabBlazeData_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_Feedback_type_support_symbol_names_t _GrabBlazeData_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Feedback)),
  }
};

typedef struct _GrabBlazeData_Feedback_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_Feedback_type_support_data_t;

static _GrabBlazeData_Feedback_type_support_data_t _GrabBlazeData_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_Feedback_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_Feedback)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_SendGoal_Request_type_support_ids_t;

static const _GrabBlazeData_SendGoal_Request_type_support_ids_t _GrabBlazeData_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_SendGoal_Request_type_support_symbol_names_t _GrabBlazeData_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Request)),
  }
};

typedef struct _GrabBlazeData_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_SendGoal_Request_type_support_data_t;

static _GrabBlazeData_SendGoal_Request_type_support_data_t _GrabBlazeData_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_SendGoal_Request_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Request)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_SendGoal_Response_type_support_ids_t;

static const _GrabBlazeData_SendGoal_Response_type_support_ids_t _GrabBlazeData_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_SendGoal_Response_type_support_symbol_names_t _GrabBlazeData_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Response)),
  }
};

typedef struct _GrabBlazeData_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_SendGoal_Response_type_support_data_t;

static _GrabBlazeData_SendGoal_Response_type_support_data_t _GrabBlazeData_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_SendGoal_Response_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal_Response)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_SendGoal_type_support_ids_t;

static const _GrabBlazeData_SendGoal_type_support_ids_t _GrabBlazeData_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_SendGoal_type_support_symbol_names_t _GrabBlazeData_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal)),
  }
};

typedef struct _GrabBlazeData_SendGoal_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_SendGoal_type_support_data_t;

static _GrabBlazeData_SendGoal_type_support_data_t _GrabBlazeData_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_SendGoal_service_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GrabBlazeData_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_GetResult_Request_type_support_ids_t;

static const _GrabBlazeData_GetResult_Request_type_support_ids_t _GrabBlazeData_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_GetResult_Request_type_support_symbol_names_t _GrabBlazeData_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Request)),
  }
};

typedef struct _GrabBlazeData_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_GetResult_Request_type_support_data_t;

static _GrabBlazeData_GetResult_Request_type_support_data_t _GrabBlazeData_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_GetResult_Request_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Request)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_GetResult_Response_type_support_ids_t;

static const _GrabBlazeData_GetResult_Response_type_support_ids_t _GrabBlazeData_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_GetResult_Response_type_support_symbol_names_t _GrabBlazeData_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Response)),
  }
};

typedef struct _GrabBlazeData_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_GetResult_Response_type_support_data_t;

static _GrabBlazeData_GetResult_Response_type_support_data_t _GrabBlazeData_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_GetResult_Response_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult_Response)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_GetResult_type_support_ids_t;

static const _GrabBlazeData_GetResult_type_support_ids_t _GrabBlazeData_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_GetResult_type_support_symbol_names_t _GrabBlazeData_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult)),
  }
};

typedef struct _GrabBlazeData_GetResult_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_GetResult_type_support_data_t;

static _GrabBlazeData_GetResult_type_support_data_t _GrabBlazeData_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_GetResult_service_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GrabBlazeData_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GrabBlazeData_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabBlazeData_FeedbackMessage_type_support_ids_t;

static const _GrabBlazeData_FeedbackMessage_type_support_ids_t _GrabBlazeData_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabBlazeData_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabBlazeData_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabBlazeData_FeedbackMessage_type_support_symbol_names_t _GrabBlazeData_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_FeedbackMessage)),
  }
};

typedef struct _GrabBlazeData_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GrabBlazeData_FeedbackMessage_type_support_data_t;

static _GrabBlazeData_FeedbackMessage_type_support_data_t _GrabBlazeData_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabBlazeData_FeedbackMessage_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabBlazeData_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GrabBlazeData_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GrabBlazeData_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabBlazeData_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabBlazeData_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData_FeedbackMessage)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_blaze_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace pylon_ros2_camera_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GrabBlazeData_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData>()
{
  using ::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabBlazeData_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GrabBlazeData_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabBlazeData::Impl::SendGoalService>();
  GrabBlazeData_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabBlazeData::Impl::GetResultService>();
  GrabBlazeData_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabBlazeData::Impl::CancelGoalService>();
  GrabBlazeData_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabBlazeData::Impl::FeedbackMessage>();
  GrabBlazeData_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabBlazeData::Impl::GoalStatusMessage>();
  return &GrabBlazeData_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabBlazeData)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<pylon_ros2_camera_interfaces::action::GrabBlazeData>();
}

#ifdef __cplusplus
}
#endif
