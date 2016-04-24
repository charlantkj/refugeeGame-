#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t962981669;

#include "t3621744255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t990034267  : public t3621744255
{
public:
	t962981669 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t990034267, f16)); }
	inline t962981669 * fg16() const { return f16; }
	inline t962981669 ** fag16() { return &f16; }
	inline void fs16(t962981669 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
