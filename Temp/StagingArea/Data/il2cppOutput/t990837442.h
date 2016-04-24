#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t990837442;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t990837442  : public Il2CppObject
{
public:

public:
};

struct t990837442_SFs
{
public:
	t990837442 * f0;
	t990837442 * f1;
	t990837442 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t990837442_SFs, f0)); }
	inline t990837442 * fg0() const { return f0; }
	inline t990837442 ** fag0() { return &f0; }
	inline void fs0(t990837442 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t990837442_SFs, f1)); }
	inline t990837442 * fg1() const { return f1; }
	inline t990837442 ** fag1() { return &f1; }
	inline void fs1(t990837442 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t990837442_SFs, f2)); }
	inline t990837442 * fg2() const { return f2; }
	inline t990837442 ** fag2() { return &f2; }
	inline void fs2(t990837442 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
