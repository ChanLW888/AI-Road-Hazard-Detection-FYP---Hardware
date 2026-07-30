# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pylon_ros2_camera_interfaces:msg/CurrentParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CurrentParams(type):
    """Metaclass of message 'CurrentParams'."""

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
                'pylon_ros2_camera_interfaces.msg.CurrentParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__current_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__current_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__current_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__current_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__current_params

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CurrentParams(metaclass=Metaclass_CurrentParams):
    """Message class 'CurrentParams'."""

    __slots__ = [
        '_offset_x',
        '_offset_y',
        '_reverse_x',
        '_reverse_y',
        '_black_level',
        '_pgi_mode',
        '_demosaicing_mode',
        '_noise_reduction',
        '_sharpness_enhancement',
        '_light_source_preset',
        '_balance_white_auto',
        '_sensor_readout_mode',
        '_acquisition_frame_count',
        '_trigger_selector',
        '_trigger_mode',
        '_trigger_source',
        '_trigger_activation',
        '_trigger_delay',
        '_user_set_selector',
        '_user_set_default_selector',
        '_is_sleeping',
        '_brightness',
        '_exposure',
        '_gain',
        '_gamma',
        '_binning_x',
        '_binning_y',
        '_temperature',
        '_max_num_buffer',
        '_roi',
        '_available_image_encoding',
        '_current_image_encoding',
        '_current_image_ros_encoding',
        '_ptp_status',
        '_ptp_servo_status',
        '_ptp_offset',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'offset_x': 'uint32',
        'offset_y': 'uint32',
        'reverse_x': 'boolean',
        'reverse_y': 'boolean',
        'black_level': 'int32',
        'pgi_mode': 'int32',
        'demosaicing_mode': 'int32',
        'noise_reduction': 'float',
        'sharpness_enhancement': 'float',
        'light_source_preset': 'int32',
        'balance_white_auto': 'int32',
        'sensor_readout_mode': 'int32',
        'acquisition_frame_count': 'int32',
        'trigger_selector': 'int32',
        'trigger_mode': 'int32',
        'trigger_source': 'int32',
        'trigger_activation': 'int32',
        'trigger_delay': 'float',
        'user_set_selector': 'int32',
        'user_set_default_selector': 'int32',
        'is_sleeping': 'boolean',
        'brightness': 'float',
        'exposure': 'float',
        'gain': 'float',
        'gamma': 'float',
        'binning_x': 'uint32',
        'binning_y': 'uint32',
        'temperature': 'float',
        'max_num_buffer': 'int32',
        'roi': 'sensor_msgs/RegionOfInterest',
        'available_image_encoding': 'sequence<string>',
        'current_image_encoding': 'string',
        'current_image_ros_encoding': 'string',
        'ptp_status': 'string',
        'ptp_servo_status': 'string',
        'ptp_offset': 'int64',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.offset_x = kwargs.get('offset_x', int())
        self.offset_y = kwargs.get('offset_y', int())
        self.reverse_x = kwargs.get('reverse_x', bool())
        self.reverse_y = kwargs.get('reverse_y', bool())
        self.black_level = kwargs.get('black_level', int())
        self.pgi_mode = kwargs.get('pgi_mode', int())
        self.demosaicing_mode = kwargs.get('demosaicing_mode', int())
        self.noise_reduction = kwargs.get('noise_reduction', float())
        self.sharpness_enhancement = kwargs.get('sharpness_enhancement', float())
        self.light_source_preset = kwargs.get('light_source_preset', int())
        self.balance_white_auto = kwargs.get('balance_white_auto', int())
        self.sensor_readout_mode = kwargs.get('sensor_readout_mode', int())
        self.acquisition_frame_count = kwargs.get('acquisition_frame_count', int())
        self.trigger_selector = kwargs.get('trigger_selector', int())
        self.trigger_mode = kwargs.get('trigger_mode', int())
        self.trigger_source = kwargs.get('trigger_source', int())
        self.trigger_activation = kwargs.get('trigger_activation', int())
        self.trigger_delay = kwargs.get('trigger_delay', float())
        self.user_set_selector = kwargs.get('user_set_selector', int())
        self.user_set_default_selector = kwargs.get('user_set_default_selector', int())
        self.is_sleeping = kwargs.get('is_sleeping', bool())
        self.brightness = kwargs.get('brightness', float())
        self.exposure = kwargs.get('exposure', float())
        self.gain = kwargs.get('gain', float())
        self.gamma = kwargs.get('gamma', float())
        self.binning_x = kwargs.get('binning_x', int())
        self.binning_y = kwargs.get('binning_y', int())
        self.temperature = kwargs.get('temperature', float())
        self.max_num_buffer = kwargs.get('max_num_buffer', int())
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())
        self.available_image_encoding = kwargs.get('available_image_encoding', [])
        self.current_image_encoding = kwargs.get('current_image_encoding', str())
        self.current_image_ros_encoding = kwargs.get('current_image_ros_encoding', str())
        self.ptp_status = kwargs.get('ptp_status', str())
        self.ptp_servo_status = kwargs.get('ptp_servo_status', str())
        self.ptp_offset = kwargs.get('ptp_offset', int())
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
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.reverse_x != other.reverse_x:
            return False
        if self.reverse_y != other.reverse_y:
            return False
        if self.black_level != other.black_level:
            return False
        if self.pgi_mode != other.pgi_mode:
            return False
        if self.demosaicing_mode != other.demosaicing_mode:
            return False
        if self.noise_reduction != other.noise_reduction:
            return False
        if self.sharpness_enhancement != other.sharpness_enhancement:
            return False
        if self.light_source_preset != other.light_source_preset:
            return False
        if self.balance_white_auto != other.balance_white_auto:
            return False
        if self.sensor_readout_mode != other.sensor_readout_mode:
            return False
        if self.acquisition_frame_count != other.acquisition_frame_count:
            return False
        if self.trigger_selector != other.trigger_selector:
            return False
        if self.trigger_mode != other.trigger_mode:
            return False
        if self.trigger_source != other.trigger_source:
            return False
        if self.trigger_activation != other.trigger_activation:
            return False
        if self.trigger_delay != other.trigger_delay:
            return False
        if self.user_set_selector != other.user_set_selector:
            return False
        if self.user_set_default_selector != other.user_set_default_selector:
            return False
        if self.is_sleeping != other.is_sleeping:
            return False
        if self.brightness != other.brightness:
            return False
        if self.exposure != other.exposure:
            return False
        if self.gain != other.gain:
            return False
        if self.gamma != other.gamma:
            return False
        if self.binning_x != other.binning_x:
            return False
        if self.binning_y != other.binning_y:
            return False
        if self.temperature != other.temperature:
            return False
        if self.max_num_buffer != other.max_num_buffer:
            return False
        if self.roi != other.roi:
            return False
        if self.available_image_encoding != other.available_image_encoding:
            return False
        if self.current_image_encoding != other.current_image_encoding:
            return False
        if self.current_image_ros_encoding != other.current_image_ros_encoding:
            return False
        if self.ptp_status != other.ptp_status:
            return False
        if self.ptp_servo_status != other.ptp_servo_status:
            return False
        if self.ptp_offset != other.ptp_offset:
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
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset_x' field must be an unsigned integer in [0, 4294967295]"
        self._offset_x = value

    @builtins.property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset_y' field must be an unsigned integer in [0, 4294967295]"
        self._offset_y = value

    @builtins.property
    def reverse_x(self):
        """Message field 'reverse_x'."""
        return self._reverse_x

    @reverse_x.setter
    def reverse_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse_x' field must be of type 'bool'"
        self._reverse_x = value

    @builtins.property
    def reverse_y(self):
        """Message field 'reverse_y'."""
        return self._reverse_y

    @reverse_y.setter
    def reverse_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse_y' field must be of type 'bool'"
        self._reverse_y = value

    @builtins.property
    def black_level(self):
        """Message field 'black_level'."""
        return self._black_level

    @black_level.setter
    def black_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'black_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'black_level' field must be an integer in [-2147483648, 2147483647]"
        self._black_level = value

    @builtins.property
    def pgi_mode(self):
        """Message field 'pgi_mode'."""
        return self._pgi_mode

    @pgi_mode.setter
    def pgi_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pgi_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pgi_mode' field must be an integer in [-2147483648, 2147483647]"
        self._pgi_mode = value

    @builtins.property
    def demosaicing_mode(self):
        """Message field 'demosaicing_mode'."""
        return self._demosaicing_mode

    @demosaicing_mode.setter
    def demosaicing_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'demosaicing_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'demosaicing_mode' field must be an integer in [-2147483648, 2147483647]"
        self._demosaicing_mode = value

    @builtins.property
    def noise_reduction(self):
        """Message field 'noise_reduction'."""
        return self._noise_reduction

    @noise_reduction.setter
    def noise_reduction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise_reduction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'noise_reduction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._noise_reduction = value

    @builtins.property
    def sharpness_enhancement(self):
        """Message field 'sharpness_enhancement'."""
        return self._sharpness_enhancement

    @sharpness_enhancement.setter
    def sharpness_enhancement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sharpness_enhancement' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sharpness_enhancement' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sharpness_enhancement = value

    @builtins.property
    def light_source_preset(self):
        """Message field 'light_source_preset'."""
        return self._light_source_preset

    @light_source_preset.setter
    def light_source_preset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_source_preset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'light_source_preset' field must be an integer in [-2147483648, 2147483647]"
        self._light_source_preset = value

    @builtins.property
    def balance_white_auto(self):
        """Message field 'balance_white_auto'."""
        return self._balance_white_auto

    @balance_white_auto.setter
    def balance_white_auto(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'balance_white_auto' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'balance_white_auto' field must be an integer in [-2147483648, 2147483647]"
        self._balance_white_auto = value

    @builtins.property
    def sensor_readout_mode(self):
        """Message field 'sensor_readout_mode'."""
        return self._sensor_readout_mode

    @sensor_readout_mode.setter
    def sensor_readout_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_readout_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_readout_mode' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_readout_mode = value

    @builtins.property
    def acquisition_frame_count(self):
        """Message field 'acquisition_frame_count'."""
        return self._acquisition_frame_count

    @acquisition_frame_count.setter
    def acquisition_frame_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acquisition_frame_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acquisition_frame_count' field must be an integer in [-2147483648, 2147483647]"
        self._acquisition_frame_count = value

    @builtins.property
    def trigger_selector(self):
        """Message field 'trigger_selector'."""
        return self._trigger_selector

    @trigger_selector.setter
    def trigger_selector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_selector' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trigger_selector' field must be an integer in [-2147483648, 2147483647]"
        self._trigger_selector = value

    @builtins.property
    def trigger_mode(self):
        """Message field 'trigger_mode'."""
        return self._trigger_mode

    @trigger_mode.setter
    def trigger_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trigger_mode' field must be an integer in [-2147483648, 2147483647]"
        self._trigger_mode = value

    @builtins.property
    def trigger_source(self):
        """Message field 'trigger_source'."""
        return self._trigger_source

    @trigger_source.setter
    def trigger_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trigger_source' field must be an integer in [-2147483648, 2147483647]"
        self._trigger_source = value

    @builtins.property
    def trigger_activation(self):
        """Message field 'trigger_activation'."""
        return self._trigger_activation

    @trigger_activation.setter
    def trigger_activation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_activation' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trigger_activation' field must be an integer in [-2147483648, 2147483647]"
        self._trigger_activation = value

    @builtins.property
    def trigger_delay(self):
        """Message field 'trigger_delay'."""
        return self._trigger_delay

    @trigger_delay.setter
    def trigger_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trigger_delay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'trigger_delay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._trigger_delay = value

    @builtins.property
    def user_set_selector(self):
        """Message field 'user_set_selector'."""
        return self._user_set_selector

    @user_set_selector.setter
    def user_set_selector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_set_selector' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'user_set_selector' field must be an integer in [-2147483648, 2147483647]"
        self._user_set_selector = value

    @builtins.property
    def user_set_default_selector(self):
        """Message field 'user_set_default_selector'."""
        return self._user_set_default_selector

    @user_set_default_selector.setter
    def user_set_default_selector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_set_default_selector' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'user_set_default_selector' field must be an integer in [-2147483648, 2147483647]"
        self._user_set_default_selector = value

    @builtins.property
    def is_sleeping(self):
        """Message field 'is_sleeping'."""
        return self._is_sleeping

    @is_sleeping.setter
    def is_sleeping(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_sleeping' field must be of type 'bool'"
        self._is_sleeping = value

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightness = value

    @builtins.property
    def exposure(self):
        """Message field 'exposure'."""
        return self._exposure

    @exposure.setter
    def exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'exposure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'exposure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._exposure = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gain = value

    @builtins.property
    def gamma(self):
        """Message field 'gamma'."""
        return self._gamma

    @gamma.setter
    def gamma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gamma' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gamma' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gamma = value

    @builtins.property
    def binning_x(self):
        """Message field 'binning_x'."""
        return self._binning_x

    @binning_x.setter
    def binning_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'binning_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'binning_x' field must be an unsigned integer in [0, 4294967295]"
        self._binning_x = value

    @builtins.property
    def binning_y(self):
        """Message field 'binning_y'."""
        return self._binning_y

    @binning_y.setter
    def binning_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'binning_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'binning_y' field must be an unsigned integer in [0, 4294967295]"
        self._binning_y = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def max_num_buffer(self):
        """Message field 'max_num_buffer'."""
        return self._max_num_buffer

    @max_num_buffer.setter
    def max_num_buffer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_num_buffer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_num_buffer' field must be an integer in [-2147483648, 2147483647]"
        self._max_num_buffer = value

    @builtins.property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value

    @builtins.property
    def available_image_encoding(self):
        """Message field 'available_image_encoding'."""
        return self._available_image_encoding

    @available_image_encoding.setter
    def available_image_encoding(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'available_image_encoding' field must be a set or sequence and each value of type 'str'"
        self._available_image_encoding = value

    @builtins.property
    def current_image_encoding(self):
        """Message field 'current_image_encoding'."""
        return self._current_image_encoding

    @current_image_encoding.setter
    def current_image_encoding(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_image_encoding' field must be of type 'str'"
        self._current_image_encoding = value

    @builtins.property
    def current_image_ros_encoding(self):
        """Message field 'current_image_ros_encoding'."""
        return self._current_image_ros_encoding

    @current_image_ros_encoding.setter
    def current_image_ros_encoding(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_image_ros_encoding' field must be of type 'str'"
        self._current_image_ros_encoding = value

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
    def ptp_offset(self):
        """Message field 'ptp_offset'."""
        return self._ptp_offset

    @ptp_offset.setter
    def ptp_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ptp_offset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ptp_offset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ptp_offset = value

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
