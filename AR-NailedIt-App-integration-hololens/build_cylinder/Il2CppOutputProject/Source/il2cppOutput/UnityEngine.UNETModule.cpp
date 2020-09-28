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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_tD8E671D91FFB753EC5F4FC7C324234892AA95C60;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E;
// UnityEngine.Networking.HostTopology
struct HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t26E75B5ACAB89DE13EBAC4AA8E0E13347841225E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D94A3E043BACD0B38591356B66F06810809FD5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F8698CEFDCDE55FFE1C03B72612ECB78180ABB0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1F228190DF1EC528797D10EE3C3660FB8EFA34;
IL2CPP_EXTERN_C String_t* _stringLiteral20630ACA938E5758DAFF3EF6BC4826F7DA689650;
IL2CPP_EXTERN_C String_t* _stringLiteral387B62E37BCAB1BFF4EDD48E035DA8930020B409;
IL2CPP_EXTERN_C String_t* _stringLiteral38F7C8CA6D2DB82E26B83383CCB8E25E733E1143;
IL2CPP_EXTERN_C String_t* _stringLiteral624DCCC3DEBC22BAFED7C880638F1EE60B028051;
IL2CPP_EXTERN_C String_t* _stringLiteral749E8CB3DEBCE82E56E78E26BD6FFA210FD1FFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral80776E13CA7794662A560DED464C3CED6FE01142;
IL2CPP_EXTERN_C String_t* _stringLiteral862631514593F8B320BAC73C576021CF1A30D80A;
IL2CPP_EXTERN_C String_t* _stringLiteral8662B5BC4C9EDBFD19D167B43BF50C871090ED61;
IL2CPP_EXTERN_C String_t* _stringLiteralA6B691CD22F765E6D068C52A20320AFD6B3350E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB78E130E3F991601A421DCF79C4DAE7094A0BAAB;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D804AB91405ED8518D53CEF17A6231BDE0922B;
IL2CPP_EXTERN_C String_t* _stringLiteralC87FF14D0CB229E95B3CD2DD820E7330627B8C9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD00EA07C4D9E62F29BC81689FF949D9AD1A538FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDBC3A33DCFCF1BC7408EAE8F613073A053473919;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1C6588EE08D352D876C005202BEE7E76CA31AC;
IL2CPP_EXTERN_C String_t* _stringLiteralE42F2F27CE2C8053F03A90732377C722B8F25DFD;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7EA282D1824FA19F6080BC5C59DBFE32A3B0FD;
IL2CPP_EXTERN_C String_t* _stringLiteralF0280189A2C48E4F3636344127E94FF8145BFA43;
IL2CPP_EXTERN_C String_t* _stringLiteralF0B3A2B07784861FA0B2615D7890521B1DF0ED08;
IL2CPP_EXTERN_C const RuntimeMethod* ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0967733CC0BB777507EAACCDB3D676ED81DFE938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94F0D8A212C0DE30CE3FC0CE3D06A58E096207DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m594004920BE1EDA73B971F11EF4C2948E0C54ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m835F6ADEE28787E14FC82DE6E090EEB7AF1F1651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4AA3AF5856A01D239D59E737C82DC6197D0ACBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC050C1265F789AACDB6F7A03D3065460116AACF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3645BFAE222A2255766A797A98CBCAA14A968E3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m600D09E99239D4D71B89B1F64F8D8CD2126CCC9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6DEDD3C87E7678C580CDD6511D167EB030E81F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0CF211A8BC47B2907FB8C1DDE7FCE94BCA39BE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB246B8A19A6EE276F7A2730FA535E56B05BE7A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_Send_mB69353E15777B45E0A22B5006B6DA5C610C22CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal_Dispose_m5D91B1A753E70414FF71DD20DAAFB0122C126B84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal_Dispose_m951D9B0369609F00974989E0A595F7EBF2F361E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig__ctor_m13022BDB14367FC9C43C0ED824E7D5426445CE17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_get_ChannelCount_m567D018E60DB65C503CAB30A239CB36DA3E67C65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_get_SharedOrderChannelCount_m4FDFB1F0AD5846A0989632D82C89E25858F5A601_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal_Dispose_m95F17DCB6762742872C323459AA48FA6C2495E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal_Dispose_mA4DF2C3D9813A293D361C9CB3691E80AC0727265_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal__ctor_m2D08B1EDB463229E8E98B12F353413759BF03FD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology__ctor_m0FD79483FC711607C1558ED6DCCDD6CC0A9504E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology_get_SpecialConnectionConfigsCount_m54EF6FDA72F1BE8171F5F89FDDE101125568A324_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHost_m0BCF7C25405CAFFF5791A8C8690344C0A510E78A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHost_m1BFB0230E3CA31E4731409D4E07AB478426B5847_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Init_m4416B410338D6F2C49DCE9BC080EBD57733973B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Receive_m94165BFFB6721C9909B8ACAA28449D189FC14808_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Send_mB69353E15777B45E0A22B5006B6DA5C610C22CC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport__cctor_m2727A7CF15FDDE579F295BE23E065092A9AB8225_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t88DAE11FC70AD3FA2BAE1C9710015E566BDD8DF0 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____items_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct  List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B, ____items_1)); }
	inline List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t838316900CA53316A132DDBD3351152DCB0A210C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct  List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D, ____items_1)); }
	inline ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* get__items_1() const { return ____items_1; }
	inline ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D_StaticFields, ____emptyArray_5)); }
	inline ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ChannelQOSU5BU5D_tC2D1C9F7B107B590609C61D1354E175AE7BFF7C4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct  List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9, ____items_1)); }
	inline ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* get__items_1() const { return ____items_1; }
	inline ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9_StaticFields, ____emptyArray_5)); }
	inline ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConnectionConfigU5BU5D_tA927874CBB2B61424427C9D0F319895D09BC667E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct  ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.Networking.HostTopology
struct  HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_DefConfig_0)); }
	inline ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_SpecialConnections_2)); }
	inline List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpecialConnections_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};


// UnityEngine.Networking.NetworkTransport
struct  NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF  : public RuntimeObject
{
public:

public:
};

struct NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_StaticFields
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransport::s_nextSceneId
	int32_t ___s_nextSceneId_0;

public:
	inline static int32_t get_offset_of_s_nextSceneId_0() { return static_cast<int32_t>(offsetof(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_StaticFields, ___s_nextSceneId_0)); }
	inline int32_t get_s_nextSceneId_0() const { return ___s_nextSceneId_0; }
	inline int32_t* get_address_of_s_nextSceneId_0() { return &___s_nextSceneId_0; }
	inline void set_s_nextSceneId_0(int32_t value)
	{
		___s_nextSceneId_0 = value;
	}
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct  Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E, ___list_0)); }
	inline List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * get_list_0() const { return ___list_0; }
	inline List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E, ___current_3)); }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * get_current_3() const { return ___current_3; }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Networking.ChannelQOS>
struct  Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116, ___list_0)); }
	inline List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * get_list_0() const { return ___list_0; }
	inline List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116, ___current_3)); }
	inline ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * get_current_3() const { return ___current_3; }
	inline ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t7CD6A5404755AF70E854A849FCECC0B662C44B09 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t7CD6A5404755AF70E854A849FCECC0B662C44B09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ConnectionConfigInternal
struct  ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.HostTopologyInternal
struct  HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.HostTopologyInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_tF8892BD9284D150BB2F37F12949B583794A5CED8 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEventType_tF8892BD9284D150BB2F37F12949B583794A5CED8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.QosType
struct  QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.ChannelQOS
struct  ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F  : public RuntimeObject
{
public:
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BelongsSharedOrderChannel_1() { return static_cast<int32_t>(offsetof(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F, ___m_BelongsSharedOrderChannel_1)); }
	inline bool get_m_BelongsSharedOrderChannel_1() const { return ___m_BelongsSharedOrderChannel_1; }
	inline bool* get_address_of_m_BelongsSharedOrderChannel_1() { return &___m_BelongsSharedOrderChannel_1; }
	inline void set_m_BelongsSharedOrderChannel_1(bool value)
	{
		___m_BelongsSharedOrderChannel_1 = value;
	}
};


// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * ___m_SharedOrderChannels_27;

