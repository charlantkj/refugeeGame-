#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t1645813025;
struct t3792618586;
struct t3802381858;

#include "Il2CppArray.h"
#include "t1122151684.h"
#include "t1645813025.h"
#include "t3792618586.h"
#include "t3725932776.h"
#include "t3266528785.h"
#include "t3802381858.h"

#pragma once
struct t256805485  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1122151684  m_Items[1];

public:
	inline t1122151684  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1122151684 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1122151684  value)
	{
		m_Items[index] = value;
	}
};
struct t3726953788  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1645813025 * m_Items[1];

public:
	inline t1645813025 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1645813025 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1645813025 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t1388768511  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3792618586 * m_Items[1];

public:
	inline t3792618586 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3792618586 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3792618586 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t1555725945  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3725932776  m_Items[1];

public:
	inline t3725932776  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3725932776 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3725932776  value)
	{
		m_Items[index] = value;
	}
};
struct t1246605964  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3266528785  m_Items[1];

public:
	inline t3266528785  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3266528785 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3266528785  value)
	{
		m_Items[index] = value;
	}
};
struct t3852020503  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3802381858 * m_Items[1];

public:
	inline t3802381858 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3802381858 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3802381858 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
