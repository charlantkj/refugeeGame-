#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t792326996;
struct t1129497212;

#include "t3012272455.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t64678921  : public t3012272455
{
public:
	t792326996 * f2;
	t1129497212 * f3;
	float f4;
	float f5;
	t3525329789  f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t64678921, f2)); }
	inline t792326996 * fg2() const { return f2; }
	inline t792326996 ** fag2() { return &f2; }
	inline void fs2(t792326996 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t64678921, f3)); }
	inline t1129497212 * fg3() const { return f3; }
	inline t1129497212 ** fag3() { return &f3; }
	inline void fs3(t1129497212 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t64678921, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t64678921, f5)); }
	inline float fg5() const { return f5; }
	inline float* fag5() { return &f5; }
	inline void fs5(float value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t64678921, f6)); }
	inline t3525329789  fg6() const { return f6; }
	inline t3525329789 * fag6() { return &f6; }
	inline void fs6(t3525329789  value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
