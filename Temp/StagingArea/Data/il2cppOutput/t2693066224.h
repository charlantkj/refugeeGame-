#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2029520850;
struct t955670625;

#include "Il2CppObject.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2693066224  : public Il2CppObject
{
public:
	t2029520850 * f0;
	t955670625 * f1;
	t3525329789  f2;
	t3525329789  f3;
	t3525329789  f4;
	float f5;
	int32_t f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2693066224, f0)); }
	inline t2029520850 * fg0() const { return f0; }
	inline t2029520850 ** fag0() { return &f0; }
	inline void fs0(t2029520850 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2693066224, f1)); }
	inline t955670625 * fg1() const { return f1; }
	inline t955670625 ** fag1() { return &f1; }
	inline void fs1(t955670625 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2693066224, f2)); }
	inline t3525329789  fg2() const { return f2; }
	inline t3525329789 * fag2() { return &f2; }
	inline void fs2(t3525329789  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2693066224, f3)); }
	inline t3525329789  fg3() const { return f3; }
	inline t3525329789 * fag3() { return &f3; }
	inline void fs3(t3525329789  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2693066224, f4)); }
	inline t3525329789  fg4() const { return f4; }
	inline t3525329789 * fag4() { return &f4; }
	inline void fs4(t3525329789  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2693066224, f5)); }
	inline float fg5() const { return f5; }
	inline float* fag5() { return &f5; }
	inline void fs5(float value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2693066224, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