public:
	inline static int32_t get_offset_of_m_PacketSize_0() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_PacketSize_0)); }
	inline uint16_t get_m_PacketSize_0() const { return ___m_PacketSize_0; }
	inline uint16_t* get_address_of_m_PacketSize_0() { return &___m_PacketSize_0; }
	inline void set_m_PacketSize_0(uint16_t value)
	{
		___m_PacketSize_0 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_FragmentSize_1)); }
	inline uint16_t get_m_FragmentSize_1() const { return ___m_FragmentSize_1; }
	inline uint16_t* get_address_of_m_FragmentSize_1() { return &___m_FragmentSize_1; }
	inline void set_m_FragmentSize_1(uint16_t value)
	{
		___m_FragmentSize_1 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_ResendTimeout_2)); }
	inline uint32_t get_m_ResendTimeout_2() const { return ___m_ResendTimeout_2; }
	inline uint32_t* get_address_of_m_ResendTimeout_2() { return &___m_ResendTimeout_2; }
	inline void set_m_ResendTimeout_2(uint32_t value)
	{
		___m_ResendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_DisconnectTimeout_3)); }
	inline uint32_t get_m_DisconnectTimeout_3() const { return ___m_DisconnectTimeout_3; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_3() { return &___m_DisconnectTimeout_3; }
	inline void set_m_DisconnectTimeout_3(uint32_t value)
	{
		___m_DisconnectTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_ConnectTimeout_4)); }
	inline uint32_t get_m_ConnectTimeout_4() const { return ___m_ConnectTimeout_4; }
	inline uint32_t* get_address_of_m_ConnectTimeout_4() { return &___m_ConnectTimeout_4; }
	inline void set_m_ConnectTimeout_4(uint32_t value)
	{
		___m_ConnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_MinUpdateTimeout_5)); }
	inline uint32_t get_m_MinUpdateTimeout_5() const { return ___m_MinUpdateTimeout_5; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_5() { return &___m_MinUpdateTimeout_5; }
	inline void set_m_MinUpdateTimeout_5(uint32_t value)
	{
		___m_MinUpdateTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_PingTimeout_6)); }
	inline uint32_t get_m_PingTimeout_6() const { return ___m_PingTimeout_6; }
	inline uint32_t* get_address_of_m_PingTimeout_6() { return &___m_PingTimeout_6; }
	inline void set_m_PingTimeout_6(uint32_t value)
	{
		___m_PingTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_ReducedPingTimeout_7)); }
	inline uint32_t get_m_ReducedPingTimeout_7() const { return ___m_ReducedPingTimeout_7; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_7() { return &___m_ReducedPingTimeout_7; }
	inline void set_m_ReducedPingTimeout_7(uint32_t value)
	{
		___m_ReducedPingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_AllCostTimeout_8)); }
	inline uint32_t get_m_AllCostTimeout_8() const { return ___m_AllCostTimeout_8; }
	inline uint32_t* get_address_of_m_AllCostTimeout_8() { return &___m_AllCostTimeout_8; }
	inline void set_m_AllCostTimeout_8(uint32_t value)
	{
		___m_AllCostTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_NetworkDropThreshold_9)); }
	inline uint8_t get_m_NetworkDropThreshold_9() const { return ___m_NetworkDropThreshold_9; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_9() { return &___m_NetworkDropThreshold_9; }
	inline void set_m_NetworkDropThreshold_9(uint8_t value)
	{
		___m_NetworkDropThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_OverflowDropThreshold_10)); }
	inline uint8_t get_m_OverflowDropThreshold_10() const { return ___m_OverflowDropThreshold_10; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_10() { return &___m_OverflowDropThreshold_10; }
	inline void set_m_OverflowDropThreshold_10(uint8_t value)
	{
		___m_OverflowDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_MaxConnectionAttempt_11)); }
	inline uint8_t get_m_MaxConnectionAttempt_11() const { return ___m_MaxConnectionAttempt_11; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_11() { return &___m_MaxConnectionAttempt_11; }
	inline void set_m_MaxConnectionAttempt_11(uint8_t value)
	{
		___m_MaxConnectionAttempt_11 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_AckDelay_12)); }
	inline uint32_t get_m_AckDelay_12() const { return ___m_AckDelay_12; }
	inline uint32_t* get_address_of_m_AckDelay_12() { return &___m_AckDelay_12; }
	inline void set_m_AckDelay_12(uint32_t value)
	{
		___m_AckDelay_12 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_SendDelay_13)); }
	inline uint32_t get_m_SendDelay_13() const { return ___m_SendDelay_13; }
	inline uint32_t* get_address_of_m_SendDelay_13() { return &___m_SendDelay_13; }
	inline void set_m_SendDelay_13(uint32_t value)
	{
		___m_SendDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_MaxCombinedReliableMessageSize_14)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_14() const { return ___m_MaxCombinedReliableMessageSize_14; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_14() { return &___m_MaxCombinedReliableMessageSize_14; }
	inline void set_m_MaxCombinedReliableMessageSize_14(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_MaxCombinedReliableMessageCount_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_15() const { return ___m_MaxCombinedReliableMessageCount_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_15() { return &___m_MaxCombinedReliableMessageCount_15; }
	inline void set_m_MaxCombinedReliableMessageCount_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_MaxSentMessageQueueSize_16)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_16() const { return ___m_MaxSentMessageQueueSize_16; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_16() { return &___m_MaxSentMessageQueueSize_16; }
	inline void set_m_MaxSentMessageQueueSize_16(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_16 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_AcksType_17)); }
	inline int32_t get_m_AcksType_17() const { return ___m_AcksType_17; }
	inline int32_t* get_address_of_m_AcksType_17() { return &___m_AcksType_17; }
	inline void set_m_AcksType_17(int32_t value)
	{
		___m_AcksType_17 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_UsePlatformSpecificProtocols_18)); }
	inline bool get_m_UsePlatformSpecificProtocols_18() const { return ___m_UsePlatformSpecificProtocols_18; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_18() { return &___m_UsePlatformSpecificProtocols_18; }
	inline void set_m_UsePlatformSpecificProtocols_18(bool value)
	{
		___m_UsePlatformSpecificProtocols_18 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_InitialBandwidth_19)); }
	inline uint32_t get_m_InitialBandwidth_19() const { return ___m_InitialBandwidth_19; }
	inline uint32_t* get_address_of_m_InitialBandwidth_19() { return &___m_InitialBandwidth_19; }
	inline void set_m_InitialBandwidth_19(uint32_t value)
	{
		___m_InitialBandwidth_19 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_BandwidthPeakFactor_20)); }
	inline float get_m_BandwidthPeakFactor_20() const { return ___m_BandwidthPeakFactor_20; }
	inline float* get_address_of_m_BandwidthPeakFactor_20() { return &___m_BandwidthPeakFactor_20; }
	inline void set_m_BandwidthPeakFactor_20(float value)
	{
		___m_BandwidthPeakFactor_20 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_WebSocketReceiveBufferMaxSize_21)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_21() const { return ___m_WebSocketReceiveBufferMaxSize_21; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_21() { return &___m_WebSocketReceiveBufferMaxSize_21; }
	inline void set_m_WebSocketReceiveBufferMaxSize_21(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_21 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_UdpSocketReceiveBufferMaxSize_22)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_22() const { return ___m_UdpSocketReceiveBufferMaxSize_22; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_22() { return &___m_UdpSocketReceiveBufferMaxSize_22; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_22(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_SSLCertFilePath_23)); }
	inline String_t* get_m_SSLCertFilePath_23() const { return ___m_SSLCertFilePath_23; }
	inline String_t** get_address_of_m_SSLCertFilePath_23() { return &___m_SSLCertFilePath_23; }
	inline void set_m_SSLCertFilePath_23(String_t* value)
	{
		___m_SSLCertFilePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCertFilePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_SSLPrivateKeyFilePath_24)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_24() const { return ___m_SSLPrivateKeyFilePath_24; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_24() { return &___m_SSLPrivateKeyFilePath_24; }
	inline void set_m_SSLPrivateKeyFilePath_24(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLPrivateKeyFilePath_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_SSLCAFilePath_25)); }
	inline String_t* get_m_SSLCAFilePath_25() const { return ___m_SSLCAFilePath_25; }
	inline String_t** get_address_of_m_SSLCAFilePath_25() { return &___m_SSLCAFilePath_25; }
	inline void set_m_SSLCAFilePath_25(String_t* value)
	{
		___m_SSLCAFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCAFilePath_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Channels_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_Channels_26)); }
	inline List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * get_m_Channels_26() const { return ___m_Channels_26; }
	inline List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D ** get_address_of_m_Channels_26() { return &___m_Channels_26; }
	inline void set_m_Channels_26(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * value)
	{
		___m_Channels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Channels_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97, ___m_SharedOrderChannels_27)); }
	inline List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * get_m_SharedOrderChannels_27() const { return ___m_SharedOrderChannels_27; }
	inline List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B ** get_address_of_m_SharedOrderChannels_27() { return &___m_SharedOrderChannels_27; }
	inline void set_m_SharedOrderChannels_27(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * value)
	{
		___m_SharedOrderChannels_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedOrderChannels_27), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5 * List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
