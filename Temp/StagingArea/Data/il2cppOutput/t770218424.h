#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t933884113;

#include "t644839684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t770218424  : public t644839684
{
public:
	t933884113 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t770218424, f2)); }
	inline t933884113 * fg2() const { return f2; }
	inline t933884113 ** fag2() { return &f2; }
	inline void fs2(t933884113 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
