#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t11523773;

#include "t2174897510.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1065917714  : public t2174897510
{
public:
	t11523773* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1065917714, f4)); }
	inline t11523773* fg4() const { return f4; }
	inline t11523773** fag4() { return &f4; }
	inline void fs4(t11523773* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
