#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2133601851;
struct t2174318432;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1694088928  : public Il2CppObject
{
public:
	uint32_t f0;
	t2133601851* f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1694088928, f0)); }
	inline uint32_t fg0() const { return f0; }
	inline uint32_t* fag0() { return &f0; }
	inline void fs0(uint32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1694088928, f1)); }
	inline t2133601851* fg1() const { return f1; }
	inline t2133601851** fag1() { return &f1; }
	inline void fs1(t2133601851* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t1694088928_SFs
{
public:
	t2133601851* f2;
	t2174318432 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1694088928_SFs, f2)); }
	inline t2133601851* fg2() const { return f2; }
	inline t2133601851** fag2() { return &f2; }
	inline void fs2(t2133601851* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1694088928_SFs, f3)); }
	inline t2174318432 * fg3() const { return f3; }
	inline t2174318432 ** fag3() { return &f3; }
	inline void fs3(t2174318432 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
