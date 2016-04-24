#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3317474837;

#include "t644839684.h"
#include "t816341300.h"
#include "t3675273953.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1683351827  : public t644839684
{
public:
	int32_t f2;
	int32_t f3;
	t3317474837 * f4;
	t3675273953  f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1683351827, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1683351827, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1683351827, f4)); }
	inline t3317474837 * fg4() const { return f4; }
	inline t3317474837 ** fag4() { return &f4; }
	inline void fs4(t3317474837 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1683351827, f5)); }
	inline t3675273953  fg5() const { return f5; }
	inline t3675273953 * fag5() { return &f5; }
	inline void fs5(t3675273953  value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
