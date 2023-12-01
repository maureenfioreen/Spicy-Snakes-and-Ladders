// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef GAME__MSG__DETAIL__GAME_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GAME__MSG__DETAIL__GAME_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "game/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "game/msg/detail/game_state_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace game
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_game
cdr_serialize(
  const game::msg::GameStateMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_game
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  game::msg::GameStateMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_game
get_serialized_size(
  const game::msg::GameStateMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_game
max_serialized_size_GameStateMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace game

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_game
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, game, msg, GameStateMsg)();

#ifdef __cplusplus
}
#endif

#endif  // GAME__MSG__DETAIL__GAME_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
