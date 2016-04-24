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

struct t920637194;
struct t920637194_marshaled_pinvoke;
struct t3878351788;
struct t3878351788_marshaled_pinvoke;
struct t3051965477;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m1736261360 (t920637194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  t3878351788 * m1874521436 (t920637194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  t3051965477* m2335877586 (t920637194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t920637194;
struct t920637194_marshaled_pinvoke;

extern "C" void t920637194_marshal_pinvoke(const t920637194& unmarshaled, t920637194_marshaled_pinvoke& marshaled);
extern "C" void t920637194_marshal_pinvoke_back(const t920637194_marshaled_pinvoke& marshaled, t920637194& unmarshaled);
extern "C" void t920637194_marshal_pinvoke_cleanup(t920637194_marshaled_pinvoke& marshaled);

struct t920637194;
struct t920637194_marshaled_com;

extern "C" void t920637194_marshal_com(const t920637194& unmarshaled, t920637194_marshaled_com& marshaled);
extern "C" void t920637194_marshal_com_back(const t920637194_marshaled_com& marshaled, t920637194& unmarshaled);
extern "C" void t920637194_marshal_com_cleanup(t920637194_marshaled_com& marshaled);
