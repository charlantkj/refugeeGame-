#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1570308436;

#include "t1967233988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1029166540  : public t1967233988
{
public:
	t1570308436 * f11;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1029166540, f11)); }
	inline t1570308436 * fg11() const { return f11; }
	inline t1570308436 ** fag11() { return &f11; }
	inline void fs11(t1570308436 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
