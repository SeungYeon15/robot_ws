// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from class_test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACE__MSG__DETAIL__INTFLOAT__TRAITS_HPP_
#define CLASS_TEST_INTERFACE__MSG__DETAIL__INTFLOAT__TRAITS_HPP_

#include "class_test_interface/msg/detail/intfloat__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interface::msg::Intfloat>()
{
  return "class_test_interface::msg::Intfloat";
}

template<>
inline const char * name<class_test_interface::msg::Intfloat>()
{
  return "class_test_interface/msg/Intfloat";
}

template<>
struct has_fixed_size<class_test_interface::msg::Intfloat>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interface::msg::Intfloat>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interface::msg::Intfloat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLASS_TEST_INTERFACE__MSG__DETAIL__INTFLOAT__TRAITS_HPP_
