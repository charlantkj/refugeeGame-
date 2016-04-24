#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3695912417;
struct t2990183180;

#include "t3800378272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1553882356  : public t3800378272
{
public:
	t3695912417 * f10;
	t2990183180 * f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1553882356, f10)); }
	inline t3695912417 * fg10() const { return f10; }
	inline t3695912417 ** fag10() { return &f10; }
	inline void fs10(t3695912417 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1553882356, f11)); }
	inline t2990183180 * fg11() const { return f11; }
	inline t2990183180 ** fag11() { return &f11; }
	inline void fs11(t2990183180 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
