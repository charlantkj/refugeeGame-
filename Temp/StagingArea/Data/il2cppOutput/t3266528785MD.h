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

struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t3266528785.h"
#include "String_t.h"

extern "C"  void m535258662 (t3266528785 * __this, String_t* p0, String_t* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3266528785;
struct t3266528785_marshaled_pinvoke;

extern "C" void t3266528785_marshal_pinvoke(const t3266528785& unmarshaled, t3266528785_marshaled_pinvoke& marshaled);
extern "C" void t3266528785_marshal_pinvoke_back(const t3266528785_marshaled_pinvoke& marshaled, t3266528785& unmarshaled);
extern "C" void t3266528785_marshal_pinvoke_cleanup(t3266528785_marshaled_pinvoke& marshaled);

struct t3266528785;
struct t3266528785_marshaled_com;

extern "C" void t3266528785_marshal_com(const t3266528785& unmarshaled, t3266528785_marshaled_com& marshaled);
extern "C" void t3266528785_marshal_com_back(const t3266528785_marshaled_com& marshaled, t3266528785& unmarshaled);
extern "C" void t3266528785_marshal_com_cleanup(t3266528785_marshaled_com& marshaled);
