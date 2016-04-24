#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t24372250;
struct t4111311066;

#include "t3076212156.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1559704864  : public t3076212156
{
public:
	bool f5;
	String_t* f6;
	t24372250 * f7;
	t4111311066 * f8;
	int32_t f9;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1559704864, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1559704864, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1559704864, f7)); }
	inline t24372250 * fg7() const { return f7; }
	inline t24372250 ** fag7() { return &f7; }
	inline void fs7(t24372250 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1559704864, f8)); }
	inline t4111311066 * fg8() const { return f8; }
	inline t4111311066 ** fag8() { return &f8; }
	inline void fs8(t4111311066 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1559704864, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
