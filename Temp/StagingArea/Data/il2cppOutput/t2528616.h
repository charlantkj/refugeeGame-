#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3626201768;

#include "t2998278102.h"
#include "t2528615.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2528616  : public t2998278102
{
public:
	t3626201768 * f2;
	t2528615  f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2528616, f2)); }
	inline t3626201768 * fg2() const { return f2; }
	inline t3626201768 ** fag2() { return &f2; }
	inline void fs2(t3626201768 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2528616, f3)); }
	inline t2528615  fg3() const { return f3; }
	inline t2528615 * fag3() { return &f3; }
	inline void fs3(t2528615  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
