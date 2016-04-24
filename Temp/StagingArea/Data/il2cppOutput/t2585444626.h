#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2585444626;

#include "t3660574010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2585444626  : public t3660574010
{
public:
	t2585444626 * f9;
	t2585444626 * f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2585444626, f9)); }
	inline t2585444626 * fg9() const { return f9; }
	inline t2585444626 ** fag9() { return &f9; }
	inline void fs9(t2585444626 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t2585444626, f10)); }
	inline t2585444626 * fg10() const { return f10; }
	inline t2585444626 ** fag10() { return &f10; }
	inline void fs10(t2585444626 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
