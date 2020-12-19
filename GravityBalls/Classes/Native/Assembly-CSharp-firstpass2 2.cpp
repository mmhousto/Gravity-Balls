﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// VoxelBusters.Utility.DownloadTexture
struct DownloadTexture_tA5DD84CADE34FC46515C45E5383321E5D24944CB;
// VoxelBusters.NativePlugins.IRateMyAppDelegate
struct IRateMyAppDelegate_t867D7F90A0134570D689793B446CC8DA13644466;
// VoxelBusters.NativePlugins.Internal.IRateMyAppEventResponder
struct IRateMyAppEventResponder_tDA612BF3709F2E3C0D86DA2E5299D1850F951ED5;
// VoxelBusters.NativePlugins.Internal.IRateMyAppKeysCollection
struct IRateMyAppKeysCollection_t460459D4C03295B51C708CA34870A538E769D023;
// VoxelBusters.NativePlugins.Internal.IRateMyAppOperationHandler
struct IRateMyAppOperationHandler_t9B39F8A0803409DECEA0718926EC673DFA3EDEEA;
// VoxelBusters.NativePlugins.Internal.IRateMyAppViewController
struct IRateMyAppViewController_t087D13AEC7DB866B0CD4567E2B33B1B548DCD770;
// VoxelBusters.NativePlugins.IShareView
struct IShareView_tBBA50D27B5111473AB733BB003366383796CAF52;
// VoxelBusters.NativePlugins.Internal.IUtilityPlatform
struct IUtilityPlatform_t56D04116FCD09148DD4974B1AA0E0E4160D37BCC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// VoxelBusters.NativePlugins.NetworkConnectivity
struct NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D;
// VoxelBusters.NativePlugins.PlatformValue
struct PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682;
// VoxelBusters.NativePlugins.RateMyApp
struct RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7;
// VoxelBusters.NativePlugins.RateMyAppSettings
struct RateMyAppSettings_tD04A5392FD89A0F76663CD120AC389A3D2EDF3D3;
// VoxelBusters.Utility.Request
struct Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// VoxelBusters.NativePlugins.Sharing
struct Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7;
// VoxelBusters.NativePlugins.Internal.ShowDialogResultDelegate
struct ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499;
// VoxelBusters.NativePlugins.Utility
struct Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// VoxelBusters.NativePlugins.NetworkConnectivity/<ManuallyTriggerInitialState>d__11
struct U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811;
// VoxelBusters.NativePlugins.NetworkConnectivity/NetworkConnectivityChanged
struct NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9;
// VoxelBusters.NativePlugins.NetworkConnectivitySettings/AndroidSettings
struct AndroidSettings_t1FE7FA082C19AB79BE78C6CDD2D687AD2CE4DC92;
// VoxelBusters.NativePlugins.PlatformValueHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tEFBA05080A344050839299C82137816FF4BD8D6E;
// VoxelBusters.NativePlugins.RateMyApp/<ShowDialogRoutine>d__17
struct U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1;
// VoxelBusters.NativePlugins.Internal.RateMyAppGenericController/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8085156D17B01E4954DBF9C27A4411B0F689ED66;
// VoxelBusters.Utility.Request/<StartAsynchronousRequest>d__16
struct U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056;
// VoxelBusters.Utility.Request/SurrogateMonoBehaviour
struct SurrogateMonoBehaviour_tB78DD93E7EBEBC96F8F68A1EF5DE2497DEE677B6;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C;
// VoxelBusters.NativePlugins.Sharing/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6;
// VoxelBusters.NativePlugins.Sharing/<ShowViewCoroutine>d__44
struct U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30;
// VoxelBusters.NativePlugins.Sharing/SharingCompletion
struct SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E;
// VoxelBusters.Utility.TextureExtensions/<TakeScreenshot>d__5
struct U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F;
// VoxelBusters.NativePlugins.UI/AlertDialogCompletion
struct AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1;
// VoxelBusters.NativePlugins.UI/LoginPromptCompletion
struct LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0;
// VoxelBusters.NativePlugins.UI/SingleFieldPromptCompletion
struct SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675;
// VoxelBusters.NativePlugins.Utility/<Start>d__6
struct U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324;
// VoxelBusters.NativePlugins.UtilitySettings/AndroidSettings
struct AndroidSettings_tF2FAF25DAE96C08121CBDB3B4753D78D20D36928;
// VoxelBusters.Utility.WebRequest/JSONResponse
struct JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226;
// VoxelBusters.NativePlugins.ApplicationSettings/Features/MediaLibraryFeature
struct MediaLibraryFeature_tDCCC5CE829F8FD38132D2673EB0BBCC4B9932C3D;
// VoxelBusters.NativePlugins.ApplicationSettings/Features/MultiComponentFeature
struct MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07;
// VoxelBusters.NativePlugins.ApplicationSettings/Features/NotificationServiceFeature
struct NotificationServiceFeature_t4EA5F9A723210D74DC38377531729CC38A823C5B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// VoxelBusters.NativePlugins.eShareOptions[]
struct eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRateMyAppDelegate_t867D7F90A0134570D689793B446CC8DA13644466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IShareView_tBBA50D27B5111473AB733BB003366383796CAF52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviourExtensions_t5E09BB817411DFA2524D42ABA7B1E3929CDA585B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eShareResult_t712436AF8F9C2764014BBD1B76659C5E7B30F481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4C4DEC98497F1390905A2262C134986591734C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral6595A67A375CA5640AEE270E24C8C27FD212CC7D;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteralE5D587C58AEA68C1E65F33DA11FB263B9DE2954A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_Reset_mF68434AE5FB9A501248C9E7405587F0591FF564F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_Reset_m961A87805615486BAE0E0675D60D83D8F50CF2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_Reset_m4D00B3DE95D8197BB033E87C90C6AF598AA592DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_m98241B66933CC02CBE1B22DE2DAD2F9AB1817B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__6_System_Collections_IEnumerator_Reset_mEAE060C04DDD17E4FC31A413FCB8C840171E264F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m1D512C72062C2A83057E8BF2CB30709CC3AA501A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t NetworkConnectivityChanged_BeginInvoke_m4933A05732C6E7F83212E6A07E230E85F61ECB63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SharingCompletion_BeginInvoke_m269803CEDAB61A214BDC043815BE0BE0D25B88B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CManuallyTriggerInitialStateU3Ed__11_MoveNext_m45BEBEF4A197E066D93F69CD8B72914D0E482A43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_Reset_mF68434AE5FB9A501248C9E7405587F0591FF564F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowDialogRoutineU3Ed__17_MoveNext_m29D5A1158451C88DD8E84DBA370B334831BE1105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_Reset_m961A87805615486BAE0E0675D60D83D8F50CF2E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowViewCoroutineU3Ed__44_MoveNext_mF31DDDDB5E87491D54ABEC016C4C267C4082115D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_Reset_m4D00B3DE95D8197BB033E87C90C6AF598AA592DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_m98241B66933CC02CBE1B22DE2DAD2F9AB1817B44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__6_MoveNext_m50F7A17A1B35886C6C314538449FA53F2BFCBB6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__6_System_Collections_IEnumerator_Reset_mEAE060C04DDD17E4FC31A413FCB8C840171E264F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeScreenshotU3Ed__5_MoveNext_m6D832E71FF6FC541EA1EB58D5B224C0E30525042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m1D512C72062C2A83057E8BF2CB30709CC3AA501A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CSendMailWithScreenshotU3Eb__0_m9F5E02054875F2AA6BBEDABFCD7E62ED355E0E0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass14_0_U3CSendMailWithAttachmentU3Eb__0_mA24B7ED4C047243D26DB5754469E332A4684F85E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass39_0_U3CShareImageOnWhatsAppU3Eb__0_m12FBA3064EDE8E5369000664E04DB7E89EA65D26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass57_0_U3CShareImageAtPathU3Eb__0_m87E3D0A8502A40EE074FA717664679CCAE8C34AE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34;

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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// VoxelBusters.NativePlugins.ApplicationSettings_Features_MultiComponentFeature
struct  MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07  : public RuntimeObject
{
public:
	// System.Boolean VoxelBusters.NativePlugins.ApplicationSettings_Features_MultiComponentFeature::value
	bool ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}
};


// VoxelBusters.NativePlugins.Internal.RateMyAppGenericController_<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t8085156D17B01E4954DBF9C27A4411B0F689ED66  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Internal.ShowDialogResultDelegate VoxelBusters.NativePlugins.Internal.RateMyAppGenericController_<>c__DisplayClass0_0::_onCompletion
	ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * ____onCompletion_0;

public:
	inline static int32_t get_offset_of__onCompletion_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8085156D17B01E4954DBF9C27A4411B0F689ED66, ____onCompletion_0)); }
	inline ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * get__onCompletion_0() const { return ____onCompletion_0; }
	inline ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 ** get_address_of__onCompletion_0() { return &____onCompletion_0; }
	inline void set__onCompletion_0(ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * value)
	{
		____onCompletion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_0), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Internal.ShareImageUtility
struct  ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1  : public RuntimeObject
{
public:
	// VoxelBusters.Utility.DownloadTexture VoxelBusters.NativePlugins.Internal.ShareImageUtility::m_downloadTexture
	DownloadTexture_tA5DD84CADE34FC46515C45E5383321E5D24944CB * ___m_downloadTexture_0;
	// System.Collections.IEnumerator VoxelBusters.NativePlugins.Internal.ShareImageUtility::m_takeScreenShotCoroutine
	RuntimeObject* ___m_takeScreenShotCoroutine_1;
	// System.Boolean VoxelBusters.NativePlugins.Internal.ShareImageUtility::<ImageAsyncDownloadInProgress>k__BackingField
	bool ___U3CImageAsyncDownloadInProgressU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_downloadTexture_0() { return static_cast<int32_t>(offsetof(ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1, ___m_downloadTexture_0)); }
	inline DownloadTexture_tA5DD84CADE34FC46515C45E5383321E5D24944CB * get_m_downloadTexture_0() const { return ___m_downloadTexture_0; }
	inline DownloadTexture_tA5DD84CADE34FC46515C45E5383321E5D24944CB ** get_address_of_m_downloadTexture_0() { return &___m_downloadTexture_0; }
	inline void set_m_downloadTexture_0(DownloadTexture_tA5DD84CADE34FC46515C45E5383321E5D24944CB * value)
	{
		___m_downloadTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_downloadTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_takeScreenShotCoroutine_1() { return static_cast<int32_t>(offsetof(ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1, ___m_takeScreenShotCoroutine_1)); }
	inline RuntimeObject* get_m_takeScreenShotCoroutine_1() const { return ___m_takeScreenShotCoroutine_1; }
	inline RuntimeObject** get_address_of_m_takeScreenShotCoroutine_1() { return &___m_takeScreenShotCoroutine_1; }
	inline void set_m_takeScreenShotCoroutine_1(RuntimeObject* value)
	{
		___m_takeScreenShotCoroutine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_takeScreenShotCoroutine_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageAsyncDownloadInProgressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1, ___U3CImageAsyncDownloadInProgressU3Ek__BackingField_2)); }
	inline bool get_U3CImageAsyncDownloadInProgressU3Ek__BackingField_2() const { return ___U3CImageAsyncDownloadInProgressU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CImageAsyncDownloadInProgressU3Ek__BackingField_2() { return &___U3CImageAsyncDownloadInProgressU3Ek__BackingField_2; }
	inline void set_U3CImageAsyncDownloadInProgressU3Ek__BackingField_2(bool value)
	{
		___U3CImageAsyncDownloadInProgressU3Ek__BackingField_2 = value;
	}
};


// VoxelBusters.NativePlugins.MessageShareComposer
struct  MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310  : public RuntimeObject
{
public:
	// System.String VoxelBusters.NativePlugins.MessageShareComposer::<Body>k__BackingField
	String_t* ___U3CBodyU3Ek__BackingField_0;
	// System.String[] VoxelBusters.NativePlugins.MessageShareComposer::<ToRecipients>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CToRecipientsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310, ___U3CBodyU3Ek__BackingField_0)); }
	inline String_t* get_U3CBodyU3Ek__BackingField_0() const { return ___U3CBodyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CBodyU3Ek__BackingField_0() { return &___U3CBodyU3Ek__BackingField_0; }
	inline void set_U3CBodyU3Ek__BackingField_0(String_t* value)
	{
		___U3CBodyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CToRecipientsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310, ___U3CToRecipientsU3Ek__BackingField_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CToRecipientsU3Ek__BackingField_1() const { return ___U3CToRecipientsU3Ek__BackingField_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CToRecipientsU3Ek__BackingField_1() { return &___U3CToRecipientsU3Ek__BackingField_1; }
	inline void set_U3CToRecipientsU3Ek__BackingField_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CToRecipientsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CToRecipientsU3Ek__BackingField_1), (void*)value);
	}
};


// VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11
struct  U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.NativePlugins.NetworkConnectivity VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::<>4__this
	NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811, ___U3CU3E4__this_2)); }
	inline NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VoxelBusters.NativePlugins.NetworkConnectivitySettings_AndroidSettings
struct  AndroidSettings_t1FE7FA082C19AB79BE78C6CDD2D687AD2CE4DC92  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.NativePlugins.NetworkConnectivitySettings_AndroidSettings::m_port
	int32_t ___m_port_0;

public:
	inline static int32_t get_offset_of_m_port_0() { return static_cast<int32_t>(offsetof(AndroidSettings_t1FE7FA082C19AB79BE78C6CDD2D687AD2CE4DC92, ___m_port_0)); }
	inline int32_t get_m_port_0() const { return ___m_port_0; }
	inline int32_t* get_address_of_m_port_0() { return &___m_port_0; }
	inline void set_m_port_0(int32_t value)
	{
		___m_port_0 = value;
	}
};


// VoxelBusters.NativePlugins.RateMyApp
struct  RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.RateMyAppSettings VoxelBusters.NativePlugins.RateMyApp::m_settings
	RateMyAppSettings_tD04A5392FD89A0F76663CD120AC389A3D2EDF3D3 * ___m_settings_0;
	// VoxelBusters.NativePlugins.Internal.IRateMyAppViewController VoxelBusters.NativePlugins.RateMyApp::m_viewController
	RuntimeObject* ___m_viewController_1;
	// VoxelBusters.NativePlugins.Internal.IRateMyAppKeysCollection VoxelBusters.NativePlugins.RateMyApp::m_keysCollection
	RuntimeObject* ___m_keysCollection_2;
	// VoxelBusters.NativePlugins.Internal.IRateMyAppEventResponder VoxelBusters.NativePlugins.RateMyApp::m_eventResponder
	RuntimeObject* ___m_eventResponder_3;
	// VoxelBusters.NativePlugins.Internal.IRateMyAppOperationHandler VoxelBusters.NativePlugins.RateMyApp::m_operationHandler
	RuntimeObject* ___m_operationHandler_4;
	// VoxelBusters.NativePlugins.IRateMyAppDelegate VoxelBusters.NativePlugins.RateMyApp::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_settings_0() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___m_settings_0)); }
	inline RateMyAppSettings_tD04A5392FD89A0F76663CD120AC389A3D2EDF3D3 * get_m_settings_0() const { return ___m_settings_0; }
	inline RateMyAppSettings_tD04A5392FD89A0F76663CD120AC389A3D2EDF3D3 ** get_address_of_m_settings_0() { return &___m_settings_0; }
	inline void set_m_settings_0(RateMyAppSettings_tD04A5392FD89A0F76663CD120AC389A3D2EDF3D3 * value)
	{
		___m_settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settings_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_viewController_1() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___m_viewController_1)); }
	inline RuntimeObject* get_m_viewController_1() const { return ___m_viewController_1; }
	inline RuntimeObject** get_address_of_m_viewController_1() { return &___m_viewController_1; }
	inline void set_m_viewController_1(RuntimeObject* value)
	{
		___m_viewController_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_viewController_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_keysCollection_2() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___m_keysCollection_2)); }
	inline RuntimeObject* get_m_keysCollection_2() const { return ___m_keysCollection_2; }
	inline RuntimeObject** get_address_of_m_keysCollection_2() { return &___m_keysCollection_2; }
	inline void set_m_keysCollection_2(RuntimeObject* value)
	{
		___m_keysCollection_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keysCollection_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventResponder_3() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___m_eventResponder_3)); }
	inline RuntimeObject* get_m_eventResponder_3() const { return ___m_eventResponder_3; }
	inline RuntimeObject** get_address_of_m_eventResponder_3() { return &___m_eventResponder_3; }
	inline void set_m_eventResponder_3(RuntimeObject* value)
	{
		___m_eventResponder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventResponder_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_operationHandler_4() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___m_operationHandler_4)); }
	inline RuntimeObject* get_m_operationHandler_4() const { return ___m_operationHandler_4; }
	inline RuntimeObject** get_address_of_m_operationHandler_4() { return &___m_operationHandler_4; }
	inline void set_m_operationHandler_4(RuntimeObject* value)
	{
		___m_operationHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_operationHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7, ___U3CDelegateU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CDelegateU3Ek__BackingField_5() const { return ___U3CDelegateU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CDelegateU3Ek__BackingField_5() { return &___U3CDelegateU3Ek__BackingField_5; }
	inline void set_U3CDelegateU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CDelegateU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDelegateU3Ek__BackingField_5), (void*)value);
	}
};


// VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17
struct  U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.NativePlugins.RateMyApp VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::<>4__this
	RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1, ___U3CU3E4__this_2)); }
	inline RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_0;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::_subject
	String_t* ____subject_1;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::_body
	String_t* ____body_2;
	// System.Boolean VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::_isHTMLBody
	bool ____isHTMLBody_3;
	// System.String[] VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::_recipients
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____recipients_4;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_5;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ___U3CU3E4__this_0)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of__subject_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ____subject_1)); }
	inline String_t* get__subject_1() const { return ____subject_1; }
	inline String_t** get_address_of__subject_1() { return &____subject_1; }
	inline void set__subject_1(String_t* value)
	{
		____subject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subject_1), (void*)value);
	}

	inline static int32_t get_offset_of__body_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ____body_2)); }
	inline String_t* get__body_2() const { return ____body_2; }
	inline String_t** get_address_of__body_2() { return &____body_2; }
	inline void set__body_2(String_t* value)
	{
		____body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_2), (void*)value);
	}

	inline static int32_t get_offset_of__isHTMLBody_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ____isHTMLBody_3)); }
	inline bool get__isHTMLBody_3() const { return ____isHTMLBody_3; }
	inline bool* get_address_of__isHTMLBody_3() { return &____isHTMLBody_3; }
	inline void set__isHTMLBody_3(bool value)
	{
		____isHTMLBody_3 = value;
	}

	inline static int32_t get_offset_of__recipients_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ____recipients_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__recipients_4() const { return ____recipients_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__recipients_4() { return &____recipients_4; }
	inline void set__recipients_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____recipients_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recipients_4), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6, ____onCompletion_5)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_5() const { return ____onCompletion_5; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_5() { return &____onCompletion_5; }
	inline void set__onCompletion_5(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_5), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D  : public RuntimeObject
{
public:
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_attachmentPath
	String_t* ____attachmentPath_0;
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_1;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_subject
	String_t* ____subject_2;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_body
	String_t* ____body_3;
	// System.Boolean VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_isHTMLBody
	bool ____isHTMLBody_4;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_mimeType
	String_t* ____mimeType_5;
	// System.String[] VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_recipients
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____recipients_6;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_7;

public:
	inline static int32_t get_offset_of__attachmentPath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____attachmentPath_0)); }
	inline String_t* get__attachmentPath_0() const { return ____attachmentPath_0; }
	inline String_t** get_address_of__attachmentPath_0() { return &____attachmentPath_0; }
	inline void set__attachmentPath_0(String_t* value)
	{
		____attachmentPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attachmentPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ___U3CU3E4__this_1)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of__subject_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____subject_2)); }
	inline String_t* get__subject_2() const { return ____subject_2; }
	inline String_t** get_address_of__subject_2() { return &____subject_2; }
	inline void set__subject_2(String_t* value)
	{
		____subject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subject_2), (void*)value);
	}

	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____body_3)); }
	inline String_t* get__body_3() const { return ____body_3; }
	inline String_t** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(String_t* value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}

	inline static int32_t get_offset_of__isHTMLBody_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____isHTMLBody_4)); }
	inline bool get__isHTMLBody_4() const { return ____isHTMLBody_4; }
	inline bool* get_address_of__isHTMLBody_4() { return &____isHTMLBody_4; }
	inline void set__isHTMLBody_4(bool value)
	{
		____isHTMLBody_4 = value;
	}

	inline static int32_t get_offset_of__mimeType_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____mimeType_5)); }
	inline String_t* get__mimeType_5() const { return ____mimeType_5; }
	inline String_t** get_address_of__mimeType_5() { return &____mimeType_5; }
	inline void set__mimeType_5(String_t* value)
	{
		____mimeType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mimeType_5), (void*)value);
	}

	inline static int32_t get_offset_of__recipients_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____recipients_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__recipients_6() const { return ____recipients_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__recipients_6() { return &____recipients_6; }
	inline void set__recipients_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____recipients_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recipients_6), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D, ____onCompletion_7)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_7() const { return ____onCompletion_7; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_7() { return &____onCompletion_7; }
	inline void set__onCompletion_7(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_7), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass38_0
struct  U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass38_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_0;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass38_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B, ___U3CU3E4__this_0)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B, ____onCompletion_1)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_1() const { return ____onCompletion_1; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_1() { return &____onCompletion_1; }
	inline void set__onCompletion_1(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_1), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass39_0
struct  U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass39_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_0;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass39_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06, ___U3CU3E4__this_0)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06, ____onCompletion_1)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_1() const { return ____onCompletion_1; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_1() { return &____onCompletion_1; }
	inline void set__onCompletion_1(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_1), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0
struct  U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_0;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::_message
	String_t* ____message_1;
	// VoxelBusters.NativePlugins.eShareOptions[] VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::_excludedOptions
	eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ____excludedOptions_2;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C, ___U3CU3E4__this_0)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__excludedOptions_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C, ____excludedOptions_2)); }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* get__excludedOptions_2() const { return ____excludedOptions_2; }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34** get_address_of__excludedOptions_2() { return &____excludedOptions_2; }
	inline void set__excludedOptions_2(eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* value)
	{
		____excludedOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____excludedOptions_2), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C, ____onCompletion_3)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_3() const { return ____onCompletion_3; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_3() { return &____onCompletion_3; }
	inline void set__onCompletion_3(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_3), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0
struct  U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_0;
	// System.String VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::_message
	String_t* ____message_1;
	// VoxelBusters.NativePlugins.eShareOptions[] VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::_excludedOptions
	eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ____excludedOptions_2;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6, ___U3CU3E4__this_0)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__excludedOptions_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6, ____excludedOptions_2)); }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* get__excludedOptions_2() const { return ____excludedOptions_2; }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34** get_address_of__excludedOptions_2() { return &____excludedOptions_2; }
	inline void set__excludedOptions_2(eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* value)
	{
		____excludedOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____excludedOptions_2), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6, ____onCompletion_3)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_3() const { return ____onCompletion_3; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_3() { return &____onCompletion_3; }
	inline void set__onCompletion_3(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_3), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44
struct  U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.NativePlugins.IShareView VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::_shareView
	RuntimeObject* ____shareView_2;
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::_onCompletion
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion_3;
	// VoxelBusters.NativePlugins.Sharing VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::<>4__this
	Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of__shareView_2() { return static_cast<int32_t>(offsetof(U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30, ____shareView_2)); }
	inline RuntimeObject* get__shareView_2() const { return ____shareView_2; }
	inline RuntimeObject** get_address_of__shareView_2() { return &____shareView_2; }
	inline void set__shareView_2(RuntimeObject* value)
	{
		____shareView_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shareView_2), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletion_3() { return static_cast<int32_t>(offsetof(U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30, ____onCompletion_3)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get__onCompletion_3() const { return ____onCompletion_3; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of__onCompletion_3() { return &____onCompletion_3; }
	inline void set__onCompletion_3(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		____onCompletion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletion_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30, ___U3CU3E4__this_4)); }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Utility_<Start>d__6
struct  U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.NativePlugins.Utility_<Start>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.NativePlugins.Utility_<Start>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.NativePlugins.Utility VoxelBusters.NativePlugins.Utility_<Start>d__6::<>4__this
	Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324, ___U3CU3E4__this_2)); }
	inline Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VoxelBusters.NativePlugins.UtilitySettings_AndroidSettings
struct  AndroidSettings_tF2FAF25DAE96C08121CBDB3B4753D78D20D36928  : public RuntimeObject
{
public:
	// System.Boolean VoxelBusters.NativePlugins.UtilitySettings_AndroidSettings::m_modifiesApplicationBadge
	bool ___m_modifiesApplicationBadge_0;

public:
	inline static int32_t get_offset_of_m_modifiesApplicationBadge_0() { return static_cast<int32_t>(offsetof(AndroidSettings_tF2FAF25DAE96C08121CBDB3B4753D78D20D36928, ___m_modifiesApplicationBadge_0)); }
	inline bool get_m_modifiesApplicationBadge_0() const { return ___m_modifiesApplicationBadge_0; }
	inline bool* get_address_of_m_modifiesApplicationBadge_0() { return &___m_modifiesApplicationBadge_0; }
	inline void set_m_modifiesApplicationBadge_0(bool value)
	{
		___m_modifiesApplicationBadge_0 = value;
	}
};


// VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16
struct  U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.Utility.Request VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>4__this
	Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056, ___U3CU3E4__this_2)); }
	inline Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5
