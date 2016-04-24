#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2121638921;
struct t3875263730;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2501037015  : public Il2CppObject
{
public:
	t2121638921 * f0;
	t2121638921 * f1;
	t2121638921 * f2;
	t2121638921 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2501037015, f0)); }
	inline t2121638921 * fg0() const { return f0; }
	inline t2121638921 ** fag0() { return &f0; }
	inline void fs0(t2121638921 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2501037015, f1)); }
	inline t2121638921 * fg1() const { return f1; }
	inline t2121638921 ** fag1() { return &f1; }
	inline void fs1(t2121638921 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2501037015, f2)); }
	inline t2121638921 * fg2() const { return f2; }
	inline t2121638921 ** fag2() { return &f2; }
	inline void fs2(t2121638921 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2501037015, f3)); }
	inline t2121638921 * fg3() const { return f3; }
	inline t2121638921 ** fag3() { return &f3; }
	inline void fs3(t2121638921 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2501037015_SFs
{
public:
	t3875263730 * f4;
	Il2CppObject * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2501037015_SFs, f4)); }
	inline t3875263730 * fg4() const { return f4; }
	inline t3875263730 ** fag4() { return &f4; }
	inline void fs4(t3875263730 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2501037015_SFs, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
