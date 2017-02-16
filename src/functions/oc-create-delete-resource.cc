/*
 * Copyright 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <map>

#include "../common.h"
#include "../structures.h"
#include "../structures/handles.h"

extern "C" {
#include <ocstack.h>
}

static OCEntityHandlerResult defaultEntityHandler(
    OCEntityHandlerFlag flag, OCEntityHandlerRequest *request, void *data) {
  NapiHandleScope scope;

  OCEntityHandlerResult failReturn = OC_EH_ERROR;

  JSOCResourceHandle *cData = (JSOCResourceHandle *)data;
  napi_value jsContext, jsCallback, jsReturnValue;
  NAPI_CALL(napi_get_null(scope.env, &jsContext), THROW_BODY(scope.env, failReturn));
  NAPI_CALL(napi_get_reference_value(scope.env, cData->callback, &jsCallback),
            THROW_BODY(scope.env, failReturn));

  napi_value arguments[2];
  NAPI_CALL(napi_create_number(scope.env, (double)flag, &arguments[0]),
            THROW_BODY(scope.env, failReturn));
  NAPI_CALL(napi_get_null(scope.env, &arguments[1]), THROW_BODY(scope.env, failReturn));
  NAPI_CALL(napi_call_function(scope.env, jsContext, jsCallback, 2, arguments,
                               &jsReturnValue),
            THROW_BODY(scope.env, failReturn));

  J2C_GET_VALUE_JS(OCEntityHandlerResult, cResult, scope.env, jsReturnValue,
                   napi_number, "entity handler return value", uint32, uint32_t,
                   THROW_BODY(scope.env, failReturn));

  return cResult;
}

NAPI_METHOD(bind_OCCreateResource) {
  J2C_GET_ARGUMENTS(env, info, 6);

  J2C_VALIDATE_VALUE_TYPE_THROW(env, arguments[0], napi_object, "handle");
  J2C_GET_STRING_ARGUMENT_THROW(type, env, arguments[1], false, "type");
  J2C_GET_STRING_ARGUMENT_THROW(iface, env, arguments[2], false, "interface");
  J2C_GET_STRING_ARGUMENT_THROW(uri, env, arguments[3], false, "uri");
  J2C_VALIDATE_VALUE_TYPE_THROW(env, arguments[4], napi_function, "callback");
  J2C_GET_VALUE_JS_THROW(OCResourceProperty, properties, env, arguments[5],
                         napi_number, "properties", uint32, uint32_t);

  JSOCResourceHandle *cData;
  napi_value jsHandle;
  HELPER_CALL_THROW(env, JSOCResourceHandle::New(env, &jsHandle, &cData));

  OCStackResult result =
      OCCreateResource(&(cData->data), type, iface, uri, defaultEntityHandler,
                       cData, properties);

  if (result == OC_STACK_OK) {
    HELPER_CALL_THROW(env, cData->Init(env, arguments[4], jsHandle));
    C2J_SET_PROPERTY_JS_THROW(env, arguments[0], "handle", jsHandle);
  }
  C2J_SET_RETURN_VALUE(env, info, number, ((double)result));
}

NAPI_METHOD(bind_OCDeleteResource) {
  J2C_GET_ARGUMENTS(env, info, 1);
  J2C_VALIDATE_VALUE_TYPE_THROW(env, arguments[0], napi_object, "handle");

  JSOCResourceHandle *cData;
  HELPER_CALL_THROW(env, JSOCResourceHandle::Get(env, arguments[0], &cData));

  OCStackResult result = OCDeleteResource(cData->data);
  if (result == OC_STACK_OK) {
    JSOCResourceHandle::Destroy(env, cData);
  }

  C2J_SET_RETURN_VALUE(env, info, number, ((double)result));
}

// This is not really a binding since it only replaces the JS entity handler
NAPI_METHOD(bind_OCBindResourceHandler) {
  J2C_GET_ARGUMENTS(env, info, 2);
  J2C_VALIDATE_VALUE_TYPE_THROW(env, arguments[0], napi_object, "handle");
  J2C_VALIDATE_VALUE_TYPE_THROW(env, arguments[1], napi_function,
                                "entity handler");

  JSOCResourceHandle *cData;
  HELPER_CALL_THROW(env, JSOCResourceHandle::Get(env, arguments[0], &cData));
  NAPI_CALL_THROW(env, napi_reference_release(env, cData->callback, nullptr));
  NAPI_CALL_THROW(
      env, napi_create_reference(env, arguments[1], 1, &(cData->callback)));

  C2J_SET_RETURN_VALUE(env, info, number, ((double)OC_STACK_OK));
}
/*
NAN_METHOD(bind_OCBindResourceHandler) {
  VALIDATE_ARGUMENT_COUNT(info, 2);
  VALIDATE_ARGUMENT_TYPE(info, 0, IsObject);
  VALIDATE_ARGUMENT_TYPE(info, 1, IsFunction);

  CallbackInfo<OCResourceHandle> *callbackInfo;
  JSCALLBACKHANDLE_RESOLVE(JSOCResourceHandle, callbackInfo,
                           Nan::To<Object>(info[0]).ToLocalChecked());
  callbackInfo->callback.Reset(Local<Function>::Cast(info[1]));

  info.GetReturnValue().Set(Nan::New(OC_STACK_OK));
}

#define BIND_UNBIND_RESOURCE(api)                                        \
  do {                                                                   \
    VALIDATE_ARGUMENT_COUNT(info, 2);                                    \
    VALIDATE_ARGUMENT_TYPE(info, 0, IsObject);                           \
    VALIDATE_ARGUMENT_TYPE(info, 1, IsObject);                           \
    CallbackInfo<OCResourceHandle> *parentInfo;                          \
    JSCALLBACKHANDLE_RESOLVE(JSOCResourceHandle, parentInfo,             \
                             Nan::To<Object>(info[0]).ToLocalChecked()); \
    CallbackInfo<OCResourceHandle> *childInfo;                           \
    JSCALLBACKHANDLE_RESOLVE(JSOCResourceHandle, childInfo,              \
                             Nan::To<Object>(info[1]).ToLocalChecked()); \
    info.GetReturnValue().Set(                                           \
        Nan::New(api(parentInfo->handle, childInfo->handle)));           \
  } while (0)

NAN_METHOD(bind_OCBindResource) { BIND_UNBIND_RESOURCE(OCBindResource); }

NAN_METHOD(bind_OCUnBindResource) { BIND_UNBIND_RESOURCE(OCUnBindResource); }

#define BIND_STRING_TO_RESOURCE(api)                                        \
  do {                                                                      \
    VALIDATE_ARGUMENT_COUNT(info, 2);                                       \
    VALIDATE_ARGUMENT_TYPE(info, 0, IsObject);                              \
    VALIDATE_ARGUMENT_TYPE(info, 1, IsString);                              \
    CallbackInfo<OCResourceHandle> *callbackInfo;                           \
    JSCALLBACKHANDLE_RESOLVE(JSOCResourceHandle, callbackInfo,              \
                             Nan::To<Object>(info[0]).ToLocalChecked());    \
    info.GetReturnValue().Set(Nan::New(api(                                 \
        callbackInfo->handle, (const char *)*String::Utf8Value(info[1])))); \
  } while (0)

NAN_METHOD(bind_OCBindResourceInterfaceToResource) {
  BIND_STRING_TO_RESOURCE(OCBindResourceInterfaceToResource);
}

NAN_METHOD(bind_OCBindResourceTypeToResource) {
  BIND_STRING_TO_RESOURCE(OCBindResourceTypeToResource);
}

// This is not actually a binding. We get the resource handler from the
// JS handle.
NAN_METHOD(bind_OCGetResourceHandler) {
  VALIDATE_ARGUMENT_COUNT(info, 1);
  VALIDATE_ARGUMENT_TYPE(info, 0, IsObject);

  CallbackInfo<OCResourceHandle> *callbackInfo;
  JSCALLBACKHANDLE_RESOLVE(JSOCResourceHandle, callbackInfo,
                           Nan::To<Object>(info[0]).ToLocalChecked());

  info.GetReturnValue().Set(*(callbackInfo->callback));
}
*/
