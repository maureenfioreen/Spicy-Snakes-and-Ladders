# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:srv/PlayerMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlayerMove_Request(type):
    """Metaclass of message 'PlayerMove_Request'."""

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
                'custom_msgs.srv.PlayerMove_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__player_move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__player_move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__player_move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__player_move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__player_move__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlayerMove_Request(metaclass=Metaclass_PlayerMove_Request):
    """Message class 'PlayerMove_Request'."""

    __slots__ = [
        '_dice_result',
        '_player_id',
    ]

    _fields_and_field_types = {
        'dice_result': 'int32',
        'player_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dice_result = kwargs.get('dice_result', int())
        self.player_id = kwargs.get('player_id', int())

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
        if self.dice_result != other.dice_result:
            return False
        if self.player_id != other.player_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def player_id(self):
        """Message field 'player_id'."""
        return self._player_id

    @player_id.setter
    def player_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'player_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'player_id' field must be an integer in [-2147483648, 2147483647]"
        self._player_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlayerMove_Response(type):
    """Metaclass of message 'PlayerMove_Response'."""

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
                'custom_msgs.srv.PlayerMove_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__player_move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__player_move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__player_move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__player_move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__player_move__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlayerMove_Response(metaclass=Metaclass_PlayerMove_Response):
    """Message class 'PlayerMove_Response'."""

    __slots__ = [
        '_new_position',
    ]

    _fields_and_field_types = {
        'new_position': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.new_position = kwargs.get('new_position', int())

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
        if self.new_position != other.new_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def new_position(self):
        """Message field 'new_position'."""
        return self._new_position

    @new_position.setter
    def new_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'new_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'new_position' field must be an integer in [-2147483648, 2147483647]"
        self._new_position = value


class Metaclass_PlayerMove(type):
    """Metaclass of service 'PlayerMove'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.srv.PlayerMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__player_move

            from custom_msgs.srv import _player_move
            if _player_move.Metaclass_PlayerMove_Request._TYPE_SUPPORT is None:
                _player_move.Metaclass_PlayerMove_Request.__import_type_support__()
            if _player_move.Metaclass_PlayerMove_Response._TYPE_SUPPORT is None:
                _player_move.Metaclass_PlayerMove_Response.__import_type_support__()


class PlayerMove(metaclass=Metaclass_PlayerMove):
    from custom_msgs.srv._player_move import PlayerMove_Request as Request
    from custom_msgs.srv._player_move import PlayerMove_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
