// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "IsArithmetic.hpp"
#include "IsCharPointer.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true if types T should be passed by value.
template <typename T>
struct IsPassByValue {
  static const bool value =
      TypeTraits::IsArithmetic<T>::value || TypeTraits::IsCharPointer<T>::value;
};

template <typename T>
struct IsPassByValue<const T> : IsPassByValue<T> {};
}
}