struct  U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action`1<UnityEngine.Texture2D> VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::_onCompletionHandler
	Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ____onCompletionHandler_2;
	// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::<_texture>5__1
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3C_textureU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletionHandler_2() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F, ____onCompletionHandler_2)); }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * get__onCompletionHandler_2() const { return ____onCompletionHandler_2; }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA ** get_address_of__onCompletionHandler_2() { return &____onCompletionHandler_2; }
	inline void set__onCompletionHandler_2(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * value)
	{
		____onCompletionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletionHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_textureU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F, ___U3C_textureU3E5__1_3)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3C_textureU3E5__1_3() const { return ___U3C_textureU3E5__1_3; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3C_textureU3E5__1_3() { return &___U3C_textureU3E5__1_3; }
	inline void set_U3C_textureU3E5__1_3(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3C_textureU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_textureU3E5__1_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// VoxelBusters.NativePlugins.ApplicationSettings_Features_MediaLibraryFeature
struct  MediaLibraryFeature_tDCCC5CE829F8FD38132D2673EB0BBCC4B9932C3D  : public MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07
{
public:
	// System.Boolean VoxelBusters.NativePlugins.ApplicationSettings_Features_MediaLibraryFeature::usesCamera
	bool ___usesCamera_1;
	// System.Boolean VoxelBusters.NativePlugins.ApplicationSettings_Features_MediaLibraryFeature::usesPhotoAlbum
	bool ___usesPhotoAlbum_2;

public:
	inline static int32_t get_offset_of_usesCamera_1() { return static_cast<int32_t>(offsetof(MediaLibraryFeature_tDCCC5CE829F8FD38132D2673EB0BBCC4B9932C3D, ___usesCamera_1)); }
	inline bool get_usesCamera_1() const { return ___usesCamera_1; }
	inline bool* get_address_of_usesCamera_1() { return &___usesCamera_1; }
	inline void set_usesCamera_1(bool value)
	{
		___usesCamera_1 = value;
	}

	inline static int32_t get_offset_of_usesPhotoAlbum_2() { return static_cast<int32_t>(offsetof(MediaLibraryFeature_tDCCC5CE829F8FD38132D2673EB0BBCC4B9932C3D, ___usesPhotoAlbum_2)); }
	inline bool get_usesPhotoAlbum_2() const { return ___usesPhotoAlbum_2; }
	inline bool* get_address_of_usesPhotoAlbum_2() { return &___usesPhotoAlbum_2; }
	inline void set_usesPhotoAlbum_2(bool value)
	{
		___usesPhotoAlbum_2 = value;
	}
};


// VoxelBusters.NativePlugins.ApplicationSettings_Features_NotificationServiceFeature
struct  NotificationServiceFeature_t4EA5F9A723210D74DC38377531729CC38A823C5B  : public MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07
{
public:
	// System.Boolean VoxelBusters.NativePlugins.ApplicationSettings_Features_NotificationServiceFeature::usesLocalNotification
	bool ___usesLocalNotification_1;
	// System.Boolean VoxelBusters.NativePlugins.ApplicationSettings_Features_NotificationServiceFeature::usesRemoteNotification
	bool ___usesRemoteNotification_2;

public:
	inline static int32_t get_offset_of_usesLocalNotification_1() { return static_cast<int32_t>(offsetof(NotificationServiceFeature_t4EA5F9A723210D74DC38377531729CC38A823C5B, ___usesLocalNotification_1)); }
	inline bool get_usesLocalNotification_1() const { return ___usesLocalNotification_1; }
	inline bool* get_address_of_usesLocalNotification_1() { return &___usesLocalNotification_1; }
	inline void set_usesLocalNotification_1(bool value)
	{
		___usesLocalNotification_1 = value;
	}

	inline static int32_t get_offset_of_usesRemoteNotification_2() { return static_cast<int32_t>(offsetof(NotificationServiceFeature_t4EA5F9A723210D74DC38377531729CC38A823C5B, ___usesRemoteNotification_2)); }
	inline bool get_usesRemoteNotification_2() const { return ___usesRemoteNotification_2; }
	inline bool* get_address_of_usesRemoteNotification_2() { return &___usesRemoteNotification_2; }
	inline void set_usesRemoteNotification_2(bool value)
	{
		___usesRemoteNotification_2 = value;
	}
};


// VoxelBusters.NativePlugins.MailShareComposer
struct  MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6  : public ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1
{
public:
	// System.Boolean VoxelBusters.NativePlugins.MailShareComposer::m_attachmentDownloadInProgress
	bool ___m_attachmentDownloadInProgress_3;
	// System.String VoxelBusters.NativePlugins.MailShareComposer::<Subject>k__BackingField
	String_t* ___U3CSubjectU3Ek__BackingField_4;
	// System.String VoxelBusters.NativePlugins.MailShareComposer::<Body>k__BackingField
	String_t* ___U3CBodyU3Ek__BackingField_5;
	// System.Boolean VoxelBusters.NativePlugins.MailShareComposer::<IsHTMLBody>k__BackingField
	bool ___U3CIsHTMLBodyU3Ek__BackingField_6;
	// System.String[] VoxelBusters.NativePlugins.MailShareComposer::<ToRecipients>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CToRecipientsU3Ek__BackingField_7;
	// System.String[] VoxelBusters.NativePlugins.MailShareComposer::<CCRecipients>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CCCRecipientsU3Ek__BackingField_8;
	// System.String[] VoxelBusters.NativePlugins.MailShareComposer::<BCCRecipients>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CBCCRecipientsU3Ek__BackingField_9;
	// System.Byte[] VoxelBusters.NativePlugins.MailShareComposer::<AttachmentData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CAttachmentDataU3Ek__BackingField_10;
	// System.String VoxelBusters.NativePlugins.MailShareComposer::<AttachmentFileName>k__BackingField
	String_t* ___U3CAttachmentFileNameU3Ek__BackingField_11;
	// System.String VoxelBusters.NativePlugins.MailShareComposer::<MimeType>k__BackingField
	String_t* ___U3CMimeTypeU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_m_attachmentDownloadInProgress_3() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___m_attachmentDownloadInProgress_3)); }
	inline bool get_m_attachmentDownloadInProgress_3() const { return ___m_attachmentDownloadInProgress_3; }
	inline bool* get_address_of_m_attachmentDownloadInProgress_3() { return &___m_attachmentDownloadInProgress_3; }
	inline void set_m_attachmentDownloadInProgress_3(bool value)
	{
		___m_attachmentDownloadInProgress_3 = value;
	}

	inline static int32_t get_offset_of_U3CSubjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CSubjectU3Ek__BackingField_4)); }
	inline String_t* get_U3CSubjectU3Ek__BackingField_4() const { return ___U3CSubjectU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSubjectU3Ek__BackingField_4() { return &___U3CSubjectU3Ek__BackingField_4; }
	inline void set_U3CSubjectU3Ek__BackingField_4(String_t* value)
	{
		___U3CSubjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CBodyU3Ek__BackingField_5)); }
	inline String_t* get_U3CBodyU3Ek__BackingField_5() const { return ___U3CBodyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CBodyU3Ek__BackingField_5() { return &___U3CBodyU3Ek__BackingField_5; }
	inline void set_U3CBodyU3Ek__BackingField_5(String_t* value)
	{
		___U3CBodyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsHTMLBodyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CIsHTMLBodyU3Ek__BackingField_6)); }
	inline bool get_U3CIsHTMLBodyU3Ek__BackingField_6() const { return ___U3CIsHTMLBodyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsHTMLBodyU3Ek__BackingField_6() { return &___U3CIsHTMLBodyU3Ek__BackingField_6; }
	inline void set_U3CIsHTMLBodyU3Ek__BackingField_6(bool value)
	{
		___U3CIsHTMLBodyU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CToRecipientsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CToRecipientsU3Ek__BackingField_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CToRecipientsU3Ek__BackingField_7() const { return ___U3CToRecipientsU3Ek__BackingField_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CToRecipientsU3Ek__BackingField_7() { return &___U3CToRecipientsU3Ek__BackingField_7; }
	inline void set_U3CToRecipientsU3Ek__BackingField_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CToRecipientsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CToRecipientsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCCRecipientsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CCCRecipientsU3Ek__BackingField_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CCCRecipientsU3Ek__BackingField_8() const { return ___U3CCCRecipientsU3Ek__BackingField_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CCCRecipientsU3Ek__BackingField_8() { return &___U3CCCRecipientsU3Ek__BackingField_8; }
	inline void set_U3CCCRecipientsU3Ek__BackingField_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CCCRecipientsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCCRecipientsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBCCRecipientsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CBCCRecipientsU3Ek__BackingField_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CBCCRecipientsU3Ek__BackingField_9() const { return ___U3CBCCRecipientsU3Ek__BackingField_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CBCCRecipientsU3Ek__BackingField_9() { return &___U3CBCCRecipientsU3Ek__BackingField_9; }
	inline void set_U3CBCCRecipientsU3Ek__BackingField_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CBCCRecipientsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBCCRecipientsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttachmentDataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CAttachmentDataU3Ek__BackingField_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CAttachmentDataU3Ek__BackingField_10() const { return ___U3CAttachmentDataU3Ek__BackingField_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CAttachmentDataU3Ek__BackingField_10() { return &___U3CAttachmentDataU3Ek__BackingField_10; }
	inline void set_U3CAttachmentDataU3Ek__BackingField_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CAttachmentDataU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttachmentDataU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttachmentFileNameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CAttachmentFileNameU3Ek__BackingField_11)); }
	inline String_t* get_U3CAttachmentFileNameU3Ek__BackingField_11() const { return ___U3CAttachmentFileNameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CAttachmentFileNameU3Ek__BackingField_11() { return &___U3CAttachmentFileNameU3Ek__BackingField_11; }
	inline void set_U3CAttachmentFileNameU3Ek__BackingField_11(String_t* value)
	{
		___U3CAttachmentFileNameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttachmentFileNameU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMimeTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6, ___U3CMimeTypeU3Ek__BackingField_12)); }
	inline String_t* get_U3CMimeTypeU3Ek__BackingField_12() const { return ___U3CMimeTypeU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CMimeTypeU3Ek__BackingField_12() { return &___U3CMimeTypeU3Ek__BackingField_12; }
	inline void set_U3CMimeTypeU3Ek__BackingField_12(String_t* value)
	{
		___U3CMimeTypeU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMimeTypeU3Ek__BackingField_12), (void*)value);
	}
};


// VoxelBusters.NativePlugins.ShareSheet
struct  ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04  : public ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1
{
public:
	// VoxelBusters.NativePlugins.eShareOptions[] VoxelBusters.NativePlugins.ShareSheet::m_excludedShareOptions
	eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ___m_excludedShareOptions_3;
	// System.String VoxelBusters.NativePlugins.ShareSheet::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_4;
	// System.String VoxelBusters.NativePlugins.ShareSheet::<URL>k__BackingField
	String_t* ___U3CURLU3Ek__BackingField_5;
	// System.Byte[] VoxelBusters.NativePlugins.ShareSheet::<ImageData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CImageDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_excludedShareOptions_3() { return static_cast<int32_t>(offsetof(ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04, ___m_excludedShareOptions_3)); }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* get_m_excludedShareOptions_3() const { return ___m_excludedShareOptions_3; }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34** get_address_of_m_excludedShareOptions_3() { return &___m_excludedShareOptions_3; }
	inline void set_m_excludedShareOptions_3(eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* value)
	{
		___m_excludedShareOptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_excludedShareOptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04, ___U3CTextU3Ek__BackingField_4)); }
	inline String_t* get_U3CTextU3Ek__BackingField_4() const { return ___U3CTextU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_4() { return &___U3CTextU3Ek__BackingField_4; }
	inline void set_U3CTextU3Ek__BackingField_4(String_t* value)
	{
		___U3CTextU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04, ___U3CURLU3Ek__BackingField_5)); }
	inline String_t* get_U3CURLU3Ek__BackingField_5() const { return ___U3CURLU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CURLU3Ek__BackingField_5() { return &___U3CURLU3Ek__BackingField_5; }
	inline void set_U3CURLU3Ek__BackingField_5(String_t* value)
	{
		___U3CURLU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CURLU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04, ___U3CImageDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CImageDataU3Ek__BackingField_6() const { return ___U3CImageDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CImageDataU3Ek__BackingField_6() { return &___U3CImageDataU3Ek__BackingField_6; }
	inline void set_U3CImageDataU3Ek__BackingField_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CImageDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageDataU3Ek__BackingField_6), (void*)value);
	}
};


// VoxelBusters.NativePlugins.WhatsAppShareComposer
struct  WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2  : public ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1
{
public:
	// System.String VoxelBusters.NativePlugins.WhatsAppShareComposer::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;
	// System.Byte[] VoxelBusters.NativePlugins.WhatsAppShareComposer::<ImageData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CImageDataU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2, ___U3CTextU3Ek__BackingField_3)); }
	inline String_t* get_U3CTextU3Ek__BackingField_3() const { return ___U3CTextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_3() { return &___U3CTextU3Ek__BackingField_3; }
	inline void set_U3CTextU3Ek__BackingField_3(String_t* value)
	{
		___U3CTextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageDataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2, ___U3CImageDataU3Ek__BackingField_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CImageDataU3Ek__BackingField_4() const { return ___U3CImageDataU3Ek__BackingField_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CImageDataU3Ek__BackingField_4() { return &___U3CImageDataU3Ek__BackingField_4; }
	inline void set_U3CImageDataU3Ek__BackingField_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CImageDataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageDataU3Ek__BackingField_4), (void*)value);
	}
};


// VoxelBusters.Utility.URL
struct  URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9 
{
public:
	// System.String VoxelBusters.Utility.URL::<URLString>k__BackingField
	String_t* ___U3CURLStringU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CURLStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9, ___U3CURLStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CURLStringU3Ek__BackingField_0() const { return ___U3CURLStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CURLStringU3Ek__BackingField_0() { return &___U3CURLStringU3Ek__BackingField_0; }
	inline void set_U3CURLStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CURLStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CURLStringU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of VoxelBusters.Utility.URL
struct URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9_marshaled_pinvoke
{
	char* ___U3CURLStringU3Ek__BackingField_0;
};
// Native definition for COM marshalling of VoxelBusters.Utility.URL
struct URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9_marshaled_com
{
	Il2CppChar* ___U3CURLStringU3Ek__BackingField_0;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ThreadPriority
struct  ThreadPriority_t86C240DDF46F222398ED5E74385AA5A162C1F6CF 
{
public:
	// System.Int32 UnityEngine.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_t86C240DDF46F222398ED5E74385AA5A162C1F6CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.Internal.NPObjectManager_eCollectionType
struct  eCollectionType_t2E6AEF4B47431D85E36CC94ED2DA740D20C58109 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.Internal.NPObjectManager_eCollectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eCollectionType_t2E6AEF4B47431D85E36CC94ED2DA740D20C58109, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.Internal.eSocialServiceType
struct  eSocialServiceType_t43650D44567FBA012261BDAB4C8F5EB6B07F1979 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.Internal.eSocialServiceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eSocialServiceType_t43650D44567FBA012261BDAB4C8F5EB6B07F1979, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.SharingIOS_eMFMailComposeResult
struct  eMFMailComposeResult_t3A791FD01418E3B99C74F0251067F5917457611F 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.SharingIOS_eMFMailComposeResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eMFMailComposeResult_t3A791FD01418E3B99C74F0251067F5917457611F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.SharingIOS_eMessageComposeResult
struct  eMessageComposeResult_t7086FA08470044145F293459A39434E3E9377D92 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.SharingIOS_eMessageComposeResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eMessageComposeResult_t7086FA08470044145F293459A39434E3E9377D92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.SharingIOS_eSocialShareResult
struct  eSocialShareResult_t81186134DEB3D32225B04F2E158C94A0D7443DEB 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.SharingIOS_eSocialShareResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eSocialShareResult_t81186134DEB3D32225B04F2E158C94A0D7443DEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.SharingIOS_eSocialShareServiceType
struct  eSocialShareServiceType_t6BED9D1D897ADF1C0C041DB74A598D162794AAAB 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.SharingIOS_eSocialShareServiceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eSocialShareServiceType_t6BED9D1D897ADF1C0C041DB74A598D162794AAAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.eRuntimePlatform
struct  eRuntimePlatform_t13BF328B903C25B33767CCAF3D82CB005FF26327 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.eRuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eRuntimePlatform_t13BF328B903C25B33767CCAF3D82CB005FF26327, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.eShareOptions
struct  eShareOptions_t26421A216B62149AE1A4E3A8C6F368BA11031F04 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.eShareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eShareOptions_t26421A216B62149AE1A4E3A8C6F368BA11031F04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.NativePlugins.eShareResult
struct  eShareResult_t712436AF8F9C2764014BBD1B76659C5E7B30F481 
{
public:
	// System.Int32 VoxelBusters.NativePlugins.eShareResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eShareResult_t712436AF8F9C2764014BBD1B76659C5E7B30F481, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.Utility.Request
struct  Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF  : public RuntimeObject
{
public:
	// System.Boolean VoxelBusters.Utility.Request::<IsAsynchronous>k__BackingField
	bool ___U3CIsAsynchronousU3Ek__BackingField_0;
	// VoxelBusters.Utility.URL VoxelBusters.Utility.Request::<URL>k__BackingField
	URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9  ___U3CURLU3Ek__BackingField_1;
	// UnityEngine.WWW VoxelBusters.Utility.Request::<WWWObject>k__BackingField
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CWWWObjectU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsAsynchronousU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF, ___U3CIsAsynchronousU3Ek__BackingField_0)); }
	inline bool get_U3CIsAsynchronousU3Ek__BackingField_0() const { return ___U3CIsAsynchronousU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsAsynchronousU3Ek__BackingField_0() { return &___U3CIsAsynchronousU3Ek__BackingField_0; }
	inline void set_U3CIsAsynchronousU3Ek__BackingField_0(bool value)
	{
		___U3CIsAsynchronousU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF, ___U3CURLU3Ek__BackingField_1)); }
	inline URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9  get_U3CURLU3Ek__BackingField_1() const { return ___U3CURLU3Ek__BackingField_1; }
	inline URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9 * get_address_of_U3CURLU3Ek__BackingField_1() { return &___U3CURLU3Ek__BackingField_1; }
	inline void set_U3CURLU3Ek__BackingField_1(URL_t1CF8D8DEFD92C6C44C56A0A4896F503660CF8FA9  value)
	{
		___U3CURLU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CURLU3Ek__BackingField_1))->___U3CURLStringU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CWWWObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF, ___U3CWWWObjectU3Ek__BackingField_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CWWWObjectU3Ek__BackingField_2() const { return ___U3CWWWObjectU3Ek__BackingField_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CWWWObjectU3Ek__BackingField_2() { return &___U3CWWWObjectU3Ek__BackingField_2; }
	inline void set_U3CWWWObjectU3Ek__BackingField_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CWWWObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWWWObjectU3Ek__BackingField_2), (void*)value);
	}
};

struct Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF_StaticFields
{
public:
	// UnityEngine.MonoBehaviour VoxelBusters.Utility.Request::surrogateMonobehaviour
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___surrogateMonobehaviour_3;

public:
	inline static int32_t get_offset_of_surrogateMonobehaviour_3() { return static_cast<int32_t>(offsetof(Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF_StaticFields, ___surrogateMonobehaviour_3)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_surrogateMonobehaviour_3() const { return ___surrogateMonobehaviour_3; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_surrogateMonobehaviour_3() { return &___surrogateMonobehaviour_3; }
	inline void set_surrogateMonobehaviour_3(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___surrogateMonobehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surrogateMonobehaviour_3), (void*)value);
	}
};


// VoxelBusters.Utility.TextureExtensions_EncodeTo
struct  EncodeTo_t02D22CEE0A4A8B0C8D3CE7E4F110A07C9D1EFA7D 
{
public:
	// System.Int32 VoxelBusters.Utility.TextureExtensions_EncodeTo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncodeTo_t02D22CEE0A4A8B0C8D3CE7E4F110A07C9D1EFA7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.WWW
struct  WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.ThreadPriority UnityEngine.WWW::<threadPriority>k__BackingField
	int32_t ___U3CthreadPriorityU3Ek__BackingField_0;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_1;
	// UnityEngine.AssetBundle UnityEngine.WWW::_assetBundle
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * ____assetBundle_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____responseHeaders_3;

public:
	inline static int32_t get_offset_of_U3CthreadPriorityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ___U3CthreadPriorityU3Ek__BackingField_0)); }
	inline int32_t get_U3CthreadPriorityU3Ek__BackingField_0() const { return ___U3CthreadPriorityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CthreadPriorityU3Ek__BackingField_0() { return &___U3CthreadPriorityU3Ek__BackingField_0; }
	inline void set_U3CthreadPriorityU3Ek__BackingField_0(int32_t value)
	{
		___U3CthreadPriorityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__uwr_1() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_1)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_1() const { return ____uwr_1; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_1() { return &____uwr_1; }
	inline void set__uwr_1(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_1), (void*)value);
	}

	inline static int32_t get_offset_of__assetBundle_2() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____assetBundle_2)); }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * get__assetBundle_2() const { return ____assetBundle_2; }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 ** get_address_of__assetBundle_2() { return &____assetBundle_2; }
	inline void set__assetBundle_2(AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * value)
	{
		____assetBundle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetBundle_2), (void*)value);
	}

	inline static int32_t get_offset_of__responseHeaders_3() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____responseHeaders_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__responseHeaders_3() const { return ____responseHeaders_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__responseHeaders_3() { return &____responseHeaders_3; }
	inline void set__responseHeaders_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____responseHeaders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____responseHeaders_3), (void*)value);
	}
};


// VoxelBusters.NativePlugins.PlatformValue
struct  PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.eRuntimePlatform VoxelBusters.NativePlugins.PlatformValue::m_platform
	int32_t ___m_platform_0;
	// System.String VoxelBusters.NativePlugins.PlatformValue::m_value
	String_t* ___m_value_1;

public:
	inline static int32_t get_offset_of_m_platform_0() { return static_cast<int32_t>(offsetof(PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682, ___m_platform_0)); }
	inline int32_t get_m_platform_0() const { return ___m_platform_0; }
	inline int32_t* get_address_of_m_platform_0() { return &___m_platform_0; }
	inline void set_m_platform_0(int32_t value)
	{
		___m_platform_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_1), (void*)value);
	}
};


// VoxelBusters.NativePlugins.PlatformValueHelper_<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_tEFBA05080A344050839299C82137816FF4BD8D6E  : public RuntimeObject
{
public:
	// VoxelBusters.NativePlugins.eRuntimePlatform VoxelBusters.NativePlugins.PlatformValueHelper_<>c__DisplayClass0_0::_platform
	int32_t ____platform_0;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tEFBA05080A344050839299C82137816FF4BD8D6E, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}
};


// VoxelBusters.NativePlugins.SocialShareComposerBase
struct  SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208  : public ShareImageUtility_t3A1F399786B23FACA50EF0601FBC3BA639D3D7F1
{
public:
	// VoxelBusters.NativePlugins.Internal.eSocialServiceType VoxelBusters.NativePlugins.SocialShareComposerBase::<ServiceType>k__BackingField
	int32_t ___U3CServiceTypeU3Ek__BackingField_3;
	// System.String VoxelBusters.NativePlugins.SocialShareComposerBase::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_4;
	// System.String VoxelBusters.NativePlugins.SocialShareComposerBase::<URL>k__BackingField
	String_t* ___U3CURLU3Ek__BackingField_5;
	// System.Byte[] VoxelBusters.NativePlugins.SocialShareComposerBase::<ImageData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CImageDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CServiceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208, ___U3CServiceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CServiceTypeU3Ek__BackingField_3() const { return ___U3CServiceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CServiceTypeU3Ek__BackingField_3() { return &___U3CServiceTypeU3Ek__BackingField_3; }
	inline void set_U3CServiceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CServiceTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208, ___U3CTextU3Ek__BackingField_4)); }
	inline String_t* get_U3CTextU3Ek__BackingField_4() const { return ___U3CTextU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_4() { return &___U3CTextU3Ek__BackingField_4; }
	inline void set_U3CTextU3Ek__BackingField_4(String_t* value)
	{
		___U3CTextU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208, ___U3CURLU3Ek__BackingField_5)); }
	inline String_t* get_U3CURLU3Ek__BackingField_5() const { return ___U3CURLU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CURLU3Ek__BackingField_5() { return &___U3CURLU3Ek__BackingField_5; }
	inline void set_U3CURLU3Ek__BackingField_5(String_t* value)
	{
		___U3CURLU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CURLU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208, ___U3CImageDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CImageDataU3Ek__BackingField_6() const { return ___U3CImageDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CImageDataU3Ek__BackingField_6() { return &___U3CImageDataU3Ek__BackingField_6; }
	inline void set_U3CImageDataU3Ek__BackingField_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CImageDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageDataU3Ek__BackingField_6), (void*)value);
	}
};


// System.Action`1<UnityEngine.Texture2D>
struct  Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// VoxelBusters.NativePlugins.FBShareComposer
struct  FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5  : public SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208
{
public:

public:
};


