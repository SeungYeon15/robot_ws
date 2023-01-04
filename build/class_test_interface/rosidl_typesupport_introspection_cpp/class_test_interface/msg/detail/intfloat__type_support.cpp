// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from class_test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "class_test_interface/msg/detail/intfloat__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace class_test_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Intfloat_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) class_test_interface::msg::Intfloat(_init);
}

void Intfloat_fini_function(void * message_memory)
{
  auto typed_message = static_cast<class_test_interface::msg::Intfloat *>(message_memory);
  typed_message->~Intfloat();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Intfloat_message_member_array[2] = {
  {
    "intnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(class_test_interface::msg::Intfloat, intnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "floatnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(class_test_interface::msg::Intfloat, floatnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Intfloat_message_members = {
  "class_test_interface::msg",  // message namespace
  "Intfloat",  // message name
  2,  // number of fields
  sizeof(class_test_interface::msg::Intfloat),
  Intfloat_message_member_array,  // message members
  Intfloat_init_function,  // function to initialize message memory (memory has to be allocated)
  Intfloat_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Intfloat_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Intfloat_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace class_test_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<class_test_interface::msg::Intfloat>()
{
  return &::class_test_interface::msg::rosidl_typesupport_introspection_cpp::Intfloat_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, class_test_interface, msg, Intfloat)() {
  return &::class_test_interface::msg::rosidl_typesupport_introspection_cpp::Intfloat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
