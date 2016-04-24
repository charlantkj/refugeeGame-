#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2401773174;
struct t564335855;
struct t1240057615;

#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t564335855  : public Il2CppObject
{
public:
	IntPtr_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t564335855, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}
};

struct t564335855_SFs
{
public:
	t2401773174* f1;
	t564335855 * f2;
	t1240057615 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t564335855_SFs, f1)); }
	inline t2401773174* fg1() const { return f1; }
	inline t2401773174** fag1() { return &f1; }
	inline void fs1(t2401773174* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t564335855_SFs, f2)); }
	inline t564335855 * fg2() const { return f2; }
	inline t564335855 ** fag2() { return &f2; }
	inline void fs2(t564335855 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t564335855_SFs, f3)); }
	inline t1240057615 * fg3() const { return f3; }
	inline t1240057615 ** fag3() { return &f3; }
	inline void fs3(t1240057615 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
