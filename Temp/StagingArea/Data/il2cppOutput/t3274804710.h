﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t799562310;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3274804710 
{
public:
	t799562310 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3274804710, f0)); }
	inline t799562310 * fg0() const { return f0; }
	inline t799562310 ** fag0() { return &f0; }
	inline void fs0(t799562310 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
