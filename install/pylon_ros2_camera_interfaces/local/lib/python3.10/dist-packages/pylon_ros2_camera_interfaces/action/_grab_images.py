# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:action/GrabImages.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'exposure_times'
# Member 'gain_values'
# Member 'gamma_values'
# Member 'brightness_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GrabImages_Goal(type):
    """Metaclass of message 'GrabImages_Goal'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_Goal(metaclass=Metaclass_GrabImages_Goal):
    """Message class 'GrabImages_Goal'."""

    __slots__ = [
        '_exposure_given',
        '_exposure_times',
        '_gain_given',
        '_gain_values',
        '_gamma_given',
        '_gamma_values',
        '_brightness_given',
        '_brightness_values',
        '_exposure_auto',
        '_gain_auto',
    ]

    _fields_and_field_types = {
        'exposure_given': 'boolean',
        'exposure_times': 'sequence<float>',
        'gain_given': 'boolean',
        'gain_values': 'sequence<float>',
        'gamma_given': 'boolean',
        'gamma_values': 'sequence<float>',
        'brightness_given': 'boolean',
        'brightness_values': 'sequence<float>',
        'exposure_auto': 'boolean',
        'gain_auto': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.exposure_given = kwargs.get('exposure_given', bool())
        self.exposure_times = array.array('f', kwargs.get('exposure_times', []))
        self.gain_given = kwargs.get('gain_given', bool())
        self.gain_values = array.array('f', kwargs.get('gain_values', []))
        self.gamma_given = kwargs.get('gamma_given', bool())
        self.gamma_values = array.array('f', kwargs.get('gamma_values', []))
        self.brightness_given = kwargs.get('brightness_given', bool())
        self.brightness_values = array.array('f', kwargs.get('brightness_values', []))
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
        if self.exposure_given != other.exposure_given:
            return False
        if self.exposure_times != other.exposure_times:
            return False
        if self.gain_given != other.gain_given:
            return False
        if self.gain_values != other.gain_values:
            return False
        if self.gamma_given != other.gamma_given:
            return False
        if self.gamma_values != other.gamma_values:
            return False
        if self.brightness_given != other.brightness_given:
            return False
        if self.brightness_values != other.brightness_values:
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
    def exposure_given(self):
        """Message field 'exposure_given'."""
        return self._exposure_given

    @exposure_given.setter
    def exposure_given(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'exposure_given' field must be of type 'bool'"
        self._exposure_given = value

    @builtins.property
    def exposure_times(self):
        """Message field 'exposure_times'."""
        return self._exposure_times

    @exposure_times.setter
    def exposure_times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'exposure_times' array.array() must have the type code of 'f'"
            self._exposure_times = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'exposure_times' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._exposure_times = array.array('f', value)

    @builtins.property
    def gain_given(self):
        """Message field 'gain_given'."""
        return self._gain_given

    @gain_given.setter
    def gain_given(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gain_given' field must be of type 'bool'"
        self._gain_given = value

    @builtins.property
    def gain_values(self):
        """Message field 'gain_values'."""
        return self._gain_values

    @gain_values.setter
    def gain_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gain_values' array.array() must have the type code of 'f'"
            self._gain_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gain_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gain_values = array.array('f', value)

    @builtins.property
    def gamma_given(self):
        """Message field 'gamma_given'."""
        return self._gamma_given

    @gamma_given.setter
    def gamma_given(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gamma_given' field must be of type 'bool'"
        self._gamma_given = value

    @builtins.property
    def gamma_values(self):
        """Message field 'gamma_values'."""
        return self._gamma_values

    @gamma_values.setter
    def gamma_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gamma_values' array.array() must have the type code of 'f'"
            self._gamma_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gamma_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gamma_values = array.array('f', value)

    @builtins.property
    def brightness_given(self):
        """Message field 'brightness_given'."""
        return self._brightness_given

    @brightness_given.setter
    def brightness_given(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brightness_given' field must be of type 'bool'"
        self._brightness_given = value

    @builtins.property
    def brightness_values(self):
        """Message field 'brightness_values'."""
        return self._brightness_values

    @brightness_values.setter
    def brightness_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'brightness_values' array.array() must have the type code of 'f'"
            self._brightness_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'brightness_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._brightness_values = array.array('f', value)

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

# Member 'reached_exposure_times'
# Member 'reached_brightness_values'
# Member 'reached_gain_values'
# Member 'reached_gamma_values'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_Result(type):
    """Metaclass of message 'GrabImages_Result'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__result

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_Result(metaclass=Metaclass_GrabImages_Result):
    """Message class 'GrabImages_Result'."""

    __slots__ = [
        '_images',
        '_cam_info',
        '_reached_exposure_times',
        '_reached_brightness_values',
        '_reached_gain_values',
        '_reached_gamma_values',
        '_success',
    ]

    _fields_and_field_types = {
        'images': 'sequence<sensor_msgs/Image>',
        'cam_info': 'sensor_msgs/CameraInfo',
        'reached_exposure_times': 'sequence<float>',
        'reached_brightness_values': 'sequence<float>',
        'reached_gain_values': 'sequence<float>',
        'reached_gamma_values': 'sequence<float>',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.images = kwargs.get('images', [])
        from sensor_msgs.msg import CameraInfo
        self.cam_info = kwargs.get('cam_info', CameraInfo())
        self.reached_exposure_times = array.array('f', kwargs.get('reached_exposure_times', []))
        self.reached_brightness_values = array.array('f', kwargs.get('reached_brightness_values', []))
        self.reached_gain_values = array.array('f', kwargs.get('reached_gain_values', []))
        self.reached_gamma_values = array.array('f', kwargs.get('reached_gamma_values', []))
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
        if self.images != other.images:
            return False
        if self.cam_info != other.cam_info:
            return False
        if self.reached_exposure_times != other.reached_exposure_times:
            return False
        if self.reached_brightness_values != other.reached_brightness_values:
            return False
        if self.reached_gain_values != other.reached_gain_values:
            return False
        if self.reached_gamma_values != other.reached_gamma_values:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def images(self):
        """Message field 'images'."""
        return self._images

    @images.setter
    def images(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Image) for v in value) and
                 True), \
                "The 'images' field must be a set or sequence and each value of type 'Image'"
        self._images = value

    @builtins.property
    def cam_info(self):
        """Message field 'cam_info'."""
        return self._cam_info

    @cam_info.setter
    def cam_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
            assert \
                isinstance(value, CameraInfo), \
                "The 'cam_info' field must be a sub message of type 'CameraInfo'"
        self._cam_info = value

    @builtins.property
    def reached_exposure_times(self):
        """Message field 'reached_exposure_times'."""
        return self._reached_exposure_times

    @reached_exposure_times.setter
    def reached_exposure_times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'reached_exposure_times' array.array() must have the type code of 'f'"
            self._reached_exposure_times = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'reached_exposure_times' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._reached_exposure_times = array.array('f', value)

    @builtins.property
    def reached_brightness_values(self):
        """Message field 'reached_brightness_values'."""
        return self._reached_brightness_values

    @reached_brightness_values.setter
    def reached_brightness_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'reached_brightness_values' array.array() must have the type code of 'f'"
            self._reached_brightness_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'reached_brightness_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._reached_brightness_values = array.array('f', value)

    @builtins.property
    def reached_gain_values(self):
        """Message field 'reached_gain_values'."""
        return self._reached_gain_values

    @reached_gain_values.setter
    def reached_gain_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'reached_gain_values' array.array() must have the type code of 'f'"
            self._reached_gain_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'reached_gain_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._reached_gain_values = array.array('f', value)

    @builtins.property
    def reached_gamma_values(self):
        """Message field 'reached_gamma_values'."""
        return self._reached_gamma_values

    @reached_gamma_values.setter
    def reached_gamma_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'reached_gamma_values' array.array() must have the type code of 'f'"
            self._reached_gamma_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'reached_gamma_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._reached_gamma_values = array.array('f', value)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_Feedback(type):
    """Metaclass of message 'GrabImages_Feedback'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_Feedback(metaclass=Metaclass_GrabImages_Feedback):
    """Message class 'GrabImages_Feedback'."""

    __slots__ = [
        '_curr_nr_images_taken',
    ]

    _fields_and_field_types = {
        'curr_nr_images_taken': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.curr_nr_images_taken = kwargs.get('curr_nr_images_taken', int())

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
        if self.curr_nr_images_taken != other.curr_nr_images_taken:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def curr_nr_images_taken(self):
        """Message field 'curr_nr_images_taken'."""
        return self._curr_nr_images_taken

    @curr_nr_images_taken.setter
    def curr_nr_images_taken(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_nr_images_taken' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curr_nr_images_taken' field must be an integer in [-2147483648, 2147483647]"
        self._curr_nr_images_taken = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_SendGoal_Request(type):
    """Metaclass of message 'GrabImages_SendGoal_Request'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__send_goal__request

            from pylon_ros2_camera_interfaces.action import GrabImages
            if GrabImages.Goal.__class__._TYPE_SUPPORT is None:
                GrabImages.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_SendGoal_Request(metaclass=Metaclass_GrabImages_SendGoal_Request):
    """Message class 'GrabImages_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'pylon_ros2_camera_interfaces/GrabImages_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabImages_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Goal
        self.goal = kwargs.get('goal', GrabImages_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Goal
            assert \
                isinstance(value, GrabImages_Goal), \
                "The 'goal' field must be a sub message of type 'GrabImages_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_SendGoal_Response(type):
    """Metaclass of message 'GrabImages_SendGoal_Response'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_SendGoal_Response(metaclass=Metaclass_GrabImages_SendGoal_Response):
    """Message class 'GrabImages_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GrabImages_SendGoal(type):
    """Metaclass of service 'GrabImages_SendGoal'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grab_images__send_goal

            from pylon_ros2_camera_interfaces.action import _grab_images
            if _grab_images.Metaclass_GrabImages_SendGoal_Request._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_SendGoal_Request.__import_type_support__()
            if _grab_images.Metaclass_GrabImages_SendGoal_Response._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_SendGoal_Response.__import_type_support__()


