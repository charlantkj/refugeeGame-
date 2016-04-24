#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1230592059;

#include "t1560027742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1948156915  : public t1560027742
{
public:
	t1230592059 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1948156915, f4)); }
	inline t1230592059 * fg4() const { return f4; }
	inline t1230592059 ** fag4() { return &f4; }
	inline void fs4(t1230592059 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
