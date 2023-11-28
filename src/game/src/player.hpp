#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include "board_controller.hpp"

class PlayerNode : public rclcpp::Node {
public:
    PlayerNode();
    
private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr player_move_publisher_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr game_state_subscription_;
};

#endif
