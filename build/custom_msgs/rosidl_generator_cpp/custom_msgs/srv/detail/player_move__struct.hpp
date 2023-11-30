// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/PlayerMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PlayerMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PlayerMove_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayerMove_Request_
{
  using Type = PlayerMove_Request_<ContainerAllocator>;

  explicit PlayerMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dice_result = 0l;
      this->player_id = 0l;
    }
  }

  explicit PlayerMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dice_result = 0l;
      this->player_id = 0l;
    }
  }

  // field types and members
  using _dice_result_type =
    int32_t;
  _dice_result_type dice_result;
  using _player_id_type =
    int32_t;
  _player_id_type player_id;

  // setters for named parameter idiom
  Type & set__dice_result(
    const int32_t & _arg)
  {
    this->dice_result = _arg;
    return *this;
  }
  Type & set__player_id(
    const int32_t & _arg)
  {
    this->player_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PlayerMove_Request
    std::shared_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PlayerMove_Request
    std::shared_ptr<custom_msgs::srv::PlayerMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayerMove_Request_ & other) const
  {
    if (this->dice_result != other.dice_result) {
      return false;
    }
    if (this->player_id != other.player_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayerMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayerMove_Request_

// alias to use template instance with default allocator
using PlayerMove_Request =
  custom_msgs::srv::PlayerMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PlayerMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PlayerMove_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayerMove_Response_
{
  using Type = PlayerMove_Response_<ContainerAllocator>;

  explicit PlayerMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_position = 0l;
    }
  }

  explicit PlayerMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_position = 0l;
    }
  }

  // field types and members
  using _new_position_type =
    int32_t;
  _new_position_type new_position;

  // setters for named parameter idiom
  Type & set__new_position(
    const int32_t & _arg)
  {
    this->new_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PlayerMove_Response
    std::shared_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PlayerMove_Response
    std::shared_ptr<custom_msgs::srv::PlayerMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayerMove_Response_ & other) const
  {
    if (this->new_position != other.new_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayerMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayerMove_Response_

// alias to use template instance with default allocator
using PlayerMove_Response =
  custom_msgs::srv::PlayerMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct PlayerMove
{
  using Request = custom_msgs::srv::PlayerMove_Request;
  using Response = custom_msgs::srv::PlayerMove_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__STRUCT_HPP_
