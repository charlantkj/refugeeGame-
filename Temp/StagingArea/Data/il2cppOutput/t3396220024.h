#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1467909409;
struct t190145395;

#include "t374235568.h"
#include "t3002376501.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3396220024  : public t374235568
{
public:
	t1467909409 * f4;
	int32_t f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3396220024, f4)); }
	inline t1467909409 * fg4() const { return f4; }
	inline t1467909409 ** fag4() { return &f4; }
	inline void fs4(t1467909409 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3396220024, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

struct t3396220024_SFs
{
public:
	t190145395 * f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3396220024_SFs, f6)); }
	inline t190145395 * fg6() const { return f6; }
	inline t190145395 ** fag6() { return &f6; }
	inline void fs6(t190145395 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
