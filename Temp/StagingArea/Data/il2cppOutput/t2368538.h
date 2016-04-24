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
#include "t2553938587.h"
#include "t2245020947.h"
#include "t2932833412.h"
#include "t3598143874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2368538 
{
public:
	float f1;
	t2553938587  f2;
	t2245020947  f3;
	int32_t f4;
	int32_t f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2368538, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2368538, f2)); }
	inline t2553938587  fg2() const { return f2; }
	inline t2553938587 * fag2() { return &f2; }
	inline void fs2(t2553938587  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2368538, f3)); }
	inline t2245020947  fg3() const { return f3; }
	inline t2245020947 * fag3() { return &f3; }
	inline void fs3(t2245020947  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2368538, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2368538, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Candlelight.UI.HyperTextStyles/Link
struct t2368538_marshaled_pinvoke
{
	float f1;
	t2553938587_marshaled_pinvoke f2;
	t2245020947_marshaled_pinvoke f3;
	int32_t f4;
	int32_t f5;
};
// Native definition for marshalling of: Candlelight.UI.HyperTextStyles/Link
struct t2368538_marshaled_com
{
	float f1;
	t2553938587_marshaled_com f2;
	t2245020947_marshaled_com f3;
	int32_t f4;
	int32_t f5;
};
