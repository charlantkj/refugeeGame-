#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t864074059;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2937500249  : public t3012272455
{
public:
	t864074059 * f2;
	t864074059 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2937500249, f2)); }
	inline t864074059 * fg2() const { return f2; }
	inline t864074059 ** fag2() { return &f2; }
	inline void fs2(t864074059 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2937500249, f3)); }
	inline t864074059 * fg3() const { return f3; }
	inline t864074059 ** fag3() { return &f3; }
	inline void fs3(t864074059 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
