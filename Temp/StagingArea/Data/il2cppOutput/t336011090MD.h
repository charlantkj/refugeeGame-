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


struct t336011090;
struct t336011090_marshaled_pinvoke;

extern "C" void t336011090_marshal_pinvoke(const t336011090& unmarshaled, t336011090_marshaled_pinvoke& marshaled);
extern "C" void t336011090_marshal_pinvoke_back(const t336011090_marshaled_pinvoke& marshaled, t336011090& unmarshaled);
extern "C" void t336011090_marshal_pinvoke_cleanup(t336011090_marshaled_pinvoke& marshaled);

struct t336011090;
struct t336011090_marshaled_com;

extern "C" void t336011090_marshal_com(const t336011090& unmarshaled, t336011090_marshaled_com& marshaled);
extern "C" void t336011090_marshal_com_back(const t336011090_marshaled_com& marshaled, t336011090& unmarshaled);
extern "C" void t336011090_marshal_com_cleanup(t336011090_marshaled_com& marshaled);
