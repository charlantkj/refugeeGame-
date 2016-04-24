#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t2146430982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2193916456  : public Il2CppObject
{
public:
	bool f0;
	t2146430982  f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2193916456, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2193916456, f1)); }
	inline t2146430982  fg1() const { return f1; }
	inline t2146430982 * fag1() { return &f1; }
	inline void fs1(t2146430982  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
