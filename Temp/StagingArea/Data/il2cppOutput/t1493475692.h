﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3369893619;
struct t947940289;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1493475692  : public Il2CppObject
{
public:
	t3369893619 * f0;
	t947940289 * f1;
	t947940289 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1493475692, f0)); }
	inline t3369893619 * fg0() const { return f0; }
	inline t3369893619 ** fag0() { return &f0; }
	inline void fs0(t3369893619 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1493475692, f1)); }
	inline t947940289 * fg1() const { return f1; }
	inline t947940289 ** fag1() { return &f1; }
	inline void fs1(t947940289 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1493475692, f2)); }
	inline t947940289 * fg2() const { return f2; }
	inline t947940289 ** fag2() { return &f2; }
	inline void fs2(t947940289 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1493475692, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
