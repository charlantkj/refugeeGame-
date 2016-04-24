#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t190145395;
struct t864074060;

#include "t647241978.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3104509883  : public t647241978
{
public:
	t190145395 * f10;
	t864074060 * f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3104509883, f10)); }
	inline t190145395 * fg10() const { return f10; }
	inline t190145395 ** fag10() { return &f10; }
	inline void fs10(t190145395 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3104509883, f11)); }
	inline t864074060 * fg11() const { return f11; }
	inline t864074060 ** fag11() { return &f11; }
	inline void fs11(t864074060 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
