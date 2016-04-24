#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t687552070;
struct t2460062704;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3411304698  : public Il2CppObject
{
public:
	t687552070 * f0;
	t2460062704 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3411304698, f0)); }
	inline t687552070 * fg0() const { return f0; }
	inline t687552070 ** fag0() { return &f0; }
	inline void fs0(t687552070 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3411304698, f1)); }
	inline t2460062704 * fg1() const { return f1; }
	inline t2460062704 ** fag1() { return &f1; }
	inline void fs1(t2460062704 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
