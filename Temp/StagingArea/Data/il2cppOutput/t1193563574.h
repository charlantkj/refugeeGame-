#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t1864875887.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1193563574 
{
public:
	t1864875887  f0;
	IntPtr_t f1;
	IntPtr_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1193563574, f0)); }
	inline t1864875887  fg0() const { return f0; }
	inline t1864875887 * fag0() { return &f0; }
	inline void fs0(t1864875887  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1193563574, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1193563574, f2)); }
	inline IntPtr_t fg2() const { return f2; }
	inline IntPtr_t* fag2() { return &f2; }
	inline void fs2(IntPtr_t value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TypedReference
struct t1193563574_marshaled_pinvoke
{
	t1864875887_marshaled_pinvoke f0;
	intptr_t f1;
	intptr_t f2;
};
// Native definition for marshalling of: System.TypedReference
struct t1193563574_marshaled_com
{
	t1864875887_marshaled_com f0;
	intptr_t f1;
	intptr_t f2;
};
