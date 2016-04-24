#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t344548563;
struct t4093980456;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t241163941  : public Il2CppObject
{
public:

public:
};

struct t241163941_SFs
{
public:
	t344548563 * f0;
	t4093980456 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t241163941_SFs, f0)); }
	inline t344548563 * fg0() const { return f0; }
	inline t344548563 ** fag0() { return &f0; }
	inline void fs0(t344548563 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t241163941_SFs, f1)); }
	inline t4093980456 * fg1() const { return f1; }
	inline t4093980456 ** fag1() { return &f1; }
	inline void fs1(t4093980456 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
