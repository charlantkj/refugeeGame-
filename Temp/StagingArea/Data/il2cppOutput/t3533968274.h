#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1908940458;

#include "t3120504042.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3533968274  : public t3120504042
{
public:

public:
};

struct t3533968274_SFs
{
public:
	t1908940458 * f2;
	t1908940458 * f3;
	t1908940458 * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3533968274_SFs, f2)); }
	inline t1908940458 * fg2() const { return f2; }
	inline t1908940458 ** fag2() { return &f2; }
	inline void fs2(t1908940458 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3533968274_SFs, f3)); }
	inline t1908940458 * fg3() const { return f3; }
	inline t1908940458 ** fag3() { return &f3; }
	inline void fs3(t1908940458 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3533968274_SFs, f4)); }
	inline t1908940458 * fg4() const { return f4; }
	inline t1908940458 ** fag4() { return &f4; }
	inline void fs4(t1908940458 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
