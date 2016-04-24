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

struct t1363324550;
struct t3878351788;
struct t3878351788_marshaled_pinvoke;
struct MethodInfo_t;
struct t11523773;

#include "codegen/il2cpp-codegen.h"
#include "t3878351788.h"
#include "MethodInfo_t.h"

extern "C"  void m562163564_gshared (t1363324550 * __this, t3878351788 * p0, MethodInfo_t * p1, bool p2, const MethodInfo* method);
#define m562163564(__this, p0, p1, p2, method) ((  void (*) (t1363324550 *, t3878351788 *, MethodInfo_t *, bool, const MethodInfo*))m562163564_gshared)(__this, p0, p1, p2, method)
extern "C"  void m3206745387_gshared (t1363324550 * __this, t11523773* p0, const MethodInfo* method);
#define m3206745387(__this, p0, method) ((  void (*) (t1363324550 *, t11523773*, const MethodInfo*))m3206745387_gshared)(__this, p0, method)
