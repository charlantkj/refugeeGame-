#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3161036435;
struct t1640433287;

#include "Il2CppObject.h"
#include "t3852587989.h"
#include "t986364934.h"
#include "t125002241.h"
#include "t612045862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t341659722  : public Il2CppObject
{
public:
	int32_t f0;
	t3161036435 * f1;
	t986364934  f2;
	Il2CppObject * f3;
	int32_t f4;
	int32_t f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t341659722, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t341659722, f1)); }
	inline t3161036435 * fg1() const { return f1; }
	inline t3161036435 ** fag1() { return &f1; }
	inline void fs1(t3161036435 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t341659722, f2)); }
	inline t986364934  fg2() const { return f2; }
	inline t986364934 * fag2() { return &f2; }
	inline void fs2(t986364934  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t341659722, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t341659722, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t341659722, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

struct t341659722_SFs
{
public:
	Il2CppObject * f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t341659722_SFs, f6)); }
	inline Il2CppObject * fg6() const { return f6; }
	inline Il2CppObject ** fag6() { return &f6; }
	inline void fs6(Il2CppObject * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
