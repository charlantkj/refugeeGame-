#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2296376950;
struct t2070381879;
struct t1961785748;

#include "t644839684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4283993460  : public t644839684
{
public:
	bool f2;
	t2296376950 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4283993460, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4283993460, f3)); }
	inline t2296376950 * fg3() const { return f3; }
	inline t2296376950 ** fag3() { return &f3; }
	inline void fs3(t2296376950 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t4283993460_SFs
{
public:
	t2070381879 * f4;
	t1961785748 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4283993460_SFs, f4)); }
	inline t2070381879 * fg4() const { return f4; }
	inline t2070381879 ** fag4() { return &f4; }
	inline void fs4(t2070381879 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4283993460_SFs, f5)); }
	inline t1961785748 * fg5() const { return f5; }
	inline t1961785748 ** fag5() { return &f5; }
	inline void fs5(t1961785748 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
