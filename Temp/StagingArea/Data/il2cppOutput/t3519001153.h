#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2399218676;
struct t219029575;
struct t4123145639;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3519001153  : public Il2CppObject
{
public:
	t219029575 * f1;
	t4123145639 * f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3519001153, f1)); }
	inline t219029575 * fg1() const { return f1; }
	inline t219029575 ** fag1() { return &f1; }
	inline void fs1(t219029575 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3519001153, f2)); }
	inline t4123145639 * fg2() const { return f2; }
	inline t4123145639 ** fag2() { return &f2; }
	inline void fs2(t4123145639 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t3519001153_SFs
{
public:
	t2399218676 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3519001153_SFs, f0)); }
	inline t2399218676 * fg0() const { return f0; }
	inline t2399218676 ** fag0() { return &f0; }
	inline void fs0(t2399218676 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
