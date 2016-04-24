#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3533968274;
struct t2749896403;

#include "t3819875680.h"
#include "t1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2526406378  : public t3819875680
{
public:
	t3533968274 * f3;
	t1862190090  f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2526406378, f3)); }
	inline t3533968274 * fg3() const { return f3; }
	inline t3533968274 ** fag3() { return &f3; }
	inline void fs3(t3533968274 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2526406378, f4)); }
	inline t1862190090  fg4() const { return f4; }
	inline t1862190090 * fag4() { return &f4; }
	inline void fs4(t1862190090  value)
	{
		f4 = value;
	}
};

struct t2526406378_SFs
{
public:
	t2749896403 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2526406378_SFs, f5)); }
	inline t2749896403 * fg5() const { return f5; }
	inline t2749896403 ** fag5() { return &f5; }
	inline void fs5(t2749896403 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
