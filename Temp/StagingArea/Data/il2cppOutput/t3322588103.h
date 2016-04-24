#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2328053497;
struct t1782518094;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3322588103  : public Il2CppObject
{
public:

public:
};

struct t3322588103_SFs
{
public:
	t2328053497 * f0;
	t1782518094 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3322588103_SFs, f0)); }
	inline t2328053497 * fg0() const { return f0; }
	inline t2328053497 ** fag0() { return &f0; }
	inline void fs0(t2328053497 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3322588103_SFs, f1)); }
	inline t1782518094 * fg1() const { return f1; }
	inline t1782518094 ** fag1() { return &f1; }
	inline void fs1(t1782518094 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
