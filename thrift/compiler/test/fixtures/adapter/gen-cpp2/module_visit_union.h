/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/visit_union.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitUnion<::facebook::thrift::test::Baz> {

  template <typename F, typename T>
  decltype(auto) operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::intField:
      return f(0, *static_cast<T&&>(t).intField_ref());
    case Union::Type::setField:
      return f(1, *static_cast<T&&>(t).setField_ref());
    case Union::Type::mapField:
      return f(2, *static_cast<T&&>(t).mapField_ref());
    case Union::Type::binaryField:
      return f(3, *static_cast<T&&>(t).binaryField_ref());
    case Union::Type::longField:
      return f(4, *static_cast<T&&>(t).longField_ref());
    case Union::Type::__EMPTY__:
      return decltype(f(0, *static_cast<T&&>(t).intField_ref()))();
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache