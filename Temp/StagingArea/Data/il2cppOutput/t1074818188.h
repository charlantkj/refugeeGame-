#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t563003706;
struct t1439411180;
struct t3148194463;

#include "t324477170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1074818188  : public t324477170
{
public:
	t563003706 * f1;
	t1439411180 * f2;
	t3148194463 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1074818188, f1)); }
	inline t563003706 * fg1() const { return f1; }
	inline t563003706 ** fag1() { return &f1; }
	inline void fs1(t563003706 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1074818188, f2)); }
	inline t1439411180 * fg2() const { return f2; }
	inline t1439411180 ** fag2() { return &f2; }
	inline void fs2(t1439411180 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1074818188, f3)); }
	inline t3148194463 * fg3() const { return f3; }
	inline t3148194463 ** fag3() { return &f3; }
	inline void fs3(t3148194463 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
