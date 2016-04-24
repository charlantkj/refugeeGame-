#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1890038195;

#include "t4014882752.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4082783401 
{
public:
	t3525329788  f0;
	t3525329788  f1;
	t3525329788  f2;
	float f3;
	float f4;
	t1890038195 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4082783401, f0)); }
	inline t3525329788  fg0() const { return f0; }
	inline t3525329788 * fag0() { return &f0; }
	inline void fs0(t3525329788  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4082783401, f1)); }
	inline t3525329788  fg1() const { return f1; }
	inline t3525329788 * fag1() { return &f1; }
	inline void fs1(t3525329788  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4082783401, f2)); }
	inline t3525329788  fg2() const { return f2; }
	inline t3525329788 * fag2() { return &f2; }
	inline void fs2(t3525329788  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4082783401, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4082783401, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4082783401, f5)); }
	inline t1890038195 * fg5() const { return f5; }
	inline t1890038195 ** fag5() { return &f5; }
	inline void fs5(t1890038195 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
