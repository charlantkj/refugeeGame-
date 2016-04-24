#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1081512082;

#include "Il2CppObject.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1955524104  : public Il2CppObject
{
public:
	bool f0;
	t1081512082 * f1;
	t3525329789  f2;
	float f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1955524104, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1955524104, f1)); }
	inline t1081512082 * fg1() const { return f1; }
	inline t1081512082 ** fag1() { return &f1; }
	inline void fs1(t1081512082 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1955524104, f2)); }
	inline t3525329789  fg2() const { return f2; }
	inline t3525329789 * fag2() { return &f2; }
	inline void fs2(t3525329789  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1955524104, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
