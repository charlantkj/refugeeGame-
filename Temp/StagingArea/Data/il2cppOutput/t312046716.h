#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t2603341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t312046716  : public Il2CppObject
{
public:
	t2603341  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t312046716, f0)); }
	inline t2603341  fg0() const { return f0; }
	inline t2603341 * fag0() { return &f0; }
	inline void fs0(t2603341  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
