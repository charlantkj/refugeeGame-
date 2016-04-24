#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2520789883;
struct t3642540642;
struct t1809983122;
struct t2206799318;
struct t3416858730;

#include "t206139610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1058295580  : public t206139610
{
public:
	int32_t f10;
	t2520789883* f11;
	t3642540642 * f12;
	t1809983122* f13;
	t2206799318 * f14;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1058295580, f10)); }
	inline int32_t fg10() const { return f10; }
	inline int32_t* fag10() { return &f10; }
	inline void fs10(int32_t value)
	{
		f10 = value;
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1058295580, f11)); }
	inline t2520789883* fg11() const { return f11; }
	inline t2520789883** fag11() { return &f11; }
	inline void fs11(t2520789883* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1058295580, f12)); }
	inline t3642540642 * fg12() const { return f12; }
	inline t3642540642 ** fag12() { return &f12; }
	inline void fs12(t3642540642 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1058295580, f13)); }
	inline t1809983122* fg13() const { return f13; }
	inline t1809983122** fag13() { return &f13; }
	inline void fs13(t1809983122* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1058295580, f14)); }
	inline t2206799318 * fg14() const { return f14; }
	inline t2206799318 ** fag14() { return &f14; }
	inline void fs14(t2206799318 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

struct t1058295580_SFs
{
public:
	t3416858730* f15;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1058295580_SFs, f15)); }
	inline t3416858730* fg15() const { return f15; }
	inline t3416858730** fag15() { return &f15; }
	inline void fs15(t3416858730* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
