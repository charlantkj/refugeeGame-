#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct t1084170289;

#include "t180559927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t445806535  : public t180559927
{
public:
	bool f28;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t445806535, f28)); }
	inline bool fg28() const { return f28; }
	inline bool* fag28() { return &f28; }
	inline void fs28(bool value)
	{
		f28 = value;
	}
};

struct t445806535_SFs
{
public:
	t58506160* f29;
	t1084170289* f30;

public:
	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t445806535_SFs, f29)); }
	inline t58506160* fg29() const { return f29; }
	inline t58506160** fag29() { return &f29; }
	inline void fs29(t58506160* value)
	{
		f29 = value;
		Il2CppCodeGenWriteBarrier(&f29, value);
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t445806535_SFs, f30)); }
	inline t1084170289* fg30() const { return f30; }
	inline t1084170289** fag30() { return &f30; }
	inline void fs30(t1084170289* value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
