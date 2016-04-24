#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3632243084;
struct t1890038195;
struct t3188634326;

#include "Il2CppObject.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t452810033  : public Il2CppObject
{
public:
	t3632243084 * f0;
	t1890038195 * f1;
	t3188634326* f2;
	t3525329788  f3;
	bool f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t452810033, f0)); }
	inline t3632243084 * fg0() const { return f0; }
	inline t3632243084 ** fag0() { return &f0; }
	inline void fs0(t3632243084 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t452810033, f1)); }
	inline t1890038195 * fg1() const { return f1; }
	inline t1890038195 ** fag1() { return &f1; }
	inline void fs1(t1890038195 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t452810033, f2)); }
	inline t3188634326* fg2() const { return f2; }
	inline t3188634326** fag2() { return &f2; }
	inline void fs2(t3188634326* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t452810033, f3)); }
	inline t3525329788  fg3() const { return f3; }
	inline t3525329788 * fag3() { return &f3; }
	inline void fs3(t3525329788  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t452810033, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
