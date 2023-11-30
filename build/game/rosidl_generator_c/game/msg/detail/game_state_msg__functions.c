// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from game:msg/GameStateMsg.idl
// generated code does not contain a copyright notice
#include "game/msg/detail/game_state_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `game_message`
#include "rosidl_runtime_c/string_functions.h"

bool
game__msg__GameStateMsg__init(game__msg__GameStateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // player_position
  // dice_result
  // game_message
  if (!rosidl_runtime_c__String__init(&msg->game_message)) {
    game__msg__GameStateMsg__fini(msg);
    return false;
  }
  return true;
}

void
game__msg__GameStateMsg__fini(game__msg__GameStateMsg * msg)
{
  if (!msg) {
    return;
  }
  // player_position
  // dice_result
  // game_message
  rosidl_runtime_c__String__fini(&msg->game_message);
}

bool
game__msg__GameStateMsg__are_equal(const game__msg__GameStateMsg * lhs, const game__msg__GameStateMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // player_position
  if (lhs->player_position != rhs->player_position) {
    return false;
  }
  // dice_result
  if (lhs->dice_result != rhs->dice_result) {
    return false;
  }
  // game_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->game_message), &(rhs->game_message)))
  {
    return false;
  }
  return true;
}

bool
game__msg__GameStateMsg__copy(
  const game__msg__GameStateMsg * input,
  game__msg__GameStateMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // player_position
  output->player_position = input->player_position;
  // dice_result
  output->dice_result = input->dice_result;
  // game_message
  if (!rosidl_runtime_c__String__copy(
      &(input->game_message), &(output->game_message)))
  {
    return false;
  }
  return true;
}

game__msg__GameStateMsg *
game__msg__GameStateMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  game__msg__GameStateMsg * msg = (game__msg__GameStateMsg *)allocator.allocate(sizeof(game__msg__GameStateMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(game__msg__GameStateMsg));
  bool success = game__msg__GameStateMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
game__msg__GameStateMsg__destroy(game__msg__GameStateMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    game__msg__GameStateMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
game__msg__GameStateMsg__Sequence__init(game__msg__GameStateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  game__msg__GameStateMsg * data = NULL;

  if (size) {
    data = (game__msg__GameStateMsg *)allocator.zero_allocate(size, sizeof(game__msg__GameStateMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = game__msg__GameStateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        game__msg__GameStateMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
game__msg__GameStateMsg__Sequence__fini(game__msg__GameStateMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      game__msg__GameStateMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

game__msg__GameStateMsg__Sequence *
game__msg__GameStateMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  game__msg__GameStateMsg__Sequence * array = (game__msg__GameStateMsg__Sequence *)allocator.allocate(sizeof(game__msg__GameStateMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = game__msg__GameStateMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
game__msg__GameStateMsg__Sequence__destroy(game__msg__GameStateMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    game__msg__GameStateMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
game__msg__GameStateMsg__Sequence__are_equal(const game__msg__GameStateMsg__Sequence * lhs, const game__msg__GameStateMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!game__msg__GameStateMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
game__msg__GameStateMsg__Sequence__copy(
  const game__msg__GameStateMsg__Sequence * input,
  game__msg__GameStateMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(game__msg__GameStateMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    game__msg__GameStateMsg * data =
      (game__msg__GameStateMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!game__msg__GameStateMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          game__msg__GameStateMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!game__msg__GameStateMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
