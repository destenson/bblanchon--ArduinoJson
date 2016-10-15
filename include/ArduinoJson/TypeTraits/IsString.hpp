// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "../String.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true when T is a string type (like Arduino
// String or std::string)
template <typename T>
struct IsString {
  static const bool value = false;
};

template <>
struct IsString<String> {
  static const bool value = true;
};
}
}
