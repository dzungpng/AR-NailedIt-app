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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Mirror.Authenticators.BasicAuthenticator
struct BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE;
// Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__10
struct U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA;
// Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905;
// Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3;
// Mirror.Authenticators.TimeoutAuthenticator
struct TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C;
// Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__6
struct U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9;
// Mirror.MessageBase
struct MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D;
// Mirror.NetworkConnection
struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553;
// Mirror.NetworkIdentity
struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870;
// Mirror.NetworkReader
struct NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25;
// Mirror.NetworkWriter
struct NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D;
// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6;
// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867;
// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E;
// System.Action`2<Mirror.NetworkConnection,System.Object>
struct Action_2_t4F4049D78494C16BC630D38BE058DE8E6D2A88CD;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
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
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0929FC5D764F38A4DC6337E07A4E384548629E24;
IL2CPP_EXTERN_C String_t* _stringLiteral3EEBB38327CD8BBB45A632C28A42F5208A399629;
IL2CPP_EXTERN_C String_t* _stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184;
IL2CPP_EXTERN_C String_t* _stringLiteral44A1DEDB80DBEAFD92CE187B034D34E0A4AAC788;
IL2CPP_EXTERN_C String_t* _stringLiteral6B828ECA3C31C9B8332C3B05E37DC8230DF5A8B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA619DDA1EA1DC08AE47B9F6DC203CB4C77EB42D9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m3AE9F3D85ACE7AAFFE5720553CE249F7916FD80B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m6015985FD09AE793467BDE20492AD02FF247EC0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m39D545B7221A15F45D9A18774D8EA4EE630864B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m1E410E63AE0D9DE58AC6FC5DDCF909B50F6F29AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m2AF8C046100707D3D273E28D0A8757539E758141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_Reset_m6AB3AF071D3BA47431391268CBD0B91ADE017415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6FB9B117EAC095D5ECF120BFD00C809C7C27CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AuthRequestMessage_Deserialize_m10486E532841A96795696FF06C7C1AE4A47C5244_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthRequestMessage_Serialize_m8B0321E0FA5ACD3F1CBEAFFF8FDDBC449D8A2C8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthResponseMessage_Deserialize_m1CBC378055B3DAF48DC6490FD1782A27D87B0174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthResponseMessage_Serialize_m4270D12FEC9815540FAFE5432062B27C614CDF09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnClientAuthenticate_mA8E79AAE79A3F1EE9E5D413766ABB4F896E9E596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator__cctor_m50B0C0750F7292AE485BFFAD426E5614AABC7C60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m1E410E63AE0D9DE58AC6FC5DDCF909B50F6F29AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m2AF8C046100707D3D273E28D0A8757539E758141_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator__cctor_mA8DCE109C5596D84AE26A616DB054B3554A71D7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__6_MoveNext_m2CC979E28C2D11F157C850E9FB4BBDF9CCC43F2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_Reset_m6AB3AF071D3BA47431391268CBD0B91ADE017415_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__10_MoveNext_mECCD85BDC2FEC4B4653993BE07C819928EC68277_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6FB9B117EAC095D5ECF120BFD00C809C7C27CAD_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2E0727A591CEBCB552F72CC4EBB40DE1B2BEEDF2 
{
public:

public:
};


// System.Object


// Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10
struct  U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::waitTime
	float ___waitTime_2;
	// Mirror.NetworkConnection Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::conn
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_conn_3() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA, ___conn_3)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_conn_3() const { return ___conn_3; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_conn_3() { return &___conn_3; }
	inline void set_conn_3(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___conn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_3), (void*)value);
	}
};


// Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6
struct  U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.NetworkConnection Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::conn
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn_2;
	// Mirror.Authenticators.TimeoutAuthenticator Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::<>4__this
	TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_conn_2() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9, ___conn_2)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_conn_2() const { return ___conn_2; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_conn_2() { return &___conn_2; }
	inline void set_conn_2(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___conn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9, ___U3CU3E4__this_3)); }
	inline TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Mirror.MessageBase
