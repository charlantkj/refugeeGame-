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


struct t403820581;
struct t403820581_marshaled_pinvoke;

extern "C" void t403820581_marshal_pinvoke(const t403820581& unmarshaled, t403820581_marshaled_pinvoke& marshaled);
extern "C" void t403820581_marshal_pinvoke_back(const t403820581_marshaled_pinvoke& marshaled, t403820581& unmarshaled);
extern "C" void t403820581_marshal_pinvoke_cleanup(t403820581_marshaled_pinvoke& marshaled);

struct t403820581;
struct t403820581_marshaled_com;

extern "C" void t403820581_marshal_com(const t403820581& unmarshaled, t403820581_marshaled_com& marshaled);
extern "C" void t403820581_marshal_com_back(const t403820581_marshaled_com& marshaled, t403820581& unmarshaled);
extern "C" void t403820581_marshal_com_cleanup(t403820581_marshaled_com& marshaled);
