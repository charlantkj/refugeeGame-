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


struct t2579998;
struct t2579998_marshaled_com;

extern "C" void t2579998_marshal_com(const t2579998& unmarshaled, t2579998_marshaled_com& marshaled);
extern "C" void t2579998_marshal_com_back(const t2579998_marshaled_com& marshaled, t2579998& unmarshaled);
extern "C" void t2579998_marshal_com_cleanup(t2579998_marshaled_com& marshaled);
