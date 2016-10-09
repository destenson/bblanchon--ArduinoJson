// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include "String.hpp"

namespace ArduinoJson {

// Represents a key in a JsonObject
/*template <typename TString>
class JsonObjectKey;

template <>
class JsonObjectKey<const char*> {
 public:
  JsonObjectKey(const char* key) : _value(key) {}

  const char* c_str() const {
    return _value;
  }
  bool needs_copy() const {
    return false;
  }

 private:
  const char* _value;
};

template <>
class JsonObjectKey<String> {
 public:
  JsonObjectKey(const String& key) : _value(key) {}

  const char* c_str() const {
    return _value.c_str();
  }
  bool needs_copy() const {
    return true;
  }

 private:
  const String& _value;
};

template <typename TString>
JsonObjectKey<TString> makeKey(const TString& value) {
  return JsonObjectKey<TString>(value);
}*/

namespace JsonObjectKey {

inline bool equals(const char* key1, const char* key2) {
  return !strcmp(key1, key2);
}

inline bool equals(const char* key1, const String& key2) {
  return !strcmp(key1, key2.c_str());
}
}
}
