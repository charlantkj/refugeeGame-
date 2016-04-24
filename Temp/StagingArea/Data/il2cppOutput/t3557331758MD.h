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

struct t3557331758;
struct t3557331758_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m539393484 (t3557331758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3557331758;
struct t3557331758_marshaled_pinvoke;

extern "C" void t3557331758_marshal_pinvoke(const t3557331758& unmarshaled, t3557331758_marshaled_pinvoke& marshaled);
extern "C" void t3557331758_marshal_pinvoke_back(const t3557331758_marshaled_pinvoke& marshaled, t3557331758& unmarshaled);
extern "C" void t3557331758_marshal_pinvoke_cleanup(t3557331758_marshaled_pinvoke& marshaled);

struct t3557331758;
struct t3557331758_marshaled_com;

extern "C" void t3557331758_marshal_com(const t3557331758& unmarshaled, t3557331758_marshaled_com& marshaled);
extern "C" void t3557331758_marshal_com_back(const t3557331758_marshaled_com& marshaled, t3557331758& unmarshaled);
extern "C" void t3557331758_marshal_com_cleanup(t3557331758_marshaled_com& marshaled);
