#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4287691406;
struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3949082343  : public Type_t
{
public:
	t4287691406 * f8;
	Type_t * f9;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3949082343, f8)); }
	inline t4287691406 * fg8() const { return f8; }
	inline t4287691406 ** fag8() { return &f8; }
	inline void fs8(t4287691406 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3949082343, f9)); }
	inline Type_t * fg9() const { return f9; }
	inline Type_t ** fag9() { return &f9; }
	inline void fs9(Type_t * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
