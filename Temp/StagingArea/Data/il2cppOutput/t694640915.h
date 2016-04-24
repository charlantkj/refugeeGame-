#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t694640915;
struct t3411304698;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t694640915  : public Il2CppObject
{
public:
	t3411304698 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t694640915, f1)); }
	inline t3411304698 * fg1() const { return f1; }
	inline t3411304698 ** fag1() { return &f1; }
	inline void fs1(t3411304698 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t694640915_SFs
{
public:
	t694640915 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t694640915_SFs, f0)); }
	inline t694640915 * fg0() const { return f0; }
	inline t694640915 ** fag0() { return &f0; }
	inline void fs0(t694640915 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
