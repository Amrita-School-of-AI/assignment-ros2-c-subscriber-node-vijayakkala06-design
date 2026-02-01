<<<<<<< HEAD
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class SubscriberNode : public rclcpp::Node
{
public:
  SubscriberNode() : Node("subscriber_node")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "/chatter",
      10,
      std::bind(&SubscriberNode::topic_callback, this, std::placeholders::_1)
    );
  }

private:
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SubscriberNode>());
  rclcpp::shutdown();
  return 0;
=======
#include <memory>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

/*
 * TODO: Create a Class named 'SubscriberNode' that inherits from rclcpp::Node.
 * Requirements:
 * 1. The constructor should name the node "subscriber_node".
 * 2. Create a subscription to topic "/chatter" with message type std_msgs::msg::String.
 * 3. The subscription callback should:
 *    - Log using RCLCPP_INFO: "I heard: 'MESSAGE'" where MESSAGE is the received data
 */

class SubscriberNode : public rclcpp::Node
{
public:
    SubscriberNode()
        : Node("subscriber_node")
    {
        // TODO: Create the subscription here
    }

private:
    // TODO: Define the topic_callback function here

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubscriberNode>());
    rclcpp::shutdown();
    return 0;
>>>>>>> 0af5982ac57a4d0c3036fcbcafe23c806a58e3fd
}
