#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3305784653;

#include "t4014882752.h"
#include "t1588175760.h"
#include "t2687312555.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2894377818 
{
public:
	t3305784653 * f0;
	t1588175760  f1;
	t1588175760  f2;
	int32_t f3;
	float f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2894377818, f0)); }
	inline t3305784653 * fg0() const { return f0; }
	inline t3305784653 ** fag0() { return &f0; }
	inline void fs0(t3305784653 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2894377818, f1)); }
	inline t1588175760  fg1() const { return f1; }
	inline t1588175760 * fag1() { return &f1; }
	inline void fs1(t1588175760  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2894377818, f2)); }
	inline t1588175760  fg2() const { return f2; }
	inline t1588175760 * fag2() { return &f2; }
	inline void fs2(t1588175760  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2894377818, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2894377818, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2894377818, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
