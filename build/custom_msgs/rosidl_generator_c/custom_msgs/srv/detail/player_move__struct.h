// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/PlayerMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PlayerMove in the package custom_msgs.
typedef struct custom_msgs__srv__PlayerMove_Request
{
  int32_t dice_result;
  int32_t player_id;
} custom_msgs__srv__PlayerMove_Request;

// Struct for a sequence of custom_msgs__srv__PlayerMove_Request.
typedef struct custom_msgs__srv__PlayerMove_Request__Sequence
{
  custom_msgs__srv__PlayerMove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PlayerMove_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PlayerMove in the package custom_msgs.
typedef struct custom_msgs__srv__PlayerMove_Response
{
  int32_t new_position;
} custom_msgs__srv__PlayerMove_Response;

// Struct for a sequence of custom_msgs__srv__PlayerMove_Response.
typedef struct custom_msgs__srv__PlayerMove_Response__Sequence
{
  custom_msgs__srv__PlayerMove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PlayerMove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_H_
