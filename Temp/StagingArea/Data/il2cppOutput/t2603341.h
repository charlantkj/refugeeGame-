#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3802381858;

#include "t4014882752.h"
#include "t2553938587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2603341 
{
public:
	String_t* f3;
	t2553938587  f4;
	float f5;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2603341, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2603341, f4)); }
	inline t2553938587  fg4() const { return f4; }
	inline t2553938587 * fag4() { return &f4; }
	inline void fs4(t2553938587  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2603341, f5)); }
	inline float fg5() const { return f5; }
	inline float* fag5() { return &f5; }
	inline void fs5(float value)
	{
		f5 = value;
	}
};

struct t2603341_SFs
{
public:
	String_t* f0;
	String_t* f1;
	t3802381858 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2603341_SFs, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2603341_SFs, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2603341_SFs, f2)); }
	inline t3802381858 * fg2() const { return f2; }
	inline t3802381858 ** fag2() { return &f2; }
	inline void fs2(t3802381858 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Candlelight.UI.HyperTextStyles/Text
struct t2603341_marshaled_pinvoke
{
	char* f3;
	t2553938587_marshaled_pinvoke f4;
	float f5;
};
// Native definition for marshalling of: Candlelight.UI.HyperTextStyles/Text
struct t2603341_marshaled_com
{
	uint16_t* f3;
	t2553938587_marshaled_com f4;
	float f5;
};
