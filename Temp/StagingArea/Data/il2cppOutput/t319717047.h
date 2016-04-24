#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4229783199;
struct t3684247796;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t319717047  : public Il2CppObject
{
public:

public:
};

struct t319717047_SFs
{
public:
	t4229783199 * f0;
	t3684247796 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t319717047_SFs, f0)); }
	inline t4229783199 * fg0() const { return f0; }
	inline t4229783199 ** fag0() { return &f0; }
	inline void fs0(t4229783199 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t319717047_SFs, f1)); }
	inline t3684247796 * fg1() const { return f1; }
	inline t3684247796 ** fag1() { return &f1; }
	inline void fs1(t3684247796 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
