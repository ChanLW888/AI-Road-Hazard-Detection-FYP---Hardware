// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
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
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__struct.h"
#include "pylon_ros2_camera_interfaces/msg/detail/current_params__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__region_of_interest__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__region_of_interest__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pylon_ros2_camera_interfaces__msg__current_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("pylon_ros2_camera_interfaces.msg._current_params.CurrentParams", full_classname_dest, 62) == 0);
  }
  pylon_ros2_camera_interfaces__msg__CurrentParams * ros_message = _ros_message;
  {  // offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offset_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offset_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reverse_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reverse_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reverse_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reverse_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // black_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "black_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->black_level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pgi_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgi_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pgi_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // demosaicing_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "demosaicing_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->demosaicing_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // noise_reduction
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_reduction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise_reduction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sharpness_enhancement
    PyObject * field = PyObject_GetAttrString(_pymsg, "sharpness_enhancement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sharpness_enhancement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // light_source_preset
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_source_preset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_source_preset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // balance_white_auto
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_white_auto");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->balance_white_auto = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sensor_readout_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_readout_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_readout_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acquisition_frame_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "acquisition_frame_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acquisition_frame_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger_selector
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_selector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trigger_selector = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trigger_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trigger_source = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger_activation
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_activation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trigger_activation = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_delay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trigger_delay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // user_set_selector
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_set_selector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_set_selector = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // user_set_default_selector
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_set_default_selector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_set_default_selector = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_sleeping
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_sleeping");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_sleeping = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brightness = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // exposure
    PyObject * field = PyObject_GetAttrString(_pymsg, "exposure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->exposure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gamma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gamma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // binning_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "binning_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->binning_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // binning_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "binning_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->binning_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_num_buffer
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_num_buffer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_num_buffer = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "roi");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__region_of_interest__convert_from_py(field, &ros_message->roi)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // available_image_encoding
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_image_encoding");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'available_image_encoding'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->available_image_encoding), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->available_image_encoding.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // current_image_encoding
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_image_encoding");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_image_encoding, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // current_image_ros_encoding
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_image_ros_encoding");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_image_ros_encoding, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ptp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ptp_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ptp_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ptp_servo_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ptp_servo_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ptp_servo_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ptp_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "ptp_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ptp_offset = PyLong_AsLongLong(field);
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
PyObject * pylon_ros2_camera_interfaces__msg__current_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CurrentParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pylon_ros2_camera_interfaces.msg._current_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CurrentParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pylon_ros2_camera_interfaces__msg__CurrentParams * ros_message = (pylon_ros2_camera_interfaces__msg__CurrentParams *)raw_ros_message;
  {  // offset_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reverse_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reverse_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // black_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->black_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "black_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgi_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pgi_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgi_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // demosaicing_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->demosaicing_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "demosaicing_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_reduction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise_reduction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise_reduction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sharpness_enhancement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sharpness_enhancement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sharpness_enhancement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_source_preset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_source_preset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_source_preset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_white_auto
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->balance_white_auto);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_white_auto", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_readout_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sensor_readout_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_readout_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acquisition_frame_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acquisition_frame_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acquisition_frame_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_selector
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trigger_selector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_selector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trigger_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_source
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trigger_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_activation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trigger_activation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_activation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_delay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trigger_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_set_selector
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->user_set_selector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_set_selector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_set_default_selector
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->user_set_default_selector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_set_default_selector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_sleeping
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_sleeping ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_sleeping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brightness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exposure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->exposure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exposure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // binning_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->binning_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "binning_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // binning_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->binning_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "binning_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_num_buffer
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_num_buffer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_num_buffer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roi
    PyObject * field = NULL;
    field = sensor_msgs__msg__region_of_interest__convert_to_py(&ros_message->roi);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_image_encoding
    PyObject * field = NULL;
    size_t size = ros_message->available_image_encoding.size;
    rosidl_runtime_c__String * src = ros_message->available_image_encoding.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "available_image_encoding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_image_encoding
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_image_encoding.data,
      strlen(ros_message->current_image_encoding.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_image_encoding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_image_ros_encoding
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_image_ros_encoding.data,
      strlen(ros_message->current_image_ros_encoding.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_image_ros_encoding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ptp_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ptp_status.data,
      strlen(ros_message->ptp_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ptp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ptp_servo_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ptp_servo_status.data,
      strlen(ros_message->ptp_servo_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ptp_servo_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ptp_offset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->ptp_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ptp_offset", field);
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
