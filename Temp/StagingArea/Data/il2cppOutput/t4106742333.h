#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t1510964269.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4106742333  : public t1510964269
{
public:
	t58506160* f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4106742333, f3)); }
	inline t58506160* fg3() const { return f3; }
	inline t58506160** fag3() { return &f3; }
	inline void fs3(t58506160* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
