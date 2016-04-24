#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4006040370;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t894177973 
{
public:
	t4006040370 * f0;
	t4006040370 * f1;
	t4006040370 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t894177973, f0)); }
	inline t4006040370 * fg0() const { return f0; }
	inline t4006040370 ** fag0() { return &f0; }
	inline void fs0(t4006040370 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t894177973, f1)); }
	inline t4006040370 * fg1() const { return f1; }
	inline t4006040370 ** fag1() { return &f1; }
	inline void fs1(t4006040370 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t894177973, f2)); }
	inline t4006040370 * fg2() const { return f2; }
	inline t4006040370 ** fag2() { return &f2; }
	inline void fs2(t4006040370 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
