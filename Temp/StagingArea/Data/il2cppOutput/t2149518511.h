#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;

#include "t1854958641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2149518511  : public t1854958641
{
public:

public:
};

struct t2149518511_SFs
{
public:
	t2956870243* f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2149518511_SFs, f6)); }
	inline t2956870243* fg6() const { return f6; }
	inline t2956870243** fag6() { return &f6; }
	inline void fs6(t2956870243* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
