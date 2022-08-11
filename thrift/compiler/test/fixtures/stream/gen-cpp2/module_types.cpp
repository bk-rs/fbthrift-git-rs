/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FooStreamEx>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FooStreamEx>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece FooStreamEx::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<FooStreamEx>::fields_names[folly::to_underlying(ord) - 1];
}

FooStreamEx::FooStreamEx(const FooStreamEx&) = default;
FooStreamEx& FooStreamEx::operator=(const FooStreamEx&) = default;
FooStreamEx::FooStreamEx() {
}


FooStreamEx::~FooStreamEx() {}

FooStreamEx::FooStreamEx(FOLLY_MAYBE_UNUSED FooStreamEx&& other) noexcept{}
FooStreamEx& FooStreamEx::operator=(FOLLY_MAYBE_UNUSED FooStreamEx&& other) noexcept {
    return *this;
}


FooStreamEx::FooStreamEx(apache::thrift::FragileConstructor) {}


void FooStreamEx::__fbthrift_clear() {
  // clear all fields
}

void FooStreamEx::__fbthrift_clear_terse_fields() {
}

bool FooStreamEx::__fbthrift_is_empty() const {
  return true;
}

bool FooStreamEx::operator==(FOLLY_MAYBE_UNUSED const FooStreamEx& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return true;
}

bool FooStreamEx::operator<(FOLLY_MAYBE_UNUSED const FooStreamEx& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return false;
}


void swap(FOLLY_MAYBE_UNUSED FooStreamEx& a, FOLLY_MAYBE_UNUSED FooStreamEx& b) {
  using ::std::swap;
}

template void FooStreamEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FooStreamEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FooStreamEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FooStreamEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FooStreamEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FooStreamEx::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FooStreamEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FooStreamEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FooEx>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FooEx>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece FooEx::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<FooEx>::fields_names[folly::to_underlying(ord) - 1];
}

FooEx::FooEx(const FooEx&) = default;
FooEx& FooEx::operator=(const FooEx&) = default;
FooEx::FooEx() {
}


FooEx::~FooEx() {}

FooEx::FooEx(FOLLY_MAYBE_UNUSED FooEx&& other) noexcept{}
FooEx& FooEx::operator=(FOLLY_MAYBE_UNUSED FooEx&& other) noexcept {
    return *this;
}


FooEx::FooEx(apache::thrift::FragileConstructor) {}


void FooEx::__fbthrift_clear() {
  // clear all fields
}

void FooEx::__fbthrift_clear_terse_fields() {
}

bool FooEx::__fbthrift_is_empty() const {
  return true;
}

bool FooEx::operator==(FOLLY_MAYBE_UNUSED const FooEx& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return true;
}

bool FooEx::operator<(FOLLY_MAYBE_UNUSED const FooEx& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  return false;
}


void swap(FOLLY_MAYBE_UNUSED FooEx& a, FOLLY_MAYBE_UNUSED FooEx& b) {
  using ::std::swap;
}

template void FooEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FooEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2