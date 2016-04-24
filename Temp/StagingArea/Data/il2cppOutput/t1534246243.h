#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2475331585;
struct t1623036922;

#include "t1795169203.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1534246243  : public t1795169203
{
public:
	t2475331585 * f13;
	t2475331585 * f14;
	t1623036922 * f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1534246243, f13)); }
	inline t2475331585 * fg13() const { return f13; }
	inline t2475331585 ** fag13() { return &f13; }
	inline void fs13(t2475331585 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1534246243, f14)); }
	inline t2475331585 * fg14() const { return f14; }
	inline t2475331585 ** fag14() { return &f14; }
	inline void fs14(t2475331585 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1534246243, f15)); }
	inline t1623036922 * fg15() const { return f15; }
	inline t1623036922 ** fag15() { return &f15; }
	inline void fs15(t1623036922 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
