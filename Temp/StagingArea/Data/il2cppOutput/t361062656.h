#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3630061075;

#include "t2055500882.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t361062656  : public t2055500882
{
public:
	t3630061075 * f2;
	bool f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t361062656, f2)); }
	inline t3630061075 * fg2() const { return f2; }
	inline t3630061075 ** fag2() { return &f2; }
	inline void fs2(t3630061075 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t361062656, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

struct t361062656_SFs
{
public:
	IntPtr_t f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t361062656_SFs, f3)); }
	inline IntPtr_t fg3() const { return f3; }
	inline IntPtr_t* fag3() { return &f3; }
	inline void fs3(IntPtr_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
