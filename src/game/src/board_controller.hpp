#ifndef BOARD_CONTROLLER_HPP
#define BOARD_CONTROLLER_HPP

#include <rclcpp/rclcpp.hpp>
#include "../../custom_msgs/include/custom_msgs/game_state_msg.hpp"
#include <string>

class SnakesAndLaddersGame : public rclcpp::Node {
public:
    SnakesAndLaddersGame();
    int rollDice();
    void handlePlayerMove();
    int position;
    auto game_state_msg = custom_msgs::msg::GameStateMsg();

private:
    void checkForSnakeOrLadder(int roll);
    rclcpp::Publisher<custom_msgs::msg::GameStateMsg>::SharedPtr game_state_publisher_;
    rclcpp::Subscription<custom_msgs::msg::GameStateMsg>::SharedPtr player_move_subscription_;
};

#endif  