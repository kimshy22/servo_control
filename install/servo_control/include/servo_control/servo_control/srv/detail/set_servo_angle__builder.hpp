// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_control:srv/SetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__BUILDER_HPP_
#define SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_control/srv/detail/set_servo_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_control
{

namespace srv
{

namespace builder
{

class Init_SetServoAngle_Request_angle
{
public:
  Init_SetServoAngle_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_control::srv::SetServoAngle_Request angle(::servo_control::srv::SetServoAngle_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_control::srv::SetServoAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_control::srv::SetServoAngle_Request>()
{
  return servo_control::srv::builder::Init_SetServoAngle_Request_angle();
}

}  // namespace servo_control


namespace servo_control
{

namespace srv
{

namespace builder
{

class Init_SetServoAngle_Response_message
{
public:
  explicit Init_SetServoAngle_Response_message(::servo_control::srv::SetServoAngle_Response & msg)
  : msg_(msg)
  {}
  ::servo_control::srv::SetServoAngle_Response message(::servo_control::srv::SetServoAngle_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_control::srv::SetServoAngle_Response msg_;
};

class Init_SetServoAngle_Response_success
{
public:
  Init_SetServoAngle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServoAngle_Response_message success(::servo_control::srv::SetServoAngle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetServoAngle_Response_message(msg_);
  }

private:
  ::servo_control::srv::SetServoAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_control::srv::SetServoAngle_Response>()
{
  return servo_control::srv::builder::Init_SetServoAngle_Response_success();
}

}  // namespace servo_control

#endif  // SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__BUILDER_HPP_
