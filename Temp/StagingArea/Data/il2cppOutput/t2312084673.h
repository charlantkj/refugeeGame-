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

struct  t2312084673  : public t1854958641
{
public:

public:
};

struct t2312084673_SFs
{
public:
	t2956870243* f6;
	t2956870243* f7;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2312084673_SFs, f6)); }
	inline t2956870243* fg6() const { return f6; }
	inline t2956870243** fag6() { return &f6; }
	inline void fs6(t2956870243* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2312084673_SFs, f7)); }
	inline t2956870243* fg7() const { return f7; }
	inline t2956870243** fag7() { return &f7; }
	inline void fs7(t2956870243* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
