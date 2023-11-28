#ifndef BOARD_CONTROLLER_HPP
#define BOARD_CONTROLLER_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <string>

class SnakesAndLaddersGame : public rclcpp::Node {
public:
    SnakesAndLaddersGame();
    int rollDice();
    void handlePlayerMove();
    int position;

std_msgs::msg::Int32 game_state_msg;

private:
    void checkForSnakeOrLadder(int roll);
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr game_state_publisher_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr player_move_subscription_;
};

#endif  