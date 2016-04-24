#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3247703954;

#include "t284553113.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3317474837  : public t284553113
{
public:

public:
};

struct t3317474837_SFs
{
public:
	t3247703954 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3317474837_SFs, f2)); }
	inline t3247703954 * fg2() const { return f2; }
	inline t3247703954 ** fag2() { return &f2; }
	inline void fs2(t3247703954 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
