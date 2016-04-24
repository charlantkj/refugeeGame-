#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3317474837;
struct t933884113;
struct t1886596500;

#include "t644839684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3286245653  : public t644839684
{
public:
	t3317474837 * f2;
	bool f3;
	t933884113 * f4;
	t1886596500 * f5;
	t1886596500 * f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3286245653, f2)); }
	inline t3317474837 * fg2() const { return f2; }
	inline t3317474837 ** fag2() { return &f2; }
	inline void fs2(t3317474837 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3286245653, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3286245653, f4)); }
	inline t933884113 * fg4() const { return f4; }
	inline t933884113 ** fag4() { return &f4; }
	inline void fs4(t933884113 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3286245653, f5)); }
	inline t1886596500 * fg5() const { return f5; }
	inline t1886596500 ** fag5() { return &f5; }
	inline void fs5(t1886596500 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3286245653, f6)); }
	inline t1886596500 * fg6() const { return f6; }
	inline t1886596500 ** fag6() { return &f6; }
	inline void fs6(t1886596500 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
