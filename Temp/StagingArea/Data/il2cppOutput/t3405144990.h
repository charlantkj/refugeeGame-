#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3174934509;
struct t1910042165;

#include "t3076212156.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3405144990  : public t3076212156
{
public:
	t3174934509 * f5;
	t1910042165 * f6;
	bool f7;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3405144990, f5)); }
	inline t3174934509 * fg5() const { return f5; }
	inline t3174934509 ** fag5() { return &f5; }
	inline void fs5(t3174934509 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3405144990, f6)); }
	inline t1910042165 * fg6() const { return f6; }
	inline t1910042165 ** fag6() { return &f6; }
	inline void fs6(t1910042165 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3405144990, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
