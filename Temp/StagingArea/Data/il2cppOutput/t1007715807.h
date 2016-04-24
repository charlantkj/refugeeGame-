#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1007715807;
struct t4023832425;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1007715807  : public Il2CppObject
{
public:
	t4023832425 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1007715807, f2)); }
	inline t4023832425 * fg2() const { return f2; }
	inline t4023832425 ** fag2() { return &f2; }
	inline void fs2(t4023832425 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t1007715807_SFs
{
public:
	t1007715807 * f0;
	t1007715807 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1007715807_SFs, f0)); }
	inline t1007715807 * fg0() const { return f0; }
	inline t1007715807 ** fag0() { return &f0; }
	inline void fs0(t1007715807 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1007715807_SFs, f1)); }
	inline t1007715807 * fg1() const { return f1; }
	inline t1007715807 ** fag1() { return &f1; }
	inline void fs1(t1007715807 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
