﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3012272455;
struct t287207039;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1434350349  : public Il2CppObject
{
public:
	t3012272455 * f0;
	Il2CppObject * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1434350349, f0)); }
	inline t3012272455 * fg0() const { return f0; }
	inline t3012272455 ** fag0() { return &f0; }
	inline void fs0(t3012272455 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1434350349, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
