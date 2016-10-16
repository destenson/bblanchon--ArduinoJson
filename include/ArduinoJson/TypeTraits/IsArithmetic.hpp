// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "IsFloatingPoint.hpp"
#include "IsIntegral.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true if T is an integral type.
template <typename T>
struct IsArithmetic {
  static const bool value =
      TypeTraits::IsIntegral<T>::value || TypeTraits::IsFloatingPoint<T>::value;
};
}
}
