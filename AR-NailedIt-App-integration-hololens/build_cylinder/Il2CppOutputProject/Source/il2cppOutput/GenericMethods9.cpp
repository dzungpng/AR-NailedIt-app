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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// RTG.GizmoBehaviourCollection
struct GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t43CAA7C036A3D1B90682708F7EB07B75E137663F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tACB55267A4440676D5E50F91141861E8359ABC5F;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_tADB64B0DE6EDBF8E9A8B2DFA59DAF94491BBEE93;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t694AB0BB5090818473AA9742BF34524DF94A1752;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_tB244008973DD93E9AABDF39E52AD093FA0E7560A;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/TrackableResultData>
struct IEnumerable_1_tEE24B61D96F5606F758B2628E518C75C1026AB08;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
// System.Collections.Generic.List`1<RTG.IGizmoBehaviour>
struct List_1_tD7F414FD92F405B8A23FF1D6F83A25C4404BB669;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332;
// System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher/EventRecord>
struct Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871;
// System.Collections.Generic.SortedDictionary`2<System.String,UnityEngine.ILogger>
struct SortedDictionary_2_t24CCDA259F52E2B4CA6A64C775FFAB90D5E55820;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_t761E0F084572634E94674D7C1912B56771C73045;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_t873B2E4C2418F756278367655E1C64D654382460;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t9345A2C4627555419189CF853278DE7693A977BB;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogHandler
struct ILogHandler_t941F581F97535C9BFC019CF1D0B44990E31F92B4;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;
// UnityEngine.UIElements.EventBase
struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD;
// UnityEngine.UIElements.EventDispatcher/DispatchContext[]
struct DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8;
// UnityEngine.UIElements.EventDispatcher/EventRecord[]
struct EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94;
// UnityEngine.UIElements.IPanel
struct IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2;
// Vuforia.IlluminationManager
struct IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.VuMarkManager
struct VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_mDB7B84266E55526467766A96022CB6B9CD332251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m160D33F8A2BAE956BBD95D71377E68B6AB2DB0F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m01E18ACAEB6AC07D25CE739B6EC31EC52DB25956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mBEE3CCB2651B39976F7ECCBB024119C449ABF8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m02906731F2C640721420E2EBBB3F056CAE7487F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mDAF3EEB83A1175BE557BC60F39C03C0980472FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_mDB7B84266E55526467766A96022CB6B9CD332251_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m160D33F8A2BAE956BBD95D71377E68B6AB2DB0F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m01E18ACAEB6AC07D25CE739B6EC31EC52DB25956_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisRuntimeObject_mBEE3CCB2651B39976F7ECCBB024119C449ABF8B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m02906731F2C640721420E2EBBB3F056CAE7487F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mDAF3EEB83A1175BE557BC60F39C03C0980472FF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogFactory_GetLogger_TisRuntimeObject_m14316AB8F9CCD7B5CFBF45489342948226B6F615_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Resources_FindObjectsOfTypeAll_TisRuntimeObject_m21F4452BBFF8DBA749320607D06023895549689D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m346CA8D5B5290A84D7F8D3AE92051FBC19A8BD2E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7;
struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A;
struct KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B;
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8;
struct EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mirror.LogFactory
struct  LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5  : public RuntimeObject
{
public:

public:
};

struct LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_StaticFields
{
public:
	// System.Collections.Generic.SortedDictionary`2<System.String,UnityEngine.ILogger> Mirror.LogFactory::loggers
	SortedDictionary_2_t24CCDA259F52E2B4CA6A64C775FFAB90D5E55820 * ___loggers_0;
	// UnityEngine.ILogHandler Mirror.LogFactory::defaultLogHandler
	RuntimeObject* ___defaultLogHandler_1;
	// System.Boolean Mirror.LogFactory::debugMode
	bool ___debugMode_2;

public:
	inline static int32_t get_offset_of_loggers_0() { return static_cast<int32_t>(offsetof(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_StaticFields, ___loggers_0)); }
	inline SortedDictionary_2_t24CCDA259F52E2B4CA6A64C775FFAB90D5E55820 * get_loggers_0() const { return ___loggers_0; }
	inline SortedDictionary_2_t24CCDA259F52E2B4CA6A64C775FFAB90D5E55820 ** get_address_of_loggers_0() { return &___loggers_0; }
	inline void set_loggers_0(SortedDictionary_2_t24CCDA259F52E2B4CA6A64C775FFAB90D5E55820 * value)
	{
		___loggers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loggers_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultLogHandler_1() { return static_cast<int32_t>(offsetof(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_StaticFields, ___defaultLogHandler_1)); }
	inline RuntimeObject* get_defaultLogHandler_1() const { return ___defaultLogHandler_1; }
	inline RuntimeObject** get_address_of_defaultLogHandler_1() { return &___defaultLogHandler_1; }
	inline void set_defaultLogHandler_1(RuntimeObject* value)
	{
		___defaultLogHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultLogHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_debugMode_2() { return static_cast<int32_t>(offsetof(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_StaticFields, ___debugMode_2)); }
	inline bool get_debugMode_2() const { return ___debugMode_2; }
	inline bool* get_address_of_debugMode_2() { return &___debugMode_2; }
	inline void set_debugMode_2(bool value)
	{
		___debugMode_2 = value;
	}
};


// RTG.GizmoBehaviourCollection
struct  GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<RTG.IGizmoBehaviour> RTG.GizmoBehaviourCollection::_behaviours
	List_1_tD7F414FD92F405B8A23FF1D6F83A25C4404BB669 * ____behaviours_0;

public:
	inline static int32_t get_offset_of__behaviours_0() { return static_cast<int32_t>(offsetof(GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F, ____behaviours_0)); }
	inline List_1_tD7F414FD92F405B8A23FF1D6F83A25C4404BB669 * get__behaviours_0() const { return ____behaviours_0; }
	inline List_1_tD7F414FD92F405B8A23FF1D6F83A25C4404BB669 ** get_address_of__behaviours_0() { return &____behaviours_0; }
	inline void set__behaviours_0(List_1_tD7F414FD92F405B8A23FF1D6F83A25C4404BB669 * value)
	{
		____behaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____behaviours_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___entries_1)); }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___keys_7)); }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___values_8)); }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Boolean>
