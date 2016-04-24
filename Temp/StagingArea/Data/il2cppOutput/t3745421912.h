#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1304982661;

#include "t839208017.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3745421912  : public t839208017
{
public:

public:
};

struct t3745421912_SFs
{
public:
	t1304982661* f10;
	t1304982661* f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3745421912_SFs, f10)); }
	inline t1304982661* fg10() const { return f10; }
	inline t1304982661** fag10() { return &f10; }
	inline void fs10(t1304982661* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3745421912_SFs, f11)); }
	inline t1304982661* fg11() const { return f11; }
	inline t1304982661** fag11() { return &f11; }
	inline void fs11(t1304982661* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