struct  MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct  NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::visList
	HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * ___visList_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::messageHandlers
	Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * ___messageHandlers_3;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_4;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_5;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_6;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_7;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_8;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3CidentityU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * ___clientOwnedObjects_10;
	// System.Boolean Mirror.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_11;

public:
	inline static int32_t get_offset_of_visList_2() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___visList_2)); }
	inline HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * get_visList_2() const { return ___visList_2; }
	inline HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 ** get_address_of_visList_2() { return &___visList_2; }
	inline void set_visList_2(HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * value)
	{
		___visList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visList_2), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_3() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___messageHandlers_3)); }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * get_messageHandlers_3() const { return ___messageHandlers_3; }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 ** get_address_of_messageHandlers_3() { return &___messageHandlers_3; }
	inline void set_messageHandlers_3(Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * value)
	{
		___messageHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_3), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_4() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___connectionId_4)); }
	inline int32_t get_connectionId_4() const { return ___connectionId_4; }
	inline int32_t* get_address_of_connectionId_4() { return &___connectionId_4; }
	inline void set_connectionId_4(int32_t value)
	{
		___connectionId_4 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isAuthenticated_5)); }
	inline bool get_isAuthenticated_5() const { return ___isAuthenticated_5; }
	inline bool* get_address_of_isAuthenticated_5() { return &___isAuthenticated_5; }
	inline void set_isAuthenticated_5(bool value)
	{
		___isAuthenticated_5 = value;
	}

	inline static int32_t get_offset_of_authenticationData_6() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___authenticationData_6)); }
	inline RuntimeObject * get_authenticationData_6() const { return ___authenticationData_6; }
	inline RuntimeObject ** get_address_of_authenticationData_6() { return &___authenticationData_6; }
	inline void set_authenticationData_6(RuntimeObject * value)
	{
		___authenticationData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_8() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___lastMessageTime_8)); }
	inline float get_lastMessageTime_8() const { return ___lastMessageTime_8; }
	inline float* get_address_of_lastMessageTime_8() { return &___lastMessageTime_8; }
	inline void set_lastMessageTime_8(float value)
	{
		___lastMessageTime_8 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CidentityU3Ek__BackingField_9)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3CidentityU3Ek__BackingField_9() const { return ___U3CidentityU3Ek__BackingField_9; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3CidentityU3Ek__BackingField_9() { return &___U3CidentityU3Ek__BackingField_9; }
	inline void set_U3CidentityU3Ek__BackingField_9(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3CidentityU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_10() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___clientOwnedObjects_10)); }
	inline HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * get_clientOwnedObjects_10() const { return ___clientOwnedObjects_10; }
	inline HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 ** get_address_of_clientOwnedObjects_10() { return &___clientOwnedObjects_10; }
	inline void set_clientOwnedObjects_10(HashSet_1_t387990E6FB6C087015FB0C82265C81F66DE5B943 * value)
	{
		___clientOwnedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_logNetworkMessages_11() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___logNetworkMessages_11)); }
	inline bool get_logNetworkMessages_11() const { return ___logNetworkMessages_11; }
	inline bool* get_address_of_logNetworkMessages_11() { return &___logNetworkMessages_11; }
	inline void set_logNetworkMessages_11(bool value)
	{
		___logNetworkMessages_11 = value;
	}
};

struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkConnection::logger
	RuntimeObject* ___logger_1;

public:
	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553_StaticFields, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}
};


// Mirror.NetworkWriter
struct  NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::position
	int32_t ___position_2;
	// System.Int32 Mirror.NetworkWriter::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage
struct  AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::authUsername
	String_t* ___authUsername_0;
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::authPassword
	String_t* ___authPassword_1;

