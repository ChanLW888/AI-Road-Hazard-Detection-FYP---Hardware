# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:srv/SetBinning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetBinning_Request(type):
    """Metaclass of message 'SetBinning_Request'."""

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
                'pylon_ros2_camera_interfaces.srv.SetBinning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_binning__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_binning__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_binning__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_binning__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_binning__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBinning_Request(metaclass=Metaclass_SetBinning_Request):
    """Message class 'SetBinning_Request'."""

    __slots__ = [
        '_target_binning_x',
        '_target_binning_y',
    ]

    _fields_and_field_types = {
        'target_binning_x': 'uint32',
        'target_binning_y': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_binning_x = kwargs.get('target_binning_x', int())
        self.target_binning_y = kwargs.get('target_binning_y', int())

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
        if self.target_binning_x != other.target_binning_x:
            return False
        if self.target_binning_y != other.target_binning_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_binning_x(self):
        """Message field 'target_binning_x'."""
        return self._target_binning_x

    @target_binning_x.setter
    def target_binning_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_binning_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_binning_x' field must be an unsigned integer in [0, 4294967295]"
        self._target_binning_x = value

    @builtins.property
    def target_binning_y(self):
        """Message field 'target_binning_y'."""
        return self._target_binning_y

    @target_binning_y.setter
    def target_binning_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_binning_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_binning_y' field must be an unsigned integer in [0, 4294967295]"
        self._target_binning_y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetBinning_Response(type):
    """Metaclass of message 'SetBinning_Response'."""

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
                'pylon_ros2_camera_interfaces.srv.SetBinning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_binning__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_binning__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_binning__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_binning__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_binning__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBinning_Response(metaclass=Metaclass_SetBinning_Response):
    """Message class 'SetBinning_Response'."""

    __slots__ = [
        '_reached_binning_x',
        '_reached_binning_y',
        '_success',
    ]

    _fields_and_field_types = {
        'reached_binning_x': 'uint32',
        'reached_binning_y': 'uint32',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reached_binning_x = kwargs.get('reached_binning_x', int())
        self.reached_binning_y = kwargs.get('reached_binning_y', int())
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
        if self.reached_binning_x != other.reached_binning_x:
            return False
        if self.reached_binning_y != other.reached_binning_y:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reached_binning_x(self):
        """Message field 'reached_binning_x'."""
        return self._reached_binning_x

    @reached_binning_x.setter
    def reached_binning_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reached_binning_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reached_binning_x' field must be an unsigned integer in [0, 4294967295]"
        self._reached_binning_x = value

    @builtins.property
    def reached_binning_y(self):
        """Message field 'reached_binning_y'."""
        return self._reached_binning_y

    @reached_binning_y.setter
    def reached_binning_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reached_binning_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reached_binning_y' field must be an unsigned integer in [0, 4294967295]"
        self._reached_binning_y = value

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


class Metaclass_SetBinning(type):
    """Metaclass of service 'SetBinning'."""

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
                'pylon_ros2_camera_interfaces.srv.SetBinning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_binning

            from pylon_ros2_camera_interfaces.srv import _set_binning
            if _set_binning.Metaclass_SetBinning_Request._TYPE_SUPPORT is None:
                _set_binning.Metaclass_SetBinning_Request.__import_type_support__()
            if _set_binning.Metaclass_SetBinning_Response._TYPE_SUPPORT is None:
                _set_binning.Metaclass_SetBinning_Response.__import_type_support__()


class SetBinning(metaclass=Metaclass_SetBinning):
    from pylon_ros2_camera_interfaces.srv._set_binning import SetBinning_Request as Request
    from pylon_ros2_camera_interfaces.srv._set_binning import SetBinning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