struct  Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Byte>
struct  Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Char>
struct  Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields, ___Instance_0)); }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTime>
struct  Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTimeOffset>
struct  Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Decimal>
struct  Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Double>
struct  Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Guid>
struct  Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int16>
struct  Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int32>
struct  Caster_1_t847B65F78580B4C35C46212B37066290881E839D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int64>
struct  Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.IntPtr>
struct  Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Object>
struct  Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.SByte>
struct  Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields, ___Instance_0)); }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Single>
struct  Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.TimeSpan>
struct  Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt16>
struct  Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt32>
struct  Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt64>
struct  Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UIntPtr>
struct  Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Boolean>
struct  Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Byte>
struct  Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Char>
struct  Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields, ___Instance_0)); }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields, ___Instance_0)); }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTime>
struct  Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTimeOffset>
struct  Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Decimal>
struct  Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Double>
struct  Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Guid>
struct  Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int16>
struct  Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int32>
struct  Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int64>
struct  Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields, ___Instance_0)); }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.IntPtr>
struct  Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Object>
struct  Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields, ___Instance_0)); }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.SByte>
struct  Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Single>
struct  Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.TimeSpan>
struct  Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt16>
struct  Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt32>
struct  Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt64>
struct  Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UIntPtr>
struct  Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Boolean>
struct  Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Byte>
struct  Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Char>
struct  Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTime>
struct  Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTimeOffset>
struct  Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Decimal>
struct  Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields, ___Instance_0)); }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Double>
struct  Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Guid>
struct  Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int16>
struct  Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int32>
struct  Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int64>
struct  Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.IntPtr>
struct  Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Object>
struct  Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.SByte>
struct  Caster_1_t9347D88993875351431679E4107168C7CD28B825  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Single>
struct  Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.TimeSpan>
struct  Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt16>
struct  Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt32>
struct  Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt64>
struct  Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UIntPtr>
struct  Caster_1_t0233A96550545D6F17A5141586520D492131F3AF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Boolean>
struct  Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Byte>
struct  Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Char>
struct  Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields, ___Instance_0)); }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTime>
struct  Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTimeOffset>
struct  Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Decimal>
struct  Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Double>
struct  Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Guid>
struct  Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int16>
struct  Caster_1_tE25B230380E2CE54B9276690CD814DE511450833  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int32>
struct  Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int64>
struct  Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.IntPtr>
struct  Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Object>
struct  Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields, ___Instance_0)); }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.SByte>
struct  Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Single>
struct  Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.TimeSpan>
struct  Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt16>
struct  Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt32>
struct  Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt64>
struct  Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UIntPtr>
struct  Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Object,System.Object>
struct  Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Boolean>
struct  Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Byte>
struct  Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Char>
struct  Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTime>
struct  Caster_1_tB027436891672D8E446545806D30A74D601A125F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTimeOffset>
struct  Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Decimal>
struct  Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Double>
struct  Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Guid>
struct  Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int16>
struct  Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int32>
struct  Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int64>
struct  Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.IntPtr>
struct  Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Object>
struct  Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.SByte>
struct  Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields, ___Instance_0)); }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Single>
struct  Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.TimeSpan>
struct  Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt16>
struct  Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt32>
struct  Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt64>
struct  Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UIntPtr>
struct  Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Boolean>
struct  Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Byte>
struct  Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Char>
struct  Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTime>
struct  Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTimeOffset>
struct  Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Decimal>
struct  Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Double>
struct  Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Guid>
struct  Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int16>
struct  Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields, ___Instance_0)); }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int32>
struct  Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int64>
struct  Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields, ___Instance_0)); }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.IntPtr>
struct  Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields, ___Instance_0)); }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Object>
struct  Caster_1_t0E97020316A62558167F5F018A989125D28729AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.SByte>
struct  Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Single>
struct  Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.TimeSpan>
struct  Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt16>
struct  Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt32>
struct  Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt64>
struct  Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UIntPtr>
struct  Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Boolean>
struct  Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Byte>
struct  Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Char>
struct  Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTime>
struct  Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTimeOffset>
struct  Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields, ___Instance_0)); }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Decimal>
struct  Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Double>
struct  Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Guid>
struct  Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int16>
struct  Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int32>
struct  Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int64>
struct  Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.IntPtr>
struct  Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Object>
struct  Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.SByte>
struct  Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Single>
struct  Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.TimeSpan>
struct  Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt16>
struct  Caster_1_t42992A2C9D038623500C211031C77C7208D43273  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields, ___Instance_0)); }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt32>
struct  Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt64>
struct  Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UIntPtr>
struct  Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Boolean>
struct  Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Byte>
struct  Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Char>
struct  Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTime>
struct  Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTimeOffset>
struct  Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Decimal>
struct  Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Double>
struct  Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Guid>
struct  Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int16>
struct  Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int32>
struct  Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int64>
struct  Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.IntPtr>
struct  Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Object>
struct  Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.SByte>
struct  Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Single>
struct  Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Byte>
struct  EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int16>
struct  EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int32>
struct  EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct  EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct  EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct  EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct  EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct  EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>>
struct  EmptyArray_1_t2F6E359A64FCAE440B259B477121A341730D73D3  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t2F6E359A64FCAE440B259B477121A341730D73D3_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t2F6E359A64FCAE440B259B477121A341730D73D3_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct  EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct  EmptyArray_1_t8F040DE236BB37753B6C3C9DD05C0D6C3048F34C  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t8F040DE236BB37753B6C3C9DD05C0D6C3048F34C_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t8F040DE236BB37753B6C3C9DD05C0D6C3048F34C_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.Color>
struct  EmptyArray_1_t2CC8C21DA8E820634F1A9072EE6B312F619CEC67  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t2CC8C21DA8E820634F1A9072EE6B312F619CEC67_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t2CC8C21DA8E820634F1A9072EE6B312F619CEC67_StaticFields, ___Value_0)); }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* get_Value_0() const { return ___Value_0; }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.UIElements.EventDispatcher_DispatchContext>
struct  EmptyArray_1_tD450B3E780A483702F6021E7AB15D408BA3D1D44  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tD450B3E780A483702F6021E7AB15D408BA3D1D44_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tD450B3E780A483702F6021E7AB15D408BA3D1D44_StaticFields, ___Value_0)); }
	inline DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8* get_Value_0() const { return ___Value_0; }
	inline DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.UIElements.EventDispatcher_EventRecord>
struct  EmptyArray_1_t29BA5D269CB0B85C3E049AAD3DEA264F6A9F77AC  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t29BA5D269CB0B85C3E049AAD3DEA264F6A9F77AC_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t29BA5D269CB0B85C3E049AAD3DEA264F6A9F77AC_StaticFields, ___Value_0)); }
	inline EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94* get_Value_0() const { return ___Value_0; }
	inline EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Linq.Enumerable
struct  Enumerable_tECC271C86C6E8F72E4E27C7C8FD5DB7B63D5D737  : public RuntimeObject
{
public:

public:
};


// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
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

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.StyleValueExtensions
struct  StyleValueExtensions_tB5C36975F3FBDF3E96DF727123E9F2BF45840915  : public RuntimeObject
{
public:

public:
};


