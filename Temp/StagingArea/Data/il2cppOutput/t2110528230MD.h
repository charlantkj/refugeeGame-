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

struct t2110528230;
struct t3878351788;
struct t3878351788_marshaled_pinvoke;
struct MethodInfo_t;
struct t11523773;

#include "codegen/il2cpp-codegen.h"
#include "t3878351788.h"
#include "MethodInfo_t.h"

extern "C"  void m3760156124_gshared (t2110528230 * __this, t3878351788 * p0, MethodInfo_t * p1, float p2, const MethodInfo* method);
#define m3760156124(__this, p0, p1, p2, method) ((  void (*) (t2110528230 *, t3878351788 *, MethodInfo_t *, float, const MethodInfo*))m3760156124_gshared)(__this, p0, p1, p2, method)
extern "C"  void m4174790843_gshared (t2110528230 * __this, t11523773* p0, const MethodInfo* method);
#define m4174790843(__this, p0, method) ((  void (*) (t2110528230 *, t11523773*, const MethodInfo*))m4174790843_gshared)(__this, p0, method)
