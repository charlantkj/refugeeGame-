#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct t1848703245;
struct t3804927312;

#include "t3455488335.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1099177929  : public t3455488335
{
public:
	bool f15;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1099177929, f15)); }
	inline bool fg15() const { return f15; }
	inline bool* fag15() { return &f15; }
	inline void fs15(bool value)
	{
		f15 = value;
	}
};

struct t1099177929_SFs
{
public:
	t3875263730 * f12;
	t3875263730 * f13;
	t1848703245 * f14;
	t3804927312* f16;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1099177929_SFs, f12)); }
	inline t3875263730 * fg12() const { return f12; }
	inline t3875263730 ** fag12() { return &f12; }
	inline void fs12(t3875263730 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1099177929_SFs, f13)); }
	inline t3875263730 * fg13() const { return f13; }
	inline t3875263730 ** fag13() { return &f13; }
	inline void fs13(t3875263730 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1099177929_SFs, f14)); }
	inline t1848703245 * fg14() const { return f14; }
	inline t1848703245 ** fag14() { return &f14; }
	inline void fs14(t1848703245 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1099177929_SFs, f16)); }
	inline t3804927312* fg16() const { return f16; }
	inline t3804927312** fag16() { return &f16; }
	inline void fs16(t3804927312* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
