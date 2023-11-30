# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/GameStateMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameStateMsg(type):
    """Metaclass of message 'GameStateMsg'."""

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
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.msg.GameStateMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_state_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_state_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_state_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_state_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_state_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GameStateMsg(metaclass=Metaclass_GameStateMsg):
    """Message class 'GameStateMsg'."""

    __slots__ = [
        '_player_position',
        '_dice_result',
        '_game_message',
    ]

    _fields_and_field_types = {
        'player_position': 'int32',
        'dice_result': 'int32',
        'game_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.player_position = kwargs.get('player_position', int())
        self.dice_result = kwargs.get('dice_result', int())
        self.game_message = kwargs.get('game_message', str())

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
        if self.player_position != other.player_position:
            return False
        if self.dice_result != other.dice_result:
            return False
        if self.game_message != other.game_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def player_position(self):
        """Message field 'player_position'."""
        return self._player_position

    @player_position.setter
    def player_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'player_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'player_position' field must be an integer in [-2147483648, 2147483647]"
        self._player_position = value

    @builtins.property
    def dice_result(self):
        """Message field 'dice_result'."""
        return self._dice_result

    @dice_result.setter
    def dice_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dice_result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dice_result' field must be an integer in [-2147483648, 2147483647]"
        self._dice_result = value

    @builtins.property
    def game_message(self):
        """Message field 'game_message'."""
        return self._game_message

    @game_message.setter
    def game_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'game_message' field must be of type 'str'"
        self._game_message = value
