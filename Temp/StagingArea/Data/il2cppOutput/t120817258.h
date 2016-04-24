#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t3155420757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t120817258  : public t3155420757
{
public:
	String_t* f11;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t120817258, f11)); }
	inline String_t* fg11() const { return f11; }
	inline String_t** fag11() { return &f11; }
	inline void fs11(String_t* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
