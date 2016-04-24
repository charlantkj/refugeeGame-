#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1525081276;
struct t1926456181;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3583158969 
{
public:
	t1525081276 * f0;
	t1926456181 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3583158969, f0)); }
	inline t1525081276 * fg0() const { return f0; }
	inline t1525081276 ** fag0() { return &f0; }
	inline void fs0(t1525081276 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3583158969, f1)); }
	inline t1926456181 * fg1() const { return f1; }
	inline t1926456181 ** fag1() { return &f1; }
	inline void fs1(t1926456181 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
