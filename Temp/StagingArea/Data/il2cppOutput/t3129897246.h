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
#include "t3525329789.h"
#include "t1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3129897246 
{
public:
	String_t* f0;
	t3525329789  f1;
	t1891715979  f2;
	t3525329789  f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3129897246, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3129897246, f1)); }
	inline t3525329789  fg1() const { return f1; }
	inline t3525329789 * fag1() { return &f1; }
	inline void fs1(t3525329789  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3129897246, f2)); }
	inline t1891715979  fg2() const { return f2; }
	inline t1891715979 * fag2() { return &f2; }
	inline void fs2(t1891715979  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3129897246, f3)); }
	inline t3525329789  fg3() const { return f3; }
	inline t3525329789 * fag3() { return &f3; }
	inline void fs3(t3525329789  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3129897246, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct t3129897246_marshaled_pinvoke
{
	char* f0;
	t3525329789_marshaled_pinvoke f1;
	t1891715979_marshaled_pinvoke f2;
	t3525329789_marshaled_pinvoke f3;
	int32_t f4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct t3129897246_marshaled_com
{
	uint16_t* f0;
	t3525329789_marshaled_com f1;
	t1891715979_marshaled_com f2;
	t3525329789_marshaled_com f3;
	int32_t f4;
};