public:
	inline static int32_t get_offset_of_authUsername_0() { return static_cast<int32_t>(offsetof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905, ___authUsername_0)); }
	inline String_t* get_authUsername_0() const { return ___authUsername_0; }
	inline String_t** get_address_of_authUsername_0() { return &___authUsername_0; }
	inline void set_authUsername_0(String_t* value)
	{
		___authUsername_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authUsername_0), (void*)value);
	}

	inline static int32_t get_offset_of_authPassword_1() { return static_cast<int32_t>(offsetof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905, ___authPassword_1)); }
	inline String_t* get_authPassword_1() const { return ___authPassword_1; }
	inline String_t** get_address_of_authPassword_1() { return &___authPassword_1; }
	inline void set_authPassword_1(String_t* value)
	{
		___authPassword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authPassword_1), (void*)value);
	}
};


// Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage
struct  AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  : public MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6
{
public:
	// System.Byte Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::code
	uint8_t ___code_0;
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3, ___code_0)); }
	inline uint8_t get_code_0() const { return ___code_0; }
	inline uint8_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(uint8_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
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


// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct  UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// Mirror.NetworkReader
struct  NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25, ___buffer_0)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}
};


// Mirror.UnityEventNetworkConnection
struct  UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6  : public UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C
{
public:

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage>
struct  Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage>
struct  Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct  UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Mirror.NetworkAuthenticator
struct  NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnServerAuthenticated
	UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * ___OnServerAuthenticated_4;
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnClientAuthenticated
	UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * ___OnClientAuthenticated_5;

public:
	inline static int32_t get_offset_of_OnServerAuthenticated_4() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D, ___OnServerAuthenticated_4)); }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * get_OnServerAuthenticated_4() const { return ___OnServerAuthenticated_4; }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 ** get_address_of_OnServerAuthenticated_4() { return &___OnServerAuthenticated_4; }
	inline void set_OnServerAuthenticated_4(UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * value)
	{
		___OnServerAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D, ___OnClientAuthenticated_5)); }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * get_OnClientAuthenticated_5() const { return ___OnClientAuthenticated_5; }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 ** get_address_of_OnClientAuthenticated_5() { return &___OnClientAuthenticated_5; }
	inline void set_OnClientAuthenticated_5(UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * value)
	{
		___OnClientAuthenticated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientAuthenticated_5), (void*)value);
	}
};


// Mirror.Authenticators.BasicAuthenticator
struct  BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE  : public NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator::username
	String_t* ___username_7;
	// System.String Mirror.Authenticators.BasicAuthenticator::password
	String_t* ___password_8;

public:
	inline static int32_t get_offset_of_username_7() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE, ___username_7)); }
	inline String_t* get_username_7() const { return ___username_7; }
	inline String_t** get_address_of_username_7() { return &___username_7; }
	inline void set_username_7(String_t* value)
	{
		___username_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_7), (void*)value);
	}

	inline static int32_t get_offset_of_password_8() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE, ___password_8)); }
	inline String_t* get_password_8() const { return ___password_8; }
	inline String_t** get_address_of_password_8() { return &___password_8; }
	inline void set_password_8(String_t* value)
	{
		___password_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_8), (void*)value);
	}
};

struct BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.Authenticators.BasicAuthenticator::logger
	RuntimeObject* ___logger_6;

public:
	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}
};


// Mirror.Authenticators.TimeoutAuthenticator
struct  TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C  : public NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D
{
public:
	// Mirror.NetworkAuthenticator Mirror.Authenticators.TimeoutAuthenticator::authenticator
	NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * ___authenticator_7;
	// System.Single Mirror.Authenticators.TimeoutAuthenticator::timeout
	float ___timeout_8;

public:
	inline static int32_t get_offset_of_authenticator_7() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C, ___authenticator_7)); }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * get_authenticator_7() const { return ___authenticator_7; }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D ** get_address_of_authenticator_7() { return &___authenticator_7; }
	inline void set_authenticator_7(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * value)
	{
		___authenticator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_7), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C, ___timeout_8)); }
	inline float get_timeout_8() const { return ___timeout_8; }
	inline float* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(float value)
	{
		___timeout_8 = value;
	}
};

struct TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.Authenticators.TimeoutAuthenticator::logger
	RuntimeObject* ___logger_6;

