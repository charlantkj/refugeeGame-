#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4236534322;
struct t4287420181;
struct t1557563107;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2902591373  : public Il2CppObject
{
public:
	t4236534322 * f0;
	t4287420181 * f1;
	t4287420181 * f2;
	t1557563107 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2902591373, f0)); }
	inline t4236534322 * fg0() const { return f0; }
	inline t4236534322 ** fag0() { return &f0; }
	inline void fs0(t4236534322 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2902591373, f1)); }
	inline t4287420181 * fg1() const { return f1; }
	inline t4287420181 ** fag1() { return &f1; }
	inline void fs1(t4287420181 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2902591373, f2)); }
	inline t4287420181 * fg2() const { return f2; }
	inline t4287420181 ** fag2() { return &f2; }
	inline void fs2(t4287420181 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2902591373, f3)); }
	inline t1557563107 * fg3() const { return f3; }
	inline t1557563107 ** fag3() { return &f3; }
	inline void fs3(t1557563107 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2902591373_SFs
{
public:
	t190145395 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2902591373_SFs, f4)); }
	inline t190145395 * fg4() const { return f4; }
	inline t190145395 ** fag4() { return &f4; }
	inline void fs4(t190145395 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
