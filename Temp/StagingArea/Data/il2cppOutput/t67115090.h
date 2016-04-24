#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t951099815;

#include "t4014882752.h"
#include "t154140846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t67115090 
{
public:
	String_t* f0;
	t154140846  f1;
	t951099815 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t67115090, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t67115090, f1)); }
	inline t154140846  fg1() const { return f1; }
	inline t154140846 * fag1() { return &f1; }
	inline void fs1(t154140846  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t67115090, f2)); }
	inline t951099815 * fg2() const { return f2; }
	inline t951099815 ** fag2() { return &f2; }
	inline void fs2(t951099815 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
