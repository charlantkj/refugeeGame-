#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2687322878;
struct t2368501598;

#include "t1499093192.h"
#include "t63637216.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t630081023  : public t1499093192
{
public:
	bool f1;
	bool f2;
	t2687322878 * f3;
	t2687322878 * f4;
	t2368501598 * f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t630081023, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t630081023, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t630081023, f3)); }
	inline t2687322878 * fg3() const { return f3; }
	inline t2687322878 ** fag3() { return &f3; }
	inline void fs3(t2687322878 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t630081023, f4)); }
	inline t2687322878 * fg4() const { return f4; }
	inline t2687322878 ** fag4() { return &f4; }
	inline void fs4(t2687322878 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t630081023, f5)); }
	inline t2368501598 * fg5() const { return f5; }
	inline t2368501598 ** fag5() { return &f5; }
	inline void fs5(t2368501598 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t630081023_SFs
{
public:
	t63637216  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t630081023_SFs, f0)); }
	inline t63637216  fg0() const { return f0; }
	inline t63637216 * fag0() { return &f0; }
	inline void fs0(t63637216  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
