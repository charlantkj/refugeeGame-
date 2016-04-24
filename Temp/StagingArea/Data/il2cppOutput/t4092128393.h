#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1623036922;

#include "t1270295572.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4092128393  : public t1270295572
{
public:
	t1623036922 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4092128393, f0)); }
	inline t1623036922 * fg0() const { return f0; }
	inline t1623036922 ** fag0() { return &f0; }
	inline void fs0(t1623036922 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
