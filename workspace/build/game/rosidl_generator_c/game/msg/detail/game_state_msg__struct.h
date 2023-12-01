// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_
#define GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_

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

/// Struct defined in msg/GameStateMsg in the package game.
typedef struct game__msg__GameStateMsg
{
  int32_t player_position;
  int32_t dice_result;
  rosidl_runtime_c__String game_message;
} game__msg__GameStateMsg;

// Struct for a sequence of game__msg__GameStateMsg.
typedef struct game__msg__GameStateMsg__Sequence
{
  game__msg__GameStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} game__msg__GameStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_H_
