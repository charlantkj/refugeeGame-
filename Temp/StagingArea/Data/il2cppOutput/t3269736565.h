#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3534013893;
struct t159628414;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3269736565 
{
public:
	t3534013893 * f0;
	t159628414 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3269736565, f0)); }
	inline t3534013893 * fg0() const { return f0; }
	inline t3534013893 ** fag0() { return &f0; }
	inline void fs0(t3534013893 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3269736565, f1)); }
	inline t159628414 * fg1() const { return f1; }
	inline t159628414 ** fag1() { return &f1; }
	inline void fs1(t159628414 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
