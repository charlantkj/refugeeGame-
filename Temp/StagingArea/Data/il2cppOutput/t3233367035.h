﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3233367035;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3233367035  : public Il2CppObject
{
public:

public:
};

struct t3233367035_SFs
{
public:
	t3233367035 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3233367035_SFs, f0)); }
	inline t3233367035 * fg0() const { return f0; }
	inline t3233367035 ** fag0() { return &f0; }
	inline void fs0(t3233367035 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
