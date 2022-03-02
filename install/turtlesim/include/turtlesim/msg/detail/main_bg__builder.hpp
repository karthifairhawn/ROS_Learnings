// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:msg/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__MAIN_BG__BUILDER_HPP_
#define TURTLESIM__MSG__DETAIL__MAIN_BG__BUILDER_HPP_

#include "turtlesim/msg/detail/main_bg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace msg
{

namespace builder
{

class Init_MainBG_b
{
public:
  explicit Init_MainBG_b(::turtlesim::msg::MainBG & msg)
  : msg_(msg)
  {}
  ::turtlesim::msg::MainBG b(::turtlesim::msg::MainBG::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::msg::MainBG msg_;
};

class Init_MainBG_g
{
public:
  explicit Init_MainBG_g(::turtlesim::msg::MainBG & msg)
  : msg_(msg)
  {}
  Init_MainBG_b g(::turtlesim::msg::MainBG::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_MainBG_b(msg_);
  }

private:
  ::turtlesim::msg::MainBG msg_;
};

class Init_MainBG_r
{
public:
  Init_MainBG_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MainBG_g r(::turtlesim::msg::MainBG::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_MainBG_g(msg_);
  }

private:
  ::turtlesim::msg::MainBG msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::msg::MainBG>()
{
  return turtlesim::msg::builder::Init_MainBG_r();
}

}  // namespace turtlesim

#endif  // TURTLESIM__MSG__DETAIL__MAIN_BG__BUILDER_HPP_
