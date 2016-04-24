#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t58506160;

#include "t374235568.h"
#include "t3002376501.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t969036148  : public t374235568
{
public:
	t58506160* f6;
	String_t* f7;
	int32_t f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t969036148, f6)); }
	inline t58506160* fg6() const { return f6; }
	inline t58506160** fag6() { return &f6; }
	inline void fs6(t58506160* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t969036148, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t969036148, f8)); }
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
