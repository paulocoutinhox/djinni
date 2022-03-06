// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception.djinni

#include "NativeThrowingInterface.hpp"  // my header

namespace djinni_generated {


void NativeThrowingInterface::JsProxy::throw_exception() {
    auto ret = callMethod("throwException");
    checkError(ret);
}

EMSCRIPTEN_BINDINGS(testsuite_throwing_interface) {
    ::djinni::DjinniClass_<::testsuite::ThrowingInterface>("testsuite_ThrowingInterface", "testsuite.ThrowingInterface")
        .smart_ptr<std::shared_ptr<::testsuite::ThrowingInterface>>("testsuite_ThrowingInterface")
        .function("nativeDestroy", &NativeThrowingInterface::nativeDestroy)
        ;
}

}  // namespace djinni_generated
