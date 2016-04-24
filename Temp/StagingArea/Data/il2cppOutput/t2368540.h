#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2322387786;
struct String_t;
struct t3598023821;
struct t1759801103;

#include "t2998278102.h"
#include "t2368538.h"
#include "t1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2368540  : public t2998278102
{
public:
	t2322387786 * f2;
	String_t* f3;
	t3598023821 * f4;
	t1759801103 * f5;
	int32_t f6;
	String_t* f7;
	t2368538  f8;
	t1588175760  f9;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2368540, f2)); }
	inline t2322387786 * fg2() const { return f2; }
	inline t2322387786 ** fag2() { return &f2; }
	inline void fs2(t2322387786 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2368540, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2368540, f4)); }
	inline t3598023821 * fg4() const { return f4; }
	inline t3598023821 ** fag4() { return &f4; }
	inline void fs4(t3598023821 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2368540, f5)); }
	inline t1759801103 * fg5() const { return f5; }
	inline t1759801103 ** fag5() { return &f5; }
	inline void fs5(t1759801103 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2368540, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2368540, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2368540, f8)); }
	inline t2368538  fg8() const { return f8; }
	inline t2368538 * fag8() { return &f8; }
	inline void fs8(t2368538  value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2368540, f9)); }
	inline t1588175760  fg9() const { return f9; }
	inline t1588175760 * fag9() { return &f9; }
	inline void fs9(t1588175760  value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
