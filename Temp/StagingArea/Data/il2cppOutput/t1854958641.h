#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1654916945;
struct t831247831;
struct t2956870243;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1854958641  : public Il2CppObject
{
public:
	Il2CppObject * f0;
	Il2CppObject * f1;
	t2956870243* f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1854958641, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1854958641, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1854958641, f2)); }
	inline t2956870243* fg2() const { return f2; }
	inline t2956870243** fag2() { return &f2; }
	inline void fs2(t2956870243* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1854958641, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}
};

struct t1854958641_SFs
{
public:
	t190145395 * f4;
	t190145395 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1854958641_SFs, f4)); }
	inline t190145395 * fg4() const { return f4; }
	inline t190145395 ** fag4() { return &f4; }
	inline void fs4(t190145395 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1854958641_SFs, f5)); }
	inline t190145395 * fg5() const { return f5; }
	inline t190145395 ** fag5() { return &f5; }
	inline void fs5(t190145395 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
