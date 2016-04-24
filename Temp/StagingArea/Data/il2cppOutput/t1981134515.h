#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct t1475339785;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1981134515  : public Il2CppObject
{
public:
	int32_t f0;
	t3875263730 * f1;
	t1475339785 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1981134515, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1981134515, f1)); }
	inline t3875263730 * fg1() const { return f1; }
	inline t3875263730 ** fag1() { return &f1; }
	inline void fs1(t3875263730 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1981134515, f2)); }
	inline t1475339785 * fg2() const { return f2; }
	inline t1475339785 ** fag2() { return &f2; }
	inline void fs2(t1475339785 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
