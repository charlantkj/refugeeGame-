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
#include "t130027246.h"
#include "Il2CppObject.h"

extern "C"  void m2600671860 (t130027246 * __this, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  Il2CppObject * m3516209325 (t130027246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  Il2CppObject * m4281303039 (t130027246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t130027246;
struct t130027246_marshaled_com;

extern "C" void t130027246_marshal_com(const t130027246& unmarshaled, t130027246_marshaled_com& marshaled);
extern "C" void t130027246_marshal_com_back(const t130027246_marshaled_com& marshaled, t130027246& unmarshaled);
extern "C" void t130027246_marshal_com_cleanup(t130027246_marshaled_com& marshaled);
