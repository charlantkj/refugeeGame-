﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4012695102;
struct t3533968274;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2591228609 
{
public:
	t4012695102 * f0;
	t3533968274 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2591228609, f0)); }
	inline t4012695102 * fg0() const { return f0; }
	inline t4012695102 ** fag0() { return &f0; }
	inline void fs0(t4012695102 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2591228609, f1)); }
	inline t3533968274 * fg1() const { return f1; }
	inline t3533968274 ** fag1() { return &f1; }
	inline void fs1(t3533968274 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
