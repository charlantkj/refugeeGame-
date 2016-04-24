#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t955670625;

#include "t4014882752.h"
#include "t3525329789.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t46221527 
{
public:
	t3525329789  f0;
	t3525329789  f1;
	int32_t f2;
	float f3;
	t3525329788  f4;
	t955670625 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t46221527, f0)); }
	inline t3525329789  fg0() const { return f0; }
	inline t3525329789 * fag0() { return &f0; }
	inline void fs0(t3525329789  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t46221527, f1)); }
	inline t3525329789  fg1() const { return f1; }
	inline t3525329789 * fag1() { return &f1; }
	inline void fs1(t3525329789  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t46221527, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t46221527, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t46221527, f4)); }
	inline t3525329788  fg4() const { return f4; }
	inline t3525329788 * fag4() { return &f4; }
	inline void fs4(t3525329788  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t46221527, f5)); }
	inline t955670625 * fg5() const { return f5; }
	inline t955670625 ** fag5() { return &f5; }
	inline void fs5(t955670625 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
