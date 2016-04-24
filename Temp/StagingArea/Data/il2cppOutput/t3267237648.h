#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4287691406;
struct t765486855;
struct String_t;
struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3267237648  : public Type_t
{
public:
	t4287691406 * f8;
	t765486855 * f9;
	String_t* f10;
	Type_t * f11;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3267237648, f8)); }
	inline t4287691406 * fg8() const { return f8; }
	inline t4287691406 ** fag8() { return &f8; }
	inline void fs8(t4287691406 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3267237648, f9)); }
	inline t765486855 * fg9() const { return f9; }
	inline t765486855 ** fag9() { return &f9; }
	inline void fs9(t765486855 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3267237648, f10)); }
	inline String_t* fg10() const { return f10; }
	inline String_t** fag10() { return &f10; }
	inline void fs10(String_t* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3267237648, f11)); }
	inline Type_t * fg11() const { return f11; }
	inline Type_t ** fag11() { return &f11; }
	inline void fs11(Type_t * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
