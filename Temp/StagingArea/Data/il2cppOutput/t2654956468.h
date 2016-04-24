#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2654956468  : public Il2CppObject
{
public:
	bool f0;
	int32_t f1;
	t2956870243* f2;
	t2956870243* f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2654956468, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2654956468, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2654956468, f2)); }
	inline t2956870243* fg2() const { return f2; }
	inline t2956870243** fag2() { return &f2; }
	inline void fs2(t2956870243* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2654956468, f3)); }
	inline t2956870243* fg3() const { return f3; }
	inline t2956870243** fag3() { return &f3; }
	inline void fs3(t2956870243* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
