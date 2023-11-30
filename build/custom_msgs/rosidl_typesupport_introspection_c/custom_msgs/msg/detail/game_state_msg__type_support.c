// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/game_state_msg__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/game_state_msg__functions.h"
#include "custom_msgs/msg/detail/game_state_msg__struct.h"


// Include directives for member types
// Member `game_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__GameStateMsg__init(message_memory);
}

void custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_fini_function(void * message_memory)
{
  custom_msgs__msg__GameStateMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_member_array[3] = {
  {
    "player_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__GameStateMsg, player_position),  // bytes offset in struct
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
    offsetof(custom_msgs__msg__GameStateMsg, dice_result),  // bytes offset in struct
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
    offsetof(custom_msgs__msg__GameStateMsg, game_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_members = {
  "custom_msgs__msg",  // message namespace
  "GameStateMsg",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__GameStateMsg),
  custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_member_array,  // message members
  custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle = {
  0,
  &custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, GameStateMsg)() {
  if (!custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__GameStateMsg__rosidl_typesupport_introspection_c__GameStateMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
