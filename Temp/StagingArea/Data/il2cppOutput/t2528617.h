#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t3039019289.h"
#include "t2528615.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2528617  : public t3039019289
{
public:
	t2528615  f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2528617, f1)); }
	inline t2528615  fg1() const { return f1; }
	inline t2528615 * fag1() { return &f1; }
	inline void fs1(t2528615  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
