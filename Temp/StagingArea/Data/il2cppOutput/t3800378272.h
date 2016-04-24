#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1756857658;
struct t552897310;
struct t409518532;
struct t3547103726;

#include "t644839684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3800378272  : public t644839684
{
public:
	t1756857658 * f2;
	t552897310 * f3;
	t409518532 * f4;
	t3547103726 * f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3800378272, f2)); }
	inline t1756857658 * fg2() const { return f2; }
	inline t1756857658 ** fag2() { return &f2; }
	inline void fs2(t1756857658 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3800378272, f3)); }
	inline t552897310 * fg3() const { return f3; }
	inline t552897310 ** fag3() { return &f3; }
	inline void fs3(t552897310 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3800378272, f4)); }
	inline t409518532 * fg4() const { return f4; }
	inline t409518532 ** fag4() { return &f4; }
	inline void fs4(t409518532 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3800378272, f5)); }
	inline t3547103726 * fg5() const { return f5; }
	inline t3547103726 ** fag5() { return &f5; }
	inline void fs5(t3547103726 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
