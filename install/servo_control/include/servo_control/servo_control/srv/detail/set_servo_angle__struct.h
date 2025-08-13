// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_control:srv/SetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__STRUCT_H_
#define SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetServoAngle in the package servo_control.
typedef struct servo_control__srv__SetServoAngle_Request
{
  int32_t angle;
} servo_control__srv__SetServoAngle_Request;

// Struct for a sequence of servo_control__srv__SetServoAngle_Request.
typedef struct servo_control__srv__SetServoAngle_Request__Sequence
{
  servo_control__srv__SetServoAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_control__srv__SetServoAngle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetServoAngle in the package servo_control.
typedef struct servo_control__srv__SetServoAngle_Response
{
  bool success;
  rosidl_runtime_c__String message;
} servo_control__srv__SetServoAngle_Response;

// Struct for a sequence of servo_control__srv__SetServoAngle_Response.
typedef struct servo_control__srv__SetServoAngle_Response__Sequence
{
  servo_control__srv__SetServoAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_control__srv__SetServoAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__STRUCT_H_
