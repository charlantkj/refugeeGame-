﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4097835539;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2097019538  : public Il2CppObject
{
public:
	t4097835539 * f0;
	int32_t f1;
	bool f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2097019538, f0)); }
	inline t4097835539 * fg0() const { return f0; }
	inline t4097835539 ** fag0() { return &f0; }
	inline void fs0(t4097835539 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2097019538, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2097019538, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
