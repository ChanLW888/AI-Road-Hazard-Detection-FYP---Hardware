# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:srv/SetBrightness.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetBrightness_Request(type):
    """Metaclass of message 'SetBrightness_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pylon_ros2_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pylon_ros2_camera_interfaces.srv.SetBrightness_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_brightness__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_brightness__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_brightness__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_brightness__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_brightness__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBrightness_Request(metaclass=Metaclass_SetBrightness_Request):
    """Message class 'SetBrightness_Request'."""

    __slots__ = [
        '_target_brightness',
        '_brightness_continuous',
        '_exposure_auto',
        '_gain_auto',
    ]

    _fields_and_field_types = {
        'target_brightness': 'int32',
        'brightness_continuous': 'boolean',
        'exposure_auto': 'boolean',
        'gain_auto': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_brightness = kwargs.get('target_brightness', int())
        self.brightness_continuous = kwargs.get('brightness_continuous', bool())
        self.exposure_auto = kwargs.get('exposure_auto', bool())
        self.gain_auto = kwargs.get('gain_auto', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_brightness != other.target_brightness:
            return False
        if self.brightness_continuous != other.brightness_continuous:
            return False
        if self.exposure_auto != other.exposure_auto:
            return False
        if self.gain_auto != other.gain_auto:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_brightness(self):
        """Message field 'target_brightness'."""
        return self._target_brightness

    @target_brightness.setter
    def target_brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_brightness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_brightness' field must be an integer in [-2147483648, 2147483647]"
        self._target_brightness = value

    @builtins.property
    def brightness_continuous(self):
        """Message field 'brightness_continuous'."""
        return self._brightness_continuous

    @brightness_continuous.setter
    def brightness_continuous(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brightness_continuous' field must be of type 'bool'"
        self._brightness_continuous = value

    @builtins.property
    def exposure_auto(self):
        """Message field 'exposure_auto'."""
        return self._exposure_auto

    @exposure_auto.setter
    def exposure_auto(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'exposure_auto' field must be of type 'bool'"
        self._exposure_auto = value

    @builtins.property
    def gain_auto(self):
        """Message field 'gain_auto'."""
        return self._gain_auto

    @gain_auto.setter
    def gain_auto(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gain_auto' field must be of type 'bool'"
        self._gain_auto = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SetBrightness_Response(type):
    """Metaclass of message 'SetBrightness_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pylon_ros2_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pylon_ros2_camera_interfaces.srv.SetBrightness_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_brightness__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_brightness__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_brightness__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_brightness__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_brightness__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBrightness_Response(metaclass=Metaclass_SetBrightness_Response):
    """Message class 'SetBrightness_Response'."""

    __slots__ = [
        '_reached_brightness',
        '_reached_exposure_time',
        '_reached_gain_value',
        '_success',
    ]

    _fields_and_field_types = {
        'reached_brightness': 'int32',
        'reached_exposure_time': 'float',
        'reached_gain_value': 'float',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reached_brightness = kwargs.get('reached_brightness', int())
        self.reached_exposure_time = kwargs.get('reached_exposure_time', float())
        self.reached_gain_value = kwargs.get('reached_gain_value', float())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.reached_brightness != other.reached_brightness:
            return False
        if self.reached_exposure_time != other.reached_exposure_time:
            return False
        if self.reached_gain_value != other.reached_gain_value:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reached_brightness(self):
        """Message field 'reached_brightness'."""
        return self._reached_brightness

    @reached_brightness.setter
    def reached_brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reached_brightness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'reached_brightness' field must be an integer in [-2147483648, 2147483647]"
        self._reached_brightness = value

    @builtins.property
    def reached_exposure_time(self):
        """Message field 'reached_exposure_time'."""
        return self._reached_exposure_time

    @reached_exposure_time.setter
    def reached_exposure_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reached_exposure_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reached_exposure_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reached_exposure_time = value

    @builtins.property
    def reached_gain_value(self):
        """Message field 'reached_gain_value'."""
        return self._reached_gain_value

    @reached_gain_value.setter
    def reached_gain_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reached_gain_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reached_gain_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reached_gain_value = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetBrightness(type):
    """Metaclass of service 'SetBrightness'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pylon_ros2_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pylon_ros2_camera_interfaces.srv.SetBrightness')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_brightness

            from pylon_ros2_camera_interfaces.srv import _set_brightness
            if _set_brightness.Metaclass_SetBrightness_Request._TYPE_SUPPORT is None:
                _set_brightness.Metaclass_SetBrightness_Request.__import_type_support__()
            if _set_brightness.Metaclass_SetBrightness_Response._TYPE_SUPPORT is None:
                _set_brightness.Metaclass_SetBrightness_Response.__import_type_support__()


class SetBrightness(metaclass=Metaclass_SetBrightness):
    from pylon_ros2_camera_interfaces.srv._set_brightness import SetBrightness_Request as Request
    from pylon_ros2_camera_interfaces.srv._set_brightness import SetBrightness_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
