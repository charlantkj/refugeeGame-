#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t509936573;
struct t576693949;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3233689201  : public Il2CppObject
{
public:
	t509936573 * f0;
	t576693949 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3233689201, f0)); }
	inline t509936573 * fg0() const { return f0; }
	inline t509936573 ** fag0() { return &f0; }
	inline void fs0(t509936573 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3233689201, f1)); }
	inline t576693949 * fg1() const { return f1; }
	inline t576693949 ** fag1() { return &f1; }
	inline void fs1(t576693949 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
