﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t117504835;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2592747234 
{
public:
	t117504835 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2592747234, f0)); }
	inline t117504835 * fg0() const { return f0; }
	inline t117504835 ** fag0() { return &f0; }
	inline void fs0(t117504835 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
