#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t180559927;

#include "t1611780840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1189038695  : public t1611780840
{
public:
	t180559927 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1189038695, f2)); }
	inline t180559927 * fg2() const { return f2; }
	inline t180559927 ** fag2() { return &f2; }
	inline void fs2(t180559927 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
