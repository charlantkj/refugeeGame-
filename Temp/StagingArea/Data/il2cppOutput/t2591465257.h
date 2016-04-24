#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3468179849;
struct t2591465257;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2591465257  : public Il2CppObject
{
public:
	t3468179849 * f0;
	t3468179849 * f1;
	t2591465257 * f2;
	t2591465257 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2591465257, f0)); }
	inline t3468179849 * fg0() const { return f0; }
	inline t3468179849 ** fag0() { return &f0; }
	inline void fs0(t3468179849 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2591465257, f1)); }
	inline t3468179849 * fg1() const { return f1; }
	inline t3468179849 ** fag1() { return &f1; }
	inline void fs1(t3468179849 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2591465257, f2)); }
	inline t2591465257 * fg2() const { return f2; }
	inline t2591465257 ** fag2() { return &f2; }
	inline void fs2(t2591465257 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2591465257, f3)); }
	inline t2591465257 * fg3() const { return f3; }
	inline t2591465257 ** fag3() { return &f3; }
	inline void fs3(t2591465257 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
