﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3821542197;
struct t1399588867;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1945124270  : public Il2CppObject
{
public:
	t3821542197 * f0;
	t1399588867 * f1;
	t1399588867 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1945124270, f0)); }
	inline t3821542197 * fg0() const { return f0; }
	inline t3821542197 ** fag0() { return &f0; }
	inline void fs0(t3821542197 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1945124270, f1)); }
	inline t1399588867 * fg1() const { return f1; }
	inline t1399588867 ** fag1() { return &f1; }
	inline void fs1(t1399588867 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1945124270, f2)); }
	inline t1399588867 * fg2() const { return f2; }
	inline t1399588867 ** fag2() { return &f2; }
	inline void fs2(t1399588867 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1945124270, f3)); }
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