#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2715305664;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  MonoType_t  : public Type_t
{
public:
	t2715305664 * f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(MonoType_t, f8)); }
	inline t2715305664 * fg8() const { return f8; }
	inline t2715305664 ** fag8() { return &f8; }
	inline void fs8(t2715305664 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
