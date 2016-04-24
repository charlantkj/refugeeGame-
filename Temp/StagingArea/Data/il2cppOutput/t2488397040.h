#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t13154640;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2488397040 
{
public:
	t13154640 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2488397040, f0)); }
	inline t13154640 * fg0() const { return f0; }
	inline t13154640 ** fag0() { return &f0; }
	inline void fs0(t13154640 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
