#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1673533981;
struct t401089076;

#include "t3878351788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1525081276  : public t3878351788
{
public:
	t401089076 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1525081276, f3)); }
	inline t401089076 * fg3() const { return f3; }
	inline t401089076 ** fag3() { return &f3; }
	inline void fs3(t401089076 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t1525081276_SFs
{
public:
	t1673533981 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1525081276_SFs, f2)); }
	inline t1673533981 * fg2() const { return f2; }
	inline t1673533981 ** fag2() { return &f2; }
	inline void fs2(t1673533981 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
