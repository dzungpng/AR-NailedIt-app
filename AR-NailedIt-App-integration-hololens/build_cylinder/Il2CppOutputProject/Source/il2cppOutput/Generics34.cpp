#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);

// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
inline int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
inline int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
inline bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, RuntimeObject *, const RuntimeMethod*))StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared)(__this, ___obj0, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
inline int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared)(__this, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
inline String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0014:
	{
		int32_t L_2 = (int32_t)__this->get_m_Value_1();
		G_B3_0 = L_2;
	}

IL_001a:
	{
		V_1 = (int32_t)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Specificity_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B(_thisAdjusted, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	{
		__this->set_m_Specificity_2(0);
		int32_t L_0 = ___keyword1;
		__this->set_m_Keyword_0(L_0);
		int32_t L_1 = ___v0;
		__this->set_m_Value_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_AdjustorThunk (RuntimeObject * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82(_thisAdjusted, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_mCBBFEC68B4112344CE885DAA95737BD217263E3E_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___lhs0, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___lhs0;
		int32_t L_1 = (int32_t)L_0.get_m_Keyword_0();
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_2 = ___rhs1;
		int32_t L_3 = (int32_t)L_2.get_m_Keyword_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = ___lhs0;
		int32_t L_5 = (int32_t)L_4.get_m_Value_1();
		int32_t L_6 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_7 = ___rhs1;
		int32_t L_8 = (int32_t)L_7.get_m_Value_1();
		int32_t L_9 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_9))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___other0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_2 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_0, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (bool)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_AdjustorThunk (RuntimeObject * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002c;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )((*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_5 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = (bool)L_5;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)((int32_t)917506989);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)__this->get_address_of_m_Keyword_0();
		Il2CppFakeBox<int32_t> L_2(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)-1521134295))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t* L_5 = (int32_t*)__this->get_address_of_m_Value_1();
		Il2CppFakeBox<int32_t> L_6(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_6));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1521134295))), (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t* L_9 = (int32_t*)__this->get_address_of_m_Specificity_2();
		int32_t L_10 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_9, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)-1521134295))), (int32_t)L_10));
		int32_t L_11 = V_0;
		V_1 = (int32_t)L_11;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94(_thisAdjusted, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		String_t* L_3 = ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (String_t*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
