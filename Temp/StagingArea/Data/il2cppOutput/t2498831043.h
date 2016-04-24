#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t576693949;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2498831043  : public Il2CppObject
{
public:
	t576693949 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2498831043, f0)); }
	inline t576693949 * fg0() const { return f0; }
	inline t576693949 ** fag0() { return &f0; }
	inline void fs0(t576693949 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
