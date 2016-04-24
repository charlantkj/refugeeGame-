#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t219029575;
struct t180559927;
struct t58506160;
struct t1611780840;
struct t3416858730;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2158806251  : public Il2CppObject
{
public:
	t219029575 * f0;
	t180559927 * f1;
	t58506160* f2;
	t1611780840 * f3;
	t3416858730* f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2158806251, f0)); }
	inline t219029575 * fg0() const { return f0; }
	inline t219029575 ** fag0() { return &f0; }
	inline void fs0(t219029575 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2158806251, f1)); }
	inline t180559927 * fg1() const { return f1; }
	inline t180559927 ** fag1() { return &f1; }
	inline void fs1(t180559927 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2158806251, f2)); }
	inline t58506160* fg2() const { return f2; }
	inline t58506160** fag2() { return &f2; }
	inline void fs2(t58506160* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2158806251, f3)); }
	inline t1611780840 * fg3() const { return f3; }
	inline t1611780840 ** fag3() { return &f3; }
	inline void fs3(t1611780840 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2158806251, f4)); }
	inline t3416858730* fg4() const { return f4; }
	inline t3416858730** fag4() { return &f4; }
	inline void fs4(t3416858730* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2158806251, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
