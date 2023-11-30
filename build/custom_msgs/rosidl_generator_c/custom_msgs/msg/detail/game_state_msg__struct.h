// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'game_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GameStateMsg in the package custom_msgs.
/**
  * custom game_state.msg
 */
typedef struct custom_msgs__msg__GameStateMsg
{
  int32_t player_position;
  int32_t dice_result;
  rosidl_runtime_c__String game_message;
} custom_msgs__msg__GameStateMsg;

// Struct for a sequence of custom_msgs__msg__GameStateMsg.
typedef struct custom_msgs__msg__GameStateMsg__Sequence
{
  custom_msgs__msg__GameStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__GameStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_
