// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap4r2_msgs:msg/ImusInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/imus_info.h"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__FUNCTIONS_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mocap4r2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mocap4r2_msgs/msg/detail/imus_info__struct.h"

/// Initialize msg/ImusInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_msgs__msg__ImusInfo
 * )) before or use
 * mocap4r2_msgs__msg__ImusInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__init(mocap4r2_msgs__msg__ImusInfo * msg);

/// Finalize msg/ImusInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
void
mocap4r2_msgs__msg__ImusInfo__fini(mocap4r2_msgs__msg__ImusInfo * msg);

/// Create msg/ImusInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_msgs__msg__ImusInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
mocap4r2_msgs__msg__ImusInfo *
mocap4r2_msgs__msg__ImusInfo__create(void);

/// Destroy msg/ImusInfo message.
/**
 * It calls
 * mocap4r2_msgs__msg__ImusInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
void
mocap4r2_msgs__msg__ImusInfo__destroy(mocap4r2_msgs__msg__ImusInfo * msg);

/// Check for msg/ImusInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__are_equal(const mocap4r2_msgs__msg__ImusInfo * lhs, const mocap4r2_msgs__msg__ImusInfo * rhs);

/// Copy a msg/ImusInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__copy(
  const mocap4r2_msgs__msg__ImusInfo * input,
  mocap4r2_msgs__msg__ImusInfo * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__msg__ImusInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__msg__ImusInfo__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__msg__ImusInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__msg__ImusInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ImusInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_msgs__msg__ImusInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__Sequence__init(mocap4r2_msgs__msg__ImusInfo__Sequence * array, size_t size);

/// Finalize array of msg/ImusInfo messages.
/**
 * It calls
 * mocap4r2_msgs__msg__ImusInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
void
mocap4r2_msgs__msg__ImusInfo__Sequence__fini(mocap4r2_msgs__msg__ImusInfo__Sequence * array);

/// Create array of msg/ImusInfo messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_msgs__msg__ImusInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
mocap4r2_msgs__msg__ImusInfo__Sequence *
mocap4r2_msgs__msg__ImusInfo__Sequence__create(size_t size);

/// Destroy array of msg/ImusInfo messages.
/**
 * It calls
 * mocap4r2_msgs__msg__ImusInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
void
mocap4r2_msgs__msg__ImusInfo__Sequence__destroy(mocap4r2_msgs__msg__ImusInfo__Sequence * array);

/// Check for msg/ImusInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__Sequence__are_equal(const mocap4r2_msgs__msg__ImusInfo__Sequence * lhs, const mocap4r2_msgs__msg__ImusInfo__Sequence * rhs);

/// Copy an array of msg/ImusInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
bool
mocap4r2_msgs__msg__ImusInfo__Sequence__copy(
  const mocap4r2_msgs__msg__ImusInfo__Sequence * input,
  mocap4r2_msgs__msg__ImusInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__FUNCTIONS_H_