class GrabImages_SendGoal(metaclass=Metaclass_GrabImages_SendGoal):
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_SendGoal_Request as Request
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_GetResult_Request(type):
    """Metaclass of message 'GrabImages_GetResult_Request'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_GetResult_Request(metaclass=Metaclass_GrabImages_GetResult_Request):
    """Message class 'GrabImages_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_GetResult_Response(type):
    """Metaclass of message 'GrabImages_GetResult_Response'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__get_result__response

            from pylon_ros2_camera_interfaces.action import GrabImages
            if GrabImages.Result.__class__._TYPE_SUPPORT is None:
                GrabImages.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_GetResult_Response(metaclass=Metaclass_GrabImages_GetResult_Response):
    """Message class 'GrabImages_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'pylon_ros2_camera_interfaces/GrabImages_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabImages_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Result
        self.result = kwargs.get('result', GrabImages_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Result
            assert \
                isinstance(value, GrabImages_Result), \
                "The 'result' field must be a sub message of type 'GrabImages_Result'"
        self._result = value


class Metaclass_GrabImages_GetResult(type):
    """Metaclass of service 'GrabImages_GetResult'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grab_images__get_result

            from pylon_ros2_camera_interfaces.action import _grab_images
            if _grab_images.Metaclass_GrabImages_GetResult_Request._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_GetResult_Request.__import_type_support__()
            if _grab_images.Metaclass_GrabImages_GetResult_Response._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_GetResult_Response.__import_type_support__()


class GrabImages_GetResult(metaclass=Metaclass_GrabImages_GetResult):
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_GetResult_Request as Request
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabImages_FeedbackMessage(type):
    """Metaclass of message 'GrabImages_FeedbackMessage'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_images__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_images__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_images__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_images__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_images__feedback_message

            from pylon_ros2_camera_interfaces.action import GrabImages
            if GrabImages.Feedback.__class__._TYPE_SUPPORT is None:
                GrabImages.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabImages_FeedbackMessage(metaclass=Metaclass_GrabImages_FeedbackMessage):
    """Message class 'GrabImages_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'pylon_ros2_camera_interfaces/GrabImages_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabImages_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Feedback
        self.feedback = kwargs.get('feedback', GrabImages_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Feedback
            assert \
                isinstance(value, GrabImages_Feedback), \
                "The 'feedback' field must be a sub message of type 'GrabImages_Feedback'"
        self._feedback = value


class Metaclass_GrabImages(type):
    """Metaclass of action 'GrabImages'."""

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
                'pylon_ros2_camera_interfaces.action.GrabImages')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__grab_images

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from pylon_ros2_camera_interfaces.action import _grab_images
            if _grab_images.Metaclass_GrabImages_SendGoal._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_SendGoal.__import_type_support__()
            if _grab_images.Metaclass_GrabImages_GetResult._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_GetResult.__import_type_support__()
            if _grab_images.Metaclass_GrabImages_FeedbackMessage._TYPE_SUPPORT is None:
                _grab_images.Metaclass_GrabImages_FeedbackMessage.__import_type_support__()


class GrabImages(metaclass=Metaclass_GrabImages):

    # The goal message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Goal as Goal
    # The result message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Result as Result
    # The feedback message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from pylon_ros2_camera_interfaces.action._grab_images import GrabImages_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
