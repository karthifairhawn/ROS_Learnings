// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:msg/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_HPP_
#define TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__msg__MainBG __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__msg__MainBG __declspec(deprecated)
#endif

namespace turtlesim
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MainBG_
{
  using Type = MainBG_<ContainerAllocator>;

  explicit MainBG_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0ll;
      this->g = 0ll;
      this->b = 0ll;
    }
  }

  explicit MainBG_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0ll;
      this->g = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _r_type =
    int64_t;
  _r_type r;
  using _g_type =
    int64_t;
  _g_type g;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__r(
    const int64_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const int64_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::msg::MainBG_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::msg::MainBG_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::msg::MainBG_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::msg::MainBG_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::msg::MainBG_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::msg::MainBG_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::msg::MainBG_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::msg::MainBG_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::msg::MainBG_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::msg::MainBG_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__msg__MainBG
    std::shared_ptr<turtlesim::msg::MainBG_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__msg__MainBG
    std::shared_ptr<turtlesim::msg::MainBG_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MainBG_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const MainBG_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MainBG_

// alias to use template instance with default allocator
using MainBG =
  turtlesim::msg::MainBG_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim

#endif  // TURTLESIM__MSG__DETAIL__MAIN_BG__STRUCT_HPP_
