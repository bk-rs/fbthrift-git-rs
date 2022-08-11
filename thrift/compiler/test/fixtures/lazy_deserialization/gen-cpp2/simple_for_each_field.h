/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::apache::thrift::test::Foo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field1_ref()...);
    f(1, static_cast<T&&>(t).field2_ref()...);
    f(2, static_cast<T&&>(t).field3_ref()...);
    f(3, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::LazyFoo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field1_ref()...);
    f(1, static_cast<T&&>(t).field2_ref()...);
    f(2, static_cast<T&&>(t).field3_ref()...);
    f(3, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::OptionalFoo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field1_ref()...);
    f(1, static_cast<T&&>(t).field2_ref()...);
    f(2, static_cast<T&&>(t).field3_ref()...);
    f(3, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::OptionalLazyFoo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field1_ref()...);
    f(1, static_cast<T&&>(t).field2_ref()...);
    f(2, static_cast<T&&>(t).field3_ref()...);
    f(3, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::LazyCppRef> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field1_ref()...);
    f(1, static_cast<T&&>(t).field2_ref()...);
    f(2, static_cast<T&&>(t).field3_ref()...);
    f(3, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::IndexedFoo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).serialized_data_size_ref()...);
    f(1, static_cast<T&&>(t).field1_ref()...);
    f(2, static_cast<T&&>(t).field2_ref()...);
    f(3, static_cast<T&&>(t).field3_ref()...);
    f(4, static_cast<T&&>(t).field4_ref()...);
    f(5, static_cast<T&&>(t).field_id_to_size_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::OptionalIndexedFoo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).serialized_data_size_ref()...);
    f(1, static_cast<T&&>(t).field1_ref()...);
    f(2, static_cast<T&&>(t).field2_ref()...);
    f(3, static_cast<T&&>(t).field3_ref()...);
    f(4, static_cast<T&&>(t).field4_ref()...);
    f(5, static_cast<T&&>(t).field_id_to_size_ref()...);
  }
};

template <>
struct ForEachField<::apache::thrift::test::Empty> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache