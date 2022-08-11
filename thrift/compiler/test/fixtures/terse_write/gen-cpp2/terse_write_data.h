/**
 * Autogenerated by Thrift for src/terse_write.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/terse_write_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::facebook::thrift::test::terse_write::MyEnum> {
  using type = ::facebook::thrift::test::terse_write::MyEnum;
  static constexpr const std::size_t size = 2;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::MyStruct> {
  static constexpr const std::size_t fields_size = 0;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::MyStructWithCustomDefault> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::StructLevelTerseStruct> {
  static constexpr const std::size_t fields_size = 14;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::FieldLevelTerseStruct> {
  static constexpr const std::size_t fields_size = 28;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault> {
  static constexpr const std::size_t fields_size = 14;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::AdaptedFields> {
  static constexpr const std::size_t fields_size = 3;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::facebook::thrift::test::terse_write::TerseException> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

}} // apache::thrift