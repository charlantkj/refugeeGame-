#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct t995991461;

#include "t276412187.h"
#include "t1615155800.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1259177484  : public t276412187
{
public:
	int32_t f9;
	t58506160* f10;
	t58506160* f11;
	t995991461 * f12;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1259177484, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1259177484, f10)); }
	inline t58506160* fg10() const { return f10; }
	inline t58506160** fag10() { return &f10; }
	inline void fs10(t58506160* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1259177484, f11)); }
	inline t58506160* fg11() const { return f11; }
	inline t58506160** fag11() { return &f11; }
	inline void fs11(t58506160* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1259177484, f12)); }
	inline t995991461 * fg12() const { return f12; }
	inline t995991461 ** fag12() { return &f12; }
	inline void fs12(t995991461 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
