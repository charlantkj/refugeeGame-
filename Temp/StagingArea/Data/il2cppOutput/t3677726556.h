#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1178954575;

#include "t4123145639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3677726556  : public t4123145639
{
public:
	t1178954575 * f30;
	int16_t f31;

public:
	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t3677726556, f30)); }
	inline t1178954575 * fg30() const { return f30; }
	inline t1178954575 ** fag30() { return &f30; }
	inline void fs30(t1178954575 * value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}

	inline static int32_t fog31() { return static_cast<int32_t>(offsetof(t3677726556, f31)); }
	inline int16_t fg31() const { return f31; }
	inline int16_t* fag31() { return &f31; }
	inline void fs31(int16_t value)
	{
		f31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
