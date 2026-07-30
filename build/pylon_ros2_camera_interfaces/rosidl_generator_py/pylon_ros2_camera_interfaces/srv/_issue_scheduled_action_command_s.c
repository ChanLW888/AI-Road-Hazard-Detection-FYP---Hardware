// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pylon_ros2_camera_interfaces:srv/IssueScheduledActionCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pylon_ros2_camera_interfaces/srv/detail/issue_scheduled_action_command__struct.h"
#include "pylon_ros2_camera_interfaces/srv/detail/issue_scheduled_action_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pylon_ros2_camera_interfaces__srv__issue_scheduled_action_command__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[101];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pylon_ros2_camera_interfaces.srv._issue_scheduled_action_command.IssueScheduledActionCommand_Request", full_classname_dest, 100) == 0);
  }
  pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request * ros_message = _ros_message;
  {  // device_key
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_key");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_key = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // group_key
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_key");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_key = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // group_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_mask = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // action_time_ns_from_current_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_time_ns_from_current_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action_time_ns_from_current_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // broadcast_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "broadcast_address");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->broadcast_address, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pylon_ros2_camera_interfaces__srv__issue_scheduled_action_command__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IssueScheduledActionCommand_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pylon_ros2_camera_interfaces.srv._issue_scheduled_action_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IssueScheduledActionCommand_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request * ros_message = (pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Request *)raw_ros_message;
  {  // device_key
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->device_key);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_key
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->group_key);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->group_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action_time_ns_from_current_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->action_time_ns_from_current_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_time_ns_from_current_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // broadcast_address
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->broadcast_address.data,
      strlen(ros_message->broadcast_address.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "broadcast_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/issue_scheduled_action_command__struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/issue_scheduled_action_command__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pylon_ros2_camera_interfaces__srv__issue_scheduled_action_command__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[102];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pylon_ros2_camera_interfaces.srv._issue_scheduled_action_command.IssueScheduledActionCommand_Response", full_classname_dest, 101) == 0);
  }
  pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pylon_ros2_camera_interfaces__srv__issue_scheduled_action_command__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IssueScheduledActionCommand_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pylon_ros2_camera_interfaces.srv._issue_scheduled_action_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IssueScheduledActionCommand_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response * ros_message = (pylon_ros2_camera_interfaces__srv__IssueScheduledActionCommand_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
