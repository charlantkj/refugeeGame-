#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4269653776;
struct t3724118373;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t969221086  : public Il2CppObject
{
public:

public:
};

struct t969221086_SFs
{
public:
	t4269653776 * f0;
	t3724118373 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t969221086_SFs, f0)); }
	inline t4269653776 * fg0() const { return f0; }
	inline t4269653776 ** fag0() { return &f0; }
	inline void fs0(t4269653776 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t969221086_SFs, f1)); }
	inline t3724118373 * fg1() const { return f1; }
	inline t3724118373 ** fag1() { return &f1; }
	inline void fs1(t3724118373 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
