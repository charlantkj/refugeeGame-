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

#include "t1557559991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2380770080  : public t1557559991
{
public:
	t2133601851* f4;
	t2133601851* f5;
	uint64_t f6;
	t58506160* f7;
	int32_t f8;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2380770080, f4)); }
	inline t2133601851* fg4() const { return f4; }
	inline t2133601851** fag4() { return &f4; }
	inline void fs4(t2133601851* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2380770080, f5)); }
	inline t2133601851* fg5() const { return f5; }
	inline t2133601851** fag5() { return &f5; }
	inline void fs5(t2133601851* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2380770080, f6)); }
	inline uint64_t fg6() const { return f6; }
	inline uint64_t* fag6() { return &f6; }
	inline void fs6(uint64_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2380770080, f7)); }
	inline t58506160* fg7() const { return f7; }
	inline t58506160** fag7() { return &f7; }
	inline void fs7(t58506160* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2380770080, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}
};

struct t2380770080_SFs
{
public:
	t2133601851* f9;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2380770080_SFs, f9)); }
	inline t2133601851* fg9() const { return f9; }
	inline t2133601851** fag9() { return &f9; }
	inline void fs9(t2133601851* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
