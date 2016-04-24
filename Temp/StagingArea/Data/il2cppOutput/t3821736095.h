#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;
struct t190145395;

#include "t1854958641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3821736095  : public t1854958641
{
public:

public:
};

struct t3821736095_SFs
{
public:
	t2956870243* f6;
	t190145395 * f7;
	t190145395 * f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3821736095_SFs, f6)); }
	inline t2956870243* fg6() const { return f6; }
	inline t2956870243** fag6() { return &f6; }
	inline void fs6(t2956870243* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3821736095_SFs, f7)); }
	inline t190145395 * fg7() const { return f7; }
	inline t190145395 ** fag7() { return &f7; }
	inline void fs7(t190145395 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3821736095_SFs, f8)); }
	inline t190145395 * fg8() const { return f8; }
	inline t190145395 ** fag8() { return &f8; }
	inline void fs8(t190145395 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
