#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2322387786;
struct t64678921;
struct t1129497212;
struct t3973297514;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t557227383  : public t3012272455
{
public:
	t2322387786 * f2;
	float f3;
	t64678921 * f4;
	t64678921 * f5;
	t1129497212 * f6;
	t3973297514 * f7;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t557227383, f2)); }
	inline t2322387786 * fg2() const { return f2; }
	inline t2322387786 ** fag2() { return &f2; }
	inline void fs2(t2322387786 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t557227383, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t557227383, f4)); }
	inline t64678921 * fg4() const { return f4; }
	inline t64678921 ** fag4() { return &f4; }
	inline void fs4(t64678921 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t557227383, f5)); }
	inline t64678921 * fg5() const { return f5; }
	inline t64678921 ** fag5() { return &f5; }
	inline void fs5(t64678921 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t557227383, f6)); }
	inline t1129497212 * fg6() const { return f6; }
	inline t1129497212 ** fag6() { return &f6; }
	inline void fs6(t1129497212 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t557227383, f7)); }
	inline t3973297514 * fg7() const { return f7; }
	inline t3973297514 ** fag7() { return &f7; }
	inline void fs7(t3973297514 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
