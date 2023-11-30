// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/PlayerMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/player_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayerMove_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: dice_result
  {
    out << "dice_result: ";
    rosidl_generator_traits::value_to_yaml(msg.dice_result, out);
    out << ", ";
  }

  // member: player_id
  {
    out << "player_id: ";
    rosidl_generator_traits::value_to_yaml(msg.player_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayerMove_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dice_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dice_result: ";
    rosidl_generator_traits::value_to_yaml(msg.dice_result, out);
    out << "\n";
  }

  // member: player_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player_id: ";
    rosidl_generator_traits::value_to_yaml(msg.player_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayerMove_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::PlayerMove_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::PlayerMove_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::PlayerMove_Request>()
{
  return "custom_msgs::srv::PlayerMove_Request";
}

template<>
inline const char * name<custom_msgs::srv::PlayerMove_Request>()
{
  return "custom_msgs/srv/PlayerMove_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::PlayerMove_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::PlayerMove_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::PlayerMove_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayerMove_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_position
  {
    out << "new_position: ";
    rosidl_generator_traits::value_to_yaml(msg.new_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayerMove_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_position: ";
    rosidl_generator_traits::value_to_yaml(msg.new_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayerMove_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::PlayerMove_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::PlayerMove_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::PlayerMove_Response>()
{
  return "custom_msgs::srv::PlayerMove_Response";
}

template<>
inline const char * name<custom_msgs::srv::PlayerMove_Response>()
{
  return "custom_msgs/srv/PlayerMove_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::PlayerMove_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::PlayerMove_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::PlayerMove_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::PlayerMove>()
{
  return "custom_msgs::srv::PlayerMove";
}

template<>
inline const char * name<custom_msgs::srv::PlayerMove>()
{
  return "custom_msgs/srv/PlayerMove";
}

template<>
struct has_fixed_size<custom_msgs::srv::PlayerMove>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::PlayerMove_Request>::value &&
    has_fixed_size<custom_msgs::srv::PlayerMove_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::PlayerMove>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::PlayerMove_Request>::value &&
    has_bounded_size<custom_msgs::srv::PlayerMove_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::PlayerMove>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::PlayerMove_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::PlayerMove_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLAYER_MOVE__TRAITS_HPP_
