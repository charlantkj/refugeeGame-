#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2358643361;
struct t4063666527;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1905726208  : public Il2CppObject
{
public:
	t2358643361 * f0;
	t4063666527 * f1;
	t4063666527 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1905726208, f0)); }
	inline t2358643361 * fg0() const { return f0; }
	inline t2358643361 ** fag0() { return &f0; }
	inline void fs0(t2358643361 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1905726208, f1)); }
	inline t4063666527 * fg1() const { return f1; }
	inline t4063666527 ** fag1() { return &f1; }
	inline void fs1(t4063666527 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1905726208, f2)); }
	inline t4063666527 * fg2() const { return f2; }
	inline t4063666527 ** fag2() { return &f2; }
	inline void fs2(t4063666527 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1905726208, f3)); }
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
