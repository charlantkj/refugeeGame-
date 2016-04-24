#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t273828612;
struct t58506160;
struct String_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3432067208  : public Il2CppObject
{
public:
	t273828612 * f0;
	bool f1;
	t58506160* f2;
	String_t* f3;
	String_t* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3432067208, f0)); }
	inline t273828612 * fg0() const { return f0; }
	inline t273828612 ** fag0() { return &f0; }
	inline void fs0(t273828612 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3432067208, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3432067208, f2)); }
	inline t58506160* fg2() const { return f2; }
	inline t58506160** fag2() { return &f2; }
	inline void fs2(t58506160* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3432067208, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3432067208, f4)); }
	inline String_t* fg4() const { return f4; }
	inline String_t** fag4() { return &f4; }
	inline void fs4(String_t* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
