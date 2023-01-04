// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from class_test_interface:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_HPP_
#define CLASS_TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__class_test_interface__srv__MinusThreeInts_Request __attribute__((deprecated))
#else
# define DEPRECATED__class_test_interface__srv__MinusThreeInts_Request __declspec(deprecated)
#endif

namespace class_test_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MinusThreeInts_Request_
{
  using Type = MinusThreeInts_Request_<ContainerAllocator>;

  explicit MinusThreeInts_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  explicit MinusThreeInts_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__class_test_interface__srv__MinusThreeInts_Request
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__class_test_interface__srv__MinusThreeInts_Request
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MinusThreeInts_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const MinusThreeInts_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MinusThreeInts_Request_

// alias to use template instance with default allocator
using MinusThreeInts_Request =
  class_test_interface::srv::MinusThreeInts_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace class_test_interface


#ifndef _WIN32
# define DEPRECATED__class_test_interface__srv__MinusThreeInts_Response __attribute__((deprecated))
#else
# define DEPRECATED__class_test_interface__srv__MinusThreeInts_Response __declspec(deprecated)
#endif

namespace class_test_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MinusThreeInts_Response_
{
  using Type = MinusThreeInts_Response_<ContainerAllocator>;

  explicit MinusThreeInts_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit MinusThreeInts_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__class_test_interface__srv__MinusThreeInts_Response
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__class_test_interface__srv__MinusThreeInts_Response
    std::shared_ptr<class_test_interface::srv::MinusThreeInts_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MinusThreeInts_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const MinusThreeInts_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MinusThreeInts_Response_

// alias to use template instance with default allocator
using MinusThreeInts_Response =
  class_test_interface::srv::MinusThreeInts_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace class_test_interface

namespace class_test_interface
{

namespace srv
{

struct MinusThreeInts
{
  using Request = class_test_interface::srv::MinusThreeInts_Request;
  using Response = class_test_interface::srv::MinusThreeInts_Response;
};

}  // namespace srv

}  // namespace class_test_interface

#endif  // CLASS_TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_HPP_
