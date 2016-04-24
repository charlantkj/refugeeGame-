#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;

#include "t3745421912.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1769787186  : public t3745421912
{
public:
	t58506160* f12;
	t58506160* f13;
	uint8_t f14;
	uint8_t f15;
	bool f16;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1769787186, f12)); }
	inline t58506160* fg12() const { return f12; }
	inline t58506160** fag12() { return &f12; }
	inline void fs12(t58506160* value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1769787186, f13)); }
	inline t58506160* fg13() const { return f13; }
	inline t58506160** fag13() { return &f13; }
	inline void fs13(t58506160* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1769787186, f14)); }
	inline uint8_t fg14() const { return f14; }
	inline uint8_t* fag14() { return &f14; }
	inline void fs14(uint8_t value)
	{
		f14 = value;
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1769787186, f15)); }
	inline uint8_t fg15() const { return f15; }
	inline uint8_t* fag15() { return &f15; }
	inline void fs15(uint8_t value)
	{
		f15 = value;
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1769787186, f16)); }
	inline bool fg16() const { return f16; }
	inline bool* fag16() { return &f16; }
	inline void fs16(bool value)
	{
		f16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
