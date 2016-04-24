#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2591544775;
struct t3233689201;
struct t2416652480;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2591544775  : public Il2CppObject
{
public:
	bool f1;
	bool f2;
	t3233689201 * f3;
	t3233689201 * f4;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2591544775, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2591544775, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2591544775, f3)); }
	inline t3233689201 * fg3() const { return f3; }
	inline t3233689201 ** fag3() { return &f3; }
	inline void fs3(t3233689201 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2591544775, f4)); }
	inline t3233689201 * fg4() const { return f4; }
	inline t3233689201 ** fag4() { return &f4; }
	inline void fs4(t3233689201 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

struct t2591544775_SFs
{
public:
	t2591544775 * f0;
	t2416652480 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2591544775_SFs, f0)); }
	inline t2591544775 * fg0() const { return f0; }
	inline t2591544775 ** fag0() { return &f0; }
	inline void fs0(t2591544775 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2591544775_SFs, f5)); }
	inline t2416652480 * fg5() const { return f5; }
	inline t2416652480 ** fag5() { return &f5; }
	inline void fs5(t2416652480 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
