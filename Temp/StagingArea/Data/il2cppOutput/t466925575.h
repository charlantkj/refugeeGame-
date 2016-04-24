#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t466925577;
struct t466925576;
struct t466925579;
struct t466925578;
struct t3210471388;

#include "Il2CppObject.h"
#include "t2553938587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t466925575  : public Il2CppObject
{
public:
	t2553938587  f0;
	t466925577 * f1;
	t466925576 * f2;
	t466925579 * f3;
	t466925578 * f4;
	t3210471388 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t466925575, f0)); }
	inline t2553938587  fg0() const { return f0; }
	inline t2553938587 * fag0() { return &f0; }
	inline void fs0(t2553938587  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t466925575, f1)); }
	inline t466925577 * fg1() const { return f1; }
	inline t466925577 ** fag1() { return &f1; }
	inline void fs1(t466925577 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t466925575, f2)); }
	inline t466925576 * fg2() const { return f2; }
	inline t466925576 ** fag2() { return &f2; }
	inline void fs2(t466925576 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t466925575, f3)); }
	inline t466925579 * fg3() const { return f3; }
	inline t466925579 ** fag3() { return &f3; }
	inline void fs3(t466925579 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t466925575, f4)); }
	inline t466925578 * fg4() const { return f4; }
	inline t466925578 ** fag4() { return &f4; }
	inline void fs4(t466925578 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t466925575, f5)); }
	inline t3210471388 * fg5() const { return f5; }
	inline t3210471388 ** fag5() { return &f5; }
	inline void fs5(t3210471388 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
