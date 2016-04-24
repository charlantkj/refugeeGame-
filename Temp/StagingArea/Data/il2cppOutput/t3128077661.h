#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t339033936.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3128077661  : public Il2CppObject
{
public:
	t339033936  f0;
	t339033936  f1;
	t763862892  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3128077661, f0)); }
	inline t339033936  fg0() const { return f0; }
	inline t339033936 * fag0() { return &f0; }
	inline void fs0(t339033936  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3128077661, f1)); }
	inline t339033936  fg1() const { return f1; }
	inline t339033936 * fag1() { return &f1; }
	inline void fs1(t339033936  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3128077661, f2)); }
	inline t763862892  fg2() const { return f2; }
	inline t763862892 * fag2() { return &f2; }
	inline void fs2(t763862892  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
