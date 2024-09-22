// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arduinobot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__FUNCTIONS_H_
#define ARDUINOBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arduinobot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "arduinobot_msgs/srv/detail/euler_to_quaternion__struct.h"

/// Initialize srv/EulerToQuaternion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arduinobot_msgs__srv__EulerToQuaternion_Request
 * )) before or use
 * arduinobot_msgs__srv__EulerToQuaternion_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__init(arduinobot_msgs__srv__EulerToQuaternion_Request * msg);

/// Finalize srv/EulerToQuaternion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Request__fini(arduinobot_msgs__srv__EulerToQuaternion_Request * msg);

/// Create srv/EulerToQuaternion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
arduinobot_msgs__srv__EulerToQuaternion_Request *
arduinobot_msgs__srv__EulerToQuaternion_Request__create();

/// Destroy srv/EulerToQuaternion message.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Request__destroy(arduinobot_msgs__srv__EulerToQuaternion_Request * msg);

/// Check for srv/EulerToQuaternion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__are_equal(const arduinobot_msgs__srv__EulerToQuaternion_Request * lhs, const arduinobot_msgs__srv__EulerToQuaternion_Request * rhs);

/// Copy a srv/EulerToQuaternion message.
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
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__copy(
  const arduinobot_msgs__srv__EulerToQuaternion_Request * input,
  arduinobot_msgs__srv__EulerToQuaternion_Request * output);

/// Initialize array of srv/EulerToQuaternion messages.
/**
 * It allocates the memory for the number of elements and calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__init(arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * array, size_t size);

/// Finalize array of srv/EulerToQuaternion messages.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__fini(arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * array);

/// Create array of srv/EulerToQuaternion messages.
/**
 * It allocates the memory for the array and calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence *
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__create(size_t size);

/// Destroy array of srv/EulerToQuaternion messages.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__destroy(arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * array);

/// Check for srv/EulerToQuaternion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__are_equal(const arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * lhs, const arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * rhs);

/// Copy an array of srv/EulerToQuaternion messages.
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
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence__copy(
  const arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * input,
  arduinobot_msgs__srv__EulerToQuaternion_Request__Sequence * output);

/// Initialize srv/EulerToQuaternion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arduinobot_msgs__srv__EulerToQuaternion_Response
 * )) before or use
 * arduinobot_msgs__srv__EulerToQuaternion_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__init(arduinobot_msgs__srv__EulerToQuaternion_Response * msg);

/// Finalize srv/EulerToQuaternion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Response__fini(arduinobot_msgs__srv__EulerToQuaternion_Response * msg);

/// Create srv/EulerToQuaternion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
arduinobot_msgs__srv__EulerToQuaternion_Response *
arduinobot_msgs__srv__EulerToQuaternion_Response__create();

/// Destroy srv/EulerToQuaternion message.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Response__destroy(arduinobot_msgs__srv__EulerToQuaternion_Response * msg);

/// Check for srv/EulerToQuaternion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__are_equal(const arduinobot_msgs__srv__EulerToQuaternion_Response * lhs, const arduinobot_msgs__srv__EulerToQuaternion_Response * rhs);

/// Copy a srv/EulerToQuaternion message.
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
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__copy(
  const arduinobot_msgs__srv__EulerToQuaternion_Response * input,
  arduinobot_msgs__srv__EulerToQuaternion_Response * output);

/// Initialize array of srv/EulerToQuaternion messages.
/**
 * It allocates the memory for the number of elements and calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__init(arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * array, size_t size);

/// Finalize array of srv/EulerToQuaternion messages.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__fini(arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * array);

/// Create array of srv/EulerToQuaternion messages.
/**
 * It allocates the memory for the array and calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence *
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__create(size_t size);

/// Destroy array of srv/EulerToQuaternion messages.
/**
 * It calls
 * arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
void
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__destroy(arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * array);

/// Check for srv/EulerToQuaternion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__are_equal(const arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * lhs, const arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * rhs);

/// Copy an array of srv/EulerToQuaternion messages.
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
ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
bool
arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence__copy(
  const arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * input,
  arduinobot_msgs__srv__EulerToQuaternion_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__FUNCTIONS_H_
