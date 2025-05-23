// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mocap4r2_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "mocap4r2_msgs/msg/detail/marker__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mocap4r2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap4r2_msgs/msg/detail/marker__struct.h"
#include "mocap4r2_msgs/msg/detail/marker__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // translation
#include "rosidl_runtime_c/string.h"  // marker_name
#include "rosidl_runtime_c/string_functions.h"  // marker_name

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _Marker__ros_msg_type = mocap4r2_msgs__msg__Marker;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_serialize_mocap4r2_msgs__msg__Marker(
  const mocap4r2_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id_type
  {
    cdr << ros_message->id_type;
  }

  // Field name: marker_index
  {
    cdr << ros_message->marker_index;
  }

  // Field name: marker_name
  {
    const rosidl_runtime_c__String * str = &ros_message->marker_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: translation
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->translation, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_deserialize_mocap4r2_msgs__msg__Marker(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_msgs__msg__Marker * ros_message)
{
  // Field name: id_type
  {
    cdr >> ros_message->id_type;
  }

  // Field name: marker_index
  {
    cdr >> ros_message->marker_index;
  }

  // Field name: marker_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->marker_name.data) {
      rosidl_runtime_c__String__init(&ros_message->marker_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->marker_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'marker_name'\n");
      return false;
    }
  }

  // Field name: translation
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->translation);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t get_serialized_size_mocap4r2_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Marker__ros_msg_type * ros_message = static_cast<const _Marker__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id_type
  {
    size_t item_size = sizeof(ros_message->id_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_index
  {
    size_t item_size = sizeof(ros_message->marker_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_name.size + 1);

  // Field name: translation
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->translation), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t max_serialized_size_mocap4r2_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: id_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: marker_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: marker_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: translation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_msgs__msg__Marker;
    is_plain =
      (
      offsetof(DataType, translation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_serialize_key_mocap4r2_msgs__msg__Marker(
  const mocap4r2_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id_type
  {
    cdr << ros_message->id_type;
  }

  // Field name: marker_index
  {
    cdr << ros_message->marker_index;
  }

  // Field name: marker_name
  {
    const rosidl_runtime_c__String * str = &ros_message->marker_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: translation
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->translation, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t get_serialized_size_key_mocap4r2_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Marker__ros_msg_type * ros_message = static_cast<const _Marker__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id_type
  {
    size_t item_size = sizeof(ros_message->id_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_index
  {
    size_t item_size = sizeof(ros_message->marker_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_name.size + 1);

  // Field name: translation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->translation), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t max_serialized_size_key_mocap4r2_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: id_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: marker_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: marker_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: translation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_msgs__msg__Marker;
    is_plain =
      (
      offsetof(DataType, translation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Marker__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mocap4r2_msgs__msg__Marker * ros_message = static_cast<const mocap4r2_msgs__msg__Marker *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mocap4r2_msgs__msg__Marker(ros_message, cdr);
}

static bool _Marker__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mocap4r2_msgs__msg__Marker * ros_message = static_cast<mocap4r2_msgs__msg__Marker *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mocap4r2_msgs__msg__Marker(cdr, ros_message);
}

static uint32_t _Marker__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap4r2_msgs__msg__Marker(
      untyped_ros_message, 0));
}

static size_t _Marker__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mocap4r2_msgs__msg__Marker(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Marker = {
  "mocap4r2_msgs::msg",
  "Marker",
  _Marker__cdr_serialize,
  _Marker__cdr_deserialize,
  _Marker__get_serialized_size,
  _Marker__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Marker__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Marker,
  get_message_typesupport_handle_function,
  &mocap4r2_msgs__msg__Marker__get_type_hash,
  &mocap4r2_msgs__msg__Marker__get_type_description,
  &mocap4r2_msgs__msg__Marker__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_msgs, msg, Marker)() {
  return &_Marker__type_support;
}

#if defined(__cplusplus)
}
#endif
