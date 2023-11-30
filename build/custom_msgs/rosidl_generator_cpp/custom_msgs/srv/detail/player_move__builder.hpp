// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/PlayerMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/player_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayerMove_Request_player_id
{
public:
  explicit Init_PlayerMove_Request_player_id(::custom_msgs::srv::PlayerMove_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::PlayerMove_Request player_id(::custom_msgs::srv::PlayerMove_Request::_player_id_type arg)
  {
    msg_.player_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PlayerMove_Request msg_;
};

class Init_PlayerMove_Request_dice_result
{
public:
  Init_PlayerMove_Request_dice_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayerMove_Request_player_id dice_result(::custom_msgs::srv::PlayerMove_Request::_dice_result_type arg)
  {
    msg_.dice_result = std::move(arg);
    return Init_PlayerMove_Request_player_id(msg_);
  }

private:
  ::custom_msgs::srv::PlayerMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PlayerMove_Request>()
{
  return custom_msgs::srv::builder::Init_PlayerMove_Request_dice_result();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayerMove_Response_new_position
{
public:
  Init_PlayerMove_Response_new_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::PlayerMove_Response new_position(::custom_msgs::srv::PlayerMove_Response::_new_position_type arg)
  {
    msg_.new_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PlayerMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PlayerMove_Response>()
{
  return custom_msgs::srv::builder::Init_PlayerMove_Response_new_position();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__BUILDER_HPP_
