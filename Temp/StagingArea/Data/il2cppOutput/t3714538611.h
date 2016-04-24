#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t749510018;
struct t2977871350;

#include "t3878351788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3714538611  : public t3878351788
{
public:
	t749510018 * f2;
	t2977871350 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3714538611, f2)); }
	inline t749510018 * fg2() const { return f2; }
	inline t749510018 ** fag2() { return &f2; }
	inline void fs2(t749510018 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3714538611, f3)); }
	inline t2977871350 * fg3() const { return f3; }
	inline t2977871350 ** fag3() { return &f3; }
	inline void fs3(t2977871350 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
