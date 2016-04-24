#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2419365504;
struct t3603717042;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2419365504  : public Il2CppObject
{
public:
	t3603717042 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2419365504, f2)); }
	inline t3603717042 * fg2() const { return f2; }
	inline t3603717042 ** fag2() { return &f2; }
	inline void fs2(t3603717042 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t2419365504_SFs
{
public:
	t2419365504 * f0;
	t2419365504 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2419365504_SFs, f0)); }
	inline t2419365504 * fg0() const { return f0; }
	inline t2419365504 ** fag0() { return &f0; }
	inline void fs0(t2419365504 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2419365504_SFs, f1)); }
	inline t2419365504 * fg1() const { return f1; }
	inline t2419365504 ** fag1() { return &f1; }
	inline void fs1(t2419365504 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
