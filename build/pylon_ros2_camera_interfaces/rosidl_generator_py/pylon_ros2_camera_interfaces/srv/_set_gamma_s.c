// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pylon_ros2_camera_interfaces:srv/SetGamma.idl
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
#include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__struct.h"
#include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pylon_ros2_camera_interfaces__srv__set_gamma__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("pylon_ros2_camera_interfaces.srv._set_gamma.SetGamma_Request", full_classname_dest, 60) == 0);
  }
  pylon_ros2_camera_interfaces__srv__SetGamma_Request * ros_message = _ros_message;
  {  // target_gamma
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_gamma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_gamma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pylon_ros2_camera_interfaces__srv__set_gamma__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetGamma_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pylon_ros2_camera_interfaces.srv._set_gamma");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetGamma_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pylon_ros2_camera_interfaces__srv__SetGamma_Request * ros_message = (pylon_ros2_camera_interfaces__srv__SetGamma_Request *)raw_ros_message;
  {  // target_gamma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_gamma", field);
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
// #include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__struct.h"
// already included above
// #include "pylon_ros2_camera_interfaces/srv/detail/set_gamma__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pylon_ros2_camera_interfaces__srv__set_gamma__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("pylon_ros2_camera_interfaces.srv._set_gamma.SetGamma_Response", full_classname_dest, 61) == 0);
  }
  pylon_ros2_camera_interfaces__srv__SetGamma_Response * ros_message = _ros_message;
  {  // reached_gamma
    PyObject * field = PyObject_GetAttrString(_pymsg, "reached_gamma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reached_gamma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pylon_ros2_camera_interfaces__srv__set_gamma__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetGamma_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pylon_ros2_camera_interfaces.srv._set_gamma");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetGamma_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pylon_ros2_camera_interfaces__srv__SetGamma_Response * ros_message = (pylon_ros2_camera_interfaces__srv__SetGamma_Response *)raw_ros_message;
  {  // reached_gamma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reached_gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reached_gamma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