// VoxelBusters.NativePlugins.Internal.ShowDialogResultDelegate
struct  ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged
struct  NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.NativePlugins.Sharing_SharingCompletion
struct  SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.NativePlugins.TwitterShareComposer
struct  TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0  : public SocialShareComposerBase_tECD6BC0F10C73D70A64DA20127DF3685E4B2E208
{
public:

public:
};


// VoxelBusters.NativePlugins.UI_AlertDialogCompletion
struct  AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.NativePlugins.UI_LoginPromptCompletion
struct  LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.NativePlugins.UI_SingleFieldPromptCompletion
struct  SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675  : public MulticastDelegate_t
{
public:

public:
};


// VoxelBusters.Utility.WebRequest_JSONResponse
struct  JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// VoxelBusters.NativePlugins.NetworkConnectivity
struct  NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean VoxelBusters.NativePlugins.NetworkConnectivity::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D, ___U3CIsConnectedU3Ek__BackingField_5)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_5() const { return ___U3CIsConnectedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_5() { return &___U3CIsConnectedU3Ek__BackingField_5; }
	inline void set_U3CIsConnectedU3Ek__BackingField_5(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_5 = value;
	}
};

struct NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D_StaticFields
{
public:
	// VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged VoxelBusters.NativePlugins.NetworkConnectivity::NetworkConnectivityChangedEvent
	NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * ___NetworkConnectivityChangedEvent_4;

public:
	inline static int32_t get_offset_of_NetworkConnectivityChangedEvent_4() { return static_cast<int32_t>(offsetof(NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D_StaticFields, ___NetworkConnectivityChangedEvent_4)); }
	inline NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * get_NetworkConnectivityChangedEvent_4() const { return ___NetworkConnectivityChangedEvent_4; }
	inline NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 ** get_address_of_NetworkConnectivityChangedEvent_4() { return &___NetworkConnectivityChangedEvent_4; }
	inline void set_NetworkConnectivityChangedEvent_4(NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * value)
	{
		___NetworkConnectivityChangedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkConnectivityChangedEvent_4), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Sharing
struct  Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VoxelBusters.NativePlugins.Sharing_SharingCompletion VoxelBusters.NativePlugins.Sharing::OnSharingFinished
	SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ___OnSharingFinished_4;
	// VoxelBusters.NativePlugins.eShareOptions[] VoxelBusters.NativePlugins.Sharing::m_socialNetworkExcludedList
	eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ___m_socialNetworkExcludedList_6;

public:
	inline static int32_t get_offset_of_OnSharingFinished_4() { return static_cast<int32_t>(offsetof(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7, ___OnSharingFinished_4)); }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * get_OnSharingFinished_4() const { return ___OnSharingFinished_4; }
	inline SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E ** get_address_of_OnSharingFinished_4() { return &___OnSharingFinished_4; }
	inline void set_OnSharingFinished_4(SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * value)
	{
		___OnSharingFinished_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSharingFinished_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_socialNetworkExcludedList_6() { return static_cast<int32_t>(offsetof(Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7, ___m_socialNetworkExcludedList_6)); }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* get_m_socialNetworkExcludedList_6() const { return ___m_socialNetworkExcludedList_6; }
	inline eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34** get_address_of_m_socialNetworkExcludedList_6() { return &___m_socialNetworkExcludedList_6; }
	inline void set_m_socialNetworkExcludedList_6(eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* value)
	{
		___m_socialNetworkExcludedList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_socialNetworkExcludedList_6), (void*)value);
	}
};


