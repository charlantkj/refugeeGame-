#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t995991461.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3658722873  : public t995991461
{
public:
	t58506160* f21;
	t58506160* f22;
	t58506160* f23;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t3658722873, f21)); }
	inline t58506160* fg21() const { return f21; }
	inline t58506160** fag21() { return &f21; }
	inline void fs21(t58506160* value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t3658722873, f22)); }
	inline t58506160* fg22() const { return f22; }
	inline t58506160** fag22() { return &f22; }
	inline void fs22(t58506160* value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}

	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t3658722873, f23)); }
	inline t58506160* fg23() const { return f23; }
	inline t58506160** fag23() { return &f23; }
	inline void fs23(t58506160* value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
