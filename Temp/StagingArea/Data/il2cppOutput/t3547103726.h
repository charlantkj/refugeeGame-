#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t409518532;

#include "t419992509.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3547103726  : public t419992509
{
public:
	t409518532 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3547103726, f1)); }
	inline t409518532 * fg1() const { return f1; }
	inline t409518532 ** fag1() { return &f1; }
	inline void fs1(t409518532 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
