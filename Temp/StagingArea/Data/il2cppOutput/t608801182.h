#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t608801182;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t608801182  : public Il2CppObject
{
public:

public:
};

struct t608801182_SFs
{
public:
	t608801182 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t608801182_SFs, f0)); }
	inline t608801182 * fg0() const { return f0; }
	inline t608801182 ** fag0() { return &f0; }
	inline void fs0(t608801182 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
