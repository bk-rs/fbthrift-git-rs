/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/cpp_metadata.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_metadata.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_metadata.h"


namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::some::ns::EnumB> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::some::ns::ModuleA> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::some::ns::ModuleB> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::some::ns::detail::DirectlyAdapted> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache