#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3802381858;
struct t1809983122;
struct String_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1961582680  : public Il2CppObject
{
public:
	t3802381858 * f0;
	int32_t f1;
	t1809983122* f2;
	String_t* f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1961582680, f0)); }
	inline t3802381858 * fg0() const { return f0; }
	inline t3802381858 ** fag0() { return &f0; }
	inline void fs0(t3802381858 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1961582680, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1961582680, f2)); }
	inline t1809983122* fg2() const { return f2; }
	inline t1809983122** fag2() { return &f2; }
	inline void fs2(t1809983122* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1961582680, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
