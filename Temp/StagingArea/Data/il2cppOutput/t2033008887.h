#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3534013893;
struct t1730843082;
struct t3637558989;

#include "t3819875680.h"
#include "t3349705471.h"
#include "t1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2033008887  : public t3819875680
{
public:
	bool f3;
	int32_t f4;
	t1862190090  f5;
	t3534013893 * f6;
	t1730843082 * f7;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2033008887, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2033008887, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2033008887, f5)); }
	inline t1862190090  fg5() const { return f5; }
	inline t1862190090 * fag5() { return &f5; }
	inline void fs5(t1862190090  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2033008887, f6)); }
	inline t3534013893 * fg6() const { return f6; }
	inline t3534013893 ** fag6() { return &f6; }
	inline void fs6(t3534013893 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2033008887, f7)); }
	inline t1730843082 * fg7() const { return f7; }
	inline t1730843082 ** fag7() { return &f7; }
	inline void fs7(t1730843082 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t2033008887_SFs
{
public:
	t1730843082 * f8;
	t3637558989 * f9;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2033008887_SFs, f8)); }
	inline t1730843082 * fg8() const { return f8; }
	inline t1730843082 ** fag8() { return &f8; }
	inline void fs8(t1730843082 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2033008887_SFs, f9)); }
	inline t3637558989 * fg9() const { return f9; }
	inline t3637558989 ** fag9() { return &f9; }
	inline void fs9(t3637558989 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
