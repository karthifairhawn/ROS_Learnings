// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__BUILDER_HPP_
#define PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__BUILDER_HPP_

#include "pyturtle_interfaces/srv/detail/main_bg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pyturtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_MainBG_Request_c
{
public:
  explicit Init_MainBG_Request_c(::pyturtle_interfaces::srv::MainBG_Request & msg)
  : msg_(msg)
  {}
  ::pyturtle_interfaces::srv::MainBG_Request c(::pyturtle_interfaces::srv::MainBG_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyturtle_interfaces::srv::MainBG_Request msg_;
};

class Init_MainBG_Request_b
{
public:
  explicit Init_MainBG_Request_b(::pyturtle_interfaces::srv::MainBG_Request & msg)
  : msg_(msg)
  {}
  Init_MainBG_Request_c b(::pyturtle_interfaces::srv::MainBG_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_MainBG_Request_c(msg_);
  }

private:
  ::pyturtle_interfaces::srv::MainBG_Request msg_;
};

class Init_MainBG_Request_a
{
public:
  Init_MainBG_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MainBG_Request_b a(::pyturtle_interfaces::srv::MainBG_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MainBG_Request_b(msg_);
  }

private:
  ::pyturtle_interfaces::srv::MainBG_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyturtle_interfaces::srv::MainBG_Request>()
{
  return pyturtle_interfaces::srv::builder::Init_MainBG_Request_a();
}

}  // namespace pyturtle_interfaces


namespace pyturtle_interfaces
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
  ::pyturtle_interfaces::srv::MainBG_Response sum(::pyturtle_interfaces::srv::MainBG_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyturtle_interfaces::srv::MainBG_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyturtle_interfaces::srv::MainBG_Response>()
{
  return pyturtle_interfaces::srv::builder::Init_MainBG_Response_sum();
}

}  // namespace pyturtle_interfaces

#endif  // PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__BUILDER_HPP_
