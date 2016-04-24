#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4123145639;
struct t58506160;

#include "t720149587.h"
#include "t1150764700.h"
#include "t2785698635.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t276412187  : public t720149587
{
public:
	t4123145639 * f5;
	uint8_t f6;
	uint8_t f7;
	t58506160* f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t276412187, f5)); }
	inline t4123145639 * fg5() const { return f5; }
	inline t4123145639 ** fag5() { return &f5; }
	inline void fs5(t4123145639 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t276412187, f6)); }
	inline uint8_t fg6() const { return f6; }
	inline uint8_t* fag6() { return &f6; }
	inline void fs6(uint8_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t276412187, f7)); }
	inline uint8_t fg7() const { return f7; }
	inline uint8_t* fag7() { return &f7; }
	inline void fs7(uint8_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t276412187, f8)); }
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
