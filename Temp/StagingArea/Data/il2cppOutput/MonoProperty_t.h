#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t943738788;

#include "PropertyInfo_t.h"
#include "IntPtr_t.h"
#include "t2683779348.h"
#include "t2267221868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	IntPtr_t f0;
	IntPtr_t f1;
	t2683779348  f2;
	int32_t f3;
	t943738788 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(MonoProperty_t, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(MonoProperty_t, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(MonoProperty_t, f2)); }
	inline t2683779348  fg2() const { return f2; }
	inline t2683779348 * fag2() { return &f2; }
	inline void fs2(t2683779348  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(MonoProperty_t, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(MonoProperty_t, f4)); }
	inline t943738788 * fg4() const { return f4; }
	inline t943738788 ** fag4() { return &f4; }
	inline void fs4(t943738788 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
