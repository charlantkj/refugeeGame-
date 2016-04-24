#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3790421294;
struct t3781205267;
struct t1730843082;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3790421294  : public Il2CppObject
{
public:
	t3781205267 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3790421294, f1)); }
	inline t3781205267 * fg1() const { return f1; }
	inline t3781205267 ** fag1() { return &f1; }
	inline void fs1(t3781205267 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t3790421294_SFs
{
public:
	t3790421294 * f0;
	t1730843082 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3790421294_SFs, f0)); }
	inline t3790421294 * fg0() const { return f0; }
	inline t3790421294 ** fag0() { return &f0; }
	inline void fs0(t3790421294 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3790421294_SFs, f2)); }
	inline t1730843082 * fg2() const { return f2; }
	inline t1730843082 ** fag2() { return &f2; }
	inline void fs2(t1730843082 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
