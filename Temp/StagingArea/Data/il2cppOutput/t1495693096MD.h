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
#include "t1495693096.h"
#include "String_t.h"

extern "C"  void m1630846582 (t1495693096 * __this, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m1874351042 (t1495693096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m343060373 (t1495693096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1495693096;
struct t1495693096_marshaled_pinvoke;

extern "C" void t1495693096_marshal_pinvoke(const t1495693096& unmarshaled, t1495693096_marshaled_pinvoke& marshaled);
extern "C" void t1495693096_marshal_pinvoke_back(const t1495693096_marshaled_pinvoke& marshaled, t1495693096& unmarshaled);
extern "C" void t1495693096_marshal_pinvoke_cleanup(t1495693096_marshaled_pinvoke& marshaled);

struct t1495693096;
struct t1495693096_marshaled_com;

extern "C" void t1495693096_marshal_com(const t1495693096& unmarshaled, t1495693096_marshaled_com& marshaled);
extern "C" void t1495693096_marshal_com_back(const t1495693096_marshaled_com& marshaled, t1495693096& unmarshaled);
extern "C" void t1495693096_marshal_com_cleanup(t1495693096_marshaled_com& marshaled);
