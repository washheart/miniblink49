// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "bindings/core/v8/V8HTMLCanvasElement.h"
#include "bindings/core/v8/V8HTMLImageElement.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8ImageBitmap.h"
#include "bindings/core/v8/V8DOMStringList.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "bindings/modules/v8/V8CanvasGradient.h"
#include "bindings/modules/v8/V8CanvasPattern.h"
#include "third_party/WebKit/Source/modules/fetch/Request.h"

namespace blink {

StringOrCanvasGradientOrCanvasPattern::StringOrCanvasGradientOrCanvasPattern()
    : m_type(SpecificTypeNone)
{
}

String StringOrCanvasGradientOrCanvasPattern::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void StringOrCanvasGradientOrCanvasPattern::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::fromString(String value)
{
    StringOrCanvasGradientOrCanvasPattern container;
    container.setString(value);
    return container;
}

CanvasGradient* StringOrCanvasGradientOrCanvasPattern::getAsCanvasGradient() const
{
    ASSERT(isCanvasGradient());
    return m_canvasGradient;
}

void StringOrCanvasGradientOrCanvasPattern::setCanvasGradient(CanvasGradient* value)
{
    ASSERT(isNull());
    m_canvasGradient = value;
    m_type = SpecificTypeCanvasGradient;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::fromCanvasGradient(CanvasGradient* value)
{
    StringOrCanvasGradientOrCanvasPattern container;
    container.setCanvasGradient(value);
    return container;
}

CanvasPattern* StringOrCanvasGradientOrCanvasPattern::getAsCanvasPattern() const
{
    ASSERT(isCanvasPattern());
    return m_canvasPattern;
}

void StringOrCanvasGradientOrCanvasPattern::setCanvasPattern(CanvasPattern* value)
{
    ASSERT(isNull());
    m_canvasPattern = value;
    m_type = SpecificTypeCanvasPattern;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::fromCanvasPattern(CanvasPattern* value)
{
    StringOrCanvasGradientOrCanvasPattern container;
    container.setCanvasPattern(value);
    return container;
}

StringOrCanvasGradientOrCanvasPattern::StringOrCanvasGradientOrCanvasPattern(const StringOrCanvasGradientOrCanvasPattern&) = default;
StringOrCanvasGradientOrCanvasPattern::~StringOrCanvasGradientOrCanvasPattern() = default;
StringOrCanvasGradientOrCanvasPattern& StringOrCanvasGradientOrCanvasPattern::operator=(const StringOrCanvasGradientOrCanvasPattern&) = default;

DEFINE_TRACE(StringOrCanvasGradientOrCanvasPattern)
{
    visitor->trace(m_canvasGradient);
    visitor->trace(m_canvasPattern);
}


void V8StringOrCanvasGradientOrCanvasPattern::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrCanvasGradientOrCanvasPattern& impl, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (V8CanvasGradient::hasInstance(v8Value, isolate)) {
        RawPtr<CanvasGradient> cppValue = V8CanvasGradient::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setCanvasGradient(cppValue);
        return;
    }

    if (V8CanvasPattern::hasInstance(v8Value, isolate)) {
        RawPtr<CanvasPattern> cppValue = V8CanvasPattern::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setCanvasPattern(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }

}

v8::Local<v8::Value> toV8(const StringOrCanvasGradientOrCanvasPattern& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrCanvasGradientOrCanvasPattern::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrCanvasGradientOrCanvasPattern::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrCanvasGradientOrCanvasPattern::SpecificTypeCanvasGradient:
        return toV8(impl.getAsCanvasGradient(), creationContext, isolate);
    case StringOrCanvasGradientOrCanvasPattern::SpecificTypeCanvasPattern:
        return toV8(impl.getAsCanvasPattern(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrCanvasGradientOrCanvasPattern NativeValueTraits<StringOrCanvasGradientOrCanvasPattern>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrCanvasGradientOrCanvasPattern impl;
    V8StringOrCanvasGradientOrCanvasPattern::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap()
    : m_type(SpecificTypeNone)
{
}

PassRefPtrWillBeRawPtr<HTMLImageElement> HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLImageElement() const
{
    ASSERT(isHTMLImageElement());
    return m_htmlImageElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLImageElement(PassRefPtrWillBeRawPtr<HTMLImageElement> value)
{
    ASSERT(isNull());
    m_htmlImageElement = value;
    m_type = SpecificTypeHTMLImageElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLImageElement(PassRefPtrWillBeRawPtr<HTMLImageElement> value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLImageElement(value);
    return container;
}

PassRefPtrWillBeRawPtr<HTMLVideoElement> HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLVideoElement() const
{
    ASSERT(isHTMLVideoElement());
    return m_htmlVideoElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLVideoElement(PassRefPtrWillBeRawPtr<HTMLVideoElement> value)
{
    ASSERT(isNull());
    m_htmlVideoElement = value;
    m_type = SpecificTypeHTMLVideoElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLVideoElement(PassRefPtrWillBeRawPtr<HTMLVideoElement> value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLVideoElement(value);
    return container;
}

PassRefPtrWillBeRawPtr<HTMLCanvasElement> HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsHTMLCanvasElement() const
{
    ASSERT(isHTMLCanvasElement());
    return m_htmlCanvasElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setHTMLCanvasElement(PassRefPtrWillBeRawPtr<HTMLCanvasElement> value)
{
    ASSERT(isNull());
    m_htmlCanvasElement = value;
    m_type = SpecificTypeHTMLCanvasElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromHTMLCanvasElement(PassRefPtrWillBeRawPtr<HTMLCanvasElement> value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setHTMLCanvasElement(value);
    return container;
}

PassRefPtrWillBeRawPtr<ImageBitmap> HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::getAsImageBitmap() const
{
    ASSERT(isImageBitmap());
    return m_imageBitmap;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::setImageBitmap(PassRefPtrWillBeRawPtr<ImageBitmap> value)
{
    ASSERT(isNull());
    m_imageBitmap = value;
    m_type = SpecificTypeImageBitmap;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::fromImageBitmap(PassRefPtrWillBeRawPtr<ImageBitmap> value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap container;
    container.setImageBitmap(value);
    return container;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&) = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::~HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap() = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::operator=(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap&) = default;

DEFINE_TRACE(HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap)
{
    visitor->trace(m_htmlImageElement);
    visitor->trace(m_htmlVideoElement);
    visitor->trace(m_htmlCanvasElement);
    visitor->trace(m_imageBitmap);
}

void V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& impl, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (V8HTMLImageElement::hasInstance(v8Value, isolate)) {
        RefPtrWillBeRawPtr<HTMLImageElement> cppValue = V8HTMLImageElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLImageElement(cppValue);
        return;
    }

    if (V8HTMLVideoElement::hasInstance(v8Value, isolate)) {
        RefPtrWillBeRawPtr<HTMLVideoElement> cppValue = V8HTMLVideoElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLVideoElement(cppValue);
        return;
    }

    if (V8HTMLCanvasElement::hasInstance(v8Value, isolate)) {
        RefPtrWillBeRawPtr<HTMLCanvasElement> cppValue = V8HTMLCanvasElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLCanvasElement(cppValue);
        return;
    }

    if (V8ImageBitmap::hasInstance(v8Value, isolate)) {
        RefPtrWillBeRawPtr<ImageBitmap> cppValue = V8ImageBitmap::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setImageBitmap(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(HTMLImageElement or HTMLVideoElement or HTMLCanvasElement or ImageBitmap)'");
}

v8::Local<v8::Value> toV8(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeNone:
        return v8::Null(isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLImageElement:
        return toV8(impl.getAsHTMLImageElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLVideoElement:
        return toV8(impl.getAsHTMLVideoElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeHTMLCanvasElement:
        return toV8(impl.getAsHTMLCanvasElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::SpecificTypeImageBitmap:
        return toV8(impl.getAsImageBitmap(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap NativeValueTraits<HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap impl;
    V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

// RequestOrUSVString::RequestOrUSVString()
//     : m_type(SpecificTypeNone)
// {
// }
// 
// Request* RequestOrUSVString::getAsRequest() const
// {
//     ASSERT(isRequest());
//     return m_request;
// }
// 
// void RequestOrUSVString::setRequest(Request* value)
// {
//     ASSERT(isNull());
//     m_request = value;
//     m_type = SpecificTypeRequest;
// }
// 
// RequestOrUSVString RequestOrUSVString::fromRequest(Request* value)
// {
//     RequestOrUSVString container;
//     container.setRequest(value);
//     return container;
// }
// 
// String RequestOrUSVString::getAsUSVString() const
// {
//     ASSERT(isUSVString());
//     return m_uSVString;
// }
// 
// void RequestOrUSVString::setUSVString(String value)
// {
//     ASSERT(isNull());
//     m_uSVString = value;
//     m_type = SpecificTypeUSVString;
// }
// 
// RequestOrUSVString RequestOrUSVString::fromUSVString(String value)
// {
//     RequestOrUSVString container;
//     container.setUSVString(value);
//     return container;
// }
// 
// RequestOrUSVString::RequestOrUSVString(const RequestOrUSVString&) = default;
// RequestOrUSVString::~RequestOrUSVString() = default;
// RequestOrUSVString& RequestOrUSVString::operator=(const RequestOrUSVString&) = default;
// 
// DEFINE_TRACE(RequestOrUSVString)
// {
//     visitor->trace(m_request);
// }

StringOrStringSequence::StringOrStringSequence()
    : m_type(SpecificTypeNone)
{
}

String StringOrStringSequence::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void StringOrStringSequence::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrStringSequence StringOrStringSequence::fromString(String value)
{
    StringOrStringSequence container;
    container.setString(value);
    return container;
}

const Vector<String>& StringOrStringSequence::getAsStringSequence() const
{
    ASSERT(isStringSequence());
    return m_stringSequence;
}

void StringOrStringSequence::setStringSequence(const Vector<String>& value)
{
    ASSERT(isNull());
    m_stringSequence = value;
    m_type = SpecificTypeStringSequence;
}

StringOrStringSequence StringOrStringSequence::fromStringSequence(const Vector<String>& value)
{
    StringOrStringSequence container;
    container.setStringSequence(value);
    return container;
}

StringOrStringSequence::StringOrStringSequence(const StringOrStringSequence&) = default;
StringOrStringSequence::~StringOrStringSequence() = default;
StringOrStringSequence& StringOrStringSequence::operator=(const StringOrStringSequence&) = default;

DEFINE_TRACE(StringOrStringSequence)
{
}

void V8StringOrStringSequence::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrStringSequence& impl, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (v8Value->IsArray()) {
        Vector<String> cppValue = toImplArray<Vector<String>>(v8Value, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setStringSequence(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }

}

v8::Local<v8::Value> toV8(const StringOrStringSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrStringSequence::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrStringSequence::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrStringSequence::SpecificTypeStringSequence:
        return toV8(impl.getAsStringSequence(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrStringSequence NativeValueTraits<StringOrStringSequence>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrStringSequence impl;
    V8StringOrStringSequence::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

StringOrStringSequenceOrDOMStringList::StringOrStringSequenceOrDOMStringList()
    : m_type(SpecificTypeNone)
{
}

String StringOrStringSequenceOrDOMStringList::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void StringOrStringSequenceOrDOMStringList::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrStringSequenceOrDOMStringList StringOrStringSequenceOrDOMStringList::fromString(String value)
{
    StringOrStringSequenceOrDOMStringList container;
    container.setString(value);
    return container;
}

const Vector<String>& StringOrStringSequenceOrDOMStringList::getAsStringSequence() const
{
    ASSERT(isStringSequence());
    return m_stringSequence;
}

void StringOrStringSequenceOrDOMStringList::setStringSequence(const Vector<String>& value)
{
    ASSERT(isNull());
    m_stringSequence = value;
    m_type = SpecificTypeStringSequence;
}

StringOrStringSequenceOrDOMStringList StringOrStringSequenceOrDOMStringList::fromStringSequence(const Vector<String>& value)
{
    StringOrStringSequenceOrDOMStringList container;
    container.setStringSequence(value);
    return container;
}

PassRefPtrWillBeRawPtr<DOMStringList> StringOrStringSequenceOrDOMStringList::getAsDOMStringList() const
{
    ASSERT(isDOMStringList());
    return m_dOMStringList;
}

void StringOrStringSequenceOrDOMStringList::setDOMStringList(PassRefPtrWillBeRawPtr<DOMStringList> value)
{
    ASSERT(isNull());
    m_dOMStringList = value;
    m_type = SpecificTypeDOMStringList;
}

StringOrStringSequenceOrDOMStringList StringOrStringSequenceOrDOMStringList::fromDOMStringList(PassRefPtrWillBeRawPtr<DOMStringList> value)
{
    StringOrStringSequenceOrDOMStringList container;
    container.setDOMStringList(value);
    return container;
}

StringOrStringSequenceOrDOMStringList::StringOrStringSequenceOrDOMStringList(const StringOrStringSequenceOrDOMStringList&) = default;
StringOrStringSequenceOrDOMStringList::~StringOrStringSequenceOrDOMStringList() = default;
StringOrStringSequenceOrDOMStringList& StringOrStringSequenceOrDOMStringList::operator=(const StringOrStringSequenceOrDOMStringList&) = default;

DEFINE_TRACE(StringOrStringSequenceOrDOMStringList)
{
    visitor->trace(m_dOMStringList);
}

void V8StringOrStringSequenceOrDOMStringList::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrStringSequenceOrDOMStringList& impl, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (V8DOMStringList::hasInstance(v8Value, isolate)) {
        RefPtrWillBeRawPtr<DOMStringList> cppValue = V8DOMStringList::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setDOMStringList(cppValue);
        return;
    }

    if (v8Value->IsArray()) {
        Vector<String> cppValue = toImplArray<Vector<String>>(v8Value, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setStringSequence(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }

}

v8::Local<v8::Value> toV8(const StringOrStringSequenceOrDOMStringList& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrStringSequenceOrDOMStringList::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrStringSequenceOrDOMStringList::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrStringSequenceOrDOMStringList::SpecificTypeStringSequence:
        return toV8(impl.getAsStringSequence(), creationContext, isolate);
    case StringOrStringSequenceOrDOMStringList::SpecificTypeDOMStringList:
        return toV8(impl.getAsDOMStringList(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrStringSequenceOrDOMStringList NativeValueTraits<StringOrStringSequenceOrDOMStringList>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrStringSequenceOrDOMStringList impl;
    V8StringOrStringSequenceOrDOMStringList::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink