// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#include "NativeExtendedRecord.hpp"  // my header

namespace djinni_generated {

auto NativeExtendedRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::Bool::Boxed::toCpp(j["mFoo"])};
}
auto NativeExtendedRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("mFoo", ::djinni::Bool::Boxed::fromCpp(c.foo));
    return js;
}

}  // namespace djinni_generated