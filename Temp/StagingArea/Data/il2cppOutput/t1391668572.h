#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t276412187.h"
#include "t2711684451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1391668572  : public t276412187
{
public:
	t2711684451  f9;
	t58506160* f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1391668572, f9)); }
	inline t2711684451  fg9() const { return f9; }
	inline t2711684451 * fag9() { return &f9; }
	inline void fs9(t2711684451  value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1391668572, f10)); }
	inline t58506160* fg10() const { return f10; }
	inline t58506160** fag10() { return &f10; }
	inline void fs10(t58506160* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
