#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2193916456;

#include "t1467752358.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t544662673  : public t1467752358
{
public:
	t2193916456 * f7;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t544662673, f7)); }
	inline t2193916456 * fg7() const { return f7; }
	inline t2193916456 ** fag7() { return &f7; }
	inline void fs7(t2193916456 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
