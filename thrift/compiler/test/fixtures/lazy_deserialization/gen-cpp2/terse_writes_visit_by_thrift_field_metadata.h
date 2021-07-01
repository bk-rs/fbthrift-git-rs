/**
 * Autogenerated by Thrift for src/terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/terse_writes_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByThriftId<::apache::thrift::test::TerseFoo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(id, "::apache::thrift::test::TerseFoo");
    }
  }
};

template <>
struct VisitByThriftId<::apache::thrift::test::TerseLazyFoo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(id, "::apache::thrift::test::TerseLazyFoo");
    }
  }
};

template <>
struct VisitByThriftId<::apache::thrift::test::TerseOptionalFoo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(id, "::apache::thrift::test::TerseOptionalFoo");
    }
  }
};

template <>
struct VisitByThriftId<::apache::thrift::test::TerseOptionalLazyFoo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(id, "::apache::thrift::test::TerseOptionalLazyFoo");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
