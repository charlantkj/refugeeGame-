#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2461560304;

#include "t647241978.h"
#include "t4110463946.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3327639045  : public t647241978
{
public:
	t2461560304 * f10;
	int32_t f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3327639045, f10)); }
	inline t2461560304 * fg10() const { return f10; }
	inline t2461560304 ** fag10() { return &f10; }
	inline void fs10(t2461560304 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3327639045, f11)); }
	inline int32_t fg11() const { return f11; }
	inline int32_t* fag11() { return &f11; }
	inline void fs11(int32_t value)
	{
		f11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
