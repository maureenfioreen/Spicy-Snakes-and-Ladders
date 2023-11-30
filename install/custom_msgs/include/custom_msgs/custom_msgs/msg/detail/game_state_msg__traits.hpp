// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/game_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameStateMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: player_position
  {
    out << "player_position: ";
    rosidl_generator_traits::value_to_yaml(msg.player_position, out);
    out << ", ";
  }

  // member: dice_result
  {
    out << "dice_result: ";
    rosidl_generator_traits::value_to_yaml(msg.dice_result, out);
    out << ", ";
  }

  // member: game_message
  {
    out << "game_message: ";
    rosidl_generator_traits::value_to_yaml(msg.game_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: player_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player_position: ";
    rosidl_generator_traits::value_to_yaml(msg.player_position, out);
    out << "\n";
  }

  // member: dice_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dice_result: ";
    rosidl_generator_traits::value_to_yaml(msg.dice_result, out);
    out << "\n";
  }

  // member: game_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_message: ";
    rosidl_generator_traits::value_to_yaml(msg.game_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameStateMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::GameStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::GameStateMsg & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::GameStateMsg>()
{
  return "custom_msgs::msg::GameStateMsg";
}

template<>
inline const char * name<custom_msgs::msg::GameStateMsg>()
{
  return "custom_msgs/msg/GameStateMsg";
}

template<>
struct has_fixed_size<custom_msgs::msg::GameStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::GameStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::GameStateMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__TRAITS_HPP_
