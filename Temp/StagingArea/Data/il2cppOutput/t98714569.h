#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3432067208;

#include "t276412187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t98714569  : public t276412187
{
public:
	bool f9;
	t3432067208 * f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t98714569, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t98714569, f10)); }
	inline t3432067208 * fg10() const { return f10; }
	inline t3432067208 ** fag10() { return &f10; }
	inline void fs10(t3432067208 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
