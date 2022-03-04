// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice
#include "pyturtle_interfaces/srv/detail/main_bg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
pyturtle_interfaces__srv__MainBG_Request__init(pyturtle_interfaces__srv__MainBG_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
pyturtle_interfaces__srv__MainBG_Request__fini(pyturtle_interfaces__srv__MainBG_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

pyturtle_interfaces__srv__MainBG_Request *
pyturtle_interfaces__srv__MainBG_Request__create()
{
  pyturtle_interfaces__srv__MainBG_Request * msg = (pyturtle_interfaces__srv__MainBG_Request *)malloc(sizeof(pyturtle_interfaces__srv__MainBG_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyturtle_interfaces__srv__MainBG_Request));
  bool success = pyturtle_interfaces__srv__MainBG_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pyturtle_interfaces__srv__MainBG_Request__destroy(pyturtle_interfaces__srv__MainBG_Request * msg)
{
  if (msg) {
    pyturtle_interfaces__srv__MainBG_Request__fini(msg);
  }
  free(msg);
}


bool
pyturtle_interfaces__srv__MainBG_Request__Sequence__init(pyturtle_interfaces__srv__MainBG_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pyturtle_interfaces__srv__MainBG_Request * data = NULL;
  if (size) {
    data = (pyturtle_interfaces__srv__MainBG_Request *)calloc(size, sizeof(pyturtle_interfaces__srv__MainBG_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyturtle_interfaces__srv__MainBG_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyturtle_interfaces__srv__MainBG_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pyturtle_interfaces__srv__MainBG_Request__Sequence__fini(pyturtle_interfaces__srv__MainBG_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pyturtle_interfaces__srv__MainBG_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pyturtle_interfaces__srv__MainBG_Request__Sequence *
pyturtle_interfaces__srv__MainBG_Request__Sequence__create(size_t size)
{
  pyturtle_interfaces__srv__MainBG_Request__Sequence * array = (pyturtle_interfaces__srv__MainBG_Request__Sequence *)malloc(sizeof(pyturtle_interfaces__srv__MainBG_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pyturtle_interfaces__srv__MainBG_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pyturtle_interfaces__srv__MainBG_Request__Sequence__destroy(pyturtle_interfaces__srv__MainBG_Request__Sequence * array)
{
  if (array) {
    pyturtle_interfaces__srv__MainBG_Request__Sequence__fini(array);
  }
  free(array);
}


bool
pyturtle_interfaces__srv__MainBG_Response__init(pyturtle_interfaces__srv__MainBG_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
pyturtle_interfaces__srv__MainBG_Response__fini(pyturtle_interfaces__srv__MainBG_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

pyturtle_interfaces__srv__MainBG_Response *
pyturtle_interfaces__srv__MainBG_Response__create()
{
  pyturtle_interfaces__srv__MainBG_Response * msg = (pyturtle_interfaces__srv__MainBG_Response *)malloc(sizeof(pyturtle_interfaces__srv__MainBG_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyturtle_interfaces__srv__MainBG_Response));
  bool success = pyturtle_interfaces__srv__MainBG_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pyturtle_interfaces__srv__MainBG_Response__destroy(pyturtle_interfaces__srv__MainBG_Response * msg)
{
  if (msg) {
    pyturtle_interfaces__srv__MainBG_Response__fini(msg);
  }
  free(msg);
}


bool
pyturtle_interfaces__srv__MainBG_Response__Sequence__init(pyturtle_interfaces__srv__MainBG_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pyturtle_interfaces__srv__MainBG_Response * data = NULL;
  if (size) {
    data = (pyturtle_interfaces__srv__MainBG_Response *)calloc(size, sizeof(pyturtle_interfaces__srv__MainBG_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyturtle_interfaces__srv__MainBG_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyturtle_interfaces__srv__MainBG_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pyturtle_interfaces__srv__MainBG_Response__Sequence__fini(pyturtle_interfaces__srv__MainBG_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pyturtle_interfaces__srv__MainBG_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pyturtle_interfaces__srv__MainBG_Response__Sequence *
pyturtle_interfaces__srv__MainBG_Response__Sequence__create(size_t size)
{
  pyturtle_interfaces__srv__MainBG_Response__Sequence * array = (pyturtle_interfaces__srv__MainBG_Response__Sequence *)malloc(sizeof(pyturtle_interfaces__srv__MainBG_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pyturtle_interfaces__srv__MainBG_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pyturtle_interfaces__srv__MainBG_Response__Sequence__destroy(pyturtle_interfaces__srv__MainBG_Response__Sequence * array)
{
  if (array) {
    pyturtle_interfaces__srv__MainBG_Response__Sequence__fini(array);
  }
  free(array);
}
