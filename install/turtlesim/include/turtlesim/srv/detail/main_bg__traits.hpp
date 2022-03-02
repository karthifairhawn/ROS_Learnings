// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__MAIN_BG__TRAITS_HPP_
#define TURTLESIM__SRV__DETAIL__MAIN_BG__TRAITS_HPP_

#include "turtlesim/srv/detail/main_bg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::MainBG_Request>()
{
  return "turtlesim::srv::MainBG_Request";
}

template<>
inline const char * name<turtlesim::srv::MainBG_Request>()
{
  return "turtlesim/srv/MainBG_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::MainBG_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::MainBG_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::MainBG_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::MainBG_Response>()
{
  return "turtlesim::srv::MainBG_Response";
}

template<>
inline const char * name<turtlesim::srv::MainBG_Response>()
{
  return "turtlesim/srv/MainBG_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::MainBG_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::MainBG_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::MainBG_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::MainBG>()
{
  return "turtlesim::srv::MainBG";
}

template<>
inline const char * name<turtlesim::srv::MainBG>()
{
  return "turtlesim/srv/MainBG";
}

template<>
struct has_fixed_size<turtlesim::srv::MainBG>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::MainBG_Request>::value &&
    has_fixed_size<turtlesim::srv::MainBG_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::MainBG>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::MainBG_Request>::value &&
    has_bounded_size<turtlesim::srv::MainBG_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::srv::MainBG>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::srv::MainBG_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::srv::MainBG_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__DETAIL__MAIN_BG__TRAITS_HPP_
