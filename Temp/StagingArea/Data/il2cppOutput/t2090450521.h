#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3336811651;
struct t1557565273;
struct t58506160;
struct t2956870243;
struct t3796754476;

#include "Il2CppObject.h"
#include "t2711684451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2090450521  : public Il2CppObject
{
public:
	t3336811651 * f0;
	t1557565273 * f1;
	t2711684451  f2;
	t58506160* f3;
	t2956870243* f4;
	bool f5;
	bool f6;
	t3796754476* f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2090450521, f0)); }
	inline t3336811651 * fg0() const { return f0; }
	inline t3336811651 ** fag0() { return &f0; }
	inline void fs0(t3336811651 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2090450521, f1)); }
	inline t1557565273 * fg1() const { return f1; }
	inline t1557565273 ** fag1() { return &f1; }
	inline void fs1(t1557565273 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2090450521, f2)); }
	inline t2711684451  fg2() const { return f2; }
	inline t2711684451 * fag2() { return &f2; }
	inline void fs2(t2711684451  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2090450521, f3)); }
	inline t58506160* fg3() const { return f3; }
	inline t58506160** fag3() { return &f3; }
	inline void fs3(t58506160* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2090450521, f4)); }
	inline t2956870243* fg4() const { return f4; }
	inline t2956870243** fag4() { return &f4; }
	inline void fs4(t2956870243* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2090450521, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2090450521, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2090450521, f7)); }
	inline t3796754476* fg7() const { return f7; }
	inline t3796754476** fag7() { return &f7; }
	inline void fs7(t3796754476* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
