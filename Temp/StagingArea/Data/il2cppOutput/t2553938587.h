#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t4014882752.h"
#include "t1975910095.h"
#include "t1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2553938587 
{
public:
	float f0;
	int32_t f1;
	bool f2;
	t1588175760  f3;
	String_t* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2553938587, f0)); }
	inline float fg0() const { return f0; }
	inline float* fag0() { return &f0; }
	inline void fs0(float value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2553938587, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2553938587, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2553938587, f3)); }
	inline t1588175760  fg3() const { return f3; }
	inline t1588175760 * fag3() { return &f3; }
	inline void fs3(t1588175760  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2553938587, f4)); }
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
// Native definition for marshalling of: Candlelight.RichTextStyle
struct t2553938587_marshaled_pinvoke
{
	float f0;
	int32_t f1;
	int32_t f2;
	t1588175760_marshaled_pinvoke f3;
	char* f4;
};
// Native definition for marshalling of: Candlelight.RichTextStyle
struct t2553938587_marshaled_com
{
	float f0;
	int32_t f1;
	int32_t f2;
	t1588175760_marshaled_com f3;
	uint16_t* f4;
};
