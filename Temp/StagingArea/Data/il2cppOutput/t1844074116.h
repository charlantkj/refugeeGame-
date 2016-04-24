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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1844074116  : public t276412187
{
public:
	t58506160* f9;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1844074116, f9)); }
	inline t58506160* fg9() const { return f9; }
	inline t58506160** fag9() { return &f9; }
	inline void fs9(t58506160* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
