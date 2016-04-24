#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t770218424.h"
#include "t1588175760.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1464142665  : public t770218424
{
public:
	t1588175760  f4;
	t3525329788  f5;
	bool f6;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1464142665, f4)); }
	inline t1588175760  fg4() const { return f4; }
	inline t1588175760 * fag4() { return &f4; }
	inline void fs4(t1588175760  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1464142665, f5)); }
	inline t3525329788  fg5() const { return f5; }
	inline t3525329788 * fag5() { return &f5; }
	inline void fs5(t3525329788  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1464142665, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
