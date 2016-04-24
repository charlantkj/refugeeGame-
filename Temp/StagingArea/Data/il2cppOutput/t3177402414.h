#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3796754476;
struct t2956870243;

#include "t276412187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3177402414  : public t276412187
{
public:
	t3796754476* f9;
	t2956870243* f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3177402414, f9)); }
	inline t3796754476* fg9() const { return f9; }
	inline t3796754476** fag9() { return &f9; }
	inline void fs9(t3796754476* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3177402414, f10)); }
	inline t2956870243* fg10() const { return f10; }
	inline t2956870243** fag10() { return &f10; }
	inline void fs10(t2956870243* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
