#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4143842295;
struct t3653031512;
struct t1006925219;

#include "Il2CppObject.h"
#include "t1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1596329428  : public Il2CppObject
{
public:

public:
};

struct t1596329428_SFs
{
public:
	t4143842295 * f0;
	t4143842295 * f1;
	t3653031512 * f2;
	t1525428817  f3;
	t1006925219 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1596329428_SFs, f0)); }
	inline t4143842295 * fg0() const { return f0; }
	inline t4143842295 ** fag0() { return &f0; }
	inline void fs0(t4143842295 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1596329428_SFs, f1)); }
	inline t4143842295 * fg1() const { return f1; }
	inline t4143842295 ** fag1() { return &f1; }
	inline void fs1(t4143842295 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1596329428_SFs, f2)); }
	inline t3653031512 * fg2() const { return f2; }
	inline t3653031512 ** fag2() { return &f2; }
	inline void fs2(t3653031512 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1596329428_SFs, f3)); }
	inline t1525428817  fg3() const { return f3; }
	inline t1525428817 * fag3() { return &f3; }
	inline void fs3(t1525428817  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1596329428_SFs, f4)); }
	inline t1006925219 * fg4() const { return f4; }
	inline t1006925219 ** fag4() { return &f4; }
	inline void fs4(t1006925219 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
