#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1557551819;

#include "t3229527040.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t426713980  : public t3229527040
{
public:
	t1557551819 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t426713980, f0)); }
	inline t1557551819 * fg0() const { return f0; }
	inline t1557551819 ** fag0() { return &f0; }
	inline void fs0(t1557551819 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
