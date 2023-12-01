// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "game/msg/detail/game_state_msg__rosidl_typesupport_introspection_c.h"
#include "game/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "game/msg/detail/game_state_msg__functions.h"
#include "game/msg/detail/game_state_msg__struct.h"


// Include directives for member types
// Member `game_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  game__msg__GameStateMsg__init(message_memory);
}

void game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_fini_function(void * message_memory)
{
  game__msg__GameStateMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_member_array[3] = {
  {
    "player_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game__msg__GameStateMsg, player_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dice_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game__msg__GameStateMsg, dice_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game__msg__GameStateMsg, game_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_members = {
  "game__msg",  // message namespace
  "GameStateMsg",  // message name
  3,  // number of fields
  sizeof(game__msg__GameStateMsg),
  game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_member_array,  // message members
  game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle = {
  0,
  &game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_game
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, game, msg, GameStateMsg)() {
  if (!game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle.typesupport_identifier) {
    game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &game__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
