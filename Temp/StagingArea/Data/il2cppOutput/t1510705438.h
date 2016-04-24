#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4092128393.h"
#include "t2368539.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1510705438  : public t4092128393
{
public:
	t2368539  f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1510705438, f1)); }
	inline t2368539  fg1() const { return f1; }
	inline t2368539 * fag1() { return &f1; }
	inline void fs1(t2368539  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
