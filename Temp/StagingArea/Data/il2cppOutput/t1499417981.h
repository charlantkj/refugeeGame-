#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t933884113;
struct t4283993460;
struct t998400902;

#include "t3621744255.h"
#include "t3727503337.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1499417981  : public t3621744255
{
public:
	int32_t f16;
	t933884113 * f17;
	t4283993460 * f18;
	t998400902 * f19;
	bool f20;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1499417981, f16)); }
	inline int32_t fg16() const { return f16; }
	inline int32_t* fag16() { return &f16; }
	inline void fs16(int32_t value)
	{
		f16 = value;
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t1499417981, f17)); }
	inline t933884113 * fg17() const { return f17; }
	inline t933884113 ** fag17() { return &f17; }
	inline void fs17(t933884113 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t1499417981, f18)); }
	inline t4283993460 * fg18() const { return f18; }
	inline t4283993460 ** fag18() { return &f18; }
	inline void fs18(t4283993460 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t1499417981, f19)); }
	inline t998400902 * fg19() const { return f19; }
	inline t998400902 ** fag19() { return &f19; }
	inline void fs19(t998400902 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t1499417981, f20)); }
	inline bool fg20() const { return f20; }
	inline bool* fag20() { return &f20; }
	inline void fs20(bool value)
	{
		f20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
