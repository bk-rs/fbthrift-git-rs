/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "src/gen-cpp2/module_structs_data.h"
#include "src/gen-cpp2/module_structs_types.h"
#include "src/gen-cpp2/module_structs_metadata.h"
namespace thrift {
namespace py3 {



template<>
void reset_field<::cpp2::Foo>(
    ::cpp2::Foo& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.value_ref().copy_from(default_inst<::cpp2::Foo>().value_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Foo>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift