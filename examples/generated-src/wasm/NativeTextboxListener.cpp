// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeTextboxListener.hpp"  // my header
#include "NativeItemList.hpp"

namespace djinni_generated {

em::val NativeTextboxListener::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "update",
    });
    return methods;
}

void NativeTextboxListener::update(const CppType& self, const em::val& w_items) {
    return self->update(::djinni_generated::NativeItemList::toCpp(w_items));
}

void NativeTextboxListener::JsProxy::update(const ::textsort::ItemList & items) {
    return _jsRef().call<void>("update", ::djinni_generated::NativeItemList::fromCpp(items));
}

EMSCRIPTEN_BINDINGS(textbox_listener) {
    em::class_<::textsort::TextboxListener>("TextboxListener")
        .smart_ptr<std::shared_ptr<::textsort::TextboxListener>>("TextboxListener")
        .function("nativeDestroy", &NativeTextboxListener::nativeDestroy)
        .function("update", NativeTextboxListener::update)
        ;
}

}  // namespace djinni_generated
