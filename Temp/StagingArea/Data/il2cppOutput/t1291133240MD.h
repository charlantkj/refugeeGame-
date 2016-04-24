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

struct t1291133240;
struct t1291133240_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m3184996201 (t1291133240 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1291133240;
struct t1291133240_marshaled_pinvoke;

extern "C" void t1291133240_marshal_pinvoke(const t1291133240& unmarshaled, t1291133240_marshaled_pinvoke& marshaled);
extern "C" void t1291133240_marshal_pinvoke_back(const t1291133240_marshaled_pinvoke& marshaled, t1291133240& unmarshaled);
extern "C" void t1291133240_marshal_pinvoke_cleanup(t1291133240_marshaled_pinvoke& marshaled);

struct t1291133240;
struct t1291133240_marshaled_com;

extern "C" void t1291133240_marshal_com(const t1291133240& unmarshaled, t1291133240_marshaled_com& marshaled);
extern "C" void t1291133240_marshal_com_back(const t1291133240_marshaled_com& marshaled, t1291133240& unmarshaled);
extern "C" void t1291133240_marshal_com_cleanup(t1291133240_marshaled_com& marshaled);
