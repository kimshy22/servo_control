#include "rclcpp/rclcpp.hpp"
#include "servo_control/srv/set_servo_angle.hpp"
#include <serial/serial.h>

using std::placeholders::_1;
using std::placeholders::_2;

class ServoService : public rclcpp::Node {
public:
    ServoService() : Node("servo_service_node") {
        this->declare_parameter<std::string>("serial_port", "/dev/ttyACM0");
        this->declare_parameter<int>("baud_rate", 9600);

        std::string port;
        int baud;
        this->get_parameter("serial_port", port);
        this->get_parameter("baud_rate", baud);

        try {
            ser_.setPort(port);
            ser_.setBaudrate(baud);
            serial::Timeout to = serial::Timeout::simpleTimeout(1000);
            ser_.setTimeout(to);
            ser_.open();
        } catch (serial::IOException &e) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open port");
        }

        service_ = this->create_service<servo_control::srv::SetServoAngle>(
            "set_servo_angle",
            std::bind(&ServoService::handle_set_angle, this, _1, _2)
        );
    }

private:
    void handle_set_angle(
        const std::shared_ptr<servo_control::srv::SetServoAngle::Request> request,
        std::shared_ptr<servo_control::srv::SetServoAngle::Response> response) {
        
        if (request->angle < 0 || request->angle > 180) {
            response->success = false;
            response->message = "Invalid angle";
            return;
        }
        
        std::string cmd = std::to_string(request->angle) + "\n";
        ser_.write(cmd);
        
        response->success = true;
        response->message = "Moved to " + std::to_string(request->angle) + " degrees";
    }

    rclcpp::Service<servo_control::srv::SetServoAngle>::SharedPtr service_;
    serial::Serial ser_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ServoService>());
    rclcpp::shutdown();
    return 0;
}
