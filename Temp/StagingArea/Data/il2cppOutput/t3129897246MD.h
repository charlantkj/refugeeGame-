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


struct t3129897246;
struct t3129897246_marshaled_pinvoke;

extern "C" void t3129897246_marshal_pinvoke(const t3129897246& unmarshaled, t3129897246_marshaled_pinvoke& marshaled);
extern "C" void t3129897246_marshal_pinvoke_back(const t3129897246_marshaled_pinvoke& marshaled, t3129897246& unmarshaled);
extern "C" void t3129897246_marshal_pinvoke_cleanup(t3129897246_marshaled_pinvoke& marshaled);

struct t3129897246;
struct t3129897246_marshaled_com;

extern "C" void t3129897246_marshal_com(const t3129897246& unmarshaled, t3129897246_marshaled_com& marshaled);
extern "C" void t3129897246_marshal_com_back(const t3129897246_marshaled_com& marshaled, t3129897246& unmarshaled);
extern "C" void t3129897246_marshal_com_cleanup(t3129897246_marshaled_com& marshaled);
