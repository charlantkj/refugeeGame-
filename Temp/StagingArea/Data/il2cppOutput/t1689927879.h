#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3416858730;
struct t1689927879;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1689927879  : public Il2CppObject
{
public:
	t3416858730* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1689927879, f0)); }
	inline t3416858730* fg0() const { return f0; }
	inline t3416858730** fag0() { return &f0; }
	inline void fs0(t3416858730* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

struct t1689927879_SFs
{
public:
	t1689927879 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1689927879_SFs, f1)); }
	inline t1689927879 * fg1() const { return f1; }
	inline t1689927879 ** fag1() { return &f1; }
	inline void fs1(t1689927879 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
