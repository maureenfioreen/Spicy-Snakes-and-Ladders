// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/game_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStateMsg_game_message
{
public:
  explicit Init_GameStateMsg_game_message(::custom_msgs::msg::GameStateMsg & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::GameStateMsg game_message(::custom_msgs::msg::GameStateMsg::_game_message_type arg)
  {
    msg_.game_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::GameStateMsg msg_;
};

class Init_GameStateMsg_dice_result
{
public:
  explicit Init_GameStateMsg_dice_result(::custom_msgs::msg::GameStateMsg & msg)
  : msg_(msg)
  {}
  Init_GameStateMsg_game_message dice_result(::custom_msgs::msg::GameStateMsg::_dice_result_type arg)
  {
    msg_.dice_result = std::move(arg);
    return Init_GameStateMsg_game_message(msg_);
  }

private:
  ::custom_msgs::msg::GameStateMsg msg_;
};

class Init_GameStateMsg_player_position
{
public:
  Init_GameStateMsg_player_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStateMsg_dice_result player_position(::custom_msgs::msg::GameStateMsg::_player_position_type arg)
  {
    msg_.player_position = std::move(arg);
    return Init_GameStateMsg_dice_result(msg_);
  }

private:
  ::custom_msgs::msg::GameStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::GameStateMsg>()
{
  return custom_msgs::msg::builder::Init_GameStateMsg_player_position();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_
