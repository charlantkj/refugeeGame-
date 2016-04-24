#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct String_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2715912549  : public Il2CppObject
{
public:
	String_t* f3;
	int32_t f4;
	t58506160* f5;
	t58506160* f6;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2715912549, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2715912549, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2715912549, f5)); }
	inline t58506160* fg5() const { return f5; }
	inline t58506160** fag5() { return &f5; }
	inline void fs5(t58506160* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2715912549, f6)); }
	inline t58506160* fg6() const { return f6; }
	inline t58506160** fag6() { return &f6; }
	inline void fs6(t58506160* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

struct t2715912549_SFs
{
public:
	t58506160* f0;
	t58506160* f1;
	t58506160* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2715912549_SFs, f0)); }
	inline t58506160* fg0() const { return f0; }
	inline t58506160** fag0() { return &f0; }
	inline void fs0(t58506160* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2715912549_SFs, f1)); }
	inline t58506160* fg1() const { return f1; }
	inline t58506160** fag1() { return &f1; }
	inline void fs1(t58506160* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2715912549_SFs, f2)); }
	inline t58506160* fg2() const { return f2; }
	inline t58506160** fag2() { return &f2; }
	inline void fs2(t58506160* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
