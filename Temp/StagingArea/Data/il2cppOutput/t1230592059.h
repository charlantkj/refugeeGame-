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

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1230592059  : public Il2CppObject
{
public:
	t2133601851* f0;
	uint64_t f1;
	t58506160* f2;
	int32_t f3;
	t2133601851* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1230592059, f0)); }
	inline t2133601851* fg0() const { return f0; }
	inline t2133601851** fag0() { return &f0; }
	inline void fs0(t2133601851* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1230592059, f1)); }
	inline uint64_t fg1() const { return f1; }
	inline uint64_t* fag1() { return &f1; }
	inline void fs1(uint64_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1230592059, f2)); }
	inline t58506160* fg2() const { return f2; }
	inline t58506160** fag2() { return &f2; }
	inline void fs2(t58506160* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1230592059, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1230592059, f4)); }
	inline t2133601851* fg4() const { return f4; }
	inline t2133601851** fag4() { return &f4; }
	inline void fs4(t2133601851* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
