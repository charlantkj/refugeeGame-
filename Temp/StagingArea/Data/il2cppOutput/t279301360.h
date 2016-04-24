#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct t2133601851;

#include "t2080656385.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t279301360  : public t2080656385
{
public:
	t58506160* f4;
	t2133601851* f5;
	t2133601851* f6;
	uint64_t f7;
	int32_t f8;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t279301360, f4)); }
	inline t58506160* fg4() const { return f4; }
	inline t58506160** fag4() { return &f4; }
	inline void fs4(t58506160* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t279301360, f5)); }
	inline t2133601851* fg5() const { return f5; }
	inline t2133601851** fag5() { return &f5; }
	inline void fs5(t2133601851* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t279301360, f6)); }
	inline t2133601851* fg6() const { return f6; }
	inline t2133601851** fag6() { return &f6; }
	inline void fs6(t2133601851* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t279301360, f7)); }
	inline uint64_t fg7() const { return f7; }
	inline uint64_t* fag7() { return &f7; }
	inline void fs7(uint64_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t279301360, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
