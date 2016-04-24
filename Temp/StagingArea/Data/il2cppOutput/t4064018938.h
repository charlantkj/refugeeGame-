#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3802381858;
struct t221596666;
struct t1829318641;
struct t3971028559;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4064018938  : public Il2CppObject
{
public:

public:
};

struct t4064018938_SFs
{
public:
	t3802381858 * f0;
	t221596666 * f1;
	t1829318641 * f2;
	t3971028559 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4064018938_SFs, f0)); }
	inline t3802381858 * fg0() const { return f0; }
	inline t3802381858 ** fag0() { return &f0; }
	inline void fs0(t3802381858 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4064018938_SFs, f1)); }
	inline t221596666 * fg1() const { return f1; }
	inline t221596666 ** fag1() { return &f1; }
	inline void fs1(t221596666 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4064018938_SFs, f2)); }
	inline t1829318641 * fg2() const { return f2; }
	inline t1829318641 ** fag2() { return &f2; }
	inline void fs2(t1829318641 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4064018938_SFs, f3)); }
	inline t3971028559 * fg3() const { return f3; }
	inline t3971028559 ** fag3() { return &f3; }
	inline void fs3(t3971028559 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