// VoxelBusters.NativePlugins.Utility
struct  Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VoxelBusters.NativePlugins.Internal.IUtilityPlatform VoxelBusters.NativePlugins.Utility::m_platform
	RuntimeObject* ___m_platform_4;
	// VoxelBusters.NativePlugins.RateMyApp VoxelBusters.NativePlugins.Utility::<RateMyApp>k__BackingField
	RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * ___U3CRateMyAppU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_platform_4() { return static_cast<int32_t>(offsetof(Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6, ___m_platform_4)); }
	inline RuntimeObject* get_m_platform_4() const { return ___m_platform_4; }
	inline RuntimeObject** get_address_of_m_platform_4() { return &___m_platform_4; }
	inline void set_m_platform_4(RuntimeObject* value)
	{
		___m_platform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_platform_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRateMyAppU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6, ___U3CRateMyAppU3Ek__BackingField_5)); }
	inline RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * get_U3CRateMyAppU3Ek__BackingField_5() const { return ___U3CRateMyAppU3Ek__BackingField_5; }
	inline RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 ** get_address_of_U3CRateMyAppU3Ek__BackingField_5() { return &___U3CRateMyAppU3Ek__BackingField_5; }
	inline void set_U3CRateMyAppU3Ek__BackingField_5(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * value)
	{
		___U3CRateMyAppU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRateMyAppU3Ek__BackingField_5), (void*)value);
	}
};


