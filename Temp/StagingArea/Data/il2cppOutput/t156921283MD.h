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


struct t156921283;
struct t156921283_marshaled_pinvoke;

extern "C" void t156921283_marshal_pinvoke(const t156921283& unmarshaled, t156921283_marshaled_pinvoke& marshaled);
extern "C" void t156921283_marshal_pinvoke_back(const t156921283_marshaled_pinvoke& marshaled, t156921283& unmarshaled);
extern "C" void t156921283_marshal_pinvoke_cleanup(t156921283_marshaled_pinvoke& marshaled);

struct t156921283;
struct t156921283_marshaled_com;

extern "C" void t156921283_marshal_com(const t156921283& unmarshaled, t156921283_marshaled_com& marshaled);
extern "C" void t156921283_marshal_com_back(const t156921283_marshaled_com& marshaled, t156921283& unmarshaled);
extern "C" void t156921283_marshal_com_cleanup(t156921283_marshaled_com& marshaled);
