#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t1553882356.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2251026098  : public t1553882356
{
public:
	t3525329788  f12;
	t3525329788  f13;
	bool f14;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t2251026098, f12)); }
	inline t3525329788  fg12() const { return f12; }
	inline t3525329788 * fag12() { return &f12; }
	inline void fs12(t3525329788  value)
	{
		f12 = value;
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t2251026098, f13)); }
	inline t3525329788  fg13() const { return f13; }
	inline t3525329788 * fag13() { return &f13; }
	inline void fs13(t3525329788  value)
	{
		f13 = value;
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t2251026098, f14)); }
	inline bool fg14() const { return f14; }
	inline bool* fag14() { return &f14; }
	inline void fs14(bool value)
	{
		f14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
