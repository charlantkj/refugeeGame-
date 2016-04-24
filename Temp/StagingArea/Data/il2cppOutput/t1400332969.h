#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2632194320;
struct t11523773;
struct t1612618265;
struct Type_t;
struct String_t;
struct t190145395;

#include "t524563129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1400332969  : public t524563129
{
public:
	Il2CppObject * f11;
	t11523773* f12;
	Il2CppObject * f13;
	Type_t * f14;
	String_t* f15;
	bool f16;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1400332969, f11)); }
	inline Il2CppObject * fg11() const { return f11; }
	inline Il2CppObject ** fag11() { return &f11; }
	inline void fs11(Il2CppObject * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1400332969, f12)); }
	inline t11523773* fg12() const { return f12; }
	inline t11523773** fag12() { return &f12; }
	inline void fs12(t11523773* value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1400332969, f13)); }
	inline Il2CppObject * fg13() const { return f13; }
	inline Il2CppObject ** fag13() { return &f13; }
	inline void fs13(Il2CppObject * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1400332969, f14)); }
	inline Type_t * fg14() const { return f14; }
	inline Type_t ** fag14() { return &f14; }
	inline void fs14(Type_t * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1400332969, f15)); }
	inline String_t* fg15() const { return f15; }
	inline String_t** fag15() { return &f15; }
	inline void fs15(String_t* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1400332969, f16)); }
	inline bool fg16() const { return f16; }
	inline bool* fag16() { return &f16; }
	inline void fs16(bool value)
	{
		f16 = value;
	}
};

struct t1400332969_SFs
{
public:
	t190145395 * f17;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t1400332969_SFs, f17)); }
	inline t190145395 * fg17() const { return f17; }
	inline t190145395 ** fag17() { return &f17; }
	inline void fs17(t190145395 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
