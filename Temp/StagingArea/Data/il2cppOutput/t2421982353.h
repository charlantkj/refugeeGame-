#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2133601851;
struct t58506160;

#include "t4002183040.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2421982353  : public t4002183040
{
public:
	t2133601851* f4;
	uint64_t f5;
	t58506160* f6;
	int32_t f7;
	t2133601851* f8;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2421982353, f4)); }
	inline t2133601851* fg4() const { return f4; }
	inline t2133601851** fag4() { return &f4; }
	inline void fs4(t2133601851* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2421982353, f5)); }
	inline uint64_t fg5() const { return f5; }
	inline uint64_t* fag5() { return &f5; }
	inline void fs5(uint64_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2421982353, f6)); }
	inline t58506160* fg6() const { return f6; }
	inline t58506160** fag6() { return &f6; }
	inline void fs6(t58506160* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2421982353, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2421982353, f8)); }
	inline t2133601851* fg8() const { return f8; }
	inline t2133601851** fag8() { return &f8; }
	inline void fs8(t2133601851* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
