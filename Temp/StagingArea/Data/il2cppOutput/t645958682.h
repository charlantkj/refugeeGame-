#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct MethodInfo_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t645958682  : public Il2CppObject
{
public:
	int32_t f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t645958682, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}
};

struct t645958682_SFs
{
public:
	t3875263730 * f0;
	MethodInfo_t * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t645958682_SFs, f0)); }
	inline t3875263730 * fg0() const { return f0; }
	inline t3875263730 ** fag0() { return &f0; }
	inline void fs0(t3875263730 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t645958682_SFs, f1)); }
	inline MethodInfo_t * fg1() const { return f1; }
	inline MethodInfo_t ** fag1() { return &f1; }
	inline void fs1(MethodInfo_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
