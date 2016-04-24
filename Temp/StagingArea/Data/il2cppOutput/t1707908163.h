#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1882292308;
struct Type_t;
struct t1025395500;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1707908163  : public Il2CppObject
{
public:

public:
};

struct t1707908163_SFs
{
public:
	t1882292308 * f0;
	Type_t * f1;
	t1025395500 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1707908163_SFs, f0)); }
	inline t1882292308 * fg0() const { return f0; }
	inline t1882292308 ** fag0() { return &f0; }
	inline void fs0(t1882292308 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1707908163_SFs, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1707908163_SFs, f2)); }
	inline t1025395500 * fg2() const { return f2; }
	inline t1025395500 ** fag2() { return &f2; }
	inline void fs2(t1025395500 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
