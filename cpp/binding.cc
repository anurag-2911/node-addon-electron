#include <napi.h>

using namespace Napi;

Object InitTest(Env env);

Object Init(Env env, Object exports) {
  exports.Set("xzappnodeaddon", InitTest(env));
  return exports;
}

NODE_API_MODULE(addon, Init)
