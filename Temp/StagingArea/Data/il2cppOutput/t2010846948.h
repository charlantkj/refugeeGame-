#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3286458198;
struct t3354615620;
struct t3317474837;
struct t1499417981;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2010846948  : public t3012272455
{
public:
	t3286458198 * f2;
	t3354615620 * f3;
	t3317474837 * f4;
	t1499417981 * f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2010846948, f2)); }
	inline t3286458198 * fg2() const { return f2; }
	inline t3286458198 ** fag2() { return &f2; }
	inline void fs2(t3286458198 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2010846948, f3)); }
	inline t3354615620 * fg3() const { return f3; }
	inline t3354615620 ** fag3() { return &f3; }
	inline void fs3(t3354615620 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2010846948, f4)); }
	inline t3317474837 * fg4() const { return f4; }
	inline t3317474837 ** fag4() { return &f4; }
	inline void fs4(t3317474837 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2010846948, f5)); }
	inline t1499417981 * fg5() const { return f5; }
	inline t1499417981 ** fag5() { return &f5; }
	inline void fs5(t1499417981 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
