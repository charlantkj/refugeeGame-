#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t24372250.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3076212156  : public t24372250
{
public:
	t58506160* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3076212156, f4)); }
	inline t58506160* fg4() const { return f4; }
	inline t58506160** fag4() { return &f4; }
	inline void fs4(t58506160* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
