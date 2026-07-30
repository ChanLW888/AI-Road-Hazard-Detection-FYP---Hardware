// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_Goal_type_support_ids_t;

static const _GrabImages_Goal_type_support_ids_t _GrabImages_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_Goal_type_support_symbol_names_t _GrabImages_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Goal)),
  }
};

typedef struct _GrabImages_Goal_type_support_data_t
{
  void * data[2];
} _GrabImages_Goal_type_support_data_t;

static _GrabImages_Goal_type_support_data_t _GrabImages_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_Goal_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_Goal_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Goal>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Goal)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Goal>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_Result_type_support_ids_t;

static const _GrabImages_Result_type_support_ids_t _GrabImages_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_Result_type_support_symbol_names_t _GrabImages_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Result)),
  }
};

typedef struct _GrabImages_Result_type_support_data_t
{
  void * data[2];
} _GrabImages_Result_type_support_data_t;

static _GrabImages_Result_type_support_data_t _GrabImages_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_Result_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_Result_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Result>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Result)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Result>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_Feedback_type_support_ids_t;

static const _GrabImages_Feedback_type_support_ids_t _GrabImages_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_Feedback_type_support_symbol_names_t _GrabImages_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Feedback)),
  }
};

typedef struct _GrabImages_Feedback_type_support_data_t
{
  void * data[2];
} _GrabImages_Feedback_type_support_data_t;

static _GrabImages_Feedback_type_support_data_t _GrabImages_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_Feedback_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_Feedback_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_Feedback)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_Feedback>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_SendGoal_Request_type_support_ids_t;

static const _GrabImages_SendGoal_Request_type_support_ids_t _GrabImages_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_SendGoal_Request_type_support_symbol_names_t _GrabImages_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)),
  }
};

typedef struct _GrabImages_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GrabImages_SendGoal_Request_type_support_data_t;

static _GrabImages_SendGoal_Request_type_support_data_t _GrabImages_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_SendGoal_Request_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Request)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Request>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_SendGoal_Response_type_support_ids_t;

static const _GrabImages_SendGoal_Response_type_support_ids_t _GrabImages_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_SendGoal_Response_type_support_symbol_names_t _GrabImages_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)),
  }
};

typedef struct _GrabImages_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GrabImages_SendGoal_Response_type_support_data_t;

static _GrabImages_SendGoal_Response_type_support_data_t _GrabImages_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_SendGoal_Response_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal_Response)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_SendGoal_type_support_ids_t;

static const _GrabImages_SendGoal_type_support_ids_t _GrabImages_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_SendGoal_type_support_symbol_names_t _GrabImages_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal)),
  }
};

typedef struct _GrabImages_SendGoal_type_support_data_t
{
  void * data[2];
} _GrabImages_SendGoal_type_support_data_t;

static _GrabImages_SendGoal_type_support_data_t _GrabImages_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_SendGoal_service_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GrabImages_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_GetResult_Request_type_support_ids_t;

static const _GrabImages_GetResult_Request_type_support_ids_t _GrabImages_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_GetResult_Request_type_support_symbol_names_t _GrabImages_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)),
  }
};

typedef struct _GrabImages_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GrabImages_GetResult_Request_type_support_data_t;

static _GrabImages_GetResult_Request_type_support_data_t _GrabImages_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_GetResult_Request_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Request)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Request>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_GetResult_Response_type_support_ids_t;

static const _GrabImages_GetResult_Response_type_support_ids_t _GrabImages_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_GetResult_Response_type_support_symbol_names_t _GrabImages_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)),
  }
};

typedef struct _GrabImages_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GrabImages_GetResult_Response_type_support_data_t;

static _GrabImages_GetResult_Response_type_support_data_t _GrabImages_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_GetResult_Response_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult_Response)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult_Response>();
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
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_GetResult_type_support_ids_t;

static const _GrabImages_GetResult_type_support_ids_t _GrabImages_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_GetResult_type_support_symbol_names_t _GrabImages_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult)),
  }
};

typedef struct _GrabImages_GetResult_type_support_data_t
{
  void * data[2];
} _GrabImages_GetResult_type_support_data_t;

static _GrabImages_GetResult_type_support_data_t _GrabImages_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_GetResult_service_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GrabImages_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_GetResult_service_typesupport_map),
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
get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

typedef struct _GrabImages_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GrabImages_FeedbackMessage_type_support_ids_t;

static const _GrabImages_FeedbackMessage_type_support_ids_t _GrabImages_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GrabImages_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GrabImages_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GrabImages_FeedbackMessage_type_support_symbol_names_t _GrabImages_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pylon_ros2_camera_interfaces, action, GrabImages_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pylon_ros2_camera_interfaces, action, GrabImages_FeedbackMessage)),
  }
};

typedef struct _GrabImages_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GrabImages_FeedbackMessage_type_support_data_t;

static _GrabImages_FeedbackMessage_type_support_data_t _GrabImages_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GrabImages_FeedbackMessage_message_typesupport_map = {
  2,
  "pylon_ros2_camera_interfaces",
  &_GrabImages_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GrabImages_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GrabImages_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GrabImages_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GrabImages_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>()
{
  return &::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages_FeedbackMessage)() {
  return get_message_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "pylon_ros2_camera_interfaces/action/detail/grab_images__struct.hpp"
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

static rosidl_action_type_support_t GrabImages_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace pylon_ros2_camera_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages>()
{
  using ::pylon_ros2_camera_interfaces::action::rosidl_typesupport_cpp::GrabImages_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GrabImages_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabImages::Impl::SendGoalService>();
  GrabImages_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabImages::Impl::GetResultService>();
  GrabImages_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabImages::Impl::CancelGoalService>();
  GrabImages_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabImages::Impl::FeedbackMessage>();
  GrabImages_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::pylon_ros2_camera_interfaces::action::GrabImages::Impl::GoalStatusMessage>();
  return &GrabImages_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, pylon_ros2_camera_interfaces, action, GrabImages)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<pylon_ros2_camera_interfaces::action::GrabImages>();
}

#ifdef __cplusplus
}
#endif
