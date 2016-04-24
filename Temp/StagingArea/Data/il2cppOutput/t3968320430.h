#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3336811651;
struct t273828613;

#include "Il2CppObject.h"
#include "t2524654829.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3968320430  : public Il2CppObject
{
public:
	t3336811651 * f0;
	t3336811651 * f1;
	t273828613 * f2;
	t3336811651 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3968320430, f0)); }
	inline t3336811651 * fg0() const { return f0; }
	inline t3336811651 ** fag0() { return &f0; }
	inline void fs0(t3336811651 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3968320430, f1)); }
	inline t3336811651 * fg1() const { return f1; }
	inline t3336811651 ** fag1() { return &f1; }
	inline void fs1(t3336811651 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3968320430, f2)); }
	inline t273828613 * fg2() const { return f2; }
	inline t273828613 ** fag2() { return &f2; }
	inline void fs2(t273828613 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3968320430, f3)); }
	inline t3336811651 * fg3() const { return f3; }
	inline t3336811651 ** fag3() { return &f3; }
	inline void fs3(t3336811651 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3968320430, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
