#include <napi.h>

namespace {

Napi::String HelloWorld(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, " hello world");
}

Napi::String SimpleMessage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, "hello there!");
}

}  

Napi::Object InitTest(Napi::Env env) {
  Napi::Object exports = Napi::Object::New(env);
  exports.Set(Napi::String::New(env, "simpleMessage"), Napi::Function::New(env, SimpleMessage));
  exports.Set(Napi::String::New(env, "helloWorld"), Napi::Function::New(env, HelloWorld));
  return exports;
}
