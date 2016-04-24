#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1523674982;
struct t3821800093;
struct t1641005768;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t193897593  : public Il2CppObject
{
public:

public:
};

struct t193897593_SFs
{
public:
	t1523674982* f0;
	t3821800093* f1;
	t1641005768* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t193897593_SFs, f0)); }
	inline t1523674982* fg0() const { return f0; }
	inline t1523674982** fag0() { return &f0; }
	inline void fs0(t1523674982* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t193897593_SFs, f1)); }
	inline t3821800093* fg1() const { return f1; }
	inline t3821800093** fag1() { return &f1; }
	inline void fs1(t3821800093* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t193897593_SFs, f2)); }
	inline t1641005768* fg2() const { return f2; }
	inline t1641005768** fag2() { return &f2; }
	inline void fs2(t1641005768* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
