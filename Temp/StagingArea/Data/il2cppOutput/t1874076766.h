#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t879542160;
struct t3037482479;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1874076766  : public Il2CppObject
{
public:

public:
};

struct t1874076766_SFs
{
public:
	t879542160 * f0;
	t3037482479 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1874076766_SFs, f0)); }
	inline t879542160 * fg0() const { return f0; }
	inline t879542160 ** fag0() { return &f0; }
	inline void fs0(t879542160 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1874076766_SFs, f1)); }
	inline t3037482479 * fg1() const { return f1; }
	inline t3037482479 ** fag1() { return &f1; }
	inline void fs1(t3037482479 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
