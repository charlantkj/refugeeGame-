#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct MonoMethod_t;
struct t11523773;
struct t58506160;
struct t1074763138;
struct Il2CppObject;
struct t1967233988;
struct String_t;
struct t3431720054;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1712743773  : public Il2CppObject
{
public:
	MonoMethod_t * f0;
	t11523773* f1;
	t58506160* f2;
	t1074763138 * f3;
	Il2CppObject * f4;
	t1967233988 * f5;
	String_t* f6;
	t3431720054* f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1712743773, f0)); }
	inline MonoMethod_t * fg0() const { return f0; }
	inline MonoMethod_t ** fag0() { return &f0; }
	inline void fs0(MonoMethod_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1712743773, f1)); }
	inline t11523773* fg1() const { return f1; }
	inline t11523773** fag1() { return &f1; }
	inline void fs1(t11523773* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1712743773, f2)); }
	inline t58506160* fg2() const { return f2; }
	inline t58506160** fag2() { return &f2; }
	inline void fs2(t58506160* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1712743773, f3)); }
	inline t1074763138 * fg3() const { return f3; }
	inline t1074763138 ** fag3() { return &f3; }
	inline void fs3(t1074763138 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1712743773, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1712743773, f5)); }
	inline t1967233988 * fg5() const { return f5; }
	inline t1967233988 ** fag5() { return &f5; }
	inline void fs5(t1967233988 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1712743773, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1712743773, f7)); }
	inline t3431720054* fg7() const { return f7; }
	inline t3431720054** fag7() { return &f7; }
	inline void fs7(t3431720054* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
