﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3210471388;

#include "Il2CppObject.h"
#include "t2603341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t466925578  : public Il2CppObject
{
public:
	t2603341  f0;
	t3210471388 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t466925578, f0)); }
	inline t2603341  fg0() const { return f0; }
	inline t2603341 * fag0() { return &f0; }
	inline void fs0(t2603341  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t466925578, f1)); }
	inline t3210471388 * fg1() const { return f1; }
	inline t3210471388 ** fag1() { return &f1; }
	inline void fs1(t3210471388 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
