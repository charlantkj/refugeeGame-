#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t24372250;

#include "t24372250.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1066953176  : public t24372250
{
public:
	t24372250 * f4;
	t24372250 * f5;
	bool f6;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1066953176, f4)); }
	inline t24372250 * fg4() const { return f4; }
	inline t24372250 ** fag4() { return &f4; }
	inline void fs4(t24372250 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1066953176, f5)); }
	inline t24372250 * fg5() const { return f5; }
	inline t24372250 ** fag5() { return &f5; }
	inline void fs5(t24372250 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1066953176, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
