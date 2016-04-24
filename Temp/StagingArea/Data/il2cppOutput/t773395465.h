#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t773395465;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t773395465  : public Il2CppObject
{
public:

public:
};

struct t773395465_SFs
{
public:
	t773395465 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t773395465_SFs, f0)); }
	inline t773395465 * fg0() const { return f0; }
	inline t773395465 ** fag0() { return &f0; }
	inline void fs0(t773395465 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
