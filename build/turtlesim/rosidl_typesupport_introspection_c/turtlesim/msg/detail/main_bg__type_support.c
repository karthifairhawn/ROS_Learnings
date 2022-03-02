// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim:msg/MainBG.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim/msg/detail/main_bg__rosidl_typesupport_introspection_c.h"
#include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim/msg/detail/main_bg__functions.h"
#include "turtlesim/msg/detail/main_bg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MainBG__rosidl_typesupport_introspection_c__MainBG_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__msg__MainBG__init(message_memory);
}

void MainBG__rosidl_typesupport_introspection_c__MainBG_fini_function(void * message_memory)
{
  turtlesim__msg__MainBG__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MainBG__rosidl_typesupport_introspection_c__MainBG_message_member_array[3] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__MainBG, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__MainBG, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__MainBG, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MainBG__rosidl_typesupport_introspection_c__MainBG_message_members = {
  "turtlesim__msg",  // message namespace
  "MainBG",  // message name
  3,  // number of fields
  sizeof(turtlesim__msg__MainBG),
  MainBG__rosidl_typesupport_introspection_c__MainBG_message_member_array,  // message members
  MainBG__rosidl_typesupport_introspection_c__MainBG_init_function,  // function to initialize message memory (memory has to be allocated)
  MainBG__rosidl_typesupport_introspection_c__MainBG_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MainBG__rosidl_typesupport_introspection_c__MainBG_message_type_support_handle = {
  0,
  &MainBG__rosidl_typesupport_introspection_c__MainBG_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, msg, MainBG)() {
  if (!MainBG__rosidl_typesupport_introspection_c__MainBG_message_type_support_handle.typesupport_identifier) {
    MainBG__rosidl_typesupport_introspection_c__MainBG_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MainBG__rosidl_typesupport_introspection_c__MainBG_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
