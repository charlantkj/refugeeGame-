#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1843257499;
struct t3322490541;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1843257499  : public Il2CppObject
{
public:
	t3322490541 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1843257499, f1)); }
	inline t3322490541 * fg1() const { return f1; }
	inline t3322490541 ** fag1() { return &f1; }
	inline void fs1(t3322490541 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t1843257499_SFs
{
public:
	t1843257499 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1843257499_SFs, f0)); }
	inline t1843257499 * fg0() const { return f0; }
	inline t1843257499 ** fag0() { return &f0; }
	inline void fs0(t1843257499 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
