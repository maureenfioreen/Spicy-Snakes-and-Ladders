// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice

#ifndef GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_HPP_
#define GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__game__msg__GameStateMsg __attribute__((deprecated))
#else
# define DEPRECATED__game__msg__GameStateMsg __declspec(deprecated)
#endif

namespace game
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameStateMsg_
{
  using Type = GameStateMsg_<ContainerAllocator>;

  explicit GameStateMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_player_id = 0l;
      this->dice_result = 0l;
      this->player_position = 0l;
      this->game_message = "";
    }
  }

  explicit GameStateMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : game_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_player_id = 0l;
      this->dice_result = 0l;
      this->player_position = 0l;
      this->game_message = "";
    }
  }

  // field types and members
  using _first_player_id_type =
    int32_t;
  _first_player_id_type first_player_id;
  using _dice_result_type =
    int32_t;
  _dice_result_type dice_result;
  using _player_position_type =
    int32_t;
  _player_position_type player_position;
  using _game_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _game_message_type game_message;

  // setters for named parameter idiom
  Type & set__first_player_id(
    const int32_t & _arg)
  {
    this->first_player_id = _arg;
    return *this;
  }
  Type & set__dice_result(
    const int32_t & _arg)
  {
    this->dice_result = _arg;
    return *this;
  }
  Type & set__player_position(
    const int32_t & _arg)
  {
    this->player_position = _arg;
    return *this;
  }
  Type & set__game_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->game_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    game::msg::GameStateMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const game::msg::GameStateMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<game::msg::GameStateMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<game::msg::GameStateMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      game::msg::GameStateMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<game::msg::GameStateMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      game::msg::GameStateMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<game::msg::GameStateMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<game::msg::GameStateMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<game::msg::GameStateMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__game__msg__GameStateMsg
    std::shared_ptr<game::msg::GameStateMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__game__msg__GameStateMsg
    std::shared_ptr<game::msg::GameStateMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameStateMsg_ & other) const
  {
    if (this->first_player_id != other.first_player_id) {
      return false;
    }
    if (this->dice_result != other.dice_result) {
      return false;
    }
    if (this->player_position != other.player_position) {
      return false;
    }
    if (this->game_message != other.game_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameStateMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameStateMsg_

// alias to use template instance with default allocator
using GameStateMsg =
  game::msg::GameStateMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace game

#endif  // GAME__MSG__DETAIL__GAME_STATE_MSG__STRUCT_HPP_
