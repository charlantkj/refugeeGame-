#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t403820581 
{
public:
	t3525329788  f0;
	float f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t403820581, f0)); }
	inline t3525329788  fg0() const { return f0; }
	inline t3525329788 * fag0() { return &f0; }
	inline void fs0(t3525329788  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t403820581, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UICharInfo
struct t403820581_marshaled_pinvoke
{
	t3525329788_marshaled_pinvoke f0;
	float f1;
};
// Native definition for marshalling of: UnityEngine.UICharInfo
struct t403820581_marshaled_com
{
	t3525329788_marshaled_com f0;
	float f1;
};
