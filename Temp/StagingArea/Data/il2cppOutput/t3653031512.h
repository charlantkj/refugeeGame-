#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1013890471;
struct t2344941421;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3653031512  : public Il2CppObject
{
public:
	t1013890471 * f0;
	t2344941421 * f1;
	t1013890471 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3653031512, f0)); }
	inline t1013890471 * fg0() const { return f0; }
	inline t1013890471 ** fag0() { return &f0; }
	inline void fs0(t1013890471 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3653031512, f1)); }
	inline t2344941421 * fg1() const { return f1; }
	inline t2344941421 ** fag1() { return &f1; }
	inline void fs1(t2344941421 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3653031512, f2)); }
	inline t1013890471 * fg2() const { return f2; }
	inline t1013890471 ** fag2() { return &f2; }
	inline void fs2(t1013890471 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
