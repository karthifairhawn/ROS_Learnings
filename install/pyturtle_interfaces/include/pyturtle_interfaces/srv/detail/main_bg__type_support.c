// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pyturtle_interfaces/srv/detail/main_bg__rosidl_typesupport_introspection_c.h"
#include "pyturtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pyturtle_interfaces/srv/detail/main_bg__functions.h"
#include "pyturtle_interfaces/srv/detail/main_bg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyturtle_interfaces__srv__MainBG_Request__init(message_memory);
}

void MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_fini_function(void * message_memory)
{
  pyturtle_interfaces__srv__MainBG_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyturtle_interfaces__srv__MainBG_Request, a),  // bytes offset in struct
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
    offsetof(pyturtle_interfaces__srv__MainBG_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyturtle_interfaces__srv__MainBG_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_members = {
  "pyturtle_interfaces__srv",  // message namespace
  "MainBG_Request",  // message name
  3,  // number of fields
  sizeof(pyturtle_interfaces__srv__MainBG_Request),
  MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_member_array,  // message members
  MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_type_support_handle = {
  0,
  &MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyturtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Request)() {
  if (!MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_type_support_handle.typesupport_identifier) {
    MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MainBG_Request__rosidl_typesupport_introspection_c__MainBG_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pyturtle_interfaces/srv/detail/main_bg__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pyturtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pyturtle_interfaces/srv/detail/main_bg__functions.h"
// already included above
// #include "pyturtle_interfaces/srv/detail/main_bg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyturtle_interfaces__srv__MainBG_Response__init(message_memory);
}

void MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_fini_function(void * message_memory)
{
  pyturtle_interfaces__srv__MainBG_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyturtle_interfaces__srv__MainBG_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_members = {
  "pyturtle_interfaces__srv",  // message namespace
  "MainBG_Response",  // message name
  1,  // number of fields
  sizeof(pyturtle_interfaces__srv__MainBG_Response),
  MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_member_array,  // message members
  MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_type_support_handle = {
  0,
  &MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyturtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Response)() {
  if (!MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_type_support_handle.typesupport_identifier) {
    MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MainBG_Response__rosidl_typesupport_introspection_c__MainBG_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pyturtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pyturtle_interfaces/srv/detail/main_bg__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_members = {
  "pyturtle_interfaces__srv",  // service namespace
  "MainBG",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_Request_message_type_support_handle,
  NULL  // response message
  // pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_Response_message_type_support_handle
};

static rosidl_service_type_support_t pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_type_support_handle = {
  0,
  &pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyturtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG)() {
  if (!pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_type_support_handle.typesupport_identifier) {
    pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyturtle_interfaces, srv, MainBG_Response)()->data;
  }

  return &pyturtle_interfaces__srv__detail__main_bg__rosidl_typesupport_introspection_c__MainBG_service_type_support_handle;
}
