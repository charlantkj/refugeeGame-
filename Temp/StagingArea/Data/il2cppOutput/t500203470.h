#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3804927312;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t500203470 
{
public:
	t3804927312* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t500203470, f0)); }
	inline t3804927312* fg0() const { return f0; }
	inline t3804927312** fag0() { return &f0; }
	inline void fs0(t3804927312* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.ParameterModifier
struct t500203470_marshaled_pinvoke
{
	int32_t* f0;
};
// Native definition for marshalling of: System.Reflection.ParameterModifier
struct t500203470_marshaled_com
{
	int32_t* f0;
};
