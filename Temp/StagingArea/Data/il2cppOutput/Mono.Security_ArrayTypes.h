#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t1694088928;

#include "Il2CppArray.h"
#include "t1694088928.h"
#include "t2725032177.h"

#pragma once
struct t909469383  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1694088928 * m_Items[1];

public:
	inline t1694088928 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1694088928 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1694088928 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t3796754476  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
