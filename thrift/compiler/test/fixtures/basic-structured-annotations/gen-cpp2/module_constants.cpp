/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


namespace test { namespace fixtures { namespace basic-structured-annotations {

::std::map<::std::string, ::std::string> const& module_constants::MyConst() {
  static folly::Indestructible<::std::map<::std::string, ::std::string>> const instance(std::initializer_list<std::pair<const ::std::string, ::std::string>>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("ENUMERATOR"), apache::thrift::StringTraits<std::string>::fromStringLiteral("enum")},
  {apache::thrift::StringTraits<std::string>::fromStringLiteral("CONST"), apache::thrift::StringTraits<std::string>::fromStringLiteral("const")}});
  return *instance;
}

}}} // test::fixtures::basic-structured-annotations