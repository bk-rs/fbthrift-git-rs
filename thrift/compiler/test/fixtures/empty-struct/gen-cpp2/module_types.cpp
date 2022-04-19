/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Empty>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Empty>;
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


Empty::Empty(apache::thrift::FragileConstructor) {}


void Empty::__fbthrift_clear() {
  // clear all fields
}

bool Empty::__fbthrift_is_empty() const {
  return true;
}

bool Empty::operator==(const Empty& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return true;
}

bool Empty::operator<(const Empty& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return false;
}


void swap(Empty& a, Empty& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void Empty::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Empty::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Nada>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Nada>;
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

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Nada::Type>::size;
folly::Range<::cpp2::Nada::Type const*> const TEnumTraits<::cpp2::Nada::Type>::values = folly::range(TEnumDataStorage<::cpp2::Nada::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Nada::Type>::names = folly::range(TEnumDataStorage<::cpp2::Nada::Type>::names);

char const* TEnumTraits<::cpp2::Nada::Type>::findName(type value) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value);
}

bool TEnumTraits<::cpp2::Nada::Type>::findValue(char const* name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

void Nada::__fbthrift_clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool Nada::__fbthrift_is_empty() const {
  return type_ == Type::__EMPTY__;
}

bool Nada::operator==(const Nada& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    default:
      return true;
  }
}

bool Nada::operator<(const Nada& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    default:
      return false;
  }
}

void swap(Nada& a, Nada& b) {
  Nada temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void Nada::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Nada::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Nada::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Nada::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Nada::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Nada::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Nada::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Nada::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
