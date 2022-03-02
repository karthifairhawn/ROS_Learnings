// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:msg/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_H_
#define TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MainBG in the package turtlesim.
typedef struct turtlesim__msg__MainBG
{
  int64_t r;
  int64_t g;
  int64_t b;
} turtlesim__msg__MainBG;

// Struct for a sequence of turtlesim__msg__MainBG.
typedef struct turtlesim__msg__MainBG__Sequence
{
  turtlesim__msg__MainBG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__msg__MainBG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_H_
