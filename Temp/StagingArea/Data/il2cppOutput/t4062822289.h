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

#include "Il2CppObject.h"
#include "t339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4062822289  : public Il2CppObject
{
public:
	bool f1;
	t339033936  f2;
	String_t* f3;
	t58506160* f4;
	t58506160* f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4062822289, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4062822289, f2)); }
	inline t339033936  fg2() const { return f2; }
	inline t339033936 * fag2() { return &f2; }
	inline void fs2(t339033936  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4062822289, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4062822289, f4)); }
	inline t58506160* fg4() const { return f4; }
	inline t58506160** fag4() { return &f4; }
	inline void fs4(t58506160* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4062822289, f5)); }
	inline t58506160* fg5() const { return f5; }
	inline t58506160** fag5() { return &f5; }
	inline void fs5(t58506160* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t4062822289_SFs
{
public:
	int32_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4062822289_SFs, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
