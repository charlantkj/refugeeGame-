#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t357621126;

#include "t1499093192.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3952301679  : public t1499093192
{
public:
	t357621126 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3952301679, f0)); }
	inline t357621126 * fg0() const { return f0; }
	inline t357621126 ** fag0() { return &f0; }
	inline void fs0(t357621126 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
