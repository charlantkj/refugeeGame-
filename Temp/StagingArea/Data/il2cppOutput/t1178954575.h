#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3726148045;
struct t3257378130;
struct t4199006061;
struct t1582269749;

#include "t589897109.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1178954575  : public t589897109
{
public:
	t3726148045 * f16;
	t3257378130 * f17;
	t4199006061 * f18;
	t1582269749 * f19;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1178954575, f16)); }
	inline t3726148045 * fg16() const { return f16; }
	inline t3726148045 ** fag16() { return &f16; }
	inline void fs16(t3726148045 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t1178954575, f17)); }
	inline t3257378130 * fg17() const { return f17; }
	inline t3257378130 ** fag17() { return &f17; }
	inline void fs17(t3257378130 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t1178954575, f18)); }
	inline t4199006061 * fg18() const { return f18; }
	inline t4199006061 ** fag18() { return &f18; }
	inline void fs18(t4199006061 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t1178954575, f19)); }
	inline t1582269749 * fg19() const { return f19; }
	inline t1582269749 ** fag19() { return &f19; }
	inline void fs19(t1582269749 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
