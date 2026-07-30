# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:srv/GetPtpStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPtpStatus_Request(type):
    """Metaclass of message 'GetPtpStatus_Request'."""

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
                'pylon_ros2_camera_interfaces.srv.GetPtpStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ptp_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ptp_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ptp_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ptp_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ptp_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPtpStatus_Request(metaclass=Metaclass_GetPtpStatus_Request):
    """Message class 'GetPtpStatus_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPtpStatus_Response(type):
    """Metaclass of message 'GetPtpStatus_Response'."""

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
                'pylon_ros2_camera_interfaces.srv.GetPtpStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ptp_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ptp_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ptp_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ptp_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ptp_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPtpStatus_Response(metaclass=Metaclass_GetPtpStatus_Response):
    """Message class 'GetPtpStatus_Response'."""

    __slots__ = [
        '_ptp_status',
        '_ptp_servo_status',
        '_offset_from_master',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'ptp_status': 'string',
        'ptp_servo_status': 'string',
        'offset_from_master': 'int64',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ptp_status = kwargs.get('ptp_status', str())
        self.ptp_servo_status = kwargs.get('ptp_servo_status', str())
        self.offset_from_master = kwargs.get('offset_from_master', int())
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
        if self.ptp_status != other.ptp_status:
            return False
        if self.ptp_servo_status != other.ptp_servo_status:
            return False
        if self.offset_from_master != other.offset_from_master:
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
    def ptp_status(self):
        """Message field 'ptp_status'."""
        return self._ptp_status

    @ptp_status.setter
    def ptp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ptp_status' field must be of type 'str'"
        self._ptp_status = value

    @builtins.property
    def ptp_servo_status(self):
        """Message field 'ptp_servo_status'."""
        return self._ptp_servo_status

    @ptp_servo_status.setter
    def ptp_servo_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ptp_servo_status' field must be of type 'str'"
        self._ptp_servo_status = value

    @builtins.property
    def offset_from_master(self):
        """Message field 'offset_from_master'."""
        return self._offset_from_master

    @offset_from_master.setter
    def offset_from_master(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset_from_master' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'offset_from_master' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._offset_from_master = value

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


class Metaclass_GetPtpStatus(type):
    """Metaclass of service 'GetPtpStatus'."""

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
                'pylon_ros2_camera_interfaces.srv.GetPtpStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_ptp_status

            from pylon_ros2_camera_interfaces.srv import _get_ptp_status
            if _get_ptp_status.Metaclass_GetPtpStatus_Request._TYPE_SUPPORT is None:
                _get_ptp_status.Metaclass_GetPtpStatus_Request.__import_type_support__()
            if _get_ptp_status.Metaclass_GetPtpStatus_Response._TYPE_SUPPORT is None:
                _get_ptp_status.Metaclass_GetPtpStatus_Response.__import_type_support__()


class GetPtpStatus(metaclass=Metaclass_GetPtpStatus):
    from pylon_ros2_camera_interfaces.srv._get_ptp_status import GetPtpStatus_Request as Request
    from pylon_ros2_camera_interfaces.srv._get_ptp_status import GetPtpStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
