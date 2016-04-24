#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t11523773;

#include "t135963361.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2120808111  : public t135963361
{
public:
	t11523773* f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2120808111, f1)); }
	inline t11523773* fg1() const { return f1; }
	inline t11523773** fag1() { return &f1; }
	inline void fs1(t11523773* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
