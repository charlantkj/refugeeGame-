#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;

#include "t4038027264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3441232060  : public t4038027264
{
public:
	Type_t * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3441232060, f2)); }
	inline Type_t * fg2() const { return f2; }
	inline Type_t ** fag2() { return &f2; }
	inline void fs2(Type_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
