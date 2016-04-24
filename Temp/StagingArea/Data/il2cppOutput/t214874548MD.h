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


struct t214874548;
struct t214874548_marshaled_pinvoke;

extern "C" void t214874548_marshal_pinvoke(const t214874548& unmarshaled, t214874548_marshaled_pinvoke& marshaled);
extern "C" void t214874548_marshal_pinvoke_back(const t214874548_marshaled_pinvoke& marshaled, t214874548& unmarshaled);
extern "C" void t214874548_marshal_pinvoke_cleanup(t214874548_marshaled_pinvoke& marshaled);

struct t214874548;
struct t214874548_marshaled_com;

extern "C" void t214874548_marshal_com(const t214874548& unmarshaled, t214874548_marshaled_com& marshaled);
extern "C" void t214874548_marshal_com_back(const t214874548_marshaled_com& marshaled, t214874548& unmarshaled);
extern "C" void t214874548_marshal_com_cleanup(t214874548_marshaled_com& marshaled);
