#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t466925574;
struct t3210471388;

#include "Il2CppObject.h"
#include "t465677458.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t466925579  : public Il2CppObject
{
public:
	t465677458  f0;
	t466925574 * f1;
	t3210471388 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t466925579, f0)); }
	inline t465677458  fg0() const { return f0; }
	inline t465677458 * fag0() { return &f0; }
	inline void fs0(t465677458  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t466925579, f1)); }
	inline t466925574 * fg1() const { return f1; }
	inline t466925574 ** fag1() { return &f1; }
	inline void fs1(t466925574 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t466925579, f2)); }
	inline t3210471388 * fg2() const { return f2; }
	inline t3210471388 ** fag2() { return &f2; }
	inline void fs2(t3210471388 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