// VoxelBusters.Utility.Request_SurrogateMonoBehaviour
struct  SurrogateMonoBehaviour_tB78DD93E7EBEBC96F8F68A1EF5DE2497DEE677B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VoxelBusters.NativePlugins.eShareOptions[]
struct eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34  : public RuntimeArray
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean VoxelBusters.NativePlugins.NetworkConnectivity::get_IsConnected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConnectivity_get_IsConnected_m2116E9F763CEF43F1C680FBB6D0DD409DD2B4DA6_inline (NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity::ConnectivityChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnectivity_ConnectivityChanged_mCC66D233CB845F8BCD93800F301DA3B000F956D5 (NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * __this, bool ____connected0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// VoxelBusters.NativePlugins.eRuntimePlatform VoxelBusters.NativePlugins.PlatformValue::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformValue_get_Platform_m32147B6A13C3A53B023D2963E6ABC1330AED9D74 (PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682 * __this, const RuntimeMethod* method);
// VoxelBusters.NativePlugins.IRateMyAppDelegate VoxelBusters.NativePlugins.RateMyApp::get_Delegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RateMyApp_get_Delegate_m5D43BB5EE6516A3D31917846B663A82D1F051DAF_inline (RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.RateMyApp::ShowDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateMyApp_ShowDialog_mFC709AC79424052162E9335CC4D0F53E80CDCE0B (RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.Internal.ShowDialogResultDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowDialogResultDelegate_Invoke_m99697CCC8DBD1A3918C2B6AC559F2BC481454823 (ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * __this, String_t* ____buttonName0, const RuntimeMethod* method);
// UnityEngine.WWW VoxelBusters.Utility.Request::get_WWWObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * Request_get_WWWObject_mEFE38409C9EE367AD2160EB51D2724053CFC85C5_inline (Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.ILogger VoxelBusters.UASUtils.DebugUtility::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugUtility_get_Logger_mDBC64E64FED543D760728A1EE4347798A3CB1F50 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.Sharing::ShareImage(System.String,UnityEngine.Texture2D,VoxelBusters.NativePlugins.eShareOptions[],VoxelBusters.NativePlugins.Sharing/SharingCompletion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sharing_ShareImage_m0FE79F06E82BA16D1F54339D9958C5A46218BAE8 (Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * __this, String_t* ____message0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____texture1, eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ____excludedOptions2, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion3, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.Sharing::Share(System.String,System.String,System.Byte[],VoxelBusters.NativePlugins.eShareOptions[],VoxelBusters.NativePlugins.Sharing/SharingCompletion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sharing_Share_mC58F054546EE68AFF2F944864EFC525687E16344 (Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * __this, String_t* ____message0, String_t* ____URLString1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____imageByteArray2, eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* ____excludedOptions3, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * ____onCompletion4, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.MonoBehaviourExtensions::PauseUnity(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExtensions_PauseUnity_mAA50967EB2DF402FD825A57F81F60B90EF2A7E22 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____monoTarget0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0)
inline void Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460 (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// VoxelBusters.NativePlugins.RateMyApp VoxelBusters.NativePlugins.Utility::get_RateMyApp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * Utility_get_RateMyApp_m54515D2267E4BAA539FF997A4EBD207A65E7933C_inline (Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.RateMyApp::AskForReview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateMyApp_AskForReview_m3ACB780B98A5F9612E0FE8865C3CBADA451A33DA (RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.NativePlugins.ApplicationSettings/Features/MultiComponentFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiComponentFeature__ctor_m3FD82758068752647EA082686D6C1119AA365E7C (MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07 * __this, const RuntimeMethod* method);
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
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CManuallyTriggerInitialStateU3Ed__11__ctor_m3B0C7C82F7EF31513C34E69AE81E8146C1E74C59 (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CManuallyTriggerInitialStateU3Ed__11_System_IDisposable_Dispose_mFEC7C97C755279A1A3CAE6B223AC1ACD2F30108D (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CManuallyTriggerInitialStateU3Ed__11_MoveNext_m45BEBEF4A197E066D93F69CD8B72914D0E482A43 (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CManuallyTriggerInitialStateU3Ed__11_MoveNext_m45BEBEF4A197E066D93F69CD8B72914D0E482A43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (IsConnected == false)
		NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		bool L_5 = NetworkConnectivity_get_IsConnected_m2116E9F763CEF43F1C680FBB6D0DD409DD2B4DA6_inline(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// ConnectivityChanged(false);
		NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		NetworkConnectivity_ConnectivityChanged_mCC66D233CB845F8BCD93800F301DA3B000F956D5(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAAAF88B38EBF7AA6425A0FA82760C3380E5616F1 (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_Reset_mF68434AE5FB9A501248C9E7405587F0591FF564F (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_Reset_mF68434AE5FB9A501248C9E7405587F0591FF564F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_Reset_mF68434AE5FB9A501248C9E7405587F0591FF564F_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.NativePlugins.NetworkConnectivity_<ManuallyTriggerInitialState>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CManuallyTriggerInitialStateU3Ed__11_System_Collections_IEnumerator_get_Current_m5911358A8CEC85181C8BA0E08421565655AC00E5 (U3CManuallyTriggerInitialStateU3Ed__11_t9C7141202C00188A454E0F67D29C97DD02402811 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 (NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * __this, bool ____isConnected0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(____isConnected0));

}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnectivityChanged__ctor_m12604190182D120442E6E7A4F363F04FE5CC2FC2 (NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnectivityChanged_Invoke_m56DE158E744CE436AA96F6CB9BE5BCE9CB9F81FB (NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * __this, bool ____isConnected0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____isConnected0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____isConnected0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____isConnected0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ____isConnected0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ____isConnected0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____isConnected0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____isConnected0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&____isConnected0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____isConnected0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkConnectivityChanged_BeginInvoke_m4933A05732C6E7F83212E6A07E230E85F61ECB63 (NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * __this, bool ____isConnected0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkConnectivityChanged_BeginInvoke_m4933A05732C6E7F83212E6A07E230E85F61ECB63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &____isConnected0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivity_NetworkConnectivityChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnectivityChanged_EndInvoke_mD5F60FC7F1BB7C86D6A73EEDAB000BE262B55612 (NetworkConnectivityChanged_tA8B7FC153D6E507DBEFE6C1999A59751CD1914B9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 VoxelBusters.NativePlugins.NetworkConnectivitySettings_AndroidSettings::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidSettings_get_Port_m362E420C69B6D262EDFB954BFD32CDC0B3F4EEAA (AndroidSettings_t1FE7FA082C19AB79BE78C6CDD2D687AD2CE4DC92 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_port;
		int32_t L_0 = __this->get_m_port_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void VoxelBusters.NativePlugins.NetworkConnectivitySettings_AndroidSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidSettings__ctor_m054B6B5D72498B75CAC3B8B3CA5547278416E2F3 (AndroidSettings_t1FE7FA082C19AB79BE78C6CDD2D687AD2CE4DC92 * __this, const RuntimeMethod* method)
{
	{
		// private     int         m_port         = 53;
		__this->set_m_port_0(((int32_t)53));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.NativePlugins.PlatformValueHelper_<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m3E8C5EDFED9E4F90FC54AB0ADBAC6EE1E8D3C6E6 (U3CU3Ec__DisplayClass0_0_tEFBA05080A344050839299C82137816FF4BD8D6E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoxelBusters.NativePlugins.PlatformValueHelper_<>c__DisplayClass0_0::<GetCurrentPlatformValue>b__0(VoxelBusters.NativePlugins.PlatformValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CGetCurrentPlatformValueU3Eb__0_m7FF9641B41DEF50BB69DF97AE23E72A8C438B035 (U3CU3Ec__DisplayClass0_0_tEFBA05080A344050839299C82137816FF4BD8D6E * __this, PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682 * ____entry0, const RuntimeMethod* method)
{
	{
		// return System.Array.Find(_array, (_entry) => _entry.Platform == _platform);
		PlatformValue_t1E40E456419FDF3B2D44FDC2FBEEAF76B5A61682 * L_0 = ____entry0;
		NullCheck(L_0);
		int32_t L_1 = PlatformValue_get_Platform_m32147B6A13C3A53B023D2963E6ABC1330AED9D74(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__platform_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDialogRoutineU3Ed__17__ctor_mEF04A798562E67926790DB64997A233FA1D0DF4C (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDialogRoutineU3Ed__17_System_IDisposable_Dispose_m48ED3CED624C6CDAE744D2C2D198875EF871F571 (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowDialogRoutineU3Ed__17_MoveNext_m29D5A1158451C88DD8E84DBA370B334831BE1105 (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowDialogRoutineU3Ed__17_MoveNext_m29D5A1158451C88DD8E84DBA370B334831BE1105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Delegate != null)
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		RuntimeObject* L_4 = RateMyApp_get_Delegate_m5D43BB5EE6516A3D31917846B663A82D1F051DAF_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0055;
	}

IL_0035:
	{
		// yield return new WaitForSeconds(seconds: 1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0055:
	{
		// while (!Delegate.CanShowRateMyAppDialog())
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		RuntimeObject* L_8 = RateMyApp_get_Delegate_m5D43BB5EE6516A3D31917846B663A82D1F051DAF_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VoxelBusters.NativePlugins.IRateMyAppDelegate::CanShowRateMyAppDialog() */, IRateMyAppDelegate_t867D7F90A0134570D689793B446CC8DA13644466_il2cpp_TypeInfo_var, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
	}

IL_006d:
	{
		// ShowDialog();
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		RateMyApp_ShowDialog_mFC709AC79424052162E9335CC4D0F53E80CDCE0B(L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowDialogRoutineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0B43DAFB714918EBDCD11A0CB3058B1D0D6A59EB (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_Reset_m961A87805615486BAE0E0675D60D83D8F50CF2E7 (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_Reset_m961A87805615486BAE0E0675D60D83D8F50CF2E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_Reset_m961A87805615486BAE0E0675D60D83D8F50CF2E7_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.NativePlugins.RateMyApp_<ShowDialogRoutine>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowDialogRoutineU3Ed__17_System_Collections_IEnumerator_get_Current_m2CD6012A03D0850B6CB15D828604B382DF14E3DA (U3CShowDialogRoutineU3Ed__17_tFE0C54B2697EB31D17311429888B2F964CA948D1 * __this, const RuntimeMethod* method)
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
// System.Void VoxelBusters.NativePlugins.Internal.RateMyAppGenericController_<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m378FEDE3701F869E141C07291B38A3276B6A526B (U3CU3Ec__DisplayClass0_0_t8085156D17B01E4954DBF9C27A4411B0F689ED66 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Internal.RateMyAppGenericController_<>c__DisplayClass0_0::<ShowDialog>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CShowDialogU3Eb__0_m59D0BFCBEAA7250C42397947D012AD6842057357 (U3CU3Ec__DisplayClass0_0_t8085156D17B01E4954DBF9C27A4411B0F689ED66 * __this, String_t* ____buttonPressed0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (_onCompletion != null)
		ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * L_0 = __this->get__onCompletion_0();
		V_0 = (bool)((!(((RuntimeObject*)(ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _onCompletion(_buttonPressed);
		ShowDialogResultDelegate_t07677476974A40E64B3A3501CC80699569631499 * L_2 = __this->get__onCompletion_0();
		String_t* L_3 = ____buttonPressed0;
		NullCheck(L_2);
		ShowDialogResultDelegate_Invoke_m99697CCC8DBD1A3918C2B6AC559F2BC481454823(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// });
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
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16__ctor_mBA6A07DE1E5C3526D5207D9ED93FE207C99E9DCC (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16_System_IDisposable_Dispose_m0DB7D9ED952024FA7784B010FFBD6745BB794AD2 (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartAsynchronousRequestU3Ed__16_MoveNext_m0D505BC269D13FB720CCFDAA3961DE7639CE223B (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0032;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0039;
	}

IL_0022:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0039:
	{
		// while (!WWWObject.isDone)
		Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_4 = Request_get_WWWObject_mEFE38409C9EE367AD2160EB51D2724053CFC85C5_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		// OnFetchingResponse();
		Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void VoxelBusters.Utility.Request::OnFetchingResponse() */, L_7);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAsynchronousRequestU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m67EE4896553804CED10BAD38C086CE0AF497B873 (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_m98241B66933CC02CBE1B22DE2DAD2F9AB1817B44 (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_m98241B66933CC02CBE1B22DE2DAD2F9AB1817B44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_m98241B66933CC02CBE1B22DE2DAD2F9AB1817B44_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_get_Current_mCD8F715F364B40877E174093B98553BAAABBB430 (U3CStartAsynchronousRequestU3Ed__16_t04AEE330BA2E00EC530E294C77F093B0C0322056 * __this, const RuntimeMethod* method)
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
// System.Void VoxelBusters.Utility.Request_SurrogateMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateMonoBehaviour__ctor_m182DBCA88ABB13F829BD4CDF2DE63621D3128D93 (SurrogateMonoBehaviour_tB78DD93E7EBEBC96F8F68A1EF5DE2497DEE677B6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m38AB5A3838BAF4E18886D9C513047F3153044764 (U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass12_0::<SendMailWithScreenshot>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CSendMailWithScreenshotU3Eb__0_m9F5E02054875F2AA6BBEDABFCD7E62ED355E0E0E (U3CU3Ec__DisplayClass12_0_t0D5C9EF085C6730C3A82F5E4D19CB449DC0F08B6 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CSendMailWithScreenshotU3Eb__0_m9F5E02054875F2AA6BBEDABFCD7E62ED355E0E0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] _imageByteArray    = _texture.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____texture0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// SendMail(_subject, _body, _isHTMLBody, _imageByteArray,
		//          MIMEType.kPNG , "Screenshot.png", _recipients, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_2 = __this->get_U3CU3E4__this_0();
		String_t* L_3 = __this->get__subject_1();
		String_t* L_4 = __this->get__body_2();
		bool L_5 = __this->get__isHTMLBody_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get__recipients_4();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_8 = __this->get__onCompletion_5();
		NullCheck(L_2);
		VirtActionInvoker8< String_t*, String_t*, bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t*, String_t*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * >::Invoke(10 /* System.Void VoxelBusters.NativePlugins.Sharing::SendMail(System.String,System.String,System.Boolean,System.Byte[],System.String,System.String,System.String[],VoxelBusters.NativePlugins.Sharing/SharingCompletion) */, L_2, L_3, L_4, L_5, L_6, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, _stringLiteral4C4DEC98497F1390905A2262C134986591734C1F, L_7, L_8);
		// }));
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m178FAC5C3DCDF982F64E554263575DD21F46DFE3 (U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass14_0::<SendMailWithAttachment>b__0(UnityEngine.WWW,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CSendMailWithAttachmentU3Eb__0_mA24B7ED4C047243D26DB5754469E332A4684F85E (U3CU3Ec__DisplayClass14_0_t9AB693D29C3235B15E61F9642D732279CBB9A17D * __this, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ____www0, String_t* ____error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass14_0_U3CSendMailWithAttachmentU3Eb__0_mA24B7ED4C047243D26DB5754469E332A4684F85E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// byte[] _attachmentByteArray    = null;
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// string _filename            = null;
		V_1 = (String_t*)NULL;
		// if (string.IsNullOrEmpty(_error))
		String_t* L_0 = ____error1;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _attachmentByteArray    = _www.bytes;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_3 = ____www0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// _filename                = Path.GetFileName(_attachmentPath);
		String_t* L_5 = __this->get__attachmentPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0043;
	}

IL_0026:
	{
		// DebugUtility.Logger.LogWarning(Constants.kDebugTag, "[Sharing] The operation could not be completed. Error=" + _error);
		RuntimeObject* L_7 = DebugUtility_get_Logger_mDBC64E64FED543D760728A1EE4347798A3CB1F50(/*hidden argument*/NULL);
		String_t* L_8 = ____error1;
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE5D587C58AEA68C1E65F33DA11FB263B9DE2954A, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_7, _stringLiteral6595A67A375CA5640AEE270E24C8C27FD212CC7D, L_9);
	}

IL_0043:
	{
		// SendMail(_subject, _body, _isHTMLBody, _attachmentByteArray,
		//          _mimeType, _filename, _recipients, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_10 = __this->get_U3CU3E4__this_1();
		String_t* L_11 = __this->get__subject_2();
		String_t* L_12 = __this->get__body_3();
		bool L_13 = __this->get__isHTMLBody_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_0;
		String_t* L_15 = __this->get__mimeType_5();
		String_t* L_16 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = __this->get__recipients_6();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_18 = __this->get__onCompletion_7();
		NullCheck(L_10);
		VirtActionInvoker8< String_t*, String_t*, bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t*, String_t*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * >::Invoke(10 /* System.Void VoxelBusters.NativePlugins.Sharing::SendMail(System.String,System.String,System.Boolean,System.Byte[],System.String,System.String,System.String[],VoxelBusters.NativePlugins.Sharing/SharingCompletion) */, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18);
		// };
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m041F9B6CA213FE06B29CF4DCE3280FBF564A38BA (U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass38_0::<ShareScreenshotOnWhatsApp>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CShareScreenshotOnWhatsAppU3Eb__0_mD314B13583A0130894337F146FF58DF4C5AE29C0 (U3CU3Ec__DisplayClass38_0_t8609CCE26331CFD4BE91BBBD8242B5346A69632B * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____texture0, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] _imageByteArray    = _texture.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____texture0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// ShareImageOnWhatsApp(_imageByteArray, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_2 = __this->get_U3CU3E4__this_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_4 = __this->get__onCompletion_1();
		NullCheck(L_2);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * >::Invoke(29 /* System.Void VoxelBusters.NativePlugins.Sharing::ShareImageOnWhatsApp(System.Byte[],VoxelBusters.NativePlugins.Sharing/SharingCompletion) */, L_2, L_3, L_4);
		// }));
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_m05B6CECF6B0942090F469C489D46AADF3B9FEE32 (U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass39_0::<ShareImageOnWhatsApp>b__0(UnityEngine.WWW,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CShareImageOnWhatsAppU3Eb__0_m12FBA3064EDE8E5369000664E04DB7E89EA65D26 (U3CU3Ec__DisplayClass39_0_t50B7740BEF31FD39C2D28BFDB61D4353B8E15E06 * __this, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ____www0, String_t* ____error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass39_0_U3CShareImageOnWhatsAppU3Eb__0_m12FBA3064EDE8E5369000664E04DB7E89EA65D26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (string.IsNullOrEmpty(_error))
		String_t* L_0 = ____error1;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// ShareImageOnWhatsApp(_www.bytes, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_3 = __this->get_U3CU3E4__this_0();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_4 = ____www0;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_4, /*hidden argument*/NULL);
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_6 = __this->get__onCompletion_1();
		NullCheck(L_3);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * >::Invoke(29 /* System.Void VoxelBusters.NativePlugins.Sharing::ShareImageOnWhatsApp(System.Byte[],VoxelBusters.NativePlugins.Sharing/SharingCompletion) */, L_3, L_5, L_6);
		goto IL_0058;
	}

IL_0027:
	{
		// DebugUtility.Logger.LogError(Constants.kDebugTag, "[Sharing] The operation could not be completed. Error=" + _error);
		RuntimeObject* L_7 = DebugUtility_get_Logger_mDBC64E64FED543D760728A1EE4347798A3CB1F50(/*hidden argument*/NULL);
		String_t* L_8 = ____error1;
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE5D587C58AEA68C1E65F33DA11FB263B9DE2954A, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_7, _stringLiteral6595A67A375CA5640AEE270E24C8C27FD212CC7D, L_9);
		// ShareImageOnWhatsApp((byte[])null, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_10 = __this->get_U3CU3E4__this_0();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_11 = __this->get__onCompletion_1();
		NullCheck(L_10);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * >::Invoke(29 /* System.Void VoxelBusters.NativePlugins.Sharing::ShareImageOnWhatsApp(System.Byte[],VoxelBusters.NativePlugins.Sharing/SharingCompletion) */, L_10, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, L_11);
		// return;
		goto IL_0058;
	}

IL_0058:
	{
		// };
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_mA78A053BCD3702075712A69F214E1540BFB573D6 (U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass55_0::<ShareScreenShot>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3CShareScreenShotU3Eb__0_m5F0D5E2642123E1030BF4A6EC045B88DCCC763AA (U3CU3Ec__DisplayClass55_0_t23C9CD05BA1E0254D8797025C762118B9E3F7A9C * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____texture0, const RuntimeMethod* method)
{
	{
		// ShareImage(_message, _texture, _excludedOptions, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get__message_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____texture0;
		eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* L_3 = __this->get__excludedOptions_2();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_4 = __this->get__onCompletion_3();
		NullCheck(L_0);
		Sharing_ShareImage_m0FE79F06E82BA16D1F54339D9958C5A46218BAE8(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }));
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
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_m96D5843BA11671FADC510A90A4628BEDD8C50CCA (U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<>c__DisplayClass57_0::<ShareImageAtPath>b__0(UnityEngine.WWW,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CShareImageAtPathU3Eb__0_m87E3D0A8502A40EE074FA717664679CCAE8C34AE (U3CU3Ec__DisplayClass57_0_t11B6B2770F7B46ED173B80D543048722956B1EC6 * __this, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ____www0, String_t* ____error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass57_0_U3CShareImageAtPathU3Eb__0_m87E3D0A8502A40EE074FA717664679CCAE8C34AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	{
		// byte[]        _imageData        = null;
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// if (string.IsNullOrEmpty(_error))
		String_t* L_0 = ____error1;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// _imageData        = _www.bytes;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_3 = ____www0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0035;
	}

IL_0018:
	{
		// DebugUtility.Logger.LogWarning(Constants.kDebugTag, "[Sharing] The operation could not be completed. Error=" + _error);
		RuntimeObject* L_5 = DebugUtility_get_Logger_mDBC64E64FED543D760728A1EE4347798A3CB1F50(/*hidden argument*/NULL);
		String_t* L_6 = ____error1;
		String_t* L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE5D587C58AEA68C1E65F33DA11FB263B9DE2954A, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_5, _stringLiteral6595A67A375CA5640AEE270E24C8C27FD212CC7D, L_7);
	}

IL_0035:
	{
		// Share(_message, null, _imageData, _excludedOptions, _onCompletion);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_8 = __this->get_U3CU3E4__this_0();
		String_t* L_9 = __this->get__message_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		eShareOptionsU5BU5D_t96424FBD03919CEBC9D3B7C3D4EDCA960F112E34* L_11 = __this->get__excludedOptions_2();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_12 = __this->get__onCompletion_3();
		NullCheck(L_8);
		Sharing_Share_mC58F054546EE68AFF2F944864EFC525687E16344(L_8, L_9, (String_t*)NULL, L_10, L_11, L_12, /*hidden argument*/NULL);
		// };
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
// System.Void VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowViewCoroutineU3Ed__44__ctor_mC3B0EDA8F6272D94A642BBB20EB0C5F8327582C6 (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowViewCoroutineU3Ed__44_System_IDisposable_Dispose_m26F4706A1D69164C0B7F04DC8B326831651E7F66 (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowViewCoroutineU3Ed__44_MoveNext_mF31DDDDB5E87491D54ABEC016C4C267C4082115D (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowViewCoroutineU3Ed__44_MoveNext_mF31DDDDB5E87491D54ABEC016C4C267C4082115D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0032;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0039;
	}

IL_0022:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0039:
	{
		// while (!_shareView.IsReadyToShowView)
		RuntimeObject* L_3 = __this->get__shareView_2();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VoxelBusters.NativePlugins.IShareView::get_IsReadyToShowView() */, IShareView_tBBA50D27B5111473AB733BB003366383796CAF52_il2cpp_TypeInfo_var, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// this.PauseUnity();
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_6 = __this->get_U3CU3E4__this_4();
		IL2CPP_RUNTIME_CLASS_INIT(MonoBehaviourExtensions_t5E09BB817411DFA2524D42ABA7B1E3929CDA585B_il2cpp_TypeInfo_var);
		MonoBehaviourExtensions_PauseUnity_mAA50967EB2DF402FD825A57F81F60B90EF2A7E22(L_6, /*hidden argument*/NULL);
		// OnSharingFinished    = _onCompletion;
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_7 = __this->get_U3CU3E4__this_4();
		SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * L_8 = __this->get__onCompletion_3();
		NullCheck(L_7);
		L_7->set_OnSharingFinished_4(L_8);
		// if (_shareView is MailShareComposer)
		RuntimeObject* L_9 = __this->get__shareView_2();
		V_2 = (bool)((!(((RuntimeObject*)(MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6 *)((MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6 *)IsInstClass((RuntimeObject*)L_9, MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0098;
		}
	}
	{
		// ShowMailShareComposer((MailShareComposer)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_11 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_12 = __this->get__shareView_2();
		NullCheck(L_11);
		VirtActionInvoker1< MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6 * >::Invoke(9 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowMailShareComposer(VoxelBusters.NativePlugins.MailShareComposer) */, L_11, ((MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6 *)CastclassClass((RuntimeObject*)L_12, MailShareComposer_tB489DE16C6510AD449505843D7A583AA072DDCE6_il2cpp_TypeInfo_var)));
		goto IL_016e;
	}

IL_0098:
	{
		// else if (_shareView is MessageShareComposer)
		RuntimeObject* L_13 = __this->get__shareView_2();
		V_3 = (bool)((!(((RuntimeObject*)(MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310 *)((MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310 *)IsInstClass((RuntimeObject*)L_13, MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00c8;
		}
	}
	{
		// ShowMessageShareComposer((MessageShareComposer)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_15 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_16 = __this->get__shareView_2();
		NullCheck(L_15);
		VirtActionInvoker1< MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310 * >::Invoke(14 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowMessageShareComposer(VoxelBusters.NativePlugins.MessageShareComposer) */, L_15, ((MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310 *)CastclassClass((RuntimeObject*)L_16, MessageShareComposer_t2558C205DFD21F3836B348A3E58EB2E52B747310_il2cpp_TypeInfo_var)));
		goto IL_016e;
	}

IL_00c8:
	{
		// else if (_shareView is WhatsAppShareComposer)
		RuntimeObject* L_17 = __this->get__shareView_2();
		V_4 = (bool)((!(((RuntimeObject*)(WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2 *)((WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2 *)IsInstClass((RuntimeObject*)L_17, WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		// ShowWhatsAppShareComposer((WhatsAppShareComposer)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_19 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_20 = __this->get__shareView_2();
		NullCheck(L_19);
		VirtActionInvoker1< WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2 * >::Invoke(27 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowWhatsAppShareComposer(VoxelBusters.NativePlugins.WhatsAppShareComposer) */, L_19, ((WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2 *)CastclassClass((RuntimeObject*)L_20, WhatsAppShareComposer_tA1A5DA1E70A74B68FE883B8BC19357E610FE21A2_il2cpp_TypeInfo_var)));
		goto IL_016e;
	}

IL_00f7:
	{
		// else if (_shareView is FBShareComposer)
		RuntimeObject* L_21 = __this->get__shareView_2();
		V_5 = (bool)((!(((RuntimeObject*)(FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5 *)((FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5 *)IsInstClass((RuntimeObject*)L_21, FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0126;
		}
	}
	{
		// ShowFBShareComposer((FBShareComposer)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_23 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_24 = __this->get__shareView_2();
		NullCheck(L_23);
		VirtActionInvoker1< FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5 * >::Invoke(22 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowFBShareComposer(VoxelBusters.NativePlugins.FBShareComposer) */, L_23, ((FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5 *)CastclassClass((RuntimeObject*)L_24, FBShareComposer_t8328C03124A76E5E6E14C0AE9E1ACAB52441F4D5_il2cpp_TypeInfo_var)));
		goto IL_016e;
	}

IL_0126:
	{
		// else if (_shareView is TwitterShareComposer)
		RuntimeObject* L_25 = __this->get__shareView_2();
		V_6 = (bool)((!(((RuntimeObject*)(TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0 *)((TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0 *)IsInstClass((RuntimeObject*)L_25, TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0155;
		}
	}
	{
		// ShowTwitterShareComposer((TwitterShareComposer)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_27 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_28 = __this->get__shareView_2();
		NullCheck(L_27);
		VirtActionInvoker1< TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0 * >::Invoke(23 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowTwitterShareComposer(VoxelBusters.NativePlugins.TwitterShareComposer) */, L_27, ((TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0 *)CastclassClass((RuntimeObject*)L_28, TwitterShareComposer_t445683CCE72B900AC96A18BE6B4D6DEF414FABE0_il2cpp_TypeInfo_var)));
		goto IL_016e;
	}

IL_0155:
	{
		// ShowShareSheet((ShareSheet)_shareView);
		Sharing_tF1D5127CEB828223899CE527CCDC8AEF520B3DB7 * L_29 = __this->get_U3CU3E4__this_4();
		RuntimeObject* L_30 = __this->get__shareView_2();
		NullCheck(L_29);
		VirtActionInvoker1< ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04 * >::Invoke(30 /* System.Void VoxelBusters.NativePlugins.Sharing::ShowShareSheet(VoxelBusters.NativePlugins.ShareSheet) */, L_29, ((ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04 *)CastclassClass((RuntimeObject*)L_30, ShareSheet_tE218B997467E40375FC07C2A6889B9B817DBDD04_il2cpp_TypeInfo_var)));
	}

IL_016e:
	{
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowViewCoroutineU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB59929A73786C3569518E8BFAF5C00E62DFC7CD6 (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_Reset_m4D00B3DE95D8197BB033E87C90C6AF598AA592DD (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_Reset_m4D00B3DE95D8197BB033E87C90C6AF598AA592DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_Reset_m4D00B3DE95D8197BB033E87C90C6AF598AA592DD_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.NativePlugins.Sharing_<ShowViewCoroutine>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowViewCoroutineU3Ed__44_System_Collections_IEnumerator_get_Current_m599AF981A6605C2419342BD7A4A079D1DF98CC5A (U3CShowViewCoroutineU3Ed__44_t737738ECC39068B496848C453A9CD206631C6D30 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E (SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * __this, int32_t ____result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(____result0);

}
// System.Void VoxelBusters.NativePlugins.Sharing_SharingCompletion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingCompletion__ctor_m7B3FE38E972532ECBE2B1CECE71CA4E7D34C2D67 (SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.NativePlugins.Sharing_SharingCompletion::Invoke(VoxelBusters.NativePlugins.eShareResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingCompletion_Invoke_m008735DD0A59236E8EC8BDE8F6C53625CB02B054 (SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * __this, int32_t ____result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____result0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ____result0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ____result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____result0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&____result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.NativePlugins.Sharing_SharingCompletion::BeginInvoke(VoxelBusters.NativePlugins.eShareResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SharingCompletion_BeginInvoke_m269803CEDAB61A214BDC043815BE0BE0D25B88B7 (SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * __this, int32_t ____result0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SharingCompletion_BeginInvoke_m269803CEDAB61A214BDC043815BE0BE0D25B88B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(eShareResult_t712436AF8F9C2764014BBD1B76659C5E7B30F481_il2cpp_TypeInfo_var, &____result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VoxelBusters.NativePlugins.Sharing_SharingCompletion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharingCompletion_EndInvoke_m1917F3439774DC59F232133344DE20A1BEBDF0DA (SharingCompletion_t2D082A4F54FAF1BFF4C37A69060326D8FC136F9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5__ctor_mD50A6EA2D19898C69B54379EE7310E15B73A5438 (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5_System_IDisposable_Dispose_mB6B0D86DEA1FD969552D56A95B108A5F4009D936 (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotU3Ed__5_MoveNext_m6D832E71FF6FC541EA1EB58D5B224C0E30525042 (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeScreenshotU3Ed__5_MoveNext_m6D832E71FF6FC541EA1EB58D5B224C0E30525042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _texture    = new Texture2D(Screen.width, Screen.height);
		int32_t L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3C_textureU3E5__1_3(L_6);
		// _texture.ReadPixels(new Rect(0f, 0f, Screen.width, Screen.height),0,0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = __this->get_U3C_textureU3E5__1_3();
		int32_t L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), (0.0f), (0.0f), (((float)((float)L_8))), (((float)((float)L_9))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_7, L_10, 0, 0, /*hidden argument*/NULL);
		// _texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = __this->get_U3C_textureU3E5__1_3();
		NullCheck(L_11);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_11, /*hidden argument*/NULL);
		// if(_onCompletionHandler != null)
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_12 = __this->get__onCompletionHandler_2();
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		// _onCompletionHandler(_texture);
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_14 = __this->get__onCompletionHandler_2();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = __this->get_U3C_textureU3E5__1_3();
		NullCheck(L_14);
		Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460(L_14, L_15, /*hidden argument*/Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
	}

IL_00a6:
	{
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m27E978702DD46D85BF6EAF8C3DEE19052CE3C39D (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m1D512C72062C2A83057E8BF2CB30709CC3AA501A (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m1D512C72062C2A83057E8BF2CB30709CC3AA501A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m1D512C72062C2A83057E8BF2CB30709CC3AA501A_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_get_Current_m96F8FDB44D07B6B563A89A61B3EAF3A022EEA626 (U3CTakeScreenshotU3Ed__5_t8AE00DB1B6A09E3D0E5B80425C3016C69D3FCF9F * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 (AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 * __this, String_t* ____buttonPressed0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____buttonPressed0' to native representation
	char* _____buttonPressed0_marshaled = NULL;
	_____buttonPressed0_marshaled = il2cpp_codegen_marshal_string(____buttonPressed0);

	// Native function invocation
	il2cppPInvokeFunc(_____buttonPressed0_marshaled);

	// Marshaling cleanup of parameter '____buttonPressed0' native representation
	il2cpp_codegen_marshal_free(_____buttonPressed0_marshaled);
	_____buttonPressed0_marshaled = NULL;

}
// System.Void VoxelBusters.NativePlugins.UI_AlertDialogCompletion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlertDialogCompletion__ctor_mB406ACD06FE7E880853BA4B25E2D529B00C3ED3A (AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.NativePlugins.UI_AlertDialogCompletion::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlertDialogCompletion_Invoke_m76D73AB07EBEB3204BF1B5B0E7128E31B3B77BCE (AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 * __this, String_t* ____buttonPressed0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____buttonPressed0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ____buttonPressed0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ____buttonPressed0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____buttonPressed0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____buttonPressed0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____buttonPressed0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____buttonPressed0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____buttonPressed0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____buttonPressed0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____buttonPressed0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.NativePlugins.UI_AlertDialogCompletion::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AlertDialogCompletion_BeginInvoke_m3BC2F8991B833FB8741FA9DE7704B4F49754597A (AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 * __this, String_t* ____buttonPressed0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____buttonPressed0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VoxelBusters.NativePlugins.UI_AlertDialogCompletion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlertDialogCompletion_EndInvoke_m80D846228465EC3781C589461DDFC12B39EE9737 (AlertDialogCompletion_tADC2FFEF30DD649551A61D6B9AE93E9F27409DB1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 (LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 * __this, String_t* ____buttonPressed0, String_t* ____usernameText1, String_t* ____passwordText2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____buttonPressed0' to native representation
	char* _____buttonPressed0_marshaled = NULL;
	_____buttonPressed0_marshaled = il2cpp_codegen_marshal_string(____buttonPressed0);

	// Marshaling of parameter '____usernameText1' to native representation
	char* _____usernameText1_marshaled = NULL;
	_____usernameText1_marshaled = il2cpp_codegen_marshal_string(____usernameText1);

	// Marshaling of parameter '____passwordText2' to native representation
	char* _____passwordText2_marshaled = NULL;
	_____passwordText2_marshaled = il2cpp_codegen_marshal_string(____passwordText2);

	// Native function invocation
	il2cppPInvokeFunc(_____buttonPressed0_marshaled, _____usernameText1_marshaled, _____passwordText2_marshaled);

	// Marshaling cleanup of parameter '____buttonPressed0' native representation
	il2cpp_codegen_marshal_free(_____buttonPressed0_marshaled);
	_____buttonPressed0_marshaled = NULL;

	// Marshaling cleanup of parameter '____usernameText1' native representation
	il2cpp_codegen_marshal_free(_____usernameText1_marshaled);
	_____usernameText1_marshaled = NULL;

	// Marshaling cleanup of parameter '____passwordText2' native representation
	il2cpp_codegen_marshal_free(_____passwordText2_marshaled);
	_____passwordText2_marshaled = NULL;

}
// System.Void VoxelBusters.NativePlugins.UI_LoginPromptCompletion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginPromptCompletion__ctor_mF6B0F47731A1A694232E1F9E7D8093CC9972CFC1 (LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.NativePlugins.UI_LoginPromptCompletion::Invoke(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginPromptCompletion_Invoke_m100AF3C377A0641F2A168636D0D9728190FE4E9A (LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 * __this, String_t* ____buttonPressed0, String_t* ____usernameText1, String_t* ____passwordText2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____usernameText1, ____passwordText2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ____buttonPressed0, ____usernameText1, ____passwordText2);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ____buttonPressed0, ____usernameText1, ____passwordText2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____buttonPressed0, ____usernameText1, ____passwordText2);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____buttonPressed0, ____usernameText1, ____passwordText2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____usernameText1) - 1), ____passwordText2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____usernameText1, ____passwordText2, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____usernameText1, ____passwordText2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2);
					else
						VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____buttonPressed0) - 1), ____usernameText1, ____passwordText2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, ____usernameText1, ____passwordText2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.NativePlugins.UI_LoginPromptCompletion::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoginPromptCompletion_BeginInvoke_m128DF7BCFB4F91B339C660A8BB3CA5E2C6C35A03 (LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 * __this, String_t* ____buttonPressed0, String_t* ____usernameText1, String_t* ____passwordText2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ____buttonPressed0;
	__d_args[1] = ____usernameText1;
	__d_args[2] = ____passwordText2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VoxelBusters.NativePlugins.UI_LoginPromptCompletion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginPromptCompletion_EndInvoke_m8789DDEDA0995C004CD0E52787173EDE8A6757DB (LoginPromptCompletion_tFC49501AC0971A7832561607BC64E6047DEB83C0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 (SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 * __this, String_t* ____buttonPressed0, String_t* ____inputText1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____buttonPressed0' to native representation
	char* _____buttonPressed0_marshaled = NULL;
	_____buttonPressed0_marshaled = il2cpp_codegen_marshal_string(____buttonPressed0);

	// Marshaling of parameter '____inputText1' to native representation
	char* _____inputText1_marshaled = NULL;
	_____inputText1_marshaled = il2cpp_codegen_marshal_string(____inputText1);

	// Native function invocation
	il2cppPInvokeFunc(_____buttonPressed0_marshaled, _____inputText1_marshaled);

	// Marshaling cleanup of parameter '____buttonPressed0' native representation
	il2cpp_codegen_marshal_free(_____buttonPressed0_marshaled);
	_____buttonPressed0_marshaled = NULL;

	// Marshaling cleanup of parameter '____inputText1' native representation
	il2cpp_codegen_marshal_free(_____inputText1_marshaled);
	_____inputText1_marshaled = NULL;

}
// System.Void VoxelBusters.NativePlugins.UI_SingleFieldPromptCompletion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldPromptCompletion__ctor_m433C343049A9F94B99831F15E18C0A1934004936 (SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.NativePlugins.UI_SingleFieldPromptCompletion::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldPromptCompletion_Invoke_m06320277FB577A0CAE1006E21FF3FD866EC42629 (SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 * __this, String_t* ____buttonPressed0, String_t* ____inputText1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____inputText1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, ____inputText1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ____buttonPressed0, ____inputText1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ____buttonPressed0, ____inputText1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____buttonPressed0, ____inputText1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____buttonPressed0, ____inputText1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____inputText1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____inputText1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____buttonPressed0, ____inputText1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0, ____inputText1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ____buttonPressed0, ____inputText1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____buttonPressed0, ____inputText1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____buttonPressed0, ____inputText1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____buttonPressed0) - 1), ____inputText1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____buttonPressed0, ____inputText1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.NativePlugins.UI_SingleFieldPromptCompletion::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleFieldPromptCompletion_BeginInvoke_m358E4116999E680BE3842B590EE3E21969B2CCAB (SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 * __this, String_t* ____buttonPressed0, String_t* ____inputText1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ____buttonPressed0;
	__d_args[1] = ____inputText1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void VoxelBusters.NativePlugins.UI_SingleFieldPromptCompletion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldPromptCompletion_EndInvoke_m6819E60E9DD35DD6A714B88E90C64B008BB71A47 (SingleFieldPromptCompletion_t7EE2930AEBB40713178126CB4CB965BC26249675 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoxelBusters.NativePlugins.Utility_<Start>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6__ctor_mDF7881BAAE283FA6BB5472FF16D7E448D29747BE (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.NativePlugins.Utility_<Start>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_System_IDisposable_Dispose_m7528E655473F1FBFF986A95EE3F237E8047F4529 (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.NativePlugins.Utility_<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__6_MoveNext_m50F7A17A1B35886C6C314538449FA53F2BFCBB6B (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__6_MoveNext_m50F7A17A1B35886C6C314538449FA53F2BFCBB6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (RateMyApp != null)
		Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_5 = Utility_get_RateMyApp_m54515D2267E4BAA539FF997A4EBD207A65E7933C_inline(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// RateMyApp.AskForReview();
		Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_8 = Utility_get_RateMyApp_m54515D2267E4BAA539FF997A4EBD207A65E7933C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RateMyApp_AskForReview_m3ACB780B98A5F9612E0FE8865C3CBADA451A33DA(L_8, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.NativePlugins.Utility_<Start>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m447CA4CD31191BB49EB9202909DAFA1418B4B8D4 (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.NativePlugins.Utility_<Start>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_System_Collections_IEnumerator_Reset_mEAE060C04DDD17E4FC31A413FCB8C840171E264F (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__6_System_Collections_IEnumerator_Reset_mEAE060C04DDD17E4FC31A413FCB8C840171E264F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__6_System_Collections_IEnumerator_Reset_mEAE060C04DDD17E4FC31A413FCB8C840171E264F_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.NativePlugins.Utility_<Start>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__6_System_Collections_IEnumerator_get_Current_mC68CF44ABEC3FCE9CE8E0789F8706D03CD69E4B6 (U3CStartU3Ed__6_tECE5609EB48936AF377254C97A175ADF0D903324 * __this, const RuntimeMethod* method)
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
// System.Boolean VoxelBusters.NativePlugins.UtilitySettings_AndroidSettings::get_ModifiesApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidSettings_get_ModifiesApplicationBadge_m86C7ACF22556E6B402ED4E0B6739664D96A2EE4E (AndroidSettings_tF2FAF25DAE96C08121CBDB3B4753D78D20D36928 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_modifiesApplicationBadge;
		bool L_0 = __this->get_m_modifiesApplicationBadge_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void VoxelBusters.NativePlugins.UtilitySettings_AndroidSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidSettings__ctor_mFCD621F6AAAAB758E4E8DEE53002D8EABCEDCF65 (AndroidSettings_tF2FAF25DAE96C08121CBDB3B4753D78D20D36928 * __this, const RuntimeMethod* method)
{
	{
		// private     bool        m_modifiesApplicationBadge = true;
		__this->set_m_modifiesApplicationBadge_0((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse__ctor_mF5442A9607FD6BDC02E1590CE9DDD6C7C2FCD770 (JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::Invoke(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse_Invoke_mF30D82E823EADCF1EFED156C97B30A535E2F42FB (JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226 * __this, RuntimeObject* ____response0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____response0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ____response0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ____response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____response0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ____response0);
					else
						GenericVirtActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ____response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____response0);
					else
						VirtActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____response0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(____response0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ____response0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.Utility.WebRequest_JSONResponse::BeginInvoke(System.Collections.IDictionary,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONResponse_BeginInvoke_m4299CBBD6CB77D37670D3D4C08474985085A122A (JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226 * __this, RuntimeObject* ____response0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____response0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse_EndInvoke_m47012A7D65F8461FA877FE8E6DC43F0C39C67DDC (JSONResponse_tDBCB3D35F51BD522013F26F67AA13E86D2993226 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoxelBusters.NativePlugins.ApplicationSettings_Features_MediaLibraryFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaLibraryFeature__ctor_m8D7890D2DF5BA510C8CA3A4F36B11A04ECBC76B5 (MediaLibraryFeature_tDCCC5CE829F8FD38132D2673EB0BBCC4B9932C3D * __this, const RuntimeMethod* method)
{
	{
		// public    bool    usesCamera        = true;
		__this->set_usesCamera_1((bool)1);
		// public    bool    usesPhotoAlbum    = true;
		__this->set_usesPhotoAlbum_2((bool)1);
		MultiComponentFeature__ctor_m3FD82758068752647EA082686D6C1119AA365E7C(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.NativePlugins.ApplicationSettings_Features_MultiComponentFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiComponentFeature__ctor_m3FD82758068752647EA082686D6C1119AA365E7C (MultiComponentFeature_t7E7F0552199121CE25E7C2C373C5D7AEABF7BB07 * __this, const RuntimeMethod* method)
{
	{
		// public    bool    value        = true;
		__this->set_value_0((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.NativePlugins.ApplicationSettings_Features_NotificationServiceFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationServiceFeature__ctor_m4DF996F09F331715A8ED76A6507CC92CA5F5CFFB (NotificationServiceFeature_t4EA5F9A723210D74DC38377531729CC38A823C5B * __this, const RuntimeMethod* method)
{
	{
		// public    bool    usesLocalNotification    = true;
		__this->set_usesLocalNotification_1((bool)1);
		// public    bool    usesRemoteNotification    = true;
		__this->set_usesRemoteNotification_2((bool)1);
		MultiComponentFeature__ctor_m3FD82758068752647EA082686D6C1119AA365E7C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConnectivity_get_IsConnected_m2116E9F763CEF43F1C680FBB6D0DD409DD2B4DA6_inline (NetworkConnectivity_t76D1A84615990F58A45BC839BAF6775BE0BBC16D * __this, const RuntimeMethod* method)
{
	{
		// get;
		bool L_0 = __this->get_U3CIsConnectedU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RateMyApp_get_Delegate_m5D43BB5EE6516A3D31917846B663A82D1F051DAF_inline (RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * __this, const RuntimeMethod* method)
{
	{
		// private get;
		RuntimeObject* L_0 = __this->get_U3CDelegateU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * Request_get_WWWObject_mEFE38409C9EE367AD2160EB51D2724053CFC85C5_inline (Request_tBBC34AD861A02C01860AC997264EA9938F3E15FF * __this, const RuntimeMethod* method)
{
	{
		// get;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_0 = __this->get_U3CWWWObjectU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * Utility_get_RateMyApp_m54515D2267E4BAA539FF997A4EBD207A65E7933C_inline (Utility_tD2A8BD04B8890334BE6C01A06784966AB0045DB6 * __this, const RuntimeMethod* method)
{
	{
		// get;
		RateMyApp_tA49AAD7ECF341346F5922BB72599F29A150D0AF7 * L_0 = __this->get_U3CRateMyAppU3Ek__BackingField_5();
		return L_0;
	}
}