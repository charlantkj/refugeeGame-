#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2121638921;
struct t190145395;

#include "t1510964269.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t973649415  : public t1510964269
{
public:
	t2121638921 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t973649415, f3)); }
	inline t2121638921 * fg3() const { return f3; }
	inline t2121638921 ** fag3() { return &f3; }
	inline void fs3(t2121638921 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t973649415_SFs
{
public:
	t190145395 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t973649415_SFs, f4)); }
	inline t190145395 * fg4() const { return f4; }
	inline t190145395 ** fag4() { return &f4; }
	inline void fs4(t190145395 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
