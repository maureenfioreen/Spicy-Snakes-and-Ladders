// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef GAME__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_
#define GAME__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "game/msg/detail/game_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace game
{

namespace msg
{

namespace builder
{

class Init_GameStateMsg_game_message
{
public:
  explicit Init_GameStateMsg_game_message(::game::msg::GameStateMsg & msg)
  : msg_(msg)
  {}
  ::game::msg::GameStateMsg game_message(::game::msg::GameStateMsg::_game_message_type arg)
  {
    msg_.game_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::game::msg::GameStateMsg msg_;
};

class Init_GameStateMsg_player_position
{
public:
  explicit Init_GameStateMsg_player_position(::game::msg::GameStateMsg & msg)
  : msg_(msg)
  {}
  Init_GameStateMsg_game_message player_position(::game::msg::GameStateMsg::_player_position_type arg)
  {
    msg_.player_position = std::move(arg);
    return Init_GameStateMsg_game_message(msg_);
  }

private:
  ::game::msg::GameStateMsg msg_;
};

class Init_GameStateMsg_dice_result
{
public:
  explicit Init_GameStateMsg_dice_result(::game::msg::GameStateMsg & msg)
  : msg_(msg)
  {}
  Init_GameStateMsg_player_position dice_result(::game::msg::GameStateMsg::_dice_result_type arg)
  {
    msg_.dice_result = std::move(arg);
    return Init_GameStateMsg_player_position(msg_);
  }

private:
  ::game::msg::GameStateMsg msg_;
};

class Init_GameStateMsg_first_player_id
{
public:
  Init_GameStateMsg_first_player_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStateMsg_dice_result first_player_id(::game::msg::GameStateMsg::_first_player_id_type arg)
  {
    msg_.first_player_id = std::move(arg);
    return Init_GameStateMsg_dice_result(msg_);
  }

private:
  ::game::msg::GameStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::game::msg::GameStateMsg>()
{
  return game::msg::builder::Init_GameStateMsg_first_player_id();
}

}  // namespace game

#endif  // GAME__MSG__DETAIL__GAME_STATE_MSG__BUILDER_HPP_
