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


struct t500203470;
struct t500203470_marshaled_pinvoke;

extern "C" void t500203470_marshal_pinvoke(const t500203470& unmarshaled, t500203470_marshaled_pinvoke& marshaled);
extern "C" void t500203470_marshal_pinvoke_back(const t500203470_marshaled_pinvoke& marshaled, t500203470& unmarshaled);
extern "C" void t500203470_marshal_pinvoke_cleanup(t500203470_marshaled_pinvoke& marshaled);

struct t500203470;
struct t500203470_marshaled_com;

extern "C" void t500203470_marshal_com(const t500203470& unmarshaled, t500203470_marshaled_com& marshaled);
extern "C" void t500203470_marshal_com_back(const t500203470_marshaled_com& marshaled, t500203470& unmarshaled);
extern "C" void t500203470_marshal_com_cleanup(t500203470_marshaled_com& marshaled);
