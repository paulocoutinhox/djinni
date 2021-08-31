// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeSortItems.hpp"  // my header
#include "NativeItemList.hpp"
#include "NativeSortOrder.hpp"
#include "NativeTextboxListener.hpp"

namespace djinni_generated {

em::val NativeSortItems::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "sort",
        "createWithListener",
        "runSort",
    });
    return methods;
}

void NativeSortItems::sort(const CppType& self, int32_t w_order,const em::val& w_items) {
    return self->sort(::djinni_generated::NativeSortOrder::toCpp(w_order),
                      ::djinni_generated::NativeItemList::toCpp(w_items));
}
em::val NativeSortItems::create_with_listener(const em::val& w_listener) {
    return ::djinni_generated::NativeSortItems::fromCpp(::textsort::SortItems::create_with_listener(::djinni_generated::NativeTextboxListener::toCpp(w_listener)));
}
em::val NativeSortItems::run_sort(const em::val& w_items) {
    return ::djinni_generated::NativeItemList::fromCpp(::textsort::SortItems::run_sort(::djinni_generated::NativeItemList::toCpp(w_items)));
}

void NativeSortItems::JsProxy::sort(::textsort::sort_order order,const ::textsort::ItemList & items) {
    return _jsRef().call<void>("sort", ::djinni_generated::NativeSortOrder::fromCpp(order),
                                       ::djinni_generated::NativeItemList::fromCpp(items));
}

EMSCRIPTEN_BINDINGS(sort_items) {
    em::class_<::textsort::SortItems>("SortItems")
        .smart_ptr<std::shared_ptr<::textsort::SortItems>>("SortItems")
        .function("nativeDestroy", &NativeSortItems::nativeDestroy)
        .function("sort", NativeSortItems::sort)
        .class_function("createWithListener", NativeSortItems::create_with_listener)
        .class_function("runSort", NativeSortItems::run_sort)
        ;
}

}  // namespace djinni_generated
