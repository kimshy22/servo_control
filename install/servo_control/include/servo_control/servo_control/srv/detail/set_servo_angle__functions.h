// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from servo_control:srv/SetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__FUNCTIONS_H_
#define SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "servo_control/msg/rosidl_generator_c__visibility_control.h"

#include "servo_control/srv/detail/set_servo_angle__struct.h"

/// Initialize srv/SetServoAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * servo_control__srv__SetServoAngle_Request
 * )) before or use
 * servo_control__srv__SetServoAngle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__init(servo_control__srv__SetServoAngle_Request * msg);

/// Finalize srv/SetServoAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Request__fini(servo_control__srv__SetServoAngle_Request * msg);

/// Create srv/SetServoAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * servo_control__srv__SetServoAngle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
servo_control__srv__SetServoAngle_Request *
servo_control__srv__SetServoAngle_Request__create();

/// Destroy srv/SetServoAngle message.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Request__destroy(servo_control__srv__SetServoAngle_Request * msg);

/// Check for srv/SetServoAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__are_equal(const servo_control__srv__SetServoAngle_Request * lhs, const servo_control__srv__SetServoAngle_Request * rhs);

/// Copy a srv/SetServoAngle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__copy(
  const servo_control__srv__SetServoAngle_Request * input,
  servo_control__srv__SetServoAngle_Request * output);

/// Initialize array of srv/SetServoAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * servo_control__srv__SetServoAngle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__Sequence__init(servo_control__srv__SetServoAngle_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetServoAngle messages.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Request__Sequence__fini(servo_control__srv__SetServoAngle_Request__Sequence * array);

/// Create array of srv/SetServoAngle messages.
/**
 * It allocates the memory for the array and calls
 * servo_control__srv__SetServoAngle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
servo_control__srv__SetServoAngle_Request__Sequence *
servo_control__srv__SetServoAngle_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetServoAngle messages.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Request__Sequence__destroy(servo_control__srv__SetServoAngle_Request__Sequence * array);

/// Check for srv/SetServoAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__Sequence__are_equal(const servo_control__srv__SetServoAngle_Request__Sequence * lhs, const servo_control__srv__SetServoAngle_Request__Sequence * rhs);

/// Copy an array of srv/SetServoAngle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Request__Sequence__copy(
  const servo_control__srv__SetServoAngle_Request__Sequence * input,
  servo_control__srv__SetServoAngle_Request__Sequence * output);

/// Initialize srv/SetServoAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * servo_control__srv__SetServoAngle_Response
 * )) before or use
 * servo_control__srv__SetServoAngle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__init(servo_control__srv__SetServoAngle_Response * msg);

/// Finalize srv/SetServoAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Response__fini(servo_control__srv__SetServoAngle_Response * msg);

/// Create srv/SetServoAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * servo_control__srv__SetServoAngle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
servo_control__srv__SetServoAngle_Response *
servo_control__srv__SetServoAngle_Response__create();

/// Destroy srv/SetServoAngle message.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Response__destroy(servo_control__srv__SetServoAngle_Response * msg);

/// Check for srv/SetServoAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__are_equal(const servo_control__srv__SetServoAngle_Response * lhs, const servo_control__srv__SetServoAngle_Response * rhs);

/// Copy a srv/SetServoAngle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__copy(
  const servo_control__srv__SetServoAngle_Response * input,
  servo_control__srv__SetServoAngle_Response * output);

/// Initialize array of srv/SetServoAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * servo_control__srv__SetServoAngle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__Sequence__init(servo_control__srv__SetServoAngle_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetServoAngle messages.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Response__Sequence__fini(servo_control__srv__SetServoAngle_Response__Sequence * array);

/// Create array of srv/SetServoAngle messages.
/**
 * It allocates the memory for the array and calls
 * servo_control__srv__SetServoAngle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
servo_control__srv__SetServoAngle_Response__Sequence *
servo_control__srv__SetServoAngle_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetServoAngle messages.
/**
 * It calls
 * servo_control__srv__SetServoAngle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
void
servo_control__srv__SetServoAngle_Response__Sequence__destroy(servo_control__srv__SetServoAngle_Response__Sequence * array);

/// Check for srv/SetServoAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__Sequence__are_equal(const servo_control__srv__SetServoAngle_Response__Sequence * lhs, const servo_control__srv__SetServoAngle_Response__Sequence * rhs);

/// Copy an array of srv/SetServoAngle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_control
bool
servo_control__srv__SetServoAngle_Response__Sequence__copy(
  const servo_control__srv__SetServoAngle_Response__Sequence * input,
  servo_control__srv__SetServoAngle_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROL__SRV__DETAIL__SET_SERVO_ANGLE__FUNCTIONS_H_
