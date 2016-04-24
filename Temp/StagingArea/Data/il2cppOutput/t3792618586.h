#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3792618586;
struct t1466462303;

#include "t1645813025.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3792618586  : public t1645813025
{
public:
	bool f4;
	t1466462303 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3792618586, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3792618586, f5)); }
	inline t1466462303 * fg5() const { return f5; }
	inline t1466462303 ** fag5() { return &f5; }
	inline void fs5(t1466462303 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t3792618586_SFs
{
public:
	t3792618586 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3792618586_SFs, f3)); }
	inline t3792618586 * fg3() const { return f3; }
	inline t3792618586 ** fag3() { return &f3; }
	inline void fs3(t3792618586 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
