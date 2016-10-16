// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "IsPassByValue.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true if types T should be passed by reference.
template <typename T>
struct IsPassByReference {
  static const bool value = !IsPassByValue<T>::value;
};

template <typename T>
struct IsPassByReference<const T> : IsPassByReference<T> {};
}
}
