// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__MAIN_BG__STRUCT_H_
#define TURTLESIM__SRV__DETAIL__MAIN_BG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MainBG in the package turtlesim.
typedef struct turtlesim__srv__MainBG_Request
{
  int64_t r;
  int64_t g;
  int64_t b;
} turtlesim__srv__MainBG_Request;

// Struct for a sequence of turtlesim__srv__MainBG_Request.
typedef struct turtlesim__srv__MainBG_Request__Sequence
{
  turtlesim__srv__MainBG_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__MainBG_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MainBG in the package turtlesim.
typedef struct turtlesim__srv__MainBG_Response
{
  int64_t sum;
} turtlesim__srv__MainBG_Response;

// Struct for a sequence of turtlesim__srv__MainBG_Response.
typedef struct turtlesim__srv__MainBG_Response__Sequence
{
  turtlesim__srv__MainBG_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__MainBG_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__SRV__DETAIL__MAIN_BG__STRUCT_H_