public:
	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::RegisterHandler<System.Object>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_RegisterHandler_TisRuntimeObject_mEB4A1C8B2EB3D3F898780690D4D055E981E3604F_gshared (Action_2_t4F4049D78494C16BC630D38BE058DE8E6D2A88CD * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Void Mirror.NetworkClient::RegisterHandler<System.Object>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkClient_RegisterHandler_TisRuntimeObject_m20E52DAAC528B9A6CC06C4EC4880D582A49A1D6D_gshared (Action_2_t4F4049D78494C16BC630D38BE058DE8E6D2A88CD * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<System.Object>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConnection_Send_TisRuntimeObject_m9E546ACABE47F5CF75CD64CC4A72D0D11F6BFD4A_gshared (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, RuntimeObject * ___msg0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method);

// System.Void System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6 (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkServer::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
inline void NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416 (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *, bool, const RuntimeMethod*))NetworkServer_RegisterHandler_TisRuntimeObject_mEB4A1C8B2EB3D3F898780690D4D055E981E3604F_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Void System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3AE9F3D85ACE7AAFFE5720553CE249F7916FD80B (Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkClient::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
inline void NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m6015985FD09AE793467BDE20492AD02FF247EC0B (Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E *, bool, const RuntimeMethod*))NetworkClient_RegisterHandler_TisRuntimeObject_m20E52DAAC528B9A6CC06C4EC4880D582A49A1D6D_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Void Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage__ctor_mF76955E1589EA1284F43491FECC2C489C2A279ED (AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(!!0,System.Int32)
inline bool NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m39D545B7221A15F45D9A18774D8EA4EE630864B2 (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * ___msg0, int32_t ___channelId1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 *, int32_t, const RuntimeMethod*))NetworkConnection_Send_TisRuntimeObject_m9E546ACABE47F5CF75CD64CC4A72D0D11F6BFD4A_gshared)(__this, ___msg0, ___channelId1, method);
}
// System.Boolean Mirror.ILoggerExtensions::LogEnabled(UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage__ctor_m12F5F018D5F68991C33F3500DD95B98B778F75B6 (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(!!0,System.Int32)
inline bool NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729 (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * ___msg0, int32_t ___channelId1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 *, int32_t, const RuntimeMethod*))NetworkConnection_Send_TisRuntimeObject_m9E546ACABE47F5CF75CD64CC4A72D0D11F6BFD4A_gshared)(__this, ___msg0, ___channelId1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::Invoke(!0)
inline void UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919 (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C *, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, float ___waitTime1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10__ctor_m412DE1B3E08CF3D267189325E4993496EE57638C (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4 (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.ILogger Mirror.LogFactory::GetLogger(System.Type,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogFactory_GetLogger_m9DA672FC43508040E38A4EDF238935D3A6A1088B (Type_t * ___type0, int32_t ___defaultLogLevel1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase__ctor_mD7A6D79E5F3785F10BFEDE46CD65CBAFFD1E7B3A (MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * __this, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase_Serialize_m1C2E91E28A8CD4F43556C396AE61D7B39434E66C (MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase_Deserialize_mDDE46D8095983E1187777D2A697EC48E3E406115 (MessageBase_t18C829EC4363E125BF1E98E367DFBE721034BDC6 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.String Mirror.NetworkReaderExtensions::ReadString(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteByte(Mirror.NetworkWriter,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.Byte Mirror.NetworkReaderExtensions::ReadByte(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99 (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C * __this, UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C *, UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *, const RuntimeMethod*))UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared)(__this, ___call0, method);
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__6__ctor_mF18D8474BAEEC92749555393813FFD411336723F (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
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
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkServer.RegisterHandler<AuthRequestMessage>(OnAuthRequestMessage, false);
		Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * L_0 = (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *)il2cpp_codegen_object_new(Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867_il2cpp_TypeInfo_var);
		Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416(L_0, (bool)0, /*hidden argument*/NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkClient.RegisterHandler<AuthResponseMessage>(OnAuthResponseMessage, false);
		Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E * L_0 = (Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E *)il2cpp_codegen_object_new(Action_2_tC1BBFFF5130747A8F618EFDBAD1656ADF083BD7E_il2cpp_TypeInfo_var);
		Action_2__ctor_m3AE9F3D85ACE7AAFFE5720553CE249F7916FD80B(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m3AE9F3D85ACE7AAFFE5720553CE249F7916FD80B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m6015985FD09AE793467BDE20492AD02FF247EC0B(L_0, (bool)0, /*hidden argument*/NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m6015985FD09AE793467BDE20492AD02FF247EC0B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnServerAuthenticate_mCE4E2E632A207B59A7CB160CD1F264E0B89C5B39 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnClientAuthenticate_mA8E79AAE79A3F1EE9E5D413766ABB4F896E9E596 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnClientAuthenticate_mA8E79AAE79A3F1EE9E5D413766ABB4F896E9E596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * V_0 = NULL;
	{
		// AuthRequestMessage authRequestMessage = new AuthRequestMessage
		// {
		//     authUsername = username,
		//     authPassword = password
		// };
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_0 = (AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 *)il2cpp_codegen_object_new(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_il2cpp_TypeInfo_var);
		AuthRequestMessage__ctor_mF76955E1589EA1284F43491FECC2C489C2A279ED(L_0, /*hidden argument*/NULL);
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_1 = L_0;
		String_t* L_2 = __this->get_username_7();
		NullCheck(L_1);
		L_1->set_authUsername_0(L_2);
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_3 = L_1;
		String_t* L_4 = __this->get_password_8();
		NullCheck(L_3);
		L_3->set_authPassword_1(L_4);
		V_0 = L_3;
		// conn.Send(authRequestMessage);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_5 = ___conn0;
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_6 = V_0;
		NullCheck(L_5);
		NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m39D545B7221A15F45D9A18774D8EA4EE630864B2(L_5, L_6, 0, /*hidden argument*/NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m39D545B7221A15F45D9A18774D8EA4EE630864B2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthRequestMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * V_0 = NULL;
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * V_1 = NULL;
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Request: {0} {1}", msg.authUsername, msg.authPassword);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_1 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Request: {0} {1}", msg.authUsername, msg.authPassword);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_5 = ___msg1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_authUsername_0();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_8 = ___msg1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_authPassword_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_2);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_2, 3, _stringLiteralA619DDA1EA1DC08AE47B9F6DC203CB4C77EB42D9, L_7);
	}

IL_0034:
	{
		// if (msg.authUsername == username && msg.authPassword == password)
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_10 = ___msg1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_authUsername_0();
		String_t* L_12 = __this->get_username_7();
		bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * L_14 = ___msg1;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_authPassword_1();
		String_t* L_16 = __this->get_password_8();
		bool L_17 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 100,
		//     message = "Success"
		// };
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_18 = (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 *)il2cpp_codegen_object_new(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_il2cpp_TypeInfo_var);
		AuthResponseMessage__ctor_m12F5F018D5F68991C33F3500DD95B98B778F75B6(L_18, /*hidden argument*/NULL);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_19 = L_18;
		NullCheck(L_19);
		L_19->set_code_0((uint8_t)((int32_t)100));
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_20 = L_19;
		NullCheck(L_20);
		L_20->set_message_1(_stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184);
		V_0 = L_20;
		// conn.Send(authResponseMessage);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_21 = ___conn0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_22 = V_0;
		NullCheck(L_21);
		NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729(L_21, L_22, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729_RuntimeMethod_var);
		// OnServerAuthenticated.Invoke(conn);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_23 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnServerAuthenticated_4();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_24 = ___conn0;
		NullCheck(L_23);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_23, L_24, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
		// }
		return;
	}

IL_0089:
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 200,
		//     message = "Invalid Credentials"
		// };
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_25 = (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 *)il2cpp_codegen_object_new(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_il2cpp_TypeInfo_var);
		AuthResponseMessage__ctor_m12F5F018D5F68991C33F3500DD95B98B778F75B6(L_25, /*hidden argument*/NULL);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_26 = L_25;
		NullCheck(L_26);
		L_26->set_code_0((uint8_t)((int32_t)200));
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_message_1(_stringLiteral3EEBB38327CD8BBB45A632C28A42F5208A399629);
		V_1 = L_27;
		// conn.Send(authResponseMessage);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_28 = ___conn0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_29 = V_1;
		NullCheck(L_28);
		NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729(L_28, L_29, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m13AEB33988A614BD1111A43A42F0127361673729_RuntimeMethod_var);
		// conn.isAuthenticated = false;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_30 = ___conn0;
		NullCheck(L_30);
		L_30->set_isAuthenticated_5((bool)0);
		// StartCoroutine(DelayedDisconnect(conn, 1));
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_31 = ___conn0;
		RuntimeObject* L_32 = BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8(__this, L_31, (1.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, float ___waitTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * L_0 = (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA *)il2cpp_codegen_object_new(U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA_il2cpp_TypeInfo_var);
		U3CDelayedDisconnectU3Ed__10__ctor_m412DE1B3E08CF3D267189325E4993496EE57638C(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * L_1 = L_0;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_2 = ___conn0;
		NullCheck(L_1);
		L_1->set_conn_3(L_2);
		U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * L_3 = L_1;
		float L_4 = ___waitTime1;
		NullCheck(L_3);
		L_3->set_waitTime_2(L_4);
		return L_3;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthResponseMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.code == 100)
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_0 = ___msg1;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_code_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_3 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_7 = ___msg1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_message_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_4, 3, _stringLiteral44A1DEDB80DBEAFD92CE187B034D34E0A4AAC788, L_6);
	}

IL_0035:
	{
		// OnClientAuthenticated.Invoke(conn);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_9 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnClientAuthenticated_5();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_10 = ___conn0;
		NullCheck(L_9);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_9, L_10, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
		// }
		return;
	}

IL_0042:
	{
		// logger.LogFormat(LogType.Error, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * L_14 = ___msg1;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_message_1();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		NullCheck(L_11);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_11, 0, _stringLiteral44A1DEDB80DBEAFD92CE187B034D34E0A4AAC788, L_13);
		// conn.isAuthenticated = false;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_16 = ___conn0;
		NullCheck(L_16);
		L_16->set_isAuthenticated_5((bool)0);
		// conn.Disconnect();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_17 = ___conn0;
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_17);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator__ctor_mDAC8FD74BCB61056937C3E6D65C8588623AD4EB6 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	{
		NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator__cctor_m50B0C0750F7292AE485BFFAD426E5614AABC7C60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator__cctor_m50B0C0750F7292AE485BFFAD426E5614AABC7C60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ILogger logger = LogFactory.GetLogger(typeof(BasicAuthenticator));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = LogFactory_GetLogger_m9DA672FC43508040E38A4EDF238935D3A6A1088B(L_1, 2, /*hidden argument*/NULL);
		((BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE_il2cpp_TypeInfo_var))->set_logger_6(L_2);
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
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10__ctor_m412DE1B3E08CF3D267189325E4993496EE57638C (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10_System_IDisposable_Dispose_mD2F76A47D24453843630F80083C9C4A07B9FAD13 (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDisconnectU3Ed__10_MoveNext_mECCD85BDC2FEC4B4653993BE07C819928EC68277 (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__10_MoveNext_mECCD85BDC2FEC4B4653993BE07C819928EC68277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->get_waitTime_2();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// conn.Disconnect();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_5 = __this->get_conn_3();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_5);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m03D5912E5C6EA2602EE863505814503CD675B004 (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6FB9B117EAC095D5ECF120BFD00C809C7C27CAD (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6FB9B117EAC095D5ECF120BFD00C809C7C27CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6FB9B117EAC095D5ECF120BFD00C809C7C27CAD_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_get_Current_mF717ECBC94E90B9AB712F9ED09D2C457AE570557 (U3CDelayedDisconnectU3Ed__10_t64C63EB134531081840510D08A156042F140F9AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage__ctor_mF76955E1589EA1284F43491FECC2C489C2A279ED (AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mD7A6D79E5F3785F10BFEDE46CD65CBAFFD1E7B3A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage_Serialize_m8B0321E0FA5ACD3F1CBEAFFF8FDDBC449D8A2C8F (AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthRequestMessage_Serialize_m8B0321E0FA5ACD3F1CBEAFFF8FDDBC449D8A2C8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		MessageBase_Serialize_m1C2E91E28A8CD4F43556C396AE61D7B39434E66C(__this, L_0, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_1 = ___writer0;
		String_t* L_2 = __this->get_authUsername_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_1, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		String_t* L_4 = __this->get_authPassword_1();
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage_Deserialize_m10486E532841A96795696FF06C7C1AE4A47C5244 (AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthRequestMessage_Deserialize_m10486E532841A96795696FF06C7C1AE4A47C5244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		MessageBase_Deserialize_mDDE46D8095983E1187777D2A697EC48E3E406115(__this, L_0, /*hidden argument*/NULL);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_1 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		String_t* L_2 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_1, /*hidden argument*/NULL);
		__this->set_authUsername_0(L_2);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_3 = ___reader0;
		String_t* L_4 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_3, /*hidden argument*/NULL);
		__this->set_authPassword_1(L_4);
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
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage__ctor_m12F5F018D5F68991C33F3500DD95B98B778F75B6 (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mD7A6D79E5F3785F10BFEDE46CD65CBAFFD1E7B3A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage_Serialize_m4270D12FEC9815540FAFE5432062B27C614CDF09 (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * __this, NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthResponseMessage_Serialize_m4270D12FEC9815540FAFE5432062B27C614CDF09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		MessageBase_Serialize_m1C2E91E28A8CD4F43556C396AE61D7B39434E66C(__this, L_0, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_1 = ___writer0;
		uint8_t L_2 = __this->get_code_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C(L_1, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		String_t* L_4 = __this->get_message_1();
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage_Deserialize_m1CBC378055B3DAF48DC6490FD1782A27D87B0174 (AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 * __this, NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthResponseMessage_Deserialize_m1CBC378055B3DAF48DC6490FD1782A27D87B0174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		MessageBase_Deserialize_mDDE46D8095983E1187777D2A697EC48E3E406115(__this, L_0, /*hidden argument*/NULL);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_1 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint8_t L_2 = NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151(L_1, /*hidden argument*/NULL);
		__this->set_code_0(L_2);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_3 = ___reader0;
		String_t* L_4 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_3, /*hidden argument*/NULL);
		__this->set_message_1(L_4);
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
// System.Void Mirror.Authenticators.TimeoutAuthenticator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_7();
		NullCheck(L_0);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_1 = L_0->get_OnClientAuthenticated_5();
		UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * L_2 = (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *)il2cpp_codegen_object_new(UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99(L_2, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m1E410E63AE0D9DE58AC6FC5DDCF909B50F6F29AB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var);
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_3 = __this->get_authenticator_7();
		NullCheck(L_3);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_4 = L_3->get_OnServerAuthenticated_4();
		UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * L_5 = (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *)il2cpp_codegen_object_new(UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99(L_5, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m2AF8C046100707D3D273E28D0A8757539E758141_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnClientAuthenticate_mAFDA807EA4DA30E9B19C1DBED970743E3E976C73 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	{
		// authenticator.OnClientAuthenticate(conn);
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_7();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___conn0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * >::Invoke(7 /* System.Void Mirror.NetworkAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection) */, L_0, L_1);
		// if (timeout > 0)
		float L_2 = __this->get_timeout_8();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(conn));
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		RuntimeObject* L_4 = TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnServerAuthenticate_m81C0488E17F37AC456F218B4920E13B4441A87A6 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	{
		// authenticator.OnServerAuthenticate(conn);
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_7();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___conn0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * >::Invoke(5 /* System.Void Mirror.NetworkAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection) */, L_0, L_1);
		// if (timeout > 0)
		float L_2 = __this->get_timeout_8();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(conn));
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		RuntimeObject* L_4 = TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * L_0 = (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 *)il2cpp_codegen_object_new(U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9_il2cpp_TypeInfo_var);
		U3CBeginAuthenticationU3Ed__6__ctor_mF18D8474BAEEC92749555393813FFD411336723F(L_0, 0, /*hidden argument*/NULL);
		U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * L_2 = L_1;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		NullCheck(L_2);
		L_2->set_conn_2(L_3);
		return L_2;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator__ctor_mD7952710285B873399795D100258BDD3E5C67857 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// public float timeout = 60;
		__this->set_timeout_8((60.0f));
		NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator__cctor_mA8DCE109C5596D84AE26A616DB054B3554A71D7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator__cctor_mA8DCE109C5596D84AE26A616DB054B3554A71D7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ILogger logger = LogFactory.GetLogger(typeof(TimeoutAuthenticator));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = LogFactory_GetLogger_m9DA672FC43508040E38A4EDF238935D3A6A1088B(L_1, 2, /*hidden argument*/NULL);
		((TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var))->set_logger_6(L_2);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__3_0(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m1E410E63AE0D9DE58AC6FC5DDCF909B50F6F29AB (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m1E410E63AE0D9DE58AC6FC5DDCF909B50F6F29AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_0 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnClientAuthenticated_5();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__3_1(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m2AF8C046100707D3D273E28D0A8757539E758141 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m2AF8C046100707D3D273E28D0A8757539E758141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_0 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnServerAuthenticated_4();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
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
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__6__ctor_mF18D8474BAEEC92749555393813FFD411336723F (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__6_System_IDisposable_Dispose_m2C0B8E137205223AD0A340D9710C873F7F0E2BC8 (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBeginAuthenticationU3Ed__6_MoveNext_m2CC979E28C2D11F157C850E9FB4BBDF9CCC43F2D (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__6_MoveNext_m2CC979E28C2D11F157C850E9FB4BBDF9CCC43F2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (logger.LogEnabled()) logger.Log($"Authentication countdown started {conn} {timeout}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_5 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication countdown started {conn} {timeout}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var))->get_logger_6();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_7 = __this->get_conn_2();
		TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_timeout_8();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral0929FC5D764F38A4DC6337E07A4E384548629E24, L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_6, L_12);
	}

IL_004f:
	{
		// yield return new WaitForSecondsRealtime(timeout);
		TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_timeout_8();
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_15 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!conn.isAuthenticated)
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_16 = __this->get_conn_2();
		NullCheck(L_16);
		bool L_17 = L_16->get_isAuthenticated_5();
		if (L_17)
		{
			goto IL_00ae;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication Timeout {conn}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = ((TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_19 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication Timeout {conn}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var);
		RuntimeObject* L_20 = ((TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C_il2cpp_TypeInfo_var))->get_logger_6();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_21 = __this->get_conn_2();
		String_t* L_22 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6B828ECA3C31C9B8332C3B05E37DC8230DF5A8B5, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_20, L_22);
	}

IL_00a3:
	{
		// conn.Disconnect();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_23 = __this->get_conn_2();
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_23);
	}

IL_00ae:
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0AAF2A9A01AAFC71CDB3A17CBA0115870C426A59 (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_Reset_m6AB3AF071D3BA47431391268CBD0B91ADE017415 (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_Reset_m6AB3AF071D3BA47431391268CBD0B91ADE017415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_Reset_m6AB3AF071D3BA47431391268CBD0B91ADE017415_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__6_System_Collections_IEnumerator_get_Current_mCD7BB7868D289A2443B62D15FCA0C6B5EC1951B6 (U3CBeginAuthenticationU3Ed__6_t68898E232F013B1737914CB35072ABAACBFA0CA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
