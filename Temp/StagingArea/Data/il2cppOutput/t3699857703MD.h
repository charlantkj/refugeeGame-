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

struct String_t;
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t3699857703.h"
#include "String_t.h"
#include "Il2CppObject.h"

extern "C"  void m3336742541 (t3699857703 * __this, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3699857703;
struct t3699857703_marshaled_com;

extern "C" void t3699857703_marshal_com(const t3699857703& unmarshaled, t3699857703_marshaled_com& marshaled);
extern "C" void t3699857703_marshal_com_back(const t3699857703_marshaled_com& marshaled, t3699857703& unmarshaled);
extern "C" void t3699857703_marshal_com_cleanup(t3699857703_marshaled_com& marshaled);
