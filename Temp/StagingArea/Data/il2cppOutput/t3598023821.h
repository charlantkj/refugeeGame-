#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4187391077;

#include "Il2CppObject.h"
#include "t1588175760.h"
#include "t3598143874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3598023821  : public Il2CppObject
{
public:
	t4187391077 * f0;
	float f1;
	bool f2;
	t1588175760  f3;
	t1588175760  f4;
	int32_t f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3598023821, f0)); }
	inline t4187391077 * fg0() const { return f0; }
	inline t4187391077 ** fag0() { return &f0; }
	inline void fs0(t4187391077 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3598023821, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3598023821, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3598023821, f3)); }
	inline t1588175760  fg3() const { return f3; }
	inline t1588175760 * fag3() { return &f3; }
	inline void fs3(t1588175760  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3598023821, f4)); }
	inline t1588175760  fg4() const { return f4; }
	inline t1588175760 * fag4() { return &f4; }
	inline void fs4(t1588175760  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3598023821, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
