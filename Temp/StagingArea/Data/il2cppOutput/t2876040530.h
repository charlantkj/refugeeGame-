#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4023832425;

#include "t4058118931.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2876040530  : public t4058118931
{
public:
	bool f4;
	t4023832425 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2876040530, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2876040530, f5)); }
	inline t4023832425 * fg5() const { return f5; }
	inline t4023832425 ** fag5() { return &f5; }
	inline void fs5(t4023832425 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
