#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;

#include "t4163809156.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3455488335  : public t4163809156
{
public:
	t2956870243* f10;
	t2956870243* f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3455488335, f10)); }
	inline t2956870243* fg10() const { return f10; }
	inline t2956870243** fag10() { return &f10; }
	inline void fs10(t2956870243* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3455488335, f11)); }
	inline t2956870243* fg11() const { return f11; }
	inline t2956870243** fag11() { return &f11; }
	inline void fs11(t2956870243* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