// Vuforia.StateManager
struct  StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * ___mIlluminationManager_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mVuMarkManager_4)); }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_7() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mIlluminationManager_7)); }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * get_mIlluminationManager_7() const { return ___mIlluminationManager_7; }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 ** get_address_of_mIlluminationManager_7() { return &___mIlluminationManager_7; }
	inline void set_mIlluminationManager_7(IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * value)
	{
		___mIlluminationManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_7), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288  : public RuntimeObject
{
public:

public:
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082__padding[1];
	};

public:
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Linq.Buffer`1<System.Int32>
struct  Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2, ___items_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_items_0() const { return ___items_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Int32Enum>
struct  Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80, ___items_0)); }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* get_items_0() const { return ___items_0; }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Object>
struct  Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C, ___items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_items_0() const { return ___items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Single>
struct  Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F, ___items_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_items_0() const { return ___items_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.UInt32>
struct  Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247, ___items_0)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_items_0() const { return ___items_0; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.UIElements.EventDispatcher_DispatchContext
struct  DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA 
{
public:
	// System.UInt32 UnityEngine.UIElements.EventDispatcher_DispatchContext::m_GateCount
	uint32_t ___m_GateCount_0;
	// System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher_EventRecord> UnityEngine.UIElements.EventDispatcher_DispatchContext::m_Queue
	Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 * ___m_Queue_1;

public:
	inline static int32_t get_offset_of_m_GateCount_0() { return static_cast<int32_t>(offsetof(DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA, ___m_GateCount_0)); }
	inline uint32_t get_m_GateCount_0() const { return ___m_GateCount_0; }
	inline uint32_t* get_address_of_m_GateCount_0() { return &___m_GateCount_0; }
	inline void set_m_GateCount_0(uint32_t value)
	{
		___m_GateCount_0 = value;
	}

	inline static int32_t get_offset_of_m_Queue_1() { return static_cast<int32_t>(offsetof(DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA, ___m_Queue_1)); }
	inline Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 * get_m_Queue_1() const { return ___m_Queue_1; }
	inline Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 ** get_address_of_m_Queue_1() { return &___m_Queue_1; }
	inline void set_m_Queue_1(Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 * value)
	{
		___m_Queue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Queue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.EventDispatcher/DispatchContext
struct DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA_marshaled_pinvoke
{
	uint32_t ___m_GateCount_0;
	Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 * ___m_Queue_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.EventDispatcher/DispatchContext
struct DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA_marshaled_com
{
	uint32_t ___m_GateCount_0;
	Queue_1_t8014B4CCF79F7768A767C8013F6E176588BE8871 * ___m_Queue_1;
};

// UnityEngine.UIElements.EventDispatcher_EventRecord
struct  EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9 
{
public:
	// UnityEngine.UIElements.EventBase UnityEngine.UIElements.EventDispatcher_EventRecord::m_Event
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___m_Event_0;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.EventDispatcher_EventRecord::m_Panel
	RuntimeObject* ___m_Panel_1;

public:
	inline static int32_t get_offset_of_m_Event_0() { return static_cast<int32_t>(offsetof(EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9, ___m_Event_0)); }
	inline EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * get_m_Event_0() const { return ___m_Event_0; }
	inline EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD ** get_address_of_m_Event_0() { return &___m_Event_0; }
	inline void set_m_Event_0(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * value)
	{
		___m_Event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Panel_1() { return static_cast<int32_t>(offsetof(EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9, ___m_Panel_1)); }
	inline RuntimeObject* get_m_Panel_1() const { return ___m_Panel_1; }
	inline RuntimeObject** get_address_of_m_Panel_1() { return &___m_Panel_1; }
	inline void set_m_Panel_1(RuntimeObject* value)
	{
		___m_Panel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Panel_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.EventDispatcher/EventRecord
struct EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9_marshaled_pinvoke
{
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.EventDispatcher/EventRecord
struct EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9_marshaled_com
{
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Vuforia.DatasetTracker
struct  DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mActiveDataSets_1)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mDataSets_2)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>
struct  KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
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


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
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


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct  VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27, ___value___2)); }
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


// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * ___mRuntimeImageSource_5;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_5() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mRuntimeImageSource_5)); }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * get_mRuntimeImageSource_5() const { return ___mRuntimeImageSource_5; }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E ** get_address_of_mRuntimeImageSource_5() { return &___mRuntimeImageSource_5; }
	inline void set_mRuntimeImageSource_5(RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * value)
	{
		___mRuntimeImageSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_5), (void*)value);
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfo
struct  StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData_PoseData
#pragma pack(push, tp, 1)
struct  PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData_PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData_PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


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


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
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


// UnityEngine.UIElements.StyleInt
struct  StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};


// Vuforia.TrackerData_TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_TrackableResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_VuMarkTargetResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


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


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Boolean>
struct  Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Byte>
struct  Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Char>
struct  Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTime>
struct  Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTimeOffset>
struct  Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Decimal>
struct  Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Double>
struct  Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Guid>
struct  Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int16>
struct  Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int32>
struct  Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int64>
struct  Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.IntPtr>
struct  Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Object>
struct  Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.SByte>
struct  Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Single>
struct  Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.TimeSpan>
struct  Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt16>
struct  Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt32>
struct  Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt64>
struct  Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UIntPtr>
struct  Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Boolean>
struct  Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Byte>
struct  Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Char>
struct  Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTime>
struct  Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTimeOffset>
struct  Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Decimal>
struct  Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Double>
struct  Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Guid>
struct  Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int16>
struct  Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int32>
struct  Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int64>
struct  Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.IntPtr>
struct  Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Object>
struct  Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.SByte>
struct  Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Single>
struct  Transformer_1_t761E0F084572634E94674D7C1912B56771C73045  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.TimeSpan>
struct  Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt16>
struct  Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt32>
struct  Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt64>
struct  Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UIntPtr>
struct  Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Boolean>
struct  Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Byte>
struct  Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Char>
struct  Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTime>
struct  Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTimeOffset>
struct  Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Decimal>
struct  Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Double>
struct  Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Guid>
struct  Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int16>
struct  Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int32>
struct  Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int64>
struct  Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.IntPtr>
struct  Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Object>
struct  Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.SByte>
struct  Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Single>
struct  Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.TimeSpan>
struct  Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt16>
struct  Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt32>
struct  Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt64>
struct  Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UIntPtr>
struct  Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Boolean>
struct  Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Byte>
struct  Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Char>
struct  Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTime>
struct  Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTimeOffset>
struct  Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Decimal>
struct  Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Double>
struct  Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Guid>
struct  Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int16>
struct  Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int32>
struct  Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int64>
struct  Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.IntPtr>
struct  Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Object>
struct  Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.SByte>
struct  Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Single>
struct  Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.TimeSpan>
struct  Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt16>
struct  Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt32>
struct  Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt64>
struct  Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UIntPtr>
struct  Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Object,System.Object>
struct  Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Boolean>
struct  Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Byte>
struct  Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Char>
struct  Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTime>
struct  Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTimeOffset>
struct  Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Decimal>
struct  Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Double>
struct  Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Guid>
struct  Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int16>
struct  Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int32>
struct  Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int64>
struct  Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.IntPtr>
struct  Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Object>
struct  Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.SByte>
struct  Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Single>
struct  Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.TimeSpan>
struct  Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt16>
struct  Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt32>
struct  Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt64>
struct  Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UIntPtr>
struct  Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Boolean>
struct  Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Byte>
struct  Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Char>
struct  Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTime>
struct  Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTimeOffset>
struct  Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Decimal>
struct  Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Double>
struct  Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Guid>
struct  Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int16>
struct  Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int32>
struct  Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int64>
struct  Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.IntPtr>
struct  Transformer_1_t873B2E4C2418F756278367655E1C64D654382460  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Object>
struct  Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.SByte>
struct  Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Single>
struct  Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.TimeSpan>
struct  Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt16>
struct  Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt32>
struct  Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt64>
struct  Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UIntPtr>
struct  Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Boolean>
struct  Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Byte>
struct  Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Char>
struct  Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTime>
struct  Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTimeOffset>
struct  Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Decimal>
struct  Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Double>
struct  Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Guid>
struct  Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int16>
struct  Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int32>
struct  Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int64>
struct  Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.IntPtr>
struct  Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Object>
struct  Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.SByte>
struct  Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Single>
struct  Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.TimeSpan>
struct  Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt16>
struct  Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt32>
struct  Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt64>
struct  Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UIntPtr>
struct  Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Boolean>
struct  Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Byte>
struct  Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Char>
struct  Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTime>
struct  Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTimeOffset>
struct  Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Decimal>
struct  Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Double>
struct  Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Guid>
struct  Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int16>
struct  Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int32>
struct  Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int64>
struct  Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.IntPtr>
struct  Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Object>
struct  Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_Status>
struct  Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t9345A2C4627555419189CF853278DE7693A977BB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  m_Items[1];

public:
	inline KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  m_Items[1];

public:
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  m_Items[1];

public:
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  m_Items[1];

public:
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.EventDispatcher_DispatchContext[]
struct DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA  m_Items[1];

public:
	inline DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Queue_1), (void*)NULL);
	}
	inline DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Queue_1), (void*)NULL);
	}
};
// UnityEngine.UIElements.EventDispatcher_EventRecord[]
struct EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9  m_Items[1];

public:
	inline EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel_1), (void*)NULL);
		#endif
	}
	inline EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Linq.Buffer`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782_gshared (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A_gshared (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0_gshared (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Int32Enum>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA_gshared (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C_gshared (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656_gshared (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB_gshared (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28_gshared (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m15E14821150D72D98452426EA8B5871A1C607479_gshared (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.UInt32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* Buffer_1_ToArray_m042D0BD4FCB5FC3D9A162686844A6977062708EE_gshared (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7 (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136 (const RuntimeMethod* method);
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623 (const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782 (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Int32>::ToArray()
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *, const RuntimeMethod*))Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0 (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Int32Enum>::ToArray()
inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* (*) (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *, const RuntimeMethod*))Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656 (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *, const RuntimeMethod*))Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Single>::ToArray()
inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28 (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*) (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *, const RuntimeMethod*))Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_m15E14821150D72D98452426EA8B5871A1C607479 (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m15E14821150D72D98452426EA8B5871A1C607479_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.UInt32>::ToArray()
inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* Buffer_1_ToArray_m042D0BD4FCB5FC3D9A162686844A6977062708EE (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 * __this, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* (*) (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 *, const RuntimeMethod*))Buffer_1_ToArray_m042D0BD4FCB5FC3D9A162686844A6977062708EE_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Resources_FindObjectsOfTypeAll_mFFDC0207FEBD620424377896FC1B67307DB42520 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.ILogger Mirror.LogFactory::GetLogger(System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogFactory_GetLogger_m2F86F8BBB1046DE4B2B113EF268102E44D48C691 (String_t* ___loggerName0, int32_t ___defaultLogLevel1, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104 (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Int32 UnityEngine.UIElements.StyleInt::get_specificity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7 (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1 (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		RuntimeObject * L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x53, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		Exception_t * L_16 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, Enumerable_First_TisRuntimeObject_m53225A1E688AD00BBEA777AEBB2C6C914721CD92_RuntimeMethod_var);
	}

IL_0053:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::First<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Vuforia.TrackerData/TrackableResultData>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_7 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Vuforia.TrackerData/TrackableResultData>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/TrackableResultData>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_13 = InterfaceFuncInvoker0< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackerData/TrackableResultData>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_13;
			IL2CPP_LEAVE(0x53, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		Exception_t * L_16 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m355B01E66ABBE6D2DF726E6532E95DB1A33F97CD_RuntimeMethod_var);
	}

IL_0053:
	{
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mDB7B84266E55526467766A96022CB6B9CD332251_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_mDB7B84266E55526467766A96022CB6B9CD332251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_FirstOrDefault_TisRuntimeObject_mDB7B84266E55526467766A96022CB6B9CD332251_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		RuntimeObject * L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x57, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}

IL_0057:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_FirstOrDefault_TisRuntimeObject_m3F9FAF79EB8F2763FE850DE49EAEC746E85FF0A4_RuntimeMethod_var);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_0 = (RuntimeObject*)L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_1 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_1;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0039;
			}
		}

IL_0035:
		{
			RuntimeObject * L_11 = V_1;
			V_2 = (RuntimeObject *)L_11;
			IL2CPP_LEAVE(0x57, FINALLY_0043);
		}

IL_0039:
		{
			RuntimeObject* L_12 = V_0;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (L_13)
			{
				goto IL_0025;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}

IL_0057:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((RuntimeObject*)L_7);
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		return L_9;
	}

IL_002d:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_10);
		V_2 = (RuntimeObject*)L_11;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (!L_13)
			{
				goto IL_0050;
			}
		}

IL_003c:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck((RuntimeObject*)L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_14);
			V_3 = (RuntimeObject *)L_15;
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_003c;
			}
		}

IL_004b:
		{
			RuntimeObject * L_18 = V_3;
			V_4 = (RuntimeObject *)L_18;
			IL2CPP_LEAVE(0x62, FINALLY_0052);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck((RuntimeObject*)L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		Exception_t * L_21 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_Last_TisRuntimeObject_mCB01F433E7E61CA4DB359816A8EE70333DF7FFB2_RuntimeMethod_var);
	}

IL_0062:
	{
		RuntimeObject * L_22 = V_4;
		return L_22;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_001c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		V_1 = (int64_t)(((int64_t)((int64_t)0)));
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_2 = (RuntimeObject*)L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0030:
		{
			RuntimeObject* L_6 = V_2;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_3 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_3;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			RuntimeObject * L_11 = V_3;
			V_0 = (RuntimeObject *)L_11;
			int64_t L_12 = V_1;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
			V_1 = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_0047:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0030;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		int64_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		int64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0072;
	}

IL_0065:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_19 = V_4;
		return L_19;
	}

IL_0070:
	{
		RuntimeObject * L_20 = V_0;
		return L_20;
	}

IL_0072:
	{
		Exception_t * L_21 = Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m01E18ACAEB6AC07D25CE739B6EC31EC52DB25956_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m01E18ACAEB6AC07D25CE739B6EC31EC52DB25956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m01E18ACAEB6AC07D25CE739B6EC31EC52DB25956_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 )L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A((Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *)(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m160D33F8A2BAE956BBD95D71377E68B6AB2DB0F6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m160D33F8A2BAE956BBD95D71377E68B6AB2DB0F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m160D33F8A2BAE956BBD95D71377E68B6AB2DB0F6_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 )L_3;
		Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* L_4 = Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA((Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *)(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_mBEE3CCB2651B39976F7ECCBB024119C449ABF8B8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisRuntimeObject_mBEE3CCB2651B39976F7ECCBB024119C449ABF8B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisRuntimeObject_mBEE3CCB2651B39976F7ECCBB024119C449ABF8B8_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C )L_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656((Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *)(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m02906731F2C640721420E2EBBB3F056CAE7487F4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m02906731F2C640721420E2EBBB3F056CAE7487F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m02906731F2C640721420E2EBBB3F056CAE7487F4_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F )L_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28((Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *)(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.UInt32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* Enumerable_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mDAF3EEB83A1175BE557BC60F39C03C0980472FF5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mDAF3EEB83A1175BE557BC60F39C03C0980472FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mDAF3EEB83A1175BE557BC60F39C03C0980472FF5_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_m15E14821150D72D98452426EA8B5871A1C607479((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 )L_3;
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_4 = Buffer_1_ToArray_m042D0BD4FCB5FC3D9A162686844A6977062708EE((Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 *)(Buffer_1_tA44E75C0DCE7566508E761EF27C3DFFFC0ACC247 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m65245601C668347780A2F6D1A8D7EEC7D79AD673_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject * L_1 = ___key1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_3;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		RuntimeObject * L_3 = ___key1;
		NullCheck((RuntimeObject*)L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2, (RuntimeObject *)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_5 = ___defaultValue2;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7* Array_Empty_TisKeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937_m9EF9C1558CFFF96DB7596CA1EBBD30B5FCAB0538_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t7FAEDA541660EE14F76C26D48E51C98634127BF7* L_0 = ((EmptyArray_1_t2F6E359A64FCAE440B259B477121A341730D73D3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* Array_Empty_TisKeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78_m1A60190AB0E2A341E03194FC70B762E9A91708D5_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* L_0 = ((EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* Array_Empty_TisKeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C_m10DF1038EBBC27DAA2A8E284E94F8B54FB04ADE2_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* L_0 = ((EmptyArray_1_t8F040DE236BB37753B6C3C9DD05C0D6C3048F34C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* Array_Empty_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m70299FD71AF4EBCB301FA4BE52FFC24ACB084846_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* L_0 = ((EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Array_Empty_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_mFD821350912AACED896F751BCB7ABA444E8C88E6_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_0 = ((EmptyArray_1_t2CC8C21DA8E820634F1A9072EE6B312F619CEC67_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<UnityEngine.UIElements.EventDispatcher_DispatchContext>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8* Array_Empty_TisDispatchContext_tDF1F945F762418B995415C3C0158C0341152DAFA_mC922BB8D02298B5BE9F22F001F1FD57F7C2A683F_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		DispatchContextU5BU5D_t4467426EBDEB3B12C25D99303F7B67A6411B1BC8* L_0 = ((EmptyArray_1_tD450B3E780A483702F6021E7AB15D408BA3D1D44_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<UnityEngine.UIElements.EventDispatcher_EventRecord>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94* Array_Empty_TisEventRecord_t2A71AE34E4900DB6EF7EA77AE93BB03074EC7DC9_mA9A7413BD44D08594515EF6A6A7965564F3731D8_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		EventRecordU5BU5D_tCCE77A3C5C7FBB76F0BAC802BD005880513F5A94* L_0 = ((EmptyArray_1_t29BA5D269CB0B85C3E049AAD3DEA264F6A9F77AC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m9D0AD195AE130230B226737CAC6C6DAEC4B78ED8_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m334E2B648F386B328A8E5A260B686242B9B1A825_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m800C0157D5841A8D4C6A741E6C4F9FFFC0E0E33F_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m72CF8BBE548B570F27C87B6900191B9BC58FCA73_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_m4B3891162A682BB637507D7D7529AFA4F0C80CE3_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_10 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m6D8AF77439E7F5AD3656075625D18D191068C09F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m083189084CF765FF8179220A926820E814D85F56_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mEADBC5B21EE5EA79F60D83CCD98B1BE0E5C03752_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_10 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_2;
		return L_15;
	}
}
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m21F4452BBFF8DBA749320607D06023895549689D_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_FindObjectsOfTypeAll_TisRuntimeObject_m21F4452BBFF8DBA749320607D06023895549689D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Resources_FindObjectsOfTypeAll_mFFDC0207FEBD620424377896FC1B67307DB42520((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m408FB29288CCD7D690D065493B054F6E9495535C_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_0 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m346CA8D5B5290A84D7F8D3AE92051FBC19A8BD2E_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m346CA8D5B5290A84D7F8D3AE92051FBC19A8BD2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8, /*hidden argument*/NULL);
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_10 = ___obj0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_19;
	}
}
// Type RTG.GizmoBehaviourCollection::GetFirstBehaviourOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GizmoBehaviourCollection_GetFirstBehaviourOfType_TisRuntimeObject_m633ED606609C5ADBF8AB3E00D861DBC23ABF334A_gshared (GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F * __this, const RuntimeMethod* method)
{
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var list = GetBehavioursOfType<Type>();
		NullCheck((GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F *)__this);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GizmoBehaviourCollection_tD2BB10F8C5FF3FD93A8B444E5A230E78B8D5EE5F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		// if (list.Count != 0) return list[0];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (list.Count != 0) return list[0];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}

IL_0017:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4703200E8457C0A92046ED760F00CE44005EF424_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * L_0 = ((Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m39405AED72DA92F26E0172BAAE2234CAD45EBB81_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * L_0 = ((Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m98E56B5A92D022D027A74E25FDCC3D799EAB6804_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * L_0 = ((Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mB928A3EAFC85B48CA5F8746998096D6892171B3C_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * L_0 = ((Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m67EC6A4FF20B881663660072CA639825FC347F8C_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * L_0 = ((Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3F6FD286745E992B6827D8C75772F7A3012CB51E_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * L_0 = ((Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m27A19C22B04469C383D0777A361CC0504DBFF8ED_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * L_0 = ((Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mFE62B63ADDBFC56BD3809BA6A7C01D084B593D37_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * L_0 = ((Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m2642AADE370AEBFF905A6B0DA0A6259F236F748C_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * L_0 = ((Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisGuid_t_m5A0AFEE2BF910E98D56D0880005B1DDD51FD939C_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * L_0 = ((Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m230E24E784CB02937D8335B389AEB021289B0A82_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * L_0 = ((Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mB2ED9C3B935700D4BE55749949D58FE3B63B9B55_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * L_0 = ((Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m8DCE839F3A6EA158B607CC83266509F8F1BE588F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * L_0 = ((Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisIntPtr_t_mABB7C010A235E7F7443E34811536985C56709032_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * L_0 = ((Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisRuntimeObject_mB6959F0D52C5FF6F05B485070A979E423C7C058C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * L_0 = ((Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m562963CD9F91D60E971EFA159959EF8A92E0C3AD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * L_0 = ((Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m0349C7393DD78A2B9EAFD91BBD31A83D1AEF0E06_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * L_0 = ((Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mA16C77DBC2AE7C44F2DD9EF81CB34C302590EBBB_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * L_0 = ((Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m90785014402CE39C95C6A464FF15913865F0D20A_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * L_0 = ((Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m9BCA2BA360B336C8F1990736BDD2CD3C0532B5F9_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * L_0 = ((Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2C4DC528C0AE341726424A1F3F5856B320DD6B99_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * L_0 = ((Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUIntPtr_t_m1E02775612B080FE1AF0FD5661569EDC66A781E0_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * L_0 = ((Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m192073E98ADAA1A5F226CDF612C5F4A1EA326F04_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * L_0 = ((Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mB151EF5C27C8C3E67DC8EF7612BB364AF5AE71CB_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * L_0 = ((Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mA781CBF81CB566C5B97681482DDE49EE24BF2D39_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * L_0 = ((Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mD2D22DC060CF312B9A3016DE6A971B06E2A060E7_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * L_0 = ((Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m25D70E9A31AFD54807927CE75E424595D55EE885_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * L_0 = ((Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3C1554928412F1AFB670D5FE501C29108FD1BE6A_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * L_0 = ((Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m5C13043D24E9A69C7DCB2C4FCEF55CF0AF1C2C5F_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * L_0 = ((Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m4923214A4EAA4DAA4CEC11C2C911816FE1F47ABD_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * L_0 = ((Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mF5FF48C2DBF5A36B8C7AAEBD55DA020E48AF83FB_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * L_0 = ((Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisGuid_t_mB76EE32A727B7F98A0F65C59B00E43C0D8FB43A7_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * L_0 = ((Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m8F6C334DF8F1564AB5E45BA8211EE4456CBBB231_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * L_0 = ((Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m1D6C095DECABD7ECA612CE50A9323CC7558CE492_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * L_0 = ((Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mA8667973E976E623362B3916BD0A01EEFB22FB84_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * L_0 = ((Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisIntPtr_t_m5938B0521628AA9D2A57E92925B307C735673EDC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * L_0 = ((Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisRuntimeObject_m8EE8133972CA40759750FDFE5701582530670348_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * L_0 = ((Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m93E20FE7F1103F6F41FD560C2458DD73F85633A3_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * L_0 = ((Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD0181E906F9F43D543F29CE6062EB5408367D10C_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * L_0 = ((Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m69F9C79C03AB361FF42EBA7B6B818AF9BC434D35_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * L_0 = ((Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m98848A814468F001D1BAE2AC1382BB04F4B9A0FA_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * L_0 = ((Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB30F83D8D6EF175B27FD93FA87B6997566BDC30E_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * L_0 = ((Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m40973C82E1D5B4B70939CE0007C506D0AB05F808_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * L_0 = ((Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUIntPtr_t_mB8B15AA4089033746DB5FC9A7D782222FA37760A_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * L_0 = ((Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mD87021825E28AB9152A64711E36E831AB5BC1A69_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * L_0 = ((Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m904BD89D0794EDD4BA1ECD63B007E98198FE842A_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * L_0 = ((Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m250DB1C0688ED8987DEA68C8B4005B4C94701E81_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * L_0 = ((Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mE245467808C465EB51EE6E7A6D381E77C35886C1_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * L_0 = ((Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mE31527D1BE35D2661853F15F4C0D708E9C0B8FD9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * L_0 = ((Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m9DE76E933754179F978E8996F91230BAC513DE6D_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * L_0 = ((Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m6B23A7ADD84FEEFE2CF495A10C5F7F8A237F12F8_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * L_0 = ((Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mE33D0543DFD396F129480CE6EBB5AB7ED4953C63_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * L_0 = ((Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m18B425A1BD292BF835CD978A840B2B0495672AB6_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * L_0 = ((Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisGuid_t_m929A4D0FCC3C16092FBF35AB0C12A9A3C4ACA976_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * L_0 = ((Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m79C33E1C8F36629007121977ACA4722E2BFB97A5_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * L_0 = ((Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3352690FD9B7810E53BD0226ABA15061DABC3861_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * L_0 = ((Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mCE856A4A6FA913D30106882D36D439389EBED04F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * L_0 = ((Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisIntPtr_t_mCFDB3D5473BAE1CBA9286BB2552E06C1C389121A_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * L_0 = ((Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisRuntimeObject_m5381A5A027D55D6BD1F5AFEFDEFA4F6045D163AE_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * L_0 = ((Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m60FDEFA18A26FD45A8D1668C7844B4EC02D525B0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * L_0 = ((Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m120DF6B1F211DE3BB1CB7D07FEF84C22A6704F3F_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * L_0 = ((Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m77E6D4B131D8064BC00515F25FC3D872D1F189D1_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * L_0 = ((Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m76AE6217EF496F71CA44BF726149CA82CA98A851_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * L_0 = ((Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mCF05B647DA52B81D78F7C1C9E805162DCC534EC0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * L_0 = ((Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mD9ACCDE304740CCDD7DE5D3061FEBA4751A50AAD_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * L_0 = ((Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUIntPtr_t_mCF8F606BDF81C71855C4901A31FE3DDE2B41D07D_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * L_0 = ((Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mB862CD59E18B5D6DE3975635D248445FC1DCFEDC_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * L_0 = ((Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m767C2FDFF9ED64B0241800DCD45D84B6C424BBAF_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * L_0 = ((Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCA8359EA41F7B4D4F0334509E5C772674870DF27_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * L_0 = ((Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mDED6BE58F3B45FF48522331B6D37042116DC852B_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * L_0 = ((Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7AF2CC9A88EF6C7BA7062CBC9E6671DCFDDDE6C4_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * L_0 = ((Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA79E752D231DF346C6FDB3DB95DC5E91D1E994D5_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * L_0 = ((Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mF70A048030A6D511CFFA1F5C68CDF76AF0817985_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * L_0 = ((Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m438A2CEB68A593F5B57AC0CC95CCBDF3E5746A53_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * L_0 = ((Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m576C2E63208E9FA2318899CD5A9E0CD526980673_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * L_0 = ((Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisGuid_t_m0AB9E683843C5F8026B4BE353B704B9C0445562B_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * L_0 = ((Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mC7DC8A4161C7584AECE6AF041D57B381EE5A477F_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * L_0 = ((Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m037FE224C3CFAAD3497F4B3F31C82178225B384B_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * L_0 = ((Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mECC8829C16BE4538050F0A94F292AB8BC5EEE745_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * L_0 = ((Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mA69192E793A3C7BEE631D420533AFFBBEE0E6F70_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * L_0 = ((Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m9841D59B401BD9CBB358259BD32F5CE8276474C0_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * L_0 = ((Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m053631F41BC7D2E505B1600D5DF0B87718AC9F26_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * L_0 = ((Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD79C3D4ADCAC01009016633870F0F851B99BD7C7_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * L_0 = ((Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m5562E71891F3CD5A26093B67877C592DC57BF410_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * L_0 = ((Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD5B60AFDB1E022C0979DE3346D185C44D2022A2C_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * L_0 = ((Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB6D6836EC3E9686143CEF67C24015E934AFFF69D_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * L_0 = ((Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m17B3592AA114BB4F62C43FBE77386893E6A81672_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * L_0 = ((Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mBC233F334A4E586EC36F2284329A6B2E317ABF44_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * L_0 = ((Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_m14B8662697DCB26B5CE66EFF6D0A9BA01937351F_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * L_0 = ((Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mAE533483D2EB9736CA5036F45470ADB1E9F54524_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * L_0 = ((Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9C053DC9213280343424F5D4E6CA5412421EE9C1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * L_0 = ((Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m76E7947556939FCC5864462556D6EABBED1A2885_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * L_0 = ((Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mFEFA14B14A9E77A4CE09CAE160CF3D675326177F_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * L_0 = ((Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m673C9F8CB81B95A3CB90E49ABBE57EF86259907F_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * L_0 = ((Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mC26286A6D4E8B13D974E305ED759B60852346A79_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * L_0 = ((Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m740C047BDE43758747E4B36E049DC0AE266AFA60_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * L_0 = ((Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mECD8FBA0366809F56BB17362A9D59211AE7C3285_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * L_0 = ((Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m51A5D50B60E6833C3719179DAE4C745C4F72C18E_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * L_0 = ((Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m0FE9A2031A026A598CD001010D084B0045B6A34D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * L_0 = ((Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF38F852ACA2D84A5A751E725A2BD6E8075EAF7BF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * L_0 = ((Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mDC45B432580ACAEF29CFB6EAD130C43FD4EE2EE0_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * L_0 = ((Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m02A2989AD15E5C61CC8170CC360AD7D12462E6B0_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * L_0 = ((Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_m10DFA878C4388DB28234BEDE38F5B5102467D111_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * L_0 = ((Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_mE1FDE0675779B26082666516C621FEC19B207148_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * L_0 = ((Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m8ADF6B2EB361F9687FF8AD704E272E4CC73B65DD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * L_0 = ((Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC50E5A46276EEA9830E1DC4EE36D82C22F66C64A_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * L_0 = ((Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m136ECC8F15796D07201EF82AB5087C8577204CE7_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * L_0 = ((Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mB9241B4372765DCC3E2FB1E580E530F582D1DC42_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * L_0 = ((Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD1099AA921562AC8786F080BFFE193F342C52968_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * L_0 = ((Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2D0D20AC9F0E60DE8262A897B6FE18ED9D025C75_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * L_0 = ((Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_mD2B5AC3EAE3E39B8293CD9DC72D51C837C0783F5_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * L_0 = ((Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m3B872FF621B738CE1DF433FB14FE279F77DB875B_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * L_0 = ((Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDA9B765AC14F77C923A7CDB3C0D706221CFD15E5_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * L_0 = ((Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m08A6E25B90A3E4623E4D4C20C9BDED75E046317C_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * L_0 = ((Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mC622F6D0E6E8E105E53938B01F21FBBE3929BE59_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * L_0 = ((Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mC92B8CBBB0C4B10ED4E2450902EE2786DC858170_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * L_0 = ((Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA1D9F1862F772E31942176AD3F8CD00167E46851_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * L_0 = ((Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mCD324132C02011B0B32CCC47A4808A77236AED44_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * L_0 = ((Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m9B67538CB09A9BE23FFCE9BEC85E666C9A431017_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * L_0 = ((Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m47C7D923FD0FB3DB00E561558507770017AE9BCE_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * L_0 = ((Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_m654610841B56D96AD377D93B265DFEA5BCCD849F_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * L_0 = ((Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m68BD7EC0E8A27ABE7F05B6775C994BBF0AC9CF61_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * L_0 = ((Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFD2ADB5D6FF91AD34628103AB08D7D69E52B3F80_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * L_0 = ((Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mDEB00F12BF02652DD353CC17480C93E61DAD532F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * L_0 = ((Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_mA4FC52AC62D68943074BF8C0C5BFD283DBCC73D0_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * L_0 = ((Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_m33C8E0733764B34A5BCE1F2E6AFB8C155F39BEBF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * L_0 = ((Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m0E9A83FB710C70A26B0CCECD93E36054FD591BC6_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * L_0 = ((Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCF0D075974C55087E231D074BC65919B184F61B0_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * L_0 = ((Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m2B04CEE74D1BE3CF4EDB28113F73829B46C02053_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * L_0 = ((Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD814412C42F9D58EA1FDD6CE78D85CD7912178EC_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * L_0 = ((Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m569864A50A8516B4ED140C81F5208CAF8ABE5054_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * L_0 = ((Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m10412A2B6C85347835984822C2FA20E792A40553_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * L_0 = ((Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m4C89E4587F264A9DCAD1F7C77B9D279AA1CC44D1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * L_0 = ((Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mE45474D78C9C75421B50BA3B6F0D8A036086E3D4_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * L_0 = ((Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mA021FB7B9377D61AD510EFEE22C14B074DE4A97C_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * L_0 = ((Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCB509FD508A9096FD819CB976FCE17421E34AD79_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * L_0 = ((Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m3214E0BD22A7B25FE44C18CF248F52316E7BC735_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * L_0 = ((Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mB9853A7D22563E8B8B771F5876882C9B092C5B20_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * L_0 = ((Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m7D5EB067A14234897ACF89E7DF83657410CC2A50_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * L_0 = ((Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m31875099D68E21BE514D36A42DE21BFB3C26AB90_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * L_0 = ((Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m52991F9C4A2BAFC16B33C6A3C863FF0EECE550DE_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * L_0 = ((Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE4FDEAE7059AF2D9FAFF04E2F28F252697F34DD3_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * L_0 = ((Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_m6635AF97CD8EFCDC822515F565C0503A6035A773_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * L_0 = ((Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m3A03746E9FB5A67E1FAFBC546A726D7D461367CB_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * L_0 = ((Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m817E92EDAC63A713BB5FC2374E08E7999D44CC40_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * L_0 = ((Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m802F634F8484AA08CF5375C2FA35BFA704082BEC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * L_0 = ((Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_mB193F58608DFB76891B646A614E6FFA5CAF045AC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * L_0 = ((Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m2FF75954BEE32E7CBA81F696CFADEB32570A5295_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * L_0 = ((Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mB1165679FE03D30141CFB54B4E2BE302E9BA770A_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * L_0 = ((Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m70BC7C784870C55D1141CCE9A5418C9043782C55_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * L_0 = ((Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m29031690307B405A095E8E3B3592FF735CA185CF_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * L_0 = ((Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m12942B34C5E83255DBD90AEB2A90B3E7951E8864_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * L_0 = ((Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m71AFD836AA7C64489EEF9407F203B4EC27425961_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * L_0 = ((Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mE1C98F17A06AA92C3F21999A6E0FFE8EBEE7EC00_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * L_0 = ((Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mE20967A9C6BCC22F95A0C0F33954E8F20C099B10_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * L_0 = ((Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mA6D4DB9B4A0AEBFDB545206DD5F50F1B3B99E137_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * L_0 = ((Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBB6EBFF5DB5352C897AF4E4871D475088E798CE8_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * L_0 = ((Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m9A4AE5F28B661AB3608A08D4A008C6EFD59C8EF3_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * L_0 = ((Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mBE29FD6567FF1B7F5CC17B11E8A50CBCB4E457F8_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * L_0 = ((Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mAC44106BE1CC32C04B8323E028317909E16DE5D9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * L_0 = ((Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA92902179E75C6237A1FAF1A93DBC8A54C3D9F1C_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * L_0 = ((Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mD190CF4C4FFCF5CF0B55A6551271A963D62BACB4_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * L_0 = ((Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mD96A07754EB55396C0767DDFF0990FDE4642BA5C_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * L_0 = ((Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m89DE2BCD31E38F694C6C046DD591D93E6A4905BD_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * L_0 = ((Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m6A79FE5AAC75B2E933B0F2DF4316BDA9E79E6848_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * L_0 = ((Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mED333DF6FD1DC9723DE9E7A47A894EF358196150_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * L_0 = ((Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC432022B01CCED53D1279F08CCAAB4DBB83FBB41_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * L_0 = ((Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m51B47E785BA2597ABFBD0A9E7CAEBF2ECF1877AC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * L_0 = ((Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m1BE5340DBEDC930432982B6738A5820A9A4FCD42_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * L_0 = ((Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_m24E9DBADCE63823F1FB2AA2A116982AD2BEA67FF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * L_0 = ((Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m40171CC2B05F787A453D415B7B354C70FA91EB3C_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * L_0 = ((Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m08399F0F8C4F12BD2E29A845B2D5F7796C41B29E_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * L_0 = ((Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mBD8CF0C29D9F8046510C4F5872622EB351F706AE_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * L_0 = ((Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m663895C442194B5C317393C7D716656B08408CAE_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * L_0 = ((Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3A2842E06D5905F6E685A3033ECE6BB76E8912CF_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * L_0 = ((Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m4F2C115C6D08D4097EC80756F75A08786FF84C9B_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * L_0 = ((Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_mF6BC18592D238BE188D32FDF0722A5D2882A7763_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * L_0 = ((Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_2 = Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_3;
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		intptr_t L_4 = Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		int64_t L_6 = Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_8 = ((  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_5, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_6/(int64_t)(((int64_t)((int64_t)L_7)))))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_8;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = V_1;
		V_3 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_10 = V_3;
		return L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14);
		int32_t L_15 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.ILogger Mirror.LogFactory::GetLogger<System.Object>(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogFactory_GetLogger_TisRuntimeObject_m14316AB8F9CCD7B5CFBF45489342948226B6F615_gshared (int32_t ___defaultLogLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogFactory_GetLogger_TisRuntimeObject_m14316AB8F9CCD7B5CFBF45489342948226B6F615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLogger(typeof(T).Name, defaultLogLevel);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_1);
		int32_t L_3 = ___defaultLogLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = LogFactory_GetLogger_m2F86F8BBB1046DE4B2B113EF268102E44D48C691((String_t*)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleValueExtensions::ToStyleEnum<System.Int32Enum>(UnityEngine.UIElements.StyleInt,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  StyleValueExtensions_ToStyleEnum_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m23F1DB8B35560B2F8A54DBB59C111DE0ED0FF86E_gshared (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___styleInt0, int32_t ___value1, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___value1;
		int32_t L_1 = StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_2 = StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		V_1 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = V_1;
		return L_4;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_gshared (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_002d;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_002d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_5 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5);
		bool L_8 = Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5, (Type_t *)L_7, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck((RuntimeObject*)L_9);
		intptr_t L_11 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(107 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (int32_t)L_10);
		V_2 = (intptr_t)L_11;
		intptr_t L_12 = V_2;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_006b:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_16, /*hidden argument*/NULL);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_15, (Type_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_19 = V_2;
		ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * L_20 = (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 *)il2cpp_codegen_object_new(ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1(L_20, (intptr_t)L_19, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_20;
	}

IL_008d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_21 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		Type_t * L_23 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_22, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_24 = V_0;
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21);
		Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21, (Type_t *)L_23, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_24, /*hidden argument*/Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var);
	}

IL_009f:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_25 = V_0;
		return L_25;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m34680F576B6F65E63B55C78557E632C82933F0CC_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m9E595C9E16CE48D868DA1E2D28B606B9A2F3ABC5_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t9345A2C4627555419189CF853278DE7693A977BB * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t9345A2C4627555419189CF853278DE7693A977BB * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t9345A2C4627555419189CF853278DE7693A977BB *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE_m8A51714769F1CF0F89FF3C0AE0EFC3B28414B6B8_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *, VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3, (VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_m2D5D65EE543C7D597BB5A15970948AEA99480704_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m97A6B43AFA084BEC5979CA58AC21EBB171588D40_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
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
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
