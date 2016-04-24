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


#include "codegen/il2cpp-codegen.h"
#include "t476453423.h"

extern "C"  void m3599194282 (t476453423 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t476453423;
struct t476453423_marshaled_pinvoke;

extern "C" void t476453423_marshal_pinvoke(const t476453423& unmarshaled, t476453423_marshaled_pinvoke& marshaled);
extern "C" void t476453423_marshal_pinvoke_back(const t476453423_marshaled_pinvoke& marshaled, t476453423& unmarshaled);
extern "C" void t476453423_marshal_pinvoke_cleanup(t476453423_marshaled_pinvoke& marshaled);

struct t476453423;
struct t476453423_marshaled_com;

extern "C" void t476453423_marshal_com(const t476453423& unmarshaled, t476453423_marshaled_com& marshaled);
extern "C" void t476453423_marshal_com_back(const t476453423_marshaled_com& marshaled, t476453423& unmarshaled);
extern "C" void t476453423_marshal_com_cleanup(t476453423_marshaled_com& marshaled);
