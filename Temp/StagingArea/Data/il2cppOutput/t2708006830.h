#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t171953869;
struct t3257378130;
struct t4199006061;

#include "t1178954575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2708006830  : public t1178954575
{
public:
	t171953869 * f20;
	int32_t f21;

public:
	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t2708006830, f20)); }
	inline t171953869 * fg20() const { return f20; }
	inline t171953869 ** fag20() { return &f20; }
	inline void fs20(t171953869 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}

	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t2708006830, f21)); }
	inline int32_t fg21() const { return f21; }
	inline int32_t* fag21() { return &f21; }
	inline void fs21(int32_t value)
	{
		f21 = value;
	}
};

struct t2708006830_SFs
{
public:
	t3257378130 * f22;
	t4199006061 * f23;

public:
	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t2708006830_SFs, f22)); }
	inline t3257378130 * fg22() const { return f22; }
	inline t3257378130 ** fag22() { return &f22; }
	inline void fs22(t3257378130 * value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}

	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t2708006830_SFs, f23)); }
	inline t4199006061 * fg23() const { return f23; }
	inline t4199006061 ** fag23() { return &f23; }
	inline void fs23(t4199006061 * value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
