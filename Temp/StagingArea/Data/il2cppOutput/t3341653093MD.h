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
#include "t3341653093.h"

extern "C"  void m144561586 (t3341653093 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3341653093;
struct t3341653093_marshaled_pinvoke;

extern "C" void t3341653093_marshal_pinvoke(const t3341653093& unmarshaled, t3341653093_marshaled_pinvoke& marshaled);
extern "C" void t3341653093_marshal_pinvoke_back(const t3341653093_marshaled_pinvoke& marshaled, t3341653093& unmarshaled);
extern "C" void t3341653093_marshal_pinvoke_cleanup(t3341653093_marshaled_pinvoke& marshaled);

struct t3341653093;
struct t3341653093_marshaled_com;

extern "C" void t3341653093_marshal_com(const t3341653093& unmarshaled, t3341653093_marshaled_com& marshaled);
extern "C" void t3341653093_marshal_com_back(const t3341653093_marshaled_com& marshaled, t3341653093& unmarshaled);
extern "C" void t3341653093_marshal_com_cleanup(t3341653093_marshaled_com& marshaled);
