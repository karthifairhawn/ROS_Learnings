// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim:msg/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__MAIN_BG__FUNCTIONS_H_
#define TURTLESIM__MSG__DETAIL__MAIN_BG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim/msg/detail/main_bg__struct.h"

/// Initialize msg/MainBG message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__msg__MainBG
 * )) before or use
 * turtlesim__msg__MainBG__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__msg__MainBG__init(turtlesim__msg__MainBG * msg);

/// Finalize msg/MainBG message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__msg__MainBG__fini(turtlesim__msg__MainBG * msg);

/// Create msg/MainBG message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__msg__MainBG__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__msg__MainBG *
turtlesim__msg__MainBG__create();

/// Destroy msg/MainBG message.
/**
 * It calls
 * turtlesim__msg__MainBG__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__msg__MainBG__destroy(turtlesim__msg__MainBG * msg);


/// Initialize array of msg/MainBG messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__msg__MainBG__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__msg__MainBG__Sequence__init(turtlesim__msg__MainBG__Sequence * array, size_t size);

/// Finalize array of msg/MainBG messages.
/**
 * It calls
 * turtlesim__msg__MainBG__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__msg__MainBG__Sequence__fini(turtlesim__msg__MainBG__Sequence * array);

/// Create array of msg/MainBG messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__msg__MainBG__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__msg__MainBG__Sequence *
turtlesim__msg__MainBG__Sequence__create(size_t size);

/// Destroy array of msg/MainBG messages.
/**
 * It calls
 * turtlesim__msg__MainBG__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__msg__MainBG__Sequence__destroy(turtlesim__msg__MainBG__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__DETAIL__MAIN_BG__FUNCTIONS_H_
