#include "board_controller.hpp"
#include "game_state_msg.msg"

class SnakesAndLaddersGame : public rclcpp::Node {
public:
    SnakesAndLaddersGame() : Node("snakes_and_ladders_game"), position(1) {
        //10 messages to be stored
        game_state_publisher_ = this->create_publisher<std_msgs::msg::Int32>("game_state", 10);
        player_move_subscription_ = this->create_subscription<std_msgs::msg::Int32>("player_move", 10,
            [this](const std_msgs::msg::Int32::SharedPtr msg) {
                handlePlayerMove(msg->data);
            }
        );
    }

    void handlePlayerMove(int roll) {
        std_msgs::msg::Int32 game_state_msg;

        if (position < 49) {
            game_state_msg.dice_result = rollDice();
            position += game_state_msg.dice_result;
            game_state_msg.player_position = position;
            checkForSnakeOrLadder(game_state_msg.dice_result);
        } else {
            game_state_msg.dice_result = 0; // Game already won
        }

        game_state_publisher_->publish(game_state_msg);
    }

     int rollDice() {

        roll = (rand() % 6 + 1);
        game_state_msg.game_message = "You rolled a " + std::to_string(roll);
        return roll;
    }
    int position;

private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr game_state_publisher_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr player_move_subscription_;

    void checkForSnakeOrLadder(int roll) {
       static int snakesAndLadders[49] = {
                                        0, 0, 0, 0, 4, 0, 0,
                                        0, 0, 0, 0, 0, 0, 0, 
                                        0, -6, 0, 0, 0, 0, 0, 
                                        0, 0, 0, 0, 0, -6, 0, 
                                        0, 0, 0, 4, 0, 0, 0,
                                        0, 0, 0, 0, 0, 4, 0, 
                                        0, -6, 0, 0, 0, 0, 0
        };

        int newPosition = position + snakesAndLadders[position];
        if (newPosition != position) {
            if (snakesAndLadders[position] > 0) {
                RCLCPP_INFO(this->get_logger(), "Climbed a ladder! You're now at position %d", newPosition);
            } else {
                RCLCPP_INFO(this->get_logger(), "Oops, a snake! You're now at position %d", newPosition);
            }
            position = newPosition;
            game_state_msg.player_position = position;
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto game_node = std::make_shared<SnakesAndLaddersGame>();
    rclcpp::spin(game_node);
    rclcpp::shutdown();
    return 0;
}
