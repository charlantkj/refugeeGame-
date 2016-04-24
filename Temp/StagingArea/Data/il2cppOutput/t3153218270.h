#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1809983122;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3153218270  : public Il2CppObject
{
public:

public:
};

struct t3153218270_SFs
{
public:
	t1809983122* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3153218270_SFs, f0)); }
	inline t1809983122* fg0() const { return f0; }
	inline t1809983122** fag0() { return &f0; }
	inline void fs0(t1809983122* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
