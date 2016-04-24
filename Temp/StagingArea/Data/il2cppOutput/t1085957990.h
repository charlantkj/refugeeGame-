#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1189342612;
struct t643807209;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1085957990  : public Il2CppObject
{
public:

public:
};

struct t1085957990_SFs
{
public:
	t1189342612 * f0;
	t643807209 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1085957990_SFs, f0)); }
	inline t1189342612 * fg0() const { return f0; }
	inline t1189342612 ** fag0() { return &f0; }
	inline void fs0(t1189342612 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1085957990_SFs, f1)); }
	inline t643807209 * fg1() const { return f1; }
	inline t643807209 ** fag1() { return &f1; }
	inline void fs1(t643807209 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
