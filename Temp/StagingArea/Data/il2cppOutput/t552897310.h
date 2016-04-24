#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t3547103726.h"
#include "t3525329788.h"
#include "t37419785.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t552897310  : public t3547103726
{
public:
	t3525329788  f2;
	int32_t f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t552897310, f2)); }
	inline t3525329788  fg2() const { return f2; }
	inline t3525329788 * fag2() { return &f2; }
	inline void fs2(t3525329788  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t552897310, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
