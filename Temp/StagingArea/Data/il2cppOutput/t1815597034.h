#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct Il2CppObject;

#include "t995991461.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1815597034  : public t995991461
{
public:
	t58506160* f21;
	Il2CppObject * f22;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t1815597034, f21)); }
	inline t58506160* fg21() const { return f21; }
	inline t58506160** fag21() { return &f21; }
	inline void fs21(t58506160* value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t1815597034, f22)); }
	inline Il2CppObject * fg22() const { return f22; }
	inline Il2CppObject ** fag22() { return &f22; }
	inline void fs22(Il2CppObject * value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
