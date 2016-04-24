#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3621744255;

#include "t4014882752.h"
#include "t2403779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2845019197 
{
public:
	int32_t f0;
	t3621744255 * f1;
	t3621744255 * f2;
	t3621744255 * f3;
	t3621744255 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2845019197, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2845019197, f1)); }
	inline t3621744255 * fg1() const { return f1; }
	inline t3621744255 ** fag1() { return &f1; }
	inline void fs1(t3621744255 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2845019197, f2)); }
	inline t3621744255 * fg2() const { return f2; }
	inline t3621744255 ** fag2() { return &f2; }
	inline void fs2(t3621744255 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2845019197, f3)); }
	inline t3621744255 * fg3() const { return f3; }
	inline t3621744255 ** fag3() { return &f3; }
	inline void fs3(t3621744255 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2845019197, f4)); }
	inline t3621744255 * fg4() const { return f4; }
	inline t3621744255 ** fag4() { return &f4; }
	inline void fs4(t3621744255 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
