# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:srv/IssueActionCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IssueActionCommand_Request(type):
    """Metaclass of message 'IssueActionCommand_Request'."""

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
                'pylon_ros2_camera_interfaces.srv.IssueActionCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__issue_action_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__issue_action_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__issue_action_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__issue_action_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__issue_action_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IssueActionCommand_Request(metaclass=Metaclass_IssueActionCommand_Request):
    """Message class 'IssueActionCommand_Request'."""

    __slots__ = [
        '_device_key',
        '_group_key',
        '_group_mask',
        '_broadcast_address',
    ]

    _fields_and_field_types = {
        'device_key': 'int32',
        'group_key': 'int32',
        'group_mask': 'uint32',
        'broadcast_address': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_key = kwargs.get('device_key', int())
        self.group_key = kwargs.get('group_key', int())
        self.group_mask = kwargs.get('group_mask', int())
        self.broadcast_address = kwargs.get('broadcast_address', str())

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
        if self.device_key != other.device_key:
            return False
        if self.group_key != other.group_key:
            return False
        if self.group_mask != other.group_mask:
            return False
        if self.broadcast_address != other.broadcast_address:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def device_key(self):
        """Message field 'device_key'."""
        return self._device_key

    @device_key.setter
    def device_key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_key' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'device_key' field must be an integer in [-2147483648, 2147483647]"
        self._device_key = value

    @builtins.property
    def group_key(self):
        """Message field 'group_key'."""
        return self._group_key

    @group_key.setter
    def group_key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_key' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'group_key' field must be an integer in [-2147483648, 2147483647]"
        self._group_key = value

    @builtins.property
    def group_mask(self):
        """Message field 'group_mask'."""
        return self._group_mask

    @group_mask.setter
    def group_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'group_mask' field must be an unsigned integer in [0, 4294967295]"
        self._group_mask = value

    @builtins.property
    def broadcast_address(self):
        """Message field 'broadcast_address'."""
        return self._broadcast_address

    @broadcast_address.setter
    def broadcast_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'broadcast_address' field must be of type 'str'"
        self._broadcast_address = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IssueActionCommand_Response(type):
    """Metaclass of message 'IssueActionCommand_Response'."""

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
                'pylon_ros2_camera_interfaces.srv.IssueActionCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__issue_action_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__issue_action_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__issue_action_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__issue_action_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__issue_action_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IssueActionCommand_Response(metaclass=Metaclass_IssueActionCommand_Response):
    """Message class 'IssueActionCommand_Response'."""

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


class Metaclass_IssueActionCommand(type):
    """Metaclass of service 'IssueActionCommand'."""

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
                'pylon_ros2_camera_interfaces.srv.IssueActionCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__issue_action_command

            from pylon_ros2_camera_interfaces.srv import _issue_action_command
            if _issue_action_command.Metaclass_IssueActionCommand_Request._TYPE_SUPPORT is None:
                _issue_action_command.Metaclass_IssueActionCommand_Request.__import_type_support__()
            if _issue_action_command.Metaclass_IssueActionCommand_Response._TYPE_SUPPORT is None:
                _issue_action_command.Metaclass_IssueActionCommand_Response.__import_type_support__()


class IssueActionCommand(metaclass=Metaclass_IssueActionCommand):
    from pylon_ros2_camera_interfaces.srv._issue_action_command import IssueActionCommand_Request as Request
    from pylon_ros2_camera_interfaces.srv._issue_action_command import IssueActionCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
