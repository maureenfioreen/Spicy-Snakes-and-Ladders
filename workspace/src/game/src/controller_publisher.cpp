#include <string>
#include <iostream>
#include <cstdlib>
#include "rclcpp/rclcpp.hpp"
#include "../../../install/game/include/game/game/msg/game_state_msg.hpp"
using std::placeholders::_1;

class ControllerPublisher : public rclcpp::Node
{
	public:
		ControllerPublisher() : Node("controller_publisher") {

			game_state_publisher_ = this->create_publisher<game::msg::GameStateMsg>("game_state", 20);
			player_move_subscription_ = this->create_subscription<game::msg::GameStateMsg>("player_info", 10, std::bind(&ControllerPublisher::receivedData, this, _1));
		}

		game::msg::GameStateMsg game_state_msg = game::msg::GameStateMsg();
		//game::msg::GameStateMsg player_state = game::msg::GameStateMsg();

		void handlePlayerMove() {
			position = game_state_msg.player_position;
			if (position < 49) {
				if (position == 1) {
					std::cout << "Player 1 roll the dice \n";
					int first_roll = rollDice();
					std::cout << "PLayer 2 roll the dice \n";
					int second_roll = rollDice();
					if (first_roll > second_roll) {
						std::cout << "Player 1 starts the game \n";
						game_state_msg.first_player_id = player1;
					} else {
						std::cout << "Player 2 starts the game \n";
						game_state_msg.first_player_id = player2;
					}
				} else {
				game_state_msg.dice_result = rollDice();
				//game_state_msg.player_position = position;
				//checkForSnakeOrLadder(game_state_msg.dice_result);
				
				}

			} else {
				game_state_msg.dice_result = 0; // Game already won
				game_state_msg.game_message =  "Player " + std::to_string(game_state_msg.first_player_id)  + "won the game";
			}
			
			game_state_publisher_->publish(game_state_msg);
		
		}

		int rollDice() {

			int roll = (std::rand() % 6 + 1);
			//game_state_msg.game_message = "You rolled a " + std::to_string(roll);
			//RCLCPP_INFO(this->get_logger(), "'%s'", game_state_msg.game_message.c_str());
			return roll;
		}

		/*void checkForSnakeOrLadder(int roll) {
			static int snakesAndLadders[49] = {
				0, 0, 0, 0, 4, 0, 0,
				0, 0, 0, 0, 0, 0, 0,
				0, -6, 0, 0, 0, 0, 0,
				0, 0, 0, 0, 0, -6, 0,
				0, 0, 0, 4, 0, 0, 0,
				0, 0, 0, 0, 0, 4, 0,
				0, -6, 0, 0, 0, 0, 0
			};

			int newPosition = game_state_msg.player_position + roll;

			//while (true) {

				if (snakesAndLadders[game_state_msg.player_position] > 0) {    
					RCLCPP_INFO(this->get_logger(), "You landed on a ladder. Do you wish to take it? (y/n)");

					char choice;
					std::cout << "Your choice: ";
					std::cin >> choice;

					if (choice == 'y' || choice == 'Y') {
						newPosition = newPosition + snakesAndLadders[game_state_msg.player_position];
						RCLCPP_INFO(this->get_logger(), "Climbed a ladder! You're now at position %d", newPosition);
						//break;

					} else {
						game_state_msg.dice_result = rollDice();
						newPosition = newPosition + game_state_msg.dice_result;
						RCLCPP_INFO(this->get_logger(), "You rolled the dice again! You're now at position %d", newPosition);
					}


				} else if (snakesAndLadders[game_state_msg.player_position] < 0) {

					newPosition = newPosition + snakesAndLadders[game_state_msg.player_position];
					RCLCPP_INFO(this->get_logger(), "Oops, a snake! You're now at position %d", newPosition);
					//break;

				} else {

					RCLCPP_INFO(this->get_logger(), "Normal square! You're now at position %d", newPosition);
					//break;

				//}

				game_state_msg.player_position = newPosition;
				//game_state_publisher_->publish(game_state_msg);
			}
		}*/

	private:
		int position = 0;
		int player1 = 1;
		int player2 = 2;
		void receivedData(const game::msg::GameStateMsg & player) const
    		{
      			RCLCPP_INFO(this->get_logger(), "Receiving player position: %d", player.player_position);
				//game_state_msg.player_position = player.player_position;
    		}

		rclcpp::Publisher<game::msg::GameStateMsg>::SharedPtr game_state_publisher_;
		rclcpp::Subscription<game::msg::GameStateMsg>::SharedPtr player_move_subscription_;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<ControllerPublisher>());
	rclcpp::shutdown();
	return 0;
}
