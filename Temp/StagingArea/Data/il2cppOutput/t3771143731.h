#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2530496925;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3771143731  : public Il2CppObject
{
public:
	t2530496925 * f0;
	t2530496925 * f1;
	t2530496925 * f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3771143731, f0)); }
	inline t2530496925 * fg0() const { return f0; }
	inline t2530496925 ** fag0() { return &f0; }
	inline void fs0(t2530496925 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3771143731, f1)); }
	inline t2530496925 * fg1() const { return f1; }
	inline t2530496925 ** fag1() { return &f1; }
	inline void fs1(t2530496925 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3771143731, f2)); }
	inline t2530496925 * fg2() const { return f2; }
	inline t2530496925 ** fag2() { return &f2; }
	inline void fs2(t2530496925 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3771143731, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
