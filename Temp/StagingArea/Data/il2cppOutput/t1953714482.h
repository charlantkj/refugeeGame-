#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2322387786;

#include "t4014882752.h"
#include "t1258512360.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1953714482 
{
public:
	t1258512360  f0;
	t2322387786 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1953714482, f0)); }
	inline t1258512360  fg0() const { return f0; }
	inline t1258512360 * fag0() { return &f0; }
	inline void fs0(t1258512360  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1953714482, f1)); }
	inline t2322387786 * fg1() const { return f1; }
	inline t2322387786 ** fag1() { return &f1; }
	inline void fs1(t2322387786 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
