// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__MAIN_BG__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__MAIN_BG__BUILDER_HPP_

#include "turtlesim/srv/detail/main_bg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_MainBG_Request_b
{
public:
  explicit Init_MainBG_Request_b(::turtlesim::srv::MainBG_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::MainBG_Request b(::turtlesim::srv::MainBG_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::MainBG_Request msg_;
};

class Init_MainBG_Request_g
{
public:
  explicit Init_MainBG_Request_g(::turtlesim::srv::MainBG_Request & msg)
  : msg_(msg)
  {}
  Init_MainBG_Request_b g(::turtlesim::srv::MainBG_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_MainBG_Request_b(msg_);
  }

private:
  ::turtlesim::srv::MainBG_Request msg_;
};

class Init_MainBG_Request_r
{
public:
  Init_MainBG_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MainBG_Request_g r(::turtlesim::srv::MainBG_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_MainBG_Request_g(msg_);
  }

private:
  ::turtlesim::srv::MainBG_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::MainBG_Request>()
{
  return turtlesim::srv::builder::Init_MainBG_Request_r();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_MainBG_Response_sum
{
public:
  Init_MainBG_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::srv::MainBG_Response sum(::turtlesim::srv::MainBG_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::MainBG_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::MainBG_Response>()
{
  return turtlesim::srv::builder::Init_MainBG_Response_sum();
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__MAIN_BG__BUILDER_HPP_
