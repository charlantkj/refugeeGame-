#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1551247802;
struct MethodInfo_t;
struct t2781735032;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3486268018 
{
public:
	t1551247802 * f0;
	MethodInfo_t * f1;
	t2781735032 * f2;
	t2781735032 * f3;
	t2781735032 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3486268018, f0)); }
	inline t1551247802 * fg0() const { return f0; }
	inline t1551247802 ** fag0() { return &f0; }
	inline void fs0(t1551247802 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3486268018, f1)); }
	inline MethodInfo_t * fg1() const { return f1; }
	inline MethodInfo_t ** fag1() { return &f1; }
	inline void fs1(MethodInfo_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3486268018, f2)); }
	inline t2781735032 * fg2() const { return f2; }
	inline t2781735032 ** fag2() { return &f2; }
	inline void fs2(t2781735032 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3486268018, f3)); }
	inline t2781735032 * fg3() const { return f3; }
	inline t2781735032 ** fag3() { return &f3; }
	inline void fs3(t2781735032 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3486268018, f4)); }
	inline t2781735032 * fg4() const { return f4; }
	inline t2781735032 ** fag4() { return &f4; }
	inline void fs4(t2781735032 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
