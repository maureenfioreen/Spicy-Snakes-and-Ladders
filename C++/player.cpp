#include "player.hpp"
#include "board_controller.hpp"

class PlayerNode : public rclcpp::Node {
public:
    PlayerNode() : Node("player_node") {
        player_move_publisher_ = this->create_publisher<std_msgs::msg::Int32>("player_move", 10);
        game_state_subscription_ = this->create_subscription<std_msgs::msg::Int32>("game_state", 10,
            [this](const std_msgs::msg::Int32::SharedPtr msg) {
                if (msg->data > 0) {
                    handlePlayerMove(msg->data);

                    std_msgs::msg::Int32 player_move_msg;
                    player_move_msg.data = position;
                    player_move_publisher_->publish(player_move_msg);
                }
            }
        );
    }

private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr player_move_publisher_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr game_state_subscription_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto player_node = std::make_shared<PlayerNode>();
    rclcpp::spin(player_node);
    rclcpp::shutdown();
    return 0;
}
