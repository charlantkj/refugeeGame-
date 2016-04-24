#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t2200082950;
struct t3432067208;
struct t639738773;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2063694561  : public Il2CppObject
{
public:
	String_t* f0;
	t2200082950 * f1;
	t3432067208 * f2;
	t639738773 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2063694561, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2063694561, f1)); }
	inline t2200082950 * fg1() const { return f1; }
	inline t2200082950 ** fag1() { return &f1; }
	inline void fs1(t2200082950 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2063694561, f2)); }
	inline t3432067208 * fg2() const { return f2; }
	inline t3432067208 ** fag2() { return &f2; }
	inline void fs2(t3432067208 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2063694561, f3)); }
	inline t639738773 * fg3() const { return f3; }
	inline t639738773 ** fag3() { return &f3; }
	inline void fs3(t639738773 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
