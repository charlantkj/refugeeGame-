#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4033313258;
struct t1215858122;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1611780840  : public Il2CppObject
{
public:
	t4033313258 * f0;
	t1215858122 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1611780840, f0)); }
	inline t4033313258 * fg0() const { return f0; }
	inline t4033313258 ** fag0() { return &f0; }
	inline void fs0(t4033313258 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1611780840, f1)); }
	inline t1215858122 * fg1() const { return f1; }
	inline t1215858122 ** fag1() { return &f1; }
	inline void fs1(t1215858122 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
