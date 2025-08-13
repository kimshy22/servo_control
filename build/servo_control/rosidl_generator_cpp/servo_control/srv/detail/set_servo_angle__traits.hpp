// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_control:srv/SetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__TRAITS_HPP_
#define SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_control/srv/detail/set_servo_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServoAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetServoAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServoAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace servo_control

namespace rosidl_generator_traits
{

[[deprecated("use servo_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_control::srv::SetServoAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const servo_control::srv::SetServoAngle_Request & msg)
{
  return servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<servo_control::srv::SetServoAngle_Request>()
{
  return "servo_control::srv::SetServoAngle_Request";
}

template<>
inline const char * name<servo_control::srv::SetServoAngle_Request>()
{
  return "servo_control/srv/SetServoAngle_Request";
}

template<>
struct has_fixed_size<servo_control::srv::SetServoAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<servo_control::srv::SetServoAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<servo_control::srv::SetServoAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServoAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetServoAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServoAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace servo_control

namespace rosidl_generator_traits
{

[[deprecated("use servo_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_control::srv::SetServoAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const servo_control::srv::SetServoAngle_Response & msg)
{
  return servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<servo_control::srv::SetServoAngle_Response>()
{
  return "servo_control::srv::SetServoAngle_Response";
}

template<>
inline const char * name<servo_control::srv::SetServoAngle_Response>()
{
  return "servo_control/srv/SetServoAngle_Response";
}

template<>
struct has_fixed_size<servo_control::srv::SetServoAngle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_control::srv::SetServoAngle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_control::srv::SetServoAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<servo_control::srv::SetServoAngle>()
{
  return "servo_control::srv::SetServoAngle";
}

template<>
inline const char * name<servo_control::srv::SetServoAngle>()
{
  return "servo_control/srv/SetServoAngle";
}

template<>
struct has_fixed_size<servo_control::srv::SetServoAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<servo_control::srv::SetServoAngle_Request>::value &&
    has_fixed_size<servo_control::srv::SetServoAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<servo_control::srv::SetServoAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<servo_control::srv::SetServoAngle_Request>::value &&
    has_bounded_size<servo_control::srv::SetServoAngle_Response>::value
  >
{
};

template<>
struct is_service<servo_control::srv::SetServoAngle>
  : std::true_type
{
};

template<>
struct is_service_request<servo_control::srv::SetServoAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<servo_control::srv::SetServoAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__TRAITS_HPP_
