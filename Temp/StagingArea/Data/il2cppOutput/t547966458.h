#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1809983122;

#include "t2591465257.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t547966458  : public t2591465257
{
public:
	t1809983122* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t547966458, f4)); }
	inline t1809983122* fg4() const { return f4; }
	inline t1809983122** fag4() { return &f4; }
	inline void fs4(t1809983122* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
