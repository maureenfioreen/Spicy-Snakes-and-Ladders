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
    std_msgs::msg::Int32 game_state_msg;

    void handlePlayerMove(int roll) {

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

        int newPosition = position + roll;

        while (true) {
            if (snakesAndLadders[position] > 0) {    
                RCLCPP_INFO(this->get_logger(), "You landed on a ladder. Do you wish to take it? (y/n) %d");

                char choice;
                std::cin >> choice;

                if (choice == 'y' || choice == 'Y') {
                    newPosition = newPosition + snakesAndLadders[position];
                    RCLCPP_INFO(this->get_logger(), "Climbed a ladder! You're now at position %d", newPosition);
                    break;

                } else {
                    game_state_msg.dice_result = rollDice();
                    newPosition = newPosition + game_state_msg.dice_result;
                    RCLCPP_INFO(this->get_logger(), "You rolled the dice again! You're now at position %d", newPosition);
                }

               
            } else if (snakesAndLadders[position] < 0) {

                newPosition = newPosition + snakesAndLadders[position];
                RCLCPP_INFO(this->get_logger(), "Oops, a snake! You're now at position %d", newPosition);
                break;

            } else {

                RCLCPP_INFO(this->get_logger(), "Normal square! You're now at position %d", newPosition);
                break;

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
