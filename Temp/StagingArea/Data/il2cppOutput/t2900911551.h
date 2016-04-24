#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3004296173;
struct t2458760770;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2900911551  : public Il2CppObject
{
public:

public:
};

struct t2900911551_SFs
{
public:
	t3004296173 * f0;
	t2458760770 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2900911551_SFs, f0)); }
	inline t3004296173 * fg0() const { return f0; }
	inline t3004296173 ** fag0() { return &f0; }
	inline void fs0(t3004296173 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2900911551_SFs, f1)); }
	inline t2458760770 * fg1() const { return f1; }
	inline t2458760770 ** fag1() { return &f1; }
	inline void fs1(t2458760770 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
