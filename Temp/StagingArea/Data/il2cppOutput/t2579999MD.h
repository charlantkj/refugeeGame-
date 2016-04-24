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


struct t2579999;
struct t2579999_marshaled_com;

extern "C" void t2579999_marshal_com(const t2579999& unmarshaled, t2579999_marshaled_com& marshaled);
extern "C" void t2579999_marshal_com_back(const t2579999_marshaled_com& marshaled, t2579999& unmarshaled);
extern "C" void t2579999_marshal_com_cleanup(t2579999_marshaled_com& marshaled);
