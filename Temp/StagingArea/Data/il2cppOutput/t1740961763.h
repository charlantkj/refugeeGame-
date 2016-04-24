#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t746427157;
struct t2904367476;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1740961763  : public Il2CppObject
{
public:

public:
};

struct t1740961763_SFs
{
public:
	t746427157 * f0;
	t2904367476 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1740961763_SFs, f0)); }
	inline t746427157 * fg0() const { return f0; }
	inline t746427157 ** fag0() { return &f0; }
	inline void fs0(t746427157 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1740961763_SFs, f1)); }
	inline t2904367476 * fg1() const { return f1; }
	inline t2904367476 ** fag1() { return &f1; }
	inline void fs1(t2904367476 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
