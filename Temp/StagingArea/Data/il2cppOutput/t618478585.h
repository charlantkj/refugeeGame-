#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1809983122;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t618478585 
{
public:
	t1809983122* f0;
	int32_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t618478585, f0)); }
	inline t1809983122* fg0() const { return f0; }
	inline t1809983122** fag0() { return &f0; }
	inline void fs0(t1809983122* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t618478585, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
struct t618478585_marshaled_pinvoke
{
	int32_t* f0;
	int32_t f1;
};
// Native definition for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
struct t618478585_marshaled_com
{
	int32_t* f0;
	int32_t f1;
};
