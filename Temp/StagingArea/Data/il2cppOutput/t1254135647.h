#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct t2121638921;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1254135647  : public Il2CppObject
{
public:
	uint8_t f0;
	t58506160* f1;
	t2121638921 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1254135647, f0)); }
	inline uint8_t fg0() const { return f0; }
	inline uint8_t* fag0() { return &f0; }
	inline void fs0(uint8_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1254135647, f1)); }
	inline t58506160* fg1() const { return f1; }
	inline t58506160** fag1() { return &f1; }
	inline void fs1(t58506160* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1254135647, f2)); }
	inline t2121638921 * fg2() const { return f2; }
	inline t2121638921 ** fag2() { return &f2; }
	inline void fs2(t2121638921 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
