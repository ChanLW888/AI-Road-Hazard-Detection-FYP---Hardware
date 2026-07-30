# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:srv/SetWhiteBalance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetWhiteBalance_Request(type):
    """Metaclass of message 'SetWhiteBalance_Request'."""

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
                'pylon_ros2_camera_interfaces.srv.SetWhiteBalance_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_white_balance__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_white_balance__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_white_balance__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_white_balance__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_white_balance__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetWhiteBalance_Request(metaclass=Metaclass_SetWhiteBalance_Request):
    """Message class 'SetWhiteBalance_Request'."""

    __slots__ = [
        '_balance_ratio_red',
        '_balance_ratio_green',
        '_balance_ratio_blue',
    ]

    _fields_and_field_types = {
        'balance_ratio_red': 'float',
        'balance_ratio_green': 'float',
        'balance_ratio_blue': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.balance_ratio_red = kwargs.get('balance_ratio_red', float())
        self.balance_ratio_green = kwargs.get('balance_ratio_green', float())
        self.balance_ratio_blue = kwargs.get('balance_ratio_blue', float())

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
        if self.balance_ratio_red != other.balance_ratio_red:
            return False
        if self.balance_ratio_green != other.balance_ratio_green:
            return False
        if self.balance_ratio_blue != other.balance_ratio_blue:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def balance_ratio_red(self):
        """Message field 'balance_ratio_red'."""
        return self._balance_ratio_red

    @balance_ratio_red.setter
    def balance_ratio_red(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_ratio_red' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_ratio_red' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_ratio_red = value

    @builtins.property
    def balance_ratio_green(self):
        """Message field 'balance_ratio_green'."""
        return self._balance_ratio_green

    @balance_ratio_green.setter
    def balance_ratio_green(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_ratio_green' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_ratio_green' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_ratio_green = value

    @builtins.property
    def balance_ratio_blue(self):
        """Message field 'balance_ratio_blue'."""
        return self._balance_ratio_blue

    @balance_ratio_blue.setter
    def balance_ratio_blue(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_ratio_blue' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_ratio_blue' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_ratio_blue = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetWhiteBalance_Response(type):
    """Metaclass of message 'SetWhiteBalance_Response'."""

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
                'pylon_ros2_camera_interfaces.srv.SetWhiteBalance_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_white_balance__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_white_balance__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_white_balance__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_white_balance__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_white_balance__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetWhiteBalance_Response(metaclass=Metaclass_SetWhiteBalance_Response):
    """Message class 'SetWhiteBalance_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetWhiteBalance(type):
    """Metaclass of service 'SetWhiteBalance'."""

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
                'pylon_ros2_camera_interfaces.srv.SetWhiteBalance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_white_balance

            from pylon_ros2_camera_interfaces.srv import _set_white_balance
            if _set_white_balance.Metaclass_SetWhiteBalance_Request._TYPE_SUPPORT is None:
                _set_white_balance.Metaclass_SetWhiteBalance_Request.__import_type_support__()
            if _set_white_balance.Metaclass_SetWhiteBalance_Response._TYPE_SUPPORT is None:
                _set_white_balance.Metaclass_SetWhiteBalance_Response.__import_type_support__()


class SetWhiteBalance(metaclass=Metaclass_SetWhiteBalance):
    from pylon_ros2_camera_interfaces.srv._set_white_balance import SetWhiteBalance_Request as Request
    from pylon_ros2_camera_interfaces.srv._set_white_balance import SetWhiteBalance_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
