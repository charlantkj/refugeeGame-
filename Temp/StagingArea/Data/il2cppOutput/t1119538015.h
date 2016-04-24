#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1972007546;
struct t955670625;
struct t1988025008;

#include "Il2CppObject.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1119538015  : public Il2CppObject
{
public:
	t3525329789  f0;
	t3525329789  f1;
	t1972007546 * f2;
	t955670625 * f3;
	t1988025008* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1119538015, f0)); }
	inline t3525329789  fg0() const { return f0; }
	inline t3525329789 * fag0() { return &f0; }
	inline void fs0(t3525329789  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1119538015, f1)); }
	inline t3525329789  fg1() const { return f1; }
	inline t3525329789 * fag1() { return &f1; }
	inline void fs1(t3525329789  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1119538015, f2)); }
	inline t1972007546 * fg2() const { return f2; }
	inline t1972007546 ** fag2() { return &f2; }
	inline void fs2(t1972007546 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1119538015, f3)); }
	inline t955670625 * fg3() const { return f3; }
	inline t955670625 ** fag3() { return &f3; }
	inline void fs3(t955670625 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1119538015, f4)); }
	inline t1988025008* fg4() const { return f4; }
	inline t1988025008** fag4() { return &f4; }
	inline void fs4(t1988025008* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
