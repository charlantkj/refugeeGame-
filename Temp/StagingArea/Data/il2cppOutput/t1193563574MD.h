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
#include "t1193563574.h"
#include "Il2CppObject.h"

extern "C"  bool m2626069127 (t1193563574 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m1538911 (t1193563574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1193563574;
struct t1193563574_marshaled_pinvoke;

extern "C" void t1193563574_marshal_pinvoke(const t1193563574& unmarshaled, t1193563574_marshaled_pinvoke& marshaled);
extern "C" void t1193563574_marshal_pinvoke_back(const t1193563574_marshaled_pinvoke& marshaled, t1193563574& unmarshaled);
extern "C" void t1193563574_marshal_pinvoke_cleanup(t1193563574_marshaled_pinvoke& marshaled);

struct t1193563574;
struct t1193563574_marshaled_com;

extern "C" void t1193563574_marshal_com(const t1193563574& unmarshaled, t1193563574_marshaled_com& marshaled);
extern "C" void t1193563574_marshal_com_back(const t1193563574_marshaled_com& marshaled, t1193563574& unmarshaled);
extern "C" void t1193563574_marshal_com_cleanup(t1193563574_marshaled_com& marshaled);
