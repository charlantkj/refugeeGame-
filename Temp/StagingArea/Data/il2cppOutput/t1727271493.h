﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t732736887;
struct t187201484;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1727271493  : public Il2CppObject
{
public:

public:
};

struct t1727271493_SFs
{
public:
	t732736887 * f0;
	t187201484 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1727271493_SFs, f0)); }
	inline t732736887 * fg0() const { return f0; }
	inline t732736887 ** fag0() { return &f0; }
	inline void fs0(t732736887 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1727271493_SFs, f1)); }
	inline t187201484 * fg1() const { return f1; }
	inline t187201484 ** fag1() { return &f1; }
	inline void fs1(t187201484 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