inline void List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
inline void List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m91287E99979B01E126C741E3672F0A2810892A2B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
inline Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116  List_1_GetEnumerator_m6DEDD3C87E7678C580CDD6511D167EB030E81F21 (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116  (*) (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
inline ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * Enumerator_get_Current_m4AA3AF5856A01D239D59E737C82DC6197D0ACBFD_inline (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 * __this, const RuntimeMethod* method)
{
	return ((  ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * (*) (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665 (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * ___channel0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(!0)
inline void List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * __this, ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *, ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
inline bool Enumerator_MoveNext_m594004920BE1EDA73B971F11EF4C2948E0C54ABE (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
inline void Enumerator_Dispose_m94F0D8A212C0DE30CE3FC0CE3D06A58E096207DF (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
inline Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E  List_1_GetEnumerator_m600D09E99239D4D71B89B1F64F8D8CD2126CCC9A (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E  (*) (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * Enumerator_get_Current_mC050C1265F789AACDB6F7A03D3065460116AACF7_inline (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E * __this, const RuntimeMethod* method)
{
	return ((  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * (*) (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(!0)
inline void List_1_Add_m3645BFAE222A2255766A797A98CBCAA14A968E3D (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * __this, List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *, List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_m835F6ADEE28787E14FC82DE6E090EEB7AF1F1651 (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_m0967733CC0BB777507EAACCDB3D676ED81DFE938 (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
inline int32_t List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_inline (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_mE56E7F05A2133D7C465B9EEC6C4CF96ADF90EB97 (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Item(System.Int32)
inline ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * List_1_get_Item_m0CF211A8BC47B2907FB8C1DDE7FCE94BCA39BE39_inline (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * (*) (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_mB2FB13845C35D5DABF83C1CA530632C8F4087D1C (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Item(System.Int32)
inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * List_1_get_Item_mB246B8A19A6EE276F7A2730FA535E56B05BE7A2A_inline (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * (*) (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
inline ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5 * List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5 * (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1_gshared)(__this, method);
}
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24 (const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m751DC5BD539C2975B917BEDA67052BD6CF8BACC3 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m1379ABF0355A10DA23531C07752CC6BD9D362723 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_mB4A5D99E80C0B0081A7795AEC3AC61A49813474B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_mE4DCDDFDE20024DE86CE0B1F7560096873D41602 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_mEBC5347826BBB7002788D1B542A4A150F3896A3C (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m65075F4C867CEADE8E50E0412CEAEFC20001269A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m73066295D91C9E9ABBF86FDF8707E996CBA97D64 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m0FD1458249980CDD1BA75A5235F65288BEBC89DE (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m0A34CCD1E33CA2FEB00114694B42ED02F7FFD1CC (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m75C76C0A9DA2C33273991C1647B545EA4C4AF11E (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_mDDDA68600C272839E974268E2D0A6FF4A98564DA (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_mDAD2BD7DAFB7FDFD9987950888E21BF89B0A39B0 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m237788628B7AB4E4C9DEF133A0EF55295EB83EF1 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m58852716B71AAB33614ACACFE5717EEE50770203 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m2C212A494C4EAC61E630EEC59B4BCFEA4EA5844A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_mA3321AB48F4C9300216894D934D8CB1806B9BC14 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mA8D96378F7C4BC68D49276A52376D19729843324 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_mBD791EF16BE3DC55E863BC91A1499522BB2F731C (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m190E19AF676D59A01DA5E5177E0A40DC315496F1 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m4490A0F6D685DD631FEF9A6372F18DC9020D818A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, float ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1797AD047BF575993BEBB9D3F2C4353F18E97A96 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m029E311FAF985ECE49C09FA25D2085A945E1B946 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m73056595AE8F6C589F1835C26AA92E26EFA42834 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m3702E1FC42CBE6F2315D81E5120AD728FABA1690 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m0FDCD4CA63020DEFF0DD277431444B0BE248337B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m567D018E60DB65C503CAB30A239CB36DA3E67C65 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m4FDFB1F0AD5846A0989632D82C89E25858F5A601 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
inline void List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71 (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Count()
inline int32_t List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_inline (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Item(System.Int32)
inline ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_inline (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * (*) (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * HostTopology_get_DefaultConfig_mF2C4DAED814D5D7DFAD94E60F371D3CB4224DD20 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1A07F9F46DECC1FFCCD4CB8F32B9DAD0E2914580 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, int32_t ___i0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m54EF6FDA72F1BE8171F5F89FDDE101125568A324 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_mA5D868AF62D1E1D85A5EB2E08C3263E0DA53FA20 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m5A45A60281CACE85A40BAEA5D21CE07EDD1DA466 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m8CF15CE8E56EB811C741871E8526C5C8AE560675 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::InitializeClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m2D08B1EDB463229E8E98B12F353413759BF03FD7 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m0BCF7C25405CAFFF5791A8C8690344C0A510E78A (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C (const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * HostTopology_get_SpecialConnectionConfigs_mE8A948FCB41740D9B7B9C0BD2F91678513397432 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_mE56E7F05A2133D7C465B9EEC6C4CF96ADF90EB97 (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1CD39293C22623CB0E3FCFAD529E2EBFD083408C (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_Type_0(0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665 (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_0 = ___channel0;
		V_0 = (bool)((((RuntimeObject*)(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_2, _stringLiteral624DCCC3DEBC22BAFED7C880638F1EE60B028051, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665_RuntimeMethod_var);
	}

IL_001b:
	{
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_3 = ___channel0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_m_Type_0();
		__this->set_m_Type_0(L_4);
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_5 = ___channel0;
		NullCheck(L_5);
		bool L_6 = L_5->get_m_BelongsSharedOrderChannel_1();
		__this->set_m_BelongsSharedOrderChannel_1(L_6);
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_mB2FB13845C35D5DABF83C1CA530632C8F4087D1C (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m13022BDB14367FC9C43C0ED824E7D5426445CE17 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m13022BDB14367FC9C43C0ED824E7D5426445CE17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_0 = (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *)il2cpp_codegen_object_new(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D_il2cpp_TypeInfo_var);
		List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF(L_0, /*hidden argument*/List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF_RuntimeMethod_var);
		__this->set_m_Channels_26(L_0);
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_1 = (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *)il2cpp_codegen_object_new(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B_il2cpp_TypeInfo_var);
		List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC(L_1, /*hidden argument*/List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_27(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_PacketSize_0((uint16_t)((int32_t)1440));
		__this->set_m_FragmentSize_1((uint16_t)((int32_t)500));
		__this->set_m_ResendTimeout_2(((int32_t)1200));
		__this->set_m_DisconnectTimeout_3(((int32_t)2000));
		__this->set_m_ConnectTimeout_4(((int32_t)2000));
		__this->set_m_MinUpdateTimeout_5(((int32_t)10));
		__this->set_m_PingTimeout_6(((int32_t)500));
		__this->set_m_ReducedPingTimeout_7(((int32_t)100));
		__this->set_m_AllCostTimeout_8(((int32_t)20));
		__this->set_m_NetworkDropThreshold_9((uint8_t)5);
		__this->set_m_OverflowDropThreshold_10((uint8_t)5);
		__this->set_m_MaxConnectionAttempt_11((uint8_t)((int32_t)10));
		__this->set_m_AckDelay_12(((int32_t)33));
		__this->set_m_SendDelay_13(((int32_t)10));
		__this->set_m_MaxCombinedReliableMessageSize_14((uint16_t)((int32_t)100));
		__this->set_m_MaxCombinedReliableMessageCount_15((uint16_t)((int32_t)10));
		__this->set_m_MaxSentMessageQueueSize_16((uint16_t)((int32_t)512));
		__this->set_m_AcksType_17(1);
		__this->set_m_UsePlatformSpecificProtocols_18((bool)0);
		__this->set_m_InitialBandwidth_19(0);
		__this->set_m_BandwidthPeakFactor_20((2.0f));
		__this->set_m_WebSocketReceiveBufferMaxSize_21((uint16_t)0);
		__this->set_m_UdpSocketReceiveBufferMaxSize_22(0);
		__this->set_m_SSLCertFilePath_23((String_t*)NULL);
		__this->set_m_SSLPrivateKeyFilePath_24((String_t*)NULL);
		__this->set_m_SSLCAFilePath_25((String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * V_3 = NULL;
	Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_0 = (List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D *)il2cpp_codegen_object_new(List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D_il2cpp_TypeInfo_var);
		List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF(L_0, /*hidden argument*/List_1__ctor_mF90068DB317AD2C0F101BD20A2F5AAFA672C9DDF_RuntimeMethod_var);
		__this->set_m_Channels_26(L_0);
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_1 = (List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B *)il2cpp_codegen_object_new(List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B_il2cpp_TypeInfo_var);
		List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC(L_1, /*hidden argument*/List_1__ctor_m35F894B7897B8B3A09853BD9CF9225211C1CD0FC_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_27(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_2 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_4 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_4, _stringLiteral80776E13CA7794662A560DED464C3CED6FE01142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397_RuntimeMethod_var);
	}

IL_0031:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_5 = ___config0;
		NullCheck(L_5);
		uint16_t L_6 = L_5->get_m_PacketSize_0();
		__this->set_m_PacketSize_0(L_6);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->get_m_FragmentSize_1();
		__this->set_m_FragmentSize_1(L_8);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_9 = ___config0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->get_m_ResendTimeout_2();
		__this->set_m_ResendTimeout_2(L_10);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->get_m_DisconnectTimeout_3();
		__this->set_m_DisconnectTimeout_3(L_12);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->get_m_ConnectTimeout_4();
		__this->set_m_ConnectTimeout_4(L_14);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->get_m_MinUpdateTimeout_5();
		__this->set_m_MinUpdateTimeout_5(L_16);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->get_m_PingTimeout_6();
		__this->set_m_PingTimeout_6(L_18);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->get_m_ReducedPingTimeout_7();
		__this->set_m_ReducedPingTimeout_7(L_20);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->get_m_AllCostTimeout_8();
		__this->set_m_AllCostTimeout_8(L_22);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_23 = ___config0;
		NullCheck(L_23);
		uint8_t L_24 = L_23->get_m_NetworkDropThreshold_9();
		__this->set_m_NetworkDropThreshold_9(L_24);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26 = L_25->get_m_OverflowDropThreshold_10();
		__this->set_m_OverflowDropThreshold_10(L_26);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28 = L_27->get_m_MaxConnectionAttempt_11();
		__this->set_m_MaxConnectionAttempt_11(L_28);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_29 = ___config0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->get_m_AckDelay_12();
		__this->set_m_AckDelay_12(L_30);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->get_m_SendDelay_13();
		__this->set_m_SendDelay_13(L_32);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_33 = ___config0;
		NullCheck(L_33);
		uint16_t L_34 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m91287E99979B01E126C741E3672F0A2810892A2B(L_33, /*hidden argument*/NULL);
		__this->set_m_MaxCombinedReliableMessageSize_14(L_34);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36 = L_35->get_m_MaxCombinedReliableMessageCount_15();
		__this->set_m_MaxCombinedReliableMessageCount_15(L_36);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38 = L_37->get_m_MaxSentMessageQueueSize_16();
		__this->set_m_MaxSentMessageQueueSize_16(L_38);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_39 = ___config0;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_m_AcksType_17();
		__this->set_m_AcksType_17(L_40);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_41 = ___config0;
		NullCheck(L_41);
		bool L_42 = L_41->get_m_UsePlatformSpecificProtocols_18();
		__this->set_m_UsePlatformSpecificProtocols_18(L_42);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_43 = ___config0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->get_m_InitialBandwidth_19();
		__this->set_m_InitialBandwidth_19(L_44);
		uint32_t L_45 = __this->get_m_InitialBandwidth_19();
		V_1 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_1;
		if (!L_46)
		{
			goto IL_0149;
		}
	}
	{
		uint16_t L_47 = __this->get_m_PacketSize_0();
		uint32_t L_48 = __this->get_m_MinUpdateTimeout_5();
		__this->set_m_InitialBandwidth_19(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_48)));
	}

IL_0149:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_49 = ___config0;
		NullCheck(L_49);
		float L_50 = L_49->get_m_BandwidthPeakFactor_20();
		__this->set_m_BandwidthPeakFactor_20(L_50);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_51 = ___config0;
		NullCheck(L_51);
		uint16_t L_52 = L_51->get_m_WebSocketReceiveBufferMaxSize_21();
		__this->set_m_WebSocketReceiveBufferMaxSize_21(L_52);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_53 = ___config0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->get_m_UdpSocketReceiveBufferMaxSize_22();
		__this->set_m_UdpSocketReceiveBufferMaxSize_22(L_54);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_55 = ___config0;
		NullCheck(L_55);
		String_t* L_56 = L_55->get_m_SSLCertFilePath_23();
		__this->set_m_SSLCertFilePath_23(L_56);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = L_57->get_m_SSLPrivateKeyFilePath_24();
		__this->set_m_SSLPrivateKeyFilePath_24(L_58);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_59 = ___config0;
		NullCheck(L_59);
		String_t* L_60 = L_59->get_m_SSLCAFilePath_25();
		__this->set_m_SSLCAFilePath_25(L_60);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_61 = ___config0;
		NullCheck(L_61);
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_62 = L_61->get_m_Channels_26();
		NullCheck(L_62);
		Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116  L_63 = List_1_GetEnumerator_m6DEDD3C87E7678C580CDD6511D167EB030E81F21(L_62, /*hidden argument*/List_1_GetEnumerator_m6DEDD3C87E7678C580CDD6511D167EB030E81F21_RuntimeMethod_var);
		V_2 = L_63;
	}

IL_019e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bc;
		}

IL_01a0:
		{
			ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_64 = Enumerator_get_Current_m4AA3AF5856A01D239D59E737C82DC6197D0ACBFD_inline((Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4AA3AF5856A01D239D59E737C82DC6197D0ACBFD_RuntimeMethod_var);
			V_3 = L_64;
			List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_65 = __this->get_m_Channels_26();
			ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_66 = V_3;
			ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_67 = (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F *)il2cpp_codegen_object_new(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F_il2cpp_TypeInfo_var);
			ChannelQOS__ctor_m1517B79D2A0B8804142AF2E000389475F6EF2665(L_67, L_66, /*hidden argument*/NULL);
			NullCheck(L_65);
			List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A(L_65, L_67, /*hidden argument*/List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A_RuntimeMethod_var);
		}

IL_01bc:
		{
			bool L_68 = Enumerator_MoveNext_m594004920BE1EDA73B971F11EF4C2948E0C54ABE((Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m594004920BE1EDA73B971F11EF4C2948E0C54ABE_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_01a0;
			}
		}

IL_01c5:
		{
			IL2CPP_LEAVE(0x1D6, FINALLY_01c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c7;
	}

FINALLY_01c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94F0D8A212C0DE30CE3FC0CE3D06A58E096207DF((Enumerator_tCC42BA0796448EA14E5FD95E34D0CB0E215D4116 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m94F0D8A212C0DE30CE3FC0CE3D06A58E096207DF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(455)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(455)
	{
		IL2CPP_JUMP_TBL(0x1D6, IL_01d6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d6:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_69 = ___config0;
		NullCheck(L_69);
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_70 = L_69->get_m_SharedOrderChannels_27();
		NullCheck(L_70);
		Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E  L_71 = List_1_GetEnumerator_m600D09E99239D4D71B89B1F64F8D8CD2126CCC9A(L_70, /*hidden argument*/List_1_GetEnumerator_m600D09E99239D4D71B89B1F64F8D8CD2126CCC9A_RuntimeMethod_var);
		V_4 = L_71;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ff;
		}

IL_01e6:
		{
			List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_72 = Enumerator_get_Current_mC050C1265F789AACDB6F7A03D3065460116AACF7_inline((Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *)(&V_4), /*hidden argument*/Enumerator_get_Current_mC050C1265F789AACDB6F7A03D3065460116AACF7_RuntimeMethod_var);
			V_5 = L_72;
			List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_73 = __this->get_m_SharedOrderChannels_27();
			List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_74 = V_5;
			NullCheck(L_73);
			List_1_Add_m3645BFAE222A2255766A797A98CBCAA14A968E3D(L_73, L_74, /*hidden argument*/List_1_Add_m3645BFAE222A2255766A797A98CBCAA14A968E3D_RuntimeMethod_var);
		}

IL_01ff:
		{
			bool L_75 = Enumerator_MoveNext_m835F6ADEE28787E14FC82DE6E090EEB7AF1F1651((Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m835F6ADEE28787E14FC82DE6E090EEB7AF1F1651_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_01e6;
			}
		}

IL_0208:
		{
			IL2CPP_LEAVE(0x219, FINALLY_020a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020a;
	}

FINALLY_020a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0967733CC0BB777507EAACCDB3D676ED81DFE938((Enumerator_tEB67E56959CBC61B0EF26721F0D2D8350C2AC42E *)(&V_4), /*hidden argument*/Enumerator_Dispose_m0967733CC0BB777507EAACCDB3D676ED81DFE938_RuntimeMethod_var);
		IL2CPP_END_FINALLY(522)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(522)
	{
		IL2CPP_JUMP_TBL(0x219, IL_0219)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0219:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_0 = ___config0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->get_m_PacketSize_0();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_3 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral387B62E37BCAB1BFF4EDD48E035DA8930020B409, L_3, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_RuntimeMethod_var);
	}

IL_002f:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_6 = ___config0;
		NullCheck(L_6);
		uint16_t L_7 = L_6->get_m_FragmentSize_1();
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_8 = ___config0;
		NullCheck(L_8);
		uint16_t L_9 = L_8->get_m_PacketSize_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)128)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_11 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral05D94A3E043BACD0B38591356B66F06810809FD5, L_11, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_13 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_RuntimeMethod_var);
	}

IL_0067:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_14 = ___config0;
		NullCheck(L_14);
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_15 = L_14->get_m_Channels_26();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline(L_15, /*hidden argument*/List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_18 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_18, _stringLiteral8662B5BC4C9EDBFD19D167B43BF50C871090ED61, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24_RuntimeMethod_var);
	}

IL_0088:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m751DC5BD539C2975B917BEDA67052BD6CF8BACC3 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_PacketSize_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m1379ABF0355A10DA23531C07752CC6BD9D362723 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_FragmentSize_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_mB4A5D99E80C0B0081A7795AEC3AC61A49813474B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ResendTimeout_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_mE4DCDDFDE20024DE86CE0B1F7560096873D41602 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_DisconnectTimeout_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_mEBC5347826BBB7002788D1B542A4A150F3896A3C (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ConnectTimeout_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m65075F4C867CEADE8E50E0412CEAEFC20001269A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinUpdateTimeout_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m73066295D91C9E9ABBF86FDF8707E996CBA97D64 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_PingTimeout_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m0FD1458249980CDD1BA75A5235F65288BEBC89DE (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ReducedPingTimeout_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m0A34CCD1E33CA2FEB00114694B42ED02F7FFD1CC (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AllCostTimeout_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m75C76C0A9DA2C33273991C1647B545EA4C4AF11E (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_NetworkDropThreshold_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_mDDDA68600C272839E974268E2D0A6FF4A98564DA (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_OverflowDropThreshold_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_mDAD2BD7DAFB7FDFD9987950888E21BF89B0A39B0 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_MaxConnectionAttempt_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m237788628B7AB4E4C9DEF133A0EF55295EB83EF1 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AckDelay_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m58852716B71AAB33614ACACFE5717EEE50770203 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_SendDelay_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m91287E99979B01E126C741E3672F0A2810892A2B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageSize_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m2C212A494C4EAC61E630EEC59B4BCFEA4EA5844A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageCount_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_mA3321AB48F4C9300216894D934D8CB1806B9BC14 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxSentMessageQueueSize_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mA8D96378F7C4BC68D49276A52376D19729843324 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_AcksType_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_mBD791EF16BE3DC55E863BC91A1499522BB2F731C (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UsePlatformSpecificProtocols_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m190E19AF676D59A01DA5E5177E0A40DC315496F1 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_InitialBandwidth_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m4490A0F6D685DD631FEF9A6372F18DC9020D818A (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_BandwidthPeakFactor_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1797AD047BF575993BEBB9D3F2C4353F18E97A96 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_WebSocketReceiveBufferMaxSize_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m029E311FAF985ECE49C09FA25D2085A945E1B946 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_UdpSocketReceiveBufferMaxSize_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m73056595AE8F6C589F1835C26AA92E26EFA42834 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCertFilePath_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m3702E1FC42CBE6F2315D81E5120AD728FABA1690 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLPrivateKeyFilePath_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m0FDCD4CA63020DEFF0DD277431444B0BE248337B (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCAFilePath_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m567D018E60DB65C503CAB30A239CB36DA3E67C65 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_ChannelCount_m567D018E60DB65C503CAB30A239CB36DA3E67C65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_0 = __this->get_m_Channels_26();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline(L_0, /*hidden argument*/List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m4FDFB1F0AD5846A0989632D82C89E25858F5A601 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_SharedOrderChannelCount_m4FDFB1F0AD5846A0989632D82C89E25858F5A601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_0 = __this->get_m_SharedOrderChannels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_inline(L_0, /*hidden argument*/List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	{
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_0 = __this->get_m_Channels_26();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline(L_0, /*hidden argument*/List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteralDD1C6588EE08D352D876C005202BEE7E76CA31AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(QosType_tCA1F3E1D717B2EEBD8C175C8B936B5E1C02C467A_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_9 = Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2(L_5, L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_11 = ___value0;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralD00EA07C4D9E62F29BC81689FF949D9AD1A538FC, L_13, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_15 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ConnectionConfig_AddChannel_mCA963851A6B9A47F0304103775F2CAD00A988D50_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_16 = ___value0;
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_17 = (ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F *)il2cpp_codegen_object_new(ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F_il2cpp_TypeInfo_var);
		ChannelQOS__ctor_mE56E7F05A2133D7C465B9EEC6C4CF96ADF90EB97(L_17, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_18 = __this->get_m_Channels_26();
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A(L_18, L_19, /*hidden argument*/List_1_Add_m0CC5351DE1D3A06DF827D57879DCBA2E2B9A169A_RuntimeMethod_var);
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_20 = __this->get_m_Channels_26();
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline(L_20, /*hidden argument*/List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var);
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))));
		goto IL_007a;
	}

IL_007a:
	{
		uint8_t L_22 = V_3;
		return L_22;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		uint8_t L_0 = ___idx0;
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_1 = __this->get_m_Channels_26();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_inline(L_1, /*hidden argument*/List_1_get_Count_mF0C646A9F655A7095F18B2EDBF8E220A6FE1E1B6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_4 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_4, _stringLiteralC7D804AB91405ED8518D53CEF17A6231BDE0922B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E_RuntimeMethod_var);
	}

IL_0021:
	{
		List_1_tE1D58254452F8BE854CC6ECC4A39158B9F92869D * L_5 = __this->get_m_Channels_26();
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		ChannelQOS_tCF0D68923113432E1530A62381EC842F91797C2F * L_7 = List_1_get_Item_m0CF211A8BC47B2907FB8C1DDE7FCE94BCA39BE39_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m0CF211A8BC47B2907FB8C1DDE7FCE94BCA39BE39_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = ChannelQOS_get_QOS_mB2FB13845C35D5DABF83C1CA530632C8F4087D1C(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4 (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___idx0;
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_1 = __this->get_m_SharedOrderChannels_27();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_inline(L_1, /*hidden argument*/List_1_get_Count_m41CB827D0F7F2CBAD6F39066CB6CD303E9D44835_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_4 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_4, _stringLiteral0F8698CEFDCDE55FFE1C03B72612ECB78180ABB0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4_RuntimeMethod_var);
	}

IL_0021:
	{
		List_1_t9CBFF6C556509801D1C2955D65B7064E808CA71B * L_5 = __this->get_m_SharedOrderChannels_27();
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_7 = List_1_get_Item_mB246B8A19A6EE276F7A2730FA535E56B05BE7A2A_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mB246B8A19A6EE276F7A2730FA535E56B05BE7A2A_RuntimeMethod_var);
		NullCheck(L_7);
		ReadOnlyCollection_1_t44E935E566CE04FBBA629D22D386281FFE3F5AC5 * L_8 = List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1(L_7, /*hidden argument*/List_1_AsReadOnly_mE1095F061E3272FF56B059043DEEB6DD58698DC1_RuntimeMethod_var);
		V_1 = (RuntimeObject*)L_8;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_pinvoke(const ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B& unmarshaled, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_pinvoke_back(const ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_pinvoke& marshaled, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_pinvoke_cleanup(ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_com(const ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B& unmarshaled, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_com_back(const ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_com& marshaled, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshal_com_cleanup(ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	bool V_12 = false;
	uint8_t V_13 = 0x0;
	RuntimeObject* V_14 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_15 = NULL;
	bool V_16 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_0 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_2, _stringLiteral80776E13CA7794662A560DED464C3CED6FE01142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var);
	}

IL_001b:
	{
		intptr_t L_3 = ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_3);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = ConnectionConfig_get_PacketSize_m751DC5BD539C2975B917BEDA67052BD6CF8BACC3(L_4, /*hidden argument*/NULL);
		bool L_6 = ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6(__this, L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_8, _stringLiteral862631514593F8B320BAC73C576021CF1A30D80A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var);
	}

IL_0044:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_9 = ___config0;
		NullCheck(L_9);
		uint16_t L_10 = ConnectionConfig_get_FragmentSize_m1379ABF0355A10DA23531C07752CC6BD9D362723(L_9, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F(__this, L_10, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12 = ConnectionConfig_get_ResendTimeout_mB4A5D99E80C0B0081A7795AEC3AC61A49813474B(L_11, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3(__this, L_12, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14 = ConnectionConfig_get_DisconnectTimeout_mE4DCDDFDE20024DE86CE0B1F7560096873D41602(L_13, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4(__this, L_14, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16 = ConnectionConfig_get_ConnectTimeout_mEBC5347826BBB7002788D1B542A4A150F3896A3C(L_15, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87(__this, L_16, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18 = ConnectionConfig_get_MinUpdateTimeout_m65075F4C867CEADE8E50E0412CEAEFC20001269A(L_17, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC(__this, L_18, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = ConnectionConfig_get_PingTimeout_m73066295D91C9E9ABBF86FDF8707E996CBA97D64(L_19, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B(__this, L_20, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = ConnectionConfig_get_ReducedPingTimeout_m0FD1458249980CDD1BA75A5235F65288BEBC89DE(L_21, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA(__this, L_22, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_23 = ___config0;
		NullCheck(L_23);
		uint32_t L_24 = ConnectionConfig_get_AllCostTimeout_m0A34CCD1E33CA2FEB00114694B42ED02F7FFD1CC(L_23, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870(__this, L_24, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26 = ConnectionConfig_get_NetworkDropThreshold_m75C76C0A9DA2C33273991C1647B545EA4C4AF11E(L_25, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254(__this, L_26, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28 = ConnectionConfig_get_OverflowDropThreshold_mDDDA68600C272839E974268E2D0A6FF4A98564DA(L_27, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE(__this, L_28, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_29 = ___config0;
		NullCheck(L_29);
		uint8_t L_30 = ConnectionConfig_get_MaxConnectionAttempt_mDAD2BD7DAFB7FDFD9987950888E21BF89B0A39B0(L_29, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27(__this, L_30, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32 = ConnectionConfig_get_AckDelay_m237788628B7AB4E4C9DEF133A0EF55295EB83EF1(L_31, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58(__this, L_32, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_33 = ___config0;
		NullCheck(L_33);
		uint32_t L_34 = ConnectionConfig_get_SendDelay_m58852716B71AAB33614ACACFE5717EEE50770203(L_33, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5(__this, L_34, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m91287E99979B01E126C741E3672F0A2810892A2B(L_35, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9(__this, L_36, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38 = ConnectionConfig_get_MaxCombinedReliableMessageCount_m2C212A494C4EAC61E630EEC59B4BCFEA4EA5844A(L_37, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD(__this, L_38, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_39 = ___config0;
		NullCheck(L_39);
		uint16_t L_40 = ConnectionConfig_get_MaxSentMessageQueueSize_mA3321AB48F4C9300216894D934D8CB1806B9BC14(L_39, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7(__this, L_40, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_41 = ___config0;
		NullCheck(L_41);
		int32_t L_42 = ConnectionConfig_get_AcksType_mA8D96378F7C4BC68D49276A52376D19729843324(L_41, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38(__this, (uint8_t)(((int32_t)((uint8_t)L_42))), /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_43 = ___config0;
		NullCheck(L_43);
		bool L_44 = ConnectionConfig_get_UsePlatformSpecificProtocols_mBD791EF16BE3DC55E863BC91A1499522BB2F731C(L_43, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D(__this, L_44, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_45 = ___config0;
		NullCheck(L_45);
		uint32_t L_46 = ConnectionConfig_get_InitialBandwidth_m190E19AF676D59A01DA5E5177E0A40DC315496F1(L_45, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9(__this, L_46, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_47 = ___config0;
		NullCheck(L_47);
		float L_48 = ConnectionConfig_get_BandwidthPeakFactor_m4490A0F6D685DD631FEF9A6372F18DC9020D818A(L_47, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8(__this, L_48, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_49 = ___config0;
		NullCheck(L_49);
		uint16_t L_50 = ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1797AD047BF575993BEBB9D3F2C4353F18E97A96(L_49, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16(__this, L_50, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_51 = ___config0;
		NullCheck(L_51);
		uint32_t L_52 = ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m029E311FAF985ECE49C09FA25D2085A945E1B946(L_51, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5(__this, L_52, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_53 = ___config0;
		NullCheck(L_53);
		String_t* L_54 = ConnectionConfig_get_SSLCertFilePath_m73056595AE8F6C589F1835C26AA92E26EFA42834(L_53, /*hidden argument*/NULL);
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_54) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_55 = V_2;
		if (!L_55)
		{
			goto IL_01a0;
		}
	}
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_56 = ___config0;
		NullCheck(L_56);
		String_t* L_57 = ConnectionConfig_get_SSLCertFilePath_m73056595AE8F6C589F1835C26AA92E26EFA42834(L_56, /*hidden argument*/NULL);
		int32_t L_58 = ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28(__this, L_57, /*hidden argument*/NULL);
		V_3 = L_58;
		int32_t L_59 = V_3;
		V_4 = (bool)((!(((uint32_t)L_59) <= ((uint32_t)0)))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_019f;
		}
	}
	{
		String_t* L_61 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_62 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF0280189A2C48E4F3636344127E94FF8145BFA43, L_61, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_63 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_63, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var);
	}

IL_019f:
	{
	}

IL_01a0:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_64 = ___config0;
		NullCheck(L_64);
		String_t* L_65 = ConnectionConfig_get_SSLPrivateKeyFilePath_m3702E1FC42CBE6F2315D81E5120AD728FABA1690(L_64, /*hidden argument*/NULL);
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (!L_66)
		{
			goto IL_01e1;
		}
	}
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_67 = ___config0;
		NullCheck(L_67);
		String_t* L_68 = ConnectionConfig_get_SSLPrivateKeyFilePath_m3702E1FC42CBE6F2315D81E5120AD728FABA1690(L_67, /*hidden argument*/NULL);
		int32_t L_69 = ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6(__this, L_68, /*hidden argument*/NULL);
		V_6 = L_69;
		int32_t L_70 = V_6;
		V_7 = (bool)((!(((uint32_t)L_70) <= ((uint32_t)0)))? 1 : 0);
		bool L_71 = V_7;
		if (!L_71)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_72 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_73 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA6B691CD22F765E6D068C52A20320AFD6B3350E6, L_72, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_74 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var);
	}

IL_01e0:
	{
	}

IL_01e1:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_75 = ___config0;
		NullCheck(L_75);
		String_t* L_76 = ConnectionConfig_get_SSLCAFilePath_m0FDCD4CA63020DEFF0DD277431444B0BE248337B(L_75, /*hidden argument*/NULL);
		V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_76) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_77 = V_8;
		if (!L_77)
		{
			goto IL_0222;
		}
	}
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_78 = ___config0;
		NullCheck(L_78);
		String_t* L_79 = ConnectionConfig_get_SSLCAFilePath_m0FDCD4CA63020DEFF0DD277431444B0BE248337B(L_78, /*hidden argument*/NULL);
		int32_t L_80 = ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525(__this, L_79, /*hidden argument*/NULL);
		V_9 = L_80;
		int32_t L_81 = V_9;
		V_10 = (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0);
		bool L_82 = V_10;
		if (!L_82)
		{
			goto IL_0221;
		}
	}
	{
		String_t* L_83 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_9), /*hidden argument*/NULL);
		String_t* L_84 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral20630ACA938E5758DAFF3EF6BC4826F7DA689650, L_83, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_85 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_85, L_84, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970_RuntimeMethod_var);
	}

IL_0221:
	{
	}

IL_0222:
	{
		V_11 = (uint8_t)0;
		goto IL_0240;
	}

IL_0227:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_86 = ___config0;
		uint8_t L_87 = V_11;
		NullCheck(L_86);
		int32_t L_88 = ConnectionConfig_GetChannel_m15660F69B226EBE4148DF542A2B08B0E26B5E53E(L_86, L_87, /*hidden argument*/NULL);
		ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4(__this, (((int32_t)((uint8_t)L_88))), /*hidden argument*/NULL);
		uint8_t L_89 = V_11;
		V_11 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)))));
	}

IL_0240:
	{
		uint8_t L_90 = V_11;
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_91 = ___config0;
		NullCheck(L_91);
		int32_t L_92 = ConnectionConfig_get_ChannelCount_m567D018E60DB65C503CAB30A239CB36DA3E67C65(L_91, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_90) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_12;
		if (L_93)
		{
			goto IL_0227;
		}
	}
	{
		V_13 = (uint8_t)0;
		goto IL_028a;
	}

IL_0255:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_94 = ___config0;
		uint8_t L_95 = V_13;
		NullCheck(L_94);
		RuntimeObject* L_96 = ConnectionConfig_GetSharedOrderChannels_m3D0255AF1BC4B0233416BE01CE54F39BAC4570F4(L_94, L_95, /*hidden argument*/NULL);
		V_14 = L_96;
		RuntimeObject* L_97 = V_14;
		NullCheck(L_97);
		int32_t L_98 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t26E75B5ACAB89DE13EBAC4AA8E0E13347841225E_il2cpp_TypeInfo_var, L_97);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_99 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_98);
		V_15 = L_99;
		RuntimeObject* L_100 = V_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_101 = V_15;
		NullCheck(L_100);
		InterfaceActionInvoker2< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(!0[],System.Int32) */, ICollection_1_t26E75B5ACAB89DE13EBAC4AA8E0E13347841225E_il2cpp_TypeInfo_var, L_100, L_101, 0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = V_15;
		ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B(__this, L_102, /*hidden argument*/NULL);
		uint8_t L_103 = V_13;
		V_13 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)))));
	}

IL_028a:
	{
		uint8_t L_104 = V_13;
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_105 = ___config0;
		NullCheck(L_105);
		int32_t L_106 = ConnectionConfig_get_SharedOrderChannelCount_m4FDFB1F0AD5846A0989632D82C89E25858F5A601(L_105, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)L_104) < ((int32_t)L_106))? 1 : 0);
		bool L_107 = V_16;
		if (L_107)
		{
			goto IL_0255;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m951D9B0369609F00974989E0A595F7EBF2F361E3 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal_Dispose_m951D9B0369609F00974989E0A595F7EBF2F361E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Finalize_m5D844D97676D11E534CB330E772AB3DF589A88BB (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m5D91B1A753E70414FF71DD20DAAFB0122C126B84 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal_Dispose_m5D91B1A753E70414FF71DD20DAAFB0122C126B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24 (const RuntimeMethod* method)
{
	typedef intptr_t (*ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24_ftn) ();
	static ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalCreate_m681962AD2D0C2CA03AC271F67851C0D8D7CB0F24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1_ftn) (intptr_t);
	static ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalDestroy_m9615326AE25DB173E25B475BADDADE8CFFD279E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef uint8_t (*ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, int32_t);
	static ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_AddChannel_m1769B5F51CD615D0F485098D485F2F2C6C8230B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)");
	uint8_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetPacketSize_m4DE0CF7A1FCB7AB404CE5DDE31E093C6BAF876B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)");
	bool retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_FragmentSize_m224EF1252CDAEB26D4B5D419929DE8923174336F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ResendTimeout_m5BE3436FF68B65BE9627DC1A493D71575AB4B2D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_DisconnectTimeout_mA6994BDA30044356344816D48E115892016341B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ConnectTimeout_mE91ADD685C4F72FA46DFBE30C140D0EA0A445D87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MinUpdateTimeout_m04E7B416A9CDACDC7C114B5109DDD77E0C9F94BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_PingTimeout_m699DEE6C7E444DBC2C5B48D7639AC624FF89C38B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ReducedPingTimeout_m9A33C6FCA8246795A3ACB0DE4A982852BC461CFA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AllCostTimeout_m8AA82AB51A3FEF575C32340C056C589E9D464870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint8_t);
	static ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_NetworkDropThreshold_mD03BD7214D026A4700B4E79A0C7DF39063A61254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint8_t);
	static ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_OverflowDropThreshold_mFC78CDF6E4A2485254464D1E49FE3C2F24F4FBDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint8_t);
	static ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxConnectionAttempt_m5F4A7FAD5B2BE52A8D07C442E95188BDDF5B2E27_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AckDelay_mA75C66BF1C9F5A5BF7F8A73B9B37FA875DB03B58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_SendDelay_mA3C49B23B1B154407C5C976BD317B19F155B3EC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mB487AAFEA1CE7150B6FFA0DE9167B613279EE4F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mD5AA060EEA22592DD221E265C7DCCCA675F4C4CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxSentMessageQueueSize_mD43A2BBE7A8EBC3B1A9ADA02C53B6DCBEFDAA6F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint8_t);
	static ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AcksType_m38036696B038768D28640EEC618B2BF5DFD48F38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, bool);
	static ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m7726113E8F0B40606D089CFC894FBD51F247497D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_InitialBandwidth_mD3925D22CA8E1B0E0FEC76D19091D3B71CC56AB9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, float);
	static ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_BandwidthPeakFactor_m7323F1BE4AE76FA757C51C87FC90F1EE594E4CE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint16_t);
	static ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_mA3191D79791B4CFD8F08001FFEFF8F8971118D16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, uint32_t);
	static ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m10E69CDBD2F00BF8FED5CAF3206FD45AB44365E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, String_t*);
	static ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCertFilePath_mCAE658B61AEEA61ADF961C8F3561582112A28B28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, String_t*);
	static ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m6B3D2A3E13A9C55B327F66521A97840DC62DCDE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525 (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, String_t*);
	static ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCAFilePath_mB6CFCB51A0AB96F2D971217C52D52CB022514525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___values0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*);
	static ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_MakeChannelsSharedOrder_m9B81D45D8BA7E470E380C85C300463AA70BBD55B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])");
	bool retVal = _il2cpp_icall_func(__this, ___values0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_0 = (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 *)il2cpp_codegen_object_new(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71(L_0, /*hidden argument*/List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_1 = ___defaultConfig0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_3 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_3, _stringLiteral80776E13CA7794662A560DED464C3CED6FE01142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_4 = ___maxDefaultConnections1;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_6, _stringLiteralF0B3A2B07784861FA0B2615D7890521B1DF0ED08, _stringLiteralB78E130E3F991601A421DCF79C4DAE7094A0BAAB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_RuntimeMethod_var);
	}

IL_0070:
	{
		int32_t L_7 = ___maxDefaultConnections1;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)65535)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_9 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_9, _stringLiteralF0B3A2B07784861FA0B2615D7890521B1DF0ED08, _stringLiteralEB7EA282D1824FA19F6080BC5C59DBFE32A3B0FD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, HostTopology__ctor_m045190A96973972C370EB5CB4F534B0251C10828_RuntimeMethod_var);
	}

IL_008f:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_10 = ___defaultConfig0;
		ConnectionConfig_Validate_m0178C35662CE1DC30857B70DD908DC5E2C7BBE24(L_10, /*hidden argument*/NULL);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_11 = ___defaultConfig0;
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_12 = (ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)il2cpp_codegen_object_new(ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_m189A8CE6CB30F3404A86FA36F4BBB3E443C8B397(L_12, L_11, /*hidden argument*/NULL);
		__this->set_m_DefConfig_0(L_12);
		int32_t L_13 = ___maxDefaultConnections1;
		__this->set_m_MaxDefConnections_1(L_13);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m0FD79483FC711607C1558ED6DCCDD6CC0A9504E8 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m0FD79483FC711607C1558ED6DCCDD6CC0A9504E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_0 = (List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 *)il2cpp_codegen_object_new(List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71(L_0, /*hidden argument*/List_1__ctor_m0DB10447B3A228732A3933DCB89873ACF6D00C71_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * HostTopology_get_DefaultConfig_mF2C4DAED814D5D7DFAD94E60F371D3CB4224DD20 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * V_0 = NULL;
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_0 = __this->get_m_DefConfig_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1A07F9F46DECC1FFCCD4CB8F32B9DAD0E2914580 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MaxDefConnections_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m54EF6FDA72F1BE8171F5F89FDDE101125568A324 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_get_SpecialConnectionConfigsCount_m54EF6FDA72F1BE8171F5F89FDDE101125568A324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_0 = __this->get_m_SpecialConnections_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_inline(L_0, /*hidden argument*/List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * HostTopology_get_SpecialConnectionConfigs_mE8A948FCB41740D9B7B9C0BD2F91678513397432 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * V_0 = NULL;
	{
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_0 = __this->get_m_SpecialConnections_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___i0;
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_1 = __this->get_m_SpecialConnections_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_inline(L_1, /*hidden argument*/List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___i0;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteralDBC3A33DCFCF1BC7408EAE8F613073A053473919, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670_RuntimeMethod_var);
	}

IL_0025:
	{
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_6 = __this->get_m_SpecialConnections_2();
		int32_t L_7 = ___i0;
		NullCheck(L_6);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_8 = List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_9 = V_1;
		return L_9;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_mA5D868AF62D1E1D85A5EB2E08C3263E0DA53FA20 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReceivedMessagePoolSize_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m5A45A60281CACE85A40BAEA5D21CE07EDD1DA466 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_SentMessagePoolSize_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m8CF15CE8E56EB811C741871E8526C5C8AE560675 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MessagePoolSizeGrowthFactor_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m2D08B1EDB463229E8E98B12F353413759BF03FD7 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal__ctor_m2D08B1EDB463229E8E98B12F353413759BF03FD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * V_2 = NULL;
	ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * V_3 = NULL;
	bool V_4 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_0 = ___topology0;
		NullCheck(L_0);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_1 = HostTopology_get_DefaultConfig_mF2C4DAED814D5D7DFAD94E60F371D3CB4224DD20(L_0, /*hidden argument*/NULL);
		ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * L_2 = (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *)il2cpp_codegen_object_new(ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * L_3 = V_0;
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_4 = ___topology0;
		NullCheck(L_4);
		int32_t L_5 = HostTopology_get_MaxDefaultConnections_m1A07F9F46DECC1FFCCD4CB8F32B9DAD0E2914580(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF(L_3, L_5, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_6);
		V_1 = 1;
		goto IL_0047;
	}

IL_002a:
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_7 = ___topology0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_9 = HostTopology_GetSpecialConnectionConfig_mF820418F2CDF49B5E837E16F750FFDEF85587670(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_10 = V_2;
		ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * L_11 = (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *)il2cpp_codegen_object_new(ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m7989E7E917317CCF6A27BD2DF023D00AA1765970(L_11, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * L_12 = V_3;
		HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_14 = V_1;
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_15 = ___topology0;
		NullCheck(L_15);
		int32_t L_16 = HostTopology_get_SpecialConnectionConfigsCount_m54EF6FDA72F1BE8171F5F89FDDE101125568A324(L_15, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_002a;
		}
	}
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_18 = ___topology0;
		NullCheck(L_18);
		uint16_t L_19 = HostTopology_get_ReceivedMessagePoolSize_mA5D868AF62D1E1D85A5EB2E08C3263E0DA53FA20(L_18, /*hidden argument*/NULL);
		HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6(__this, L_19, /*hidden argument*/NULL);
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_20 = ___topology0;
		NullCheck(L_20);
		uint16_t L_21 = HostTopology_get_SentMessagePoolSize_m5A45A60281CACE85A40BAEA5D21CE07EDD1DA466(L_20, /*hidden argument*/NULL);
		HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96(__this, L_21, /*hidden argument*/NULL);
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_22 = ___topology0;
		NullCheck(L_22);
		float L_23 = HostTopology_get_MessagePoolSizeGrowthFactor_m8CF15CE8E56EB811C741871E8526C5C8AE560675(L_22, /*hidden argument*/NULL);
		HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9(__this, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_mA4DF2C3D9813A293D361C9CB3691E80AC0727265 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal_Dispose_mA4DF2C3D9813A293D361C9CB3691E80AC0727265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Finalize_m7C7A23F9B9EFED85D429EFCC9BC7307A72C2BE1D (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m95F17DCB6762742872C323459AA48FA6C2495E10 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal_Dispose_m95F17DCB6762742872C323459AA48FA6C2495E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	typedef intptr_t (*HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF_ftn) (ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *, int32_t);
	static HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalCreate_mB3998292C80467883D6E8A8935A6FDC72B31DACF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(___config0, ___maxDefaultConnections1);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592_ftn) (intptr_t);
	static HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalDestroy_m594FADDAD4EDC0860D05E982EEB14C4A287AB592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B * ___config0, const RuntimeMethod* method)
{
	typedef uint16_t (*HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E_ftn) (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *, ConnectionConfigInternal_t442D383D4EE17B207D66709528D4C68FE979E97B *);
	static HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_AddSpecialConnectionConfig_m005DBD8F45DB3666281B0AC930E36B312066B74E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)");
	uint16_t retVal = _il2cpp_icall_func(__this, ___config0);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6_ftn) (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *, uint16_t);
	static HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_ReceivedMessagePoolSize_m063B7DB12D83F8EC9D815D1B3B75E9F3D79A18E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96_ftn) (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *, uint16_t);
	static HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_SentMessagePoolSize_m9DBA4B31E0F019DAFA4D9B2A8A24E92059F18D96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9_ftn) (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *, float);
	static HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m653AD2D1C374D3650AD05B85BAB45032D02FF3A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m4416B410338D6F2C49DCE9BC080EBD57733973B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Init_m4416B410338D6F2C49DCE9BC080EBD57733973B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::InitializeClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9 (const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9_ftn) ();
	static NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitializeClass_m50303A3F221D1F2C382B0C3589F9FCDCE86CC2B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitializeClass()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_0 = ___topology0;
		V_0 = (bool)((((RuntimeObject*)(HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_2, _stringLiteral1A1F228190DF1EC528797D10EE3C3660FB8EFA34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4_RuntimeMethod_var);
	}

IL_0014:
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_3 = ___topology0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2(L_3, /*hidden argument*/NULL);
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_4 = ___topology0;
		HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * L_5 = (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *)il2cpp_codegen_object_new(HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m2D08B1EDB463229E8E98B12F353413759BF03FD7(L_5, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___ip4;
		int32_t L_7 = ___port3;
		int32_t L_8 = ___minTimeout1;
		int32_t L_9 = ___maxTimeout2;
		int32_t L_10 = NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m0BCF7C25405CAFFF5791A8C8690344C0A510E78A (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m0BCF7C25405CAFFF5791A8C8690344C0A510E78A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		String_t* L_2 = ___ip2;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		int32_t L_3 = NetworkTransport_AddHostWithSimulator_mFAC7BC1714731813F32AB3839E74FA361F1C8CF4(L_0, 0, 0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m1BFB0230E3CA31E4731409D4E07AB478426B5847 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m1BFB0230E3CA31E4731409D4E07AB478426B5847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		int32_t L_2 = NetworkTransport_AddHost_m0BCF7C25405CAFFF5791A8C8690344C0A510E78A(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256 (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256_ftn) (HostTopologyInternal_tD2811B66B8E6D4E6D50EC879AD280D3E5222CBF6 *, String_t*, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostInternal_m40606809CEC9166C4A944B3F3EE604EFF82BA256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2, ___minTimeout3, ___maxTimeout4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C (const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C_ftn) ();
	static NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_m9429B5EFCF1C98C03729D5B28518384369FA3347 (int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Connect_m9429B5EFCF1C98C03729D5B28518384369FA3347_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Connect_m9429B5EFCF1C98C03729D5B28518384369FA3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Connect_m9429B5EFCF1C98C03729D5B28518384369FA3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_mFE13CE00A9119968993E457EC2D971DBFC41C483 (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_Disconnect_mFE13CE00A9119968993E457EC2D971DBFC41C483_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_Disconnect_mFE13CE00A9119968993E457EC2D971DBFC41C483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Disconnect_mFE13CE00A9119968993E457EC2D971DBFC41C483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_mB69353E15777B45E0A22B5006B6DA5C610C22CC1 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Send_mB69353E15777B45E0A22B5006B6DA5C610C22CC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer3;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_2, _stringLiteral38F7C8CA6D2DB82E26B83383CCB8E25E733E1143, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NetworkTransport_Send_mB69353E15777B45E0A22B5006B6DA5C610C22CC1_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___hostId0;
		int32_t L_4 = ___connectionId1;
		int32_t L_5 = ___channelId2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer3;
		int32_t L_7 = ___size4;
		uint8_t* L_8 = ___error5;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		bool L_9 = NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C(L_3, L_4, L_5, L_6, L_7, (uint8_t*)L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, uint8_t*);
	static NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendWrapper_m59435DEFEE429FD1DDE98A1D5AA752414B744C4C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return retVal;
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_m94165BFFB6721C9909B8ACAA28449D189FC14808 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Receive_m94165BFFB6721C9909B8ACAA28449D189FC14808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___hostId0;
		int32_t* L_1 = ___connectionId1;
		int32_t* L_2 = ___channelId2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer3;
		int32_t L_4 = ___bufferSize4;
		int32_t* L_5 = ___receivedSize5;
		uint8_t* L_6 = ___error6;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		int32_t L_7 = NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8((int32_t*)L_0, (int32_t*)L_1, (int32_t*)L_2, L_3, L_4, (int32_t*)L_5, (uint8_t*)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8_ftn) (int32_t*, int32_t*, int32_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_PopData_m1FC55F814FF9C2343B912C475A0C6230B27D71C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___bufferSize4, ___receivedSize5, ___error6);
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2 (HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var);
		int32_t L_0 = NetworkTransport_GetMaxPacketSize_m70852FCA549D2A7984CBC5D23D796388C88C698C(/*hidden argument*/NULL);
		V_0 = L_0;
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_1 = ___topology0;
		NullCheck(L_1);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_2 = HostTopology_get_DefaultConfig_mF2C4DAED814D5D7DFAD94E60F371D3CB4224DD20(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_m751DC5BD539C2975B917BEDA67052BD6CF8BACC3(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC87FF14D0CB229E95B3CD2DD820E7330627B8C9A, L_6, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2_RuntimeMethod_var);
	}

IL_0030:
	{
		V_2 = 0;
		goto IL_0076;
	}

IL_0034:
	{
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_9 = ___topology0;
		NullCheck(L_9);
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_10 = HostTopology_get_SpecialConnectionConfigs_mE8A948FCB41740D9B7B9C0BD2F91678513397432(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ConnectionConfig_t61AC2AC4F892AABE5897223C3FBFFD228867DD97 * L_12 = List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m157EBCA0538E4A6BE8B50CE0C63A8C53EAAF0CD5_RuntimeMethod_var);
		NullCheck(L_12);
		uint16_t L_13 = ConnectionConfig_get_PacketSize_m751DC5BD539C2975B917BEDA67052BD6CF8BACC3(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_3 = (bool)((((int32_t)L_13) > ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_17 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralE42F2F27CE2C8053F03A90732377C722B8F25DFD, L_16, _stringLiteral749E8CB3DEBCE82E56E78E26BD6FFA210FD1FFC2, L_17, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_19 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NetworkTransport_CheckTopology_mEFD5868C2BAFB75AB9E350421B6ACEBDF4EA6AD2_RuntimeMethod_var);
	}

IL_0071:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_21 = V_2;
		HostTopology_tD01D253330A0DAA736EDFC67EE9585C363FA9B0E * L_22 = ___topology0;
		NullCheck(L_22);
		List_1_tDBE787B9B83BA3DA94D0CE3874A092B3CF9730A9 * L_23 = HostTopology_get_SpecialConnectionConfigs_mE8A948FCB41740D9B7B9C0BD2F91678513397432(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_inline(L_23, /*hidden argument*/List_1_get_Count_m0DE37CD73647F90E323864CF5D4CE7011F9CCF8F_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_21) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__cctor_m2727A7CF15FDDE579F295BE23E065092A9AB8225 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport__cctor_m2727A7CF15FDDE579F295BE23E065092A9AB8225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_tDD3D03342A8684ADB711E8946D500BD265E9FDCF_il2cpp_TypeInfo_var))->set_s_nextSceneId_0(1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
