#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1769722184;

#include "t2806572971.h"
#include "t1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3831555132  : public t2806572971
{
public:
	t1769722184 * f28;
	t1525428817  f29;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3831555132, f28)); }
	inline t1769722184 * fg28() const { return f28; }
	inline t1769722184 ** fag28() { return &f28; }
	inline void fs28(t1769722184 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t3831555132, f29)); }
	inline t1525428817  fg29() const { return f29; }
	inline t1525428817 * fag29() { return &f29; }
	inline void fs29(t1525428817  value)
	{
		f29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
