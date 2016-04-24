#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1153522766;

#include "t3120504042.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3534013893  : public t3120504042
{
public:

public:
};

struct t3534013893_SFs
{
public:
	t1153522766 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3534013893_SFs, f2)); }
	inline t1153522766 * fg2() const { return f2; }
	inline t1153522766 ** fag2() { return &f2; }
	inline void fs2(t1153522766 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
