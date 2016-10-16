// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "IsSame.hpp"
#include "IsSignedIntegral.hpp"
#include "IsUnsignedIntegral.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true if T is C string: char* or char[].
template <typename T>
struct IsCharPointer {
  static const bool value = false;
};

template <>
struct IsCharPointer<char*> {
  static const bool value = true;
};

template <>
struct IsCharPointer<const char*> {
  static const bool value = true;
};

template <>
struct IsCharPointer<char[]> {
  static const bool value = true;
};

template <int N>
struct IsCharPointer<char[N]> {
  static const bool value = true;
};

template <typename T>
struct IsCharPointer<const T> : IsCharPointer<T> {};
}
}
