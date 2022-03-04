// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__FUNCTIONS_H_
#define PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pyturtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pyturtle_interfaces/srv/detail/main_bg__struct.h"

/// Initialize srv/MainBG message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pyturtle_interfaces__srv__MainBG_Request
 * )) before or use
 * pyturtle_interfaces__srv__MainBG_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
bool
pyturtle_interfaces__srv__MainBG_Request__init(pyturtle_interfaces__srv__MainBG_Request * msg);

/// Finalize srv/MainBG message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Request__fini(pyturtle_interfaces__srv__MainBG_Request * msg);

/// Create srv/MainBG message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pyturtle_interfaces__srv__MainBG_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
pyturtle_interfaces__srv__MainBG_Request *
pyturtle_interfaces__srv__MainBG_Request__create();

/// Destroy srv/MainBG message.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Request__destroy(pyturtle_interfaces__srv__MainBG_Request * msg);


/// Initialize array of srv/MainBG messages.
/**
 * It allocates the memory for the number of elements and calls
 * pyturtle_interfaces__srv__MainBG_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
bool
pyturtle_interfaces__srv__MainBG_Request__Sequence__init(pyturtle_interfaces__srv__MainBG_Request__Sequence * array, size_t size);

/// Finalize array of srv/MainBG messages.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Request__Sequence__fini(pyturtle_interfaces__srv__MainBG_Request__Sequence * array);

/// Create array of srv/MainBG messages.
/**
 * It allocates the memory for the array and calls
 * pyturtle_interfaces__srv__MainBG_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
pyturtle_interfaces__srv__MainBG_Request__Sequence *
pyturtle_interfaces__srv__MainBG_Request__Sequence__create(size_t size);

/// Destroy array of srv/MainBG messages.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Request__Sequence__destroy(pyturtle_interfaces__srv__MainBG_Request__Sequence * array);

/// Initialize srv/MainBG message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pyturtle_interfaces__srv__MainBG_Response
 * )) before or use
 * pyturtle_interfaces__srv__MainBG_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
bool
pyturtle_interfaces__srv__MainBG_Response__init(pyturtle_interfaces__srv__MainBG_Response * msg);

/// Finalize srv/MainBG message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Response__fini(pyturtle_interfaces__srv__MainBG_Response * msg);

/// Create srv/MainBG message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pyturtle_interfaces__srv__MainBG_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
pyturtle_interfaces__srv__MainBG_Response *
pyturtle_interfaces__srv__MainBG_Response__create();

/// Destroy srv/MainBG message.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Response__destroy(pyturtle_interfaces__srv__MainBG_Response * msg);


/// Initialize array of srv/MainBG messages.
/**
 * It allocates the memory for the number of elements and calls
 * pyturtle_interfaces__srv__MainBG_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
bool
pyturtle_interfaces__srv__MainBG_Response__Sequence__init(pyturtle_interfaces__srv__MainBG_Response__Sequence * array, size_t size);

/// Finalize array of srv/MainBG messages.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Response__Sequence__fini(pyturtle_interfaces__srv__MainBG_Response__Sequence * array);

/// Create array of srv/MainBG messages.
/**
 * It allocates the memory for the array and calls
 * pyturtle_interfaces__srv__MainBG_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
pyturtle_interfaces__srv__MainBG_Response__Sequence *
pyturtle_interfaces__srv__MainBG_Response__Sequence__create(size_t size);

/// Destroy array of srv/MainBG messages.
/**
 * It calls
 * pyturtle_interfaces__srv__MainBG_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pyturtle_interfaces
void
pyturtle_interfaces__srv__MainBG_Response__Sequence__destroy(pyturtle_interfaces__srv__MainBG_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__FUNCTIONS_H_
