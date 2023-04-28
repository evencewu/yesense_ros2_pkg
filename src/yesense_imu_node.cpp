#include "yesense_ros2_pkg/analysis_data.h"
#include <serial/serial.h>

#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/quaternion.hpp>

#include <rclcpp/rclcpp.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>

#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/temperature.hpp>

#include <memory>
#include <string>
#include <fstream>

enum PARSE_STATES {
	FIND_HEAD_0,
	FIND_HEAD_1,
	FIND_LENGTH,
	FIND_END
};

sensor_msgs::msg::Imu g_imu;

int main()
{
	serial::Serial ser;

	std::string port;
	int baud_rate = 460800;
	int buf_size = 1000;

	std::string tf_parent_frame_id;
	std::string tf_frame_id;
	std::string frame_id;

	double time_offset_in_seconds;
	bool broadcast_tf;
	double linear_acceleration_stddev;
	double angular_velocity_stddev;
	double orientation_stddev;

	uint8_t last_received_message_number;
	bool received_message = false;
	int data_packet_start;

	tf2::Quaternion orientation;
	tf2::Quaternion zero_orientation;

	return 0;
}