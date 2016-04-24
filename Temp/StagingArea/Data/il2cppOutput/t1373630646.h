#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3875263730;
struct t3128077661;

#include "t764070862.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1373630646  : public t764070862
{
public:
	String_t* f1;
	String_t* f2;
	t3875263730 * f3;
	int64_t f4;
	t763862892  f5;
	t763862892  f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1373630646, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1373630646, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1373630646, f3)); }
	inline t3875263730 * fg3() const { return f3; }
	inline t3875263730 ** fag3() { return &f3; }
	inline void fs3(t3875263730 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1373630646, f4)); }
	inline int64_t fg4() const { return f4; }
	inline int64_t* fag4() { return &f4; }
	inline void fs4(int64_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1373630646, f5)); }
	inline t763862892  fg5() const { return f5; }
	inline t763862892 * fag5() { return &f5; }
	inline void fs5(t763862892  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1373630646, f6)); }
	inline t763862892  fg6() const { return f6; }
	inline t763862892 * fag6() { return &f6; }
	inline void fs6(t763862892  value)
	{
		f6 = value;
	}
};

struct t1373630646_SFs
{
public:
	int32_t f7;
	t3128077661 * f8;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1373630646_SFs, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1373630646_SFs, f8)); }
	inline t3128077661 * fg8() const { return f8; }
	inline t3128077661 ** fag8() { return &f8; }
	inline void fs8(t3128077661 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
