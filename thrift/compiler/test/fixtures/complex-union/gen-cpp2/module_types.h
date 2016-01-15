/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>
#include <boost/operators.hpp>




namespace cpp2 {

class ComplexUnion;

class ComplexUnion : private boost::totally_ordered<ComplexUnion> {
 public:
  enum Type {
    __EMPTY__ = 0,
    intValue = 1,
    stringValue = 2,
    intListValue = 3,
    stringListValue = 4,
  } ;

  ComplexUnion() :
      type_(Type::__EMPTY__) {}

  ComplexUnion(ComplexUnion&& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      case Type::intValue:
      {
        set_intValue(std::move(rhs.value_.intValue));
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(std::move(rhs.value_.stringValue));
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(std::move(rhs.value_.intListValue));
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(std::move(rhs.value_.stringListValue));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  ComplexUnion(const ComplexUnion& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      case Type::intValue:
      {
        set_intValue(rhs.value_.intValue);
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(rhs.value_.stringValue);
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(rhs.value_.intListValue);
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(rhs.value_.stringListValue);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  ComplexUnion& operator=(ComplexUnion&& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      case Type::intValue:
      {
        set_intValue(std::move(rhs.value_.intValue));
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(std::move(rhs.value_.stringValue));
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(std::move(rhs.value_.intListValue));
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(std::move(rhs.value_.stringListValue));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  ComplexUnion& operator=(const ComplexUnion& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      case Type::intValue:
      {
        set_intValue(rhs.value_.intValue);
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(rhs.value_.stringValue);
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(rhs.value_.intListValue);
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(rhs.value_.stringListValue);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  virtual ~ComplexUnion() throw() {
    __clear();
  }

  union storage_type {
    int64_t intValue;
    std::string stringValue;
    std::vector<int64_t> intListValue;
    std::vector<std::string> stringListValue;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const ComplexUnion& rhs) const;

  bool operator < (const ComplexUnion& rhs) const {
    if (type_ != rhs.type_) { return type_ < rhs.type_; }
    switch(type_) {
      case Type::intValue:
      {
        return value_.intValue < rhs.value_.intValue;
        break;
      }
      case Type::stringValue:
      {
        return value_.stringValue < rhs.value_.stringValue;
        break;
      }
      case Type::intListValue:
      {
        return value_.intListValue < rhs.value_.intListValue;
        break;
      }
      case Type::stringListValue:
      {
        return value_.stringListValue < rhs.value_.stringListValue;
        break;
      }
      default:
      {
        return false;
        break;
      }
    }
  }

  template<typename... T>
  int64_t &set_intValue(T&&... t) {
    __clear();
    type_ = Type::intValue;
    new (&value_.intValue) int64_t(std::forward<T>(t)...);
    return value_.intValue;
  }

  template<typename... T>
  std::string &set_stringValue(T&&... t) {
    __clear();
    type_ = Type::stringValue;
    new (&value_.stringValue) std::string(std::forward<T>(t)...);
    return value_.stringValue;
  }

  template<typename... T>
  std::vector<int64_t> &set_intListValue(T&&... t) {
    __clear();
    type_ = Type::intListValue;
    new (&value_.intListValue) std::vector<int64_t>(std::forward<T>(t)...);
    return value_.intListValue;
  }

  template<typename... T>
  std::vector<std::string> &set_stringListValue(T&&... t) {
    __clear();
    type_ = Type::stringListValue;
    new (&value_.stringListValue) std::vector<std::string>(std::forward<T>(t)...);
    return value_.stringListValue;
  }

  const int64_t& get_intValue() const {
    assert(type_ == Type::intValue);
    return value_.intValue;
  }

  const std::string& get_stringValue() const {
    assert(type_ == Type::stringValue);
    return value_.stringValue;
  }

  const std::vector<int64_t>& get_intListValue() const {
    assert(type_ == Type::intListValue);
    return value_.intListValue;
  }

  const std::vector<std::string>& get_stringListValue() const {
    assert(type_ == Type::stringListValue);
    return value_.stringListValue;
  }

  int64_t& mutable_intValue() {
    assert(type_ == Type::intValue);
    return value_.intValue;
  }

  std::string& mutable_stringValue() {
    assert(type_ == Type::stringValue);
    return value_.stringValue;
  }

  std::vector<int64_t>& mutable_intListValue() {
    assert(type_ == Type::intListValue);
    return value_.intListValue;
  }

  std::vector<std::string>& mutable_stringListValue() {
    assert(type_ == Type::stringListValue);
    return value_.stringListValue;
  }

  int64_t move_intValue() {
    assert(type_ == Type::intValue);
    return std::move(value_.intValue);
  }

  std::string move_stringValue() {
    assert(type_ == Type::stringValue);
    return std::move(value_.stringValue);
  }

  std::vector<int64_t> move_intListValue() {
    assert(type_ == Type::intListValue);
    return std::move(value_.intListValue);
  }

  std::vector<std::string> move_stringListValue() {
    assert(type_ == Type::stringListValue);
    return std::move(value_.stringListValue);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;
};

void swap(ComplexUnion& a, ComplexUnion& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::ComplexUnion>::clear( ::cpp2::ComplexUnion* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::ComplexUnion>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::write(Protocol* proto, const  ::cpp2::ComplexUnion* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::read(Protocol* proto,   ::cpp2::ComplexUnion* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::serializedSize(Protocol* proto, const  ::cpp2::ComplexUnion* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::serializedSizeZC(Protocol* proto, const  ::cpp2::ComplexUnion* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2