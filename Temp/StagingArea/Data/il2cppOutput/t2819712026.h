#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2923096648;
struct t2377561245;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2819712026  : public Il2CppObject
{
public:

public:
};

struct t2819712026_SFs
{
public:
	t2923096648 * f0;
	t2377561245 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2819712026_SFs, f0)); }
	inline t2923096648 * fg0() const { return f0; }
	inline t2923096648 ** fag0() { return &f0; }
	inline void fs0(t2923096648 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2819712026_SFs, f1)); }
	inline t2377561245 * fg1() const { return f1; }
	inline t2377561245 ** fag1() { return &f1; }
	inline void fs1(t2377561245 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
