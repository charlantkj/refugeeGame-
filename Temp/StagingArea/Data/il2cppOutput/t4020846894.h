#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t893977014;
struct t1017130543;
struct t1640433287;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4020846894  : public Il2CppObject
{
public:
	Il2CppObject * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4020846894, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t4020846894_SFs
{
public:
	Type_t * f0;
	t893977014 * f1;
	t1017130543 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4020846894_SFs, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4020846894_SFs, f1)); }
	inline t893977014 * fg1() const { return f1; }
	inline t893977014 ** fag1() { return &f1; }
	inline void fs1(t893977014 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4020846894_SFs, f2)); }
	inline t1017130543 * fg2() const { return f2; }
	inline t1017130543 ** fag2() { return &f2; }
	inline void fs2(t1017130543 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
