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
			player_move_subscription_ = this->create_subscription<game::msg::GameStateMsg>("player_info", 20, std::bind(&ControllerPublisher::handlePlayerMove, this, _1));
			 RCLCPP_INFO(get_logger(), "Node started!");
		}

		game::msg::GameStateMsg game_state_msg = game::msg::GameStateMsg();
		//game::msg::GameStateMsg player_state = game::msg::GameStateMsg();

	private:
		int position = 0;
		int player1 = 1;
		int player2 = 2;

		void handlePlayerMove(const game::msg::GameStateMsg::SharedPtr game_state_msg) {
			//position = game_state_msg.player_position;
			position = 1;
			if (position < 49) {
				if (position == 1) {
					//std::cout << "Player 1 roll the dice \n";
					RCLCPP_INFO(get_logger(), "Player 1 roll the dice");
					int first_roll = rollDice();
					//std::cout << "PLayer 2 roll the dice \n";
					RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Player 2 roll the dice");
					int second_roll = rollDice();
					
					if (first_roll > second_roll) {
						//std::cout << "Player 1 starts the game \n";
						RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Player 1 starts the game");
						game_state_msg->first_player_id = player1;
					
					} else {
						//std::cout << "Player 2 starts the game \n";
						RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Player 2 starts the game");
						game_state_msg->first_player_id = player2;
					}
				} else {
				game_state_msg->dice_result = rollDice();
				//game_state_msg.player_position = position;
				//checkForSnakeOrLadder(game_state_msg.dice_result);
				
				}

			} else {
				game_state_msg->dice_result = 0; // Game already won
				game_state_msg->game_message =  "Player " + std::to_string(game_state_msg->first_player_id)  + "won the game";
			}

			game::msg::GameStateMsg player_state = game::msg::GameStateMsg();
			player_state.first_player_id = game_state_msg->first_player_id;
			player_state.dice_result = game_state_msg->dice_result;
			player_state.game_message = game_state_msg->game_message;

			game_state_publisher_->publish(player_state);
		
		}

		int rollDice() {

			int roll = (std::rand() % 6 + 1);
			//game_state_msg.game_message = "You rolled a " + std::to_string(roll);
			//RCLCPP_INFO(this->get_logger(), "'%s'", game_state_msg.game_message.c_str());
			return roll;
		}

		/*void receivedData(const game::msg::GameStateMsg & player) const
    		{
      			RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Receiving player position: %d", player.player_position);
				//game_state_msg.player_position = player.player_position;
    		}*/

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
