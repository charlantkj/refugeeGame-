#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1525081276;
struct t4083417167;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1445152659 
{
public:
	t1525081276 * f0;
	t4083417167 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1445152659, f0)); }
	inline t1525081276 * fg0() const { return f0; }
	inline t1525081276 ** fag0() { return &f0; }
	inline void fs0(t1525081276 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1445152659, f1)); }
	inline t4083417167 * fg1() const { return f1; }
	inline t4083417167 ** fag1() { return &f1; }
	inline void fs1(t4083417167 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
