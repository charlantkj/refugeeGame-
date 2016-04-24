#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3804927312;

#include "t717565226.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2934169611  : public t717565226
{
public:

public:
};

struct t2934169611_SFs
{
public:
	t3804927312* f14;
	uint16_t f15;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t2934169611_SFs, f14)); }
	inline t3804927312* fg14() const { return f14; }
	inline t3804927312** fag14() { return &f14; }
	inline void fs14(t3804927312* value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t2934169611_SFs, f15)); }
	inline uint16_t fg15() const { return f15; }
	inline uint16_t* fag15() { return &f15; }
	inline void fs15(uint16_t value)
	{
		f15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
