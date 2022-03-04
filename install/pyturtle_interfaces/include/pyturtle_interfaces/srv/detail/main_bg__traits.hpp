// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyturtle_interfaces:srv/MainBG.idl
// generated code does not contain a copyright notice

#ifndef PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__TRAITS_HPP_
#define PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__TRAITS_HPP_

#include "pyturtle_interfaces/srv/detail/main_bg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pyturtle_interfaces::srv::MainBG_Request>()
{
  return "pyturtle_interfaces::srv::MainBG_Request";
}

template<>
inline const char * name<pyturtle_interfaces::srv::MainBG_Request>()
{
  return "pyturtle_interfaces/srv/MainBG_Request";
}

template<>
struct has_fixed_size<pyturtle_interfaces::srv::MainBG_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pyturtle_interfaces::srv::MainBG_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pyturtle_interfaces::srv::MainBG_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pyturtle_interfaces::srv::MainBG_Response>()
{
  return "pyturtle_interfaces::srv::MainBG_Response";
}

template<>
inline const char * name<pyturtle_interfaces::srv::MainBG_Response>()
{
  return "pyturtle_interfaces/srv/MainBG_Response";
}

template<>
struct has_fixed_size<pyturtle_interfaces::srv::MainBG_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pyturtle_interfaces::srv::MainBG_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pyturtle_interfaces::srv::MainBG_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pyturtle_interfaces::srv::MainBG>()
{
  return "pyturtle_interfaces::srv::MainBG";
}

template<>
inline const char * name<pyturtle_interfaces::srv::MainBG>()
{
  return "pyturtle_interfaces/srv/MainBG";
}

template<>
struct has_fixed_size<pyturtle_interfaces::srv::MainBG>
  : std::integral_constant<
    bool,
    has_fixed_size<pyturtle_interfaces::srv::MainBG_Request>::value &&
    has_fixed_size<pyturtle_interfaces::srv::MainBG_Response>::value
  >
{
};

template<>
struct has_bounded_size<pyturtle_interfaces::srv::MainBG>
  : std::integral_constant<
    bool,
    has_bounded_size<pyturtle_interfaces::srv::MainBG_Request>::value &&
    has_bounded_size<pyturtle_interfaces::srv::MainBG_Response>::value
  >
{
};

template<>
struct is_service<pyturtle_interfaces::srv::MainBG>
  : std::true_type
{
};

template<>
struct is_service_request<pyturtle_interfaces::srv::MainBG_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pyturtle_interfaces::srv::MainBG_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYTURTLE_INTERFACES__SRV__DETAIL__MAIN_BG__TRAITS_HPP_
