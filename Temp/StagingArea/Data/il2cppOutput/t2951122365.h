#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2951122365 
{
public:
	t3525329789  f0;
	t3525329789  f1;
	int32_t f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2951122365, f0)); }
	inline t3525329789  fg0() const { return f0; }
	inline t3525329789 * fag0() { return &f0; }
	inline void fs0(t3525329789  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2951122365, f1)); }
	inline t3525329789  fg1() const { return f1; }
	inline t3525329789 * fag1() { return &f1; }
	inline void fs1(t3525329789  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2951122365, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2951122365, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.ContactPoint
struct t2951122365_marshaled_pinvoke
{
	t3525329789_marshaled_pinvoke f0;
	t3525329789_marshaled_pinvoke f1;
	int32_t f2;
	int32_t f3;
};
// Native definition for marshalling of: UnityEngine.ContactPoint
struct t2951122365_marshaled_com
{
	t3525329789_marshaled_com f0;
	t3525329789_marshaled_com f1;
	int32_t f2;
	int32_t f3;
};
