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
#include "t3638947579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3114874302 
{
public:
	String_t* f0;
	String_t* f1;
	t3638947579  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3114874302, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3114874302, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3114874302, f2)); }
	inline t3638947579  fg2() const { return f2; }
	inline t3638947579 * fag2() { return &f2; }
	inline void fs2(t3638947579  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.HumanBone
struct t3114874302_marshaled_pinvoke
{
	char* f0;
	char* f1;
	t3638947579_marshaled_pinvoke f2;
};
// Native definition for marshalling of: UnityEngine.HumanBone
struct t3114874302_marshaled_com
{
	uint16_t* f0;
	uint16_t* f1;
	t3638947579_marshaled_com f2;
};
