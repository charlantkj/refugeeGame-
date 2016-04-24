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


struct t1561977533;
struct t1561977533_marshaled_pinvoke;

extern "C" void t1561977533_marshal_pinvoke(const t1561977533& unmarshaled, t1561977533_marshaled_pinvoke& marshaled);
extern "C" void t1561977533_marshal_pinvoke_back(const t1561977533_marshaled_pinvoke& marshaled, t1561977533& unmarshaled);
extern "C" void t1561977533_marshal_pinvoke_cleanup(t1561977533_marshaled_pinvoke& marshaled);

struct t1561977533;
struct t1561977533_marshaled_com;

extern "C" void t1561977533_marshal_com(const t1561977533& unmarshaled, t1561977533_marshaled_com& marshaled);
extern "C" void t1561977533_marshal_com_back(const t1561977533_marshaled_com& marshaled, t1561977533& unmarshaled);
extern "C" void t1561977533_marshal_com_cleanup(t1561977533_marshaled_com& marshaled);
