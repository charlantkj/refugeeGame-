#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t2392331557.h"
#include "Il2CppObject.h"

extern "C"  void m3710649922 (t2392331557 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  void m2370742108 (Il2CppObject * __this , const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m1986642400 (t2392331557 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m1919356356 (t2392331557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m1317996739 (t2392331557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t2392331557;
struct t2392331557_marshaled_pinvoke;

extern "C" void t2392331557_marshal_pinvoke(const t2392331557& unmarshaled, t2392331557_marshaled_pinvoke& marshaled);
extern "C" void t2392331557_marshal_pinvoke_back(const t2392331557_marshaled_pinvoke& marshaled, t2392331557& unmarshaled);
extern "C" void t2392331557_marshal_pinvoke_cleanup(t2392331557_marshaled_pinvoke& marshaled);

struct t2392331557;
struct t2392331557_marshaled_com;

extern "C" void t2392331557_marshal_com(const t2392331557& unmarshaled, t2392331557_marshaled_com& marshaled);
extern "C" void t2392331557_marshal_com_back(const t2392331557_marshaled_com& marshaled, t2392331557& unmarshaled);
extern "C" void t2392331557_marshal_com_cleanup(t2392331557_marshaled_com& marshaled);
