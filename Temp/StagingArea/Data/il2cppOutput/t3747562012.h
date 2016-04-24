#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t24372250;
struct t58506160;

#include "t3076212156.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3747562012  : public t3076212156
{
public:
	t24372250 * f5;
	bool f6;
	t58506160* f7;
	t58506160* f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3747562012, f5)); }
	inline t24372250 * fg5() const { return f5; }
	inline t24372250 ** fag5() { return &f5; }
	inline void fs5(t24372250 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3747562012, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3747562012, f7)); }
	inline t58506160* fg7() const { return f7; }
	inline t58506160** fag7() { return &f7; }
	inline void fs7(t58506160* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3747562012, f8)); }
	inline t58506160* fg8() const { return f8; }
	inline t58506160** fag8() { return &f8; }
	inline void fs8(t58506160* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
