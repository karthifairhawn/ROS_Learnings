// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__STRUCT_H_
#define PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MainBG in the package pyturtle_interfaces.
typedef struct pyturtle_interfaces__srv__MainBG_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} pyturtle_interfaces__srv__MainBG_Request;

// Struct for a sequence of pyturtle_interfaces__srv__MainBG_Request.
typedef struct pyturtle_interfaces__srv__MainBG_Request__Sequence
{
  pyturtle_interfaces__srv__MainBG_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyturtle_interfaces__srv__MainBG_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MainBG in the package pyturtle_interfaces.
typedef struct pyturtle_interfaces__srv__MainBG_Response
{
  int64_t sum;
} pyturtle_interfaces__srv__MainBG_Response;

// Struct for a sequence of pyturtle_interfaces__srv__MainBG_Response.
typedef struct pyturtle_interfaces__srv__MainBG_Response__Sequence
{
  pyturtle_interfaces__srv__MainBG_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyturtle_interfaces__srv__MainBG_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__STRUCT_H_
