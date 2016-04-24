#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t2049645430.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2049645430 
{
public:
	int32_t f1;
	int32_t f2;
	int32_t f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2049645430, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2049645430, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2049645430, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t2049645430_SFs
{
public:
	t2049645430  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2049645430_SFs, f0)); }
	inline t2049645430  fg0() const { return f0; }
	inline t2049645430 * fag0() { return &f0; }
	inline void fs0(t2049645430  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Candlelight.UnityVersion
struct t2049645430_marshaled_pinvoke
{
	int32_t f1;
	int32_t f2;
	int32_t f3;
};
// Native definition for marshalling of: Candlelight.UnityVersion
struct t2049645430_marshaled_com
{
	int32_t f1;
	int32_t f2;
	int32_t f3;
};
