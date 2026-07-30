# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:action/GrabBlazeData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'exposure_times'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GrabBlazeData_Goal(type):
    """Metaclass of message 'GrabBlazeData_Goal'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabBlazeData_Goal(metaclass=Metaclass_GrabBlazeData_Goal):
    """Message class 'GrabBlazeData_Goal'."""

    __slots__ = [
        '_exposure_given',
        '_exposure_times',
    ]

    _fields_and_field_types = {
        'exposure_given': 'boolean',
        'exposure_times': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.exposure_given = kwargs.get('exposure_given', bool())
        self.exposure_times = array.array('f', kwargs.get('exposure_times', []))

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


# Import statements for member types

# Member 'reached_exposure_times'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabBlazeData_Result(type):
    """Metaclass of message 'GrabBlazeData_Result'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__result

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabBlazeData_Result(metaclass=Metaclass_GrabBlazeData_Result):
    """Message class 'GrabBlazeData_Result'."""

    __slots__ = [
        '_point_clouds',
        '_intensity_maps',
        '_depth_maps',
        '_depth_color_maps',
        '_confidence_maps',
        '_cam_info',
        '_reached_exposure_times',
        '_success',
    ]

    _fields_and_field_types = {
        'point_clouds': 'sequence<sensor_msgs/PointCloud2>',
        'intensity_maps': 'sequence<sensor_msgs/Image>',
        'depth_maps': 'sequence<sensor_msgs/Image>',
        'depth_color_maps': 'sequence<sensor_msgs/Image>',
        'confidence_maps': 'sequence<sensor_msgs/Image>',
        'cam_info': 'sensor_msgs/CameraInfo',
        'reached_exposure_times': 'sequence<float>',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.point_clouds = kwargs.get('point_clouds', [])
        self.intensity_maps = kwargs.get('intensity_maps', [])
        self.depth_maps = kwargs.get('depth_maps', [])
        self.depth_color_maps = kwargs.get('depth_color_maps', [])
        self.confidence_maps = kwargs.get('confidence_maps', [])
        from sensor_msgs.msg import CameraInfo
        self.cam_info = kwargs.get('cam_info', CameraInfo())
        self.reached_exposure_times = array.array('f', kwargs.get('reached_exposure_times', []))
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
        if self.point_clouds != other.point_clouds:
            return False
        if self.intensity_maps != other.intensity_maps:
            return False
        if self.depth_maps != other.depth_maps:
            return False
        if self.depth_color_maps != other.depth_color_maps:
            return False
        if self.confidence_maps != other.confidence_maps:
            return False
        if self.cam_info != other.cam_info:
            return False
        if self.reached_exposure_times != other.reached_exposure_times:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point_clouds(self):
        """Message field 'point_clouds'."""
        return self._point_clouds

    @point_clouds.setter
    def point_clouds(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
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
                 all(isinstance(v, PointCloud2) for v in value) and
                 True), \
                "The 'point_clouds' field must be a set or sequence and each value of type 'PointCloud2'"
        self._point_clouds = value

    @builtins.property
    def intensity_maps(self):
        """Message field 'intensity_maps'."""
        return self._intensity_maps

    @intensity_maps.setter
    def intensity_maps(self, value):
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
                "The 'intensity_maps' field must be a set or sequence and each value of type 'Image'"
        self._intensity_maps = value

    @builtins.property
    def depth_maps(self):
        """Message field 'depth_maps'."""
        return self._depth_maps

    @depth_maps.setter
    def depth_maps(self, value):
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
                "The 'depth_maps' field must be a set or sequence and each value of type 'Image'"
        self._depth_maps = value

    @builtins.property
    def depth_color_maps(self):
        """Message field 'depth_color_maps'."""
        return self._depth_color_maps

    @depth_color_maps.setter
    def depth_color_maps(self, value):
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
                "The 'depth_color_maps' field must be a set or sequence and each value of type 'Image'"
        self._depth_color_maps = value

    @builtins.property
    def confidence_maps(self):
        """Message field 'confidence_maps'."""
        return self._confidence_maps

    @confidence_maps.setter
    def confidence_maps(self, value):
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
                "The 'confidence_maps' field must be a set or sequence and each value of type 'Image'"
        self._confidence_maps = value

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


class Metaclass_GrabBlazeData_Feedback(type):
    """Metaclass of message 'GrabBlazeData_Feedback'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabBlazeData_Feedback(metaclass=Metaclass_GrabBlazeData_Feedback):
    """Message class 'GrabBlazeData_Feedback'."""

    __slots__ = [
        '_curr_nr_data_acquired',
    ]

    _fields_and_field_types = {
        'curr_nr_data_acquired': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.curr_nr_data_acquired = kwargs.get('curr_nr_data_acquired', int())

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
        if self.curr_nr_data_acquired != other.curr_nr_data_acquired:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def curr_nr_data_acquired(self):
        """Message field 'curr_nr_data_acquired'."""
        return self._curr_nr_data_acquired

    @curr_nr_data_acquired.setter
    def curr_nr_data_acquired(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_nr_data_acquired' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curr_nr_data_acquired' field must be an integer in [-2147483648, 2147483647]"
        self._curr_nr_data_acquired = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabBlazeData_SendGoal_Request(type):
    """Metaclass of message 'GrabBlazeData_SendGoal_Request'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__send_goal__request

            from pylon_ros2_camera_interfaces.action import GrabBlazeData
            if GrabBlazeData.Goal.__class__._TYPE_SUPPORT is None:
                GrabBlazeData.Goal.__class__.__import_type_support__()

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


class GrabBlazeData_SendGoal_Request(metaclass=Metaclass_GrabBlazeData_SendGoal_Request):
    """Message class 'GrabBlazeData_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'pylon_ros2_camera_interfaces/GrabBlazeData_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabBlazeData_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Goal
        self.goal = kwargs.get('goal', GrabBlazeData_Goal())

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
            from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Goal
            assert \
                isinstance(value, GrabBlazeData_Goal), \
                "The 'goal' field must be a sub message of type 'GrabBlazeData_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabBlazeData_SendGoal_Response(type):
    """Metaclass of message 'GrabBlazeData_SendGoal_Response'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__send_goal__response

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


class GrabBlazeData_SendGoal_Response(metaclass=Metaclass_GrabBlazeData_SendGoal_Response):
    """Message class 'GrabBlazeData_SendGoal_Response'."""

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


class Metaclass_GrabBlazeData_SendGoal(type):
    """Metaclass of service 'GrabBlazeData_SendGoal'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grab_blaze_data__send_goal

            from pylon_ros2_camera_interfaces.action import _grab_blaze_data
            if _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal_Request._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal_Request.__import_type_support__()
            if _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal_Response._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal_Response.__import_type_support__()


class GrabBlazeData_SendGoal(metaclass=Metaclass_GrabBlazeData_SendGoal):
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_SendGoal_Request as Request
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabBlazeData_GetResult_Request(type):
    """Metaclass of message 'GrabBlazeData_GetResult_Request'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__get_result__request

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


class GrabBlazeData_GetResult_Request(metaclass=Metaclass_GrabBlazeData_GetResult_Request):
    """Message class 'GrabBlazeData_GetResult_Request'."""

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


class Metaclass_GrabBlazeData_GetResult_Response(type):
    """Metaclass of message 'GrabBlazeData_GetResult_Response'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__get_result__response

            from pylon_ros2_camera_interfaces.action import GrabBlazeData
            if GrabBlazeData.Result.__class__._TYPE_SUPPORT is None:
                GrabBlazeData.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrabBlazeData_GetResult_Response(metaclass=Metaclass_GrabBlazeData_GetResult_Response):
    """Message class 'GrabBlazeData_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'pylon_ros2_camera_interfaces/GrabBlazeData_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabBlazeData_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Result
        self.result = kwargs.get('result', GrabBlazeData_Result())

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
            from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Result
            assert \
                isinstance(value, GrabBlazeData_Result), \
                "The 'result' field must be a sub message of type 'GrabBlazeData_Result'"
        self._result = value


class Metaclass_GrabBlazeData_GetResult(type):
    """Metaclass of service 'GrabBlazeData_GetResult'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grab_blaze_data__get_result

            from pylon_ros2_camera_interfaces.action import _grab_blaze_data
            if _grab_blaze_data.Metaclass_GrabBlazeData_GetResult_Request._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_GetResult_Request.__import_type_support__()
            if _grab_blaze_data.Metaclass_GrabBlazeData_GetResult_Response._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_GetResult_Response.__import_type_support__()


class GrabBlazeData_GetResult(metaclass=Metaclass_GrabBlazeData_GetResult):
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_GetResult_Request as Request
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GrabBlazeData_FeedbackMessage(type):
    """Metaclass of message 'GrabBlazeData_FeedbackMessage'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grab_blaze_data__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grab_blaze_data__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grab_blaze_data__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__grab_blaze_data__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grab_blaze_data__feedback_message

            from pylon_ros2_camera_interfaces.action import GrabBlazeData
            if GrabBlazeData.Feedback.__class__._TYPE_SUPPORT is None:
                GrabBlazeData.Feedback.__class__.__import_type_support__()

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


class GrabBlazeData_FeedbackMessage(metaclass=Metaclass_GrabBlazeData_FeedbackMessage):
    """Message class 'GrabBlazeData_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'pylon_ros2_camera_interfaces/GrabBlazeData_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pylon_ros2_camera_interfaces', 'action'], 'GrabBlazeData_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Feedback
        self.feedback = kwargs.get('feedback', GrabBlazeData_Feedback())

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
            from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Feedback
            assert \
                isinstance(value, GrabBlazeData_Feedback), \
                "The 'feedback' field must be a sub message of type 'GrabBlazeData_Feedback'"
        self._feedback = value


class Metaclass_GrabBlazeData(type):
    """Metaclass of action 'GrabBlazeData'."""

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
                'pylon_ros2_camera_interfaces.action.GrabBlazeData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__grab_blaze_data

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from pylon_ros2_camera_interfaces.action import _grab_blaze_data
            if _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_SendGoal.__import_type_support__()
            if _grab_blaze_data.Metaclass_GrabBlazeData_GetResult._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_GetResult.__import_type_support__()
            if _grab_blaze_data.Metaclass_GrabBlazeData_FeedbackMessage._TYPE_SUPPORT is None:
                _grab_blaze_data.Metaclass_GrabBlazeData_FeedbackMessage.__import_type_support__()


class GrabBlazeData(metaclass=Metaclass_GrabBlazeData):

    # The goal message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Goal as Goal
    # The result message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Result as Result
    # The feedback message defined in the action definition.
    from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from pylon_ros2_camera_interfaces.action._grab_blaze_data import GrabBlazeData_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
