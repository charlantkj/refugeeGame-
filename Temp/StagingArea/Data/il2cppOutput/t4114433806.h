﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t100490744;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4114433806  : public Il2CppObject
{
public:
	t100490744* f1;
	int32_t f2;
	int32_t f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4114433806, f1)); }
	inline t100490744* fg1() const { return f1; }
	inline t100490744** fag1() { return &f1; }
	inline void fs1(t100490744* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4114433806, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4114433806, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t4114433806_SFs
{
public:
	t100490744* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4114433806_SFs, f4)); }
	inline t100490744* fg4() const { return f4; }
	inline t100490744** fag4() { return &f4; }
	inline void fs4(t100490744* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
