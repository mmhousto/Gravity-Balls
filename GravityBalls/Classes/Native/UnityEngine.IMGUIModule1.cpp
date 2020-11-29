#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SliderState
struct SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A;
// UnityEngine.TextEditor
struct TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>
struct IEqualityComparer_1_t46A328CABC9CE489C6B244F85FFC8D5AA0CDDF5D;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t0B43DD6FA8A518E7BFEE3AA145DA9035733C1862;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t4B4EA3861649863FBECADA2F20EFF81E8164EAED;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>[]
struct EntryU5BU5D_t1B313EFD3570E30ADA79C6D1DEC34BBD05AB8724;
// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEditOp_t6C6705A198EA7EFB55340BED1D58F28A1129A4DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894;
IL2CPP_EXTERN_C String_t* _stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97;
IL2CPP_EXTERN_C String_t* _stringLiteral0EF758EF1A06CA13329086B705ED12F47B9F606F;
IL2CPP_EXTERN_C String_t* _stringLiteral13490EE15BBBA5055FAF4DFF43BAF8642B91BD99;
IL2CPP_EXTERN_C String_t* _stringLiteral1388D2C9310312FF15F8415A0A8F63A7EA461B41;
IL2CPP_EXTERN_C String_t* _stringLiteral13CDCE216B91792515C4C64C7FCF5B265C404257;
IL2CPP_EXTERN_C String_t* _stringLiteral16D9C3063FF5F852963147CC12C5C552A5635796;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD31FFC09BB731749BFAAC984D2EED8E22C771A;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral28C03674125DA29250BA73594E6061FD480A3CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral34D4B5F20FD7AA47487EDE07001792463720D1CE;
IL2CPP_EXTERN_C String_t* _stringLiteral34F817DA4635C4C22DF5692FF51A196067483534;
IL2CPP_EXTERN_C String_t* _stringLiteral350D3BF828268FA677A331CBD1D40C9DB88673B3;
IL2CPP_EXTERN_C String_t* _stringLiteral3C3D97D6F00F5718D7008966DC8F93F9BB87FA51;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3A00B527F2755AFFF36C8F4AC13A53B5DC81D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EAEDD29399C149223964BD7513C036E82B631;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5BBD622A1890626F72D09F11351B02F04CD245;
IL2CPP_EXTERN_C String_t* _stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral46AC1D8C432B177A3C113AD943EB74504A0EB337;
IL2CPP_EXTERN_C String_t* _stringLiteral4718C7000562AF450B2C8B2BD4445A87205F7666;
IL2CPP_EXTERN_C String_t* _stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral62F0048B45A8ADBC774F1B00911C9AA337E1F633;
IL2CPP_EXTERN_C String_t* _stringLiteral6458183EA8D5BC1AAE58A98C841058647CCC35DE;
IL2CPP_EXTERN_C String_t* _stringLiteral70E962167414B98D1C47009CF2298022592E68D4;
IL2CPP_EXTERN_C String_t* _stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293;
IL2CPP_EXTERN_C String_t* _stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008;
IL2CPP_EXTERN_C String_t* _stringLiteral7AADBCDB9D121BC9D88064E31E08A3186262CAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF39B884F9764078345103493B55121123B1B46;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A;
IL2CPP_EXTERN_C String_t* _stringLiteral837B17505EC06BAC0E4AA984798E9DB32B9C3CA0;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral877F6F7B61373508B1123D79708B393A9438C37E;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1E874DA059D22C91283C44117D602D9080875A;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA1FF57F726441CA277BF9734892B299CA3297B;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA314507B0573B983FD845620D28E0B2F951D0E10;
IL2CPP_EXTERN_C String_t* _stringLiteralA3955ADB3BC69ECFE423744D4F4F597294A20827;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D3437438DB8A85C804DDB64E69721F1D275030;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB468B2E60F7F60260C2916459A799050DD6D3E85;
IL2CPP_EXTERN_C String_t* _stringLiteralB8AA8F2673947FA36BB764D4DD75961AB3AF723E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E1418EB9CE2E5CF97CF8246D2776B9F1F33D67;
IL2CPP_EXTERN_C String_t* _stringLiteralBA6BD45D12B4E9306BD7E0CC99FEC1DEEBFBBC58;
IL2CPP_EXTERN_C String_t* _stringLiteralBD26781B489D74246E46948A3CF454478F1000C5;
IL2CPP_EXTERN_C String_t* _stringLiteralC581158E993200B82B36A56301468170ADB021DA;
IL2CPP_EXTERN_C String_t* _stringLiteralD91C866DD696C68303515E6926044A10A2ADAB3C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA1945CFAADC613DE5170FD5C21296CCFF83615;
IL2CPP_EXTERN_C String_t* _stringLiteralE18A20FF89E2801DE5C0C60E05D569C3513C48C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3EADA58476D85227490ACED9D3239769769DFDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B9F94C0B0B71996D09AA98D20E270C100EAB93;
IL2CPP_EXTERN_C String_t* _stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF;
IL2CPP_EXTERN_C String_t* _stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783;
IL2CPP_EXTERN_C String_t* _stringLiteralF25B95468DAA02EC9AF41A21C2F589D8847BC27F;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1435556F32329DD212289449459CCFA67730F8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDD8A87D2680C370A2DBC4AFECE658B948EEA1202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5F2CE464F67F4BDC4EB96CB769755BC675F66B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5423F5CE10F5EA6145EECF26BE0F452A301D2B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m60C46D4985DD498C33D75B842121DD35929CF75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t LayoutCache_ResetCursor_m3F4674618BC17F76EB3CCF67AD3A10C43E46EB0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LayoutCache__ctor_m4BA1E6214FB7EEA6668E787F83231AD51911631B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_ClampTextIndex_m7848BDECC588F52DE17768F3CE2DF23E7A728DC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_DrawCursor_mD628D96A54F61FF7F96EDD357C8D669FDD26F5AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_HandleKeyEvent_mA953F9277140AD596AEB563FCC189E9974B1B14A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_InitKeyActions_m1073E6D1966025612EFAD14D6C17E590EA95359A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_IsValidCodePointIndex_mB0A21AB9662958E103DF439F8433D27796B46AF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_MoveCursorToPosition_Internal_m78070B113CA2AF5F9283EA1200BE889336AAB442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_OnLostFocus_m2E8FBC8864AA1B1EE5A56C13458618BE0EFFB783_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_Paste_m734B97FD4F98ADE4815DDE92A530EBB01F0D4781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_PerformOperation_mC8D7C480A86101BE510AB2ED83107110259C7821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_ReplaceNewlinesWithSpaces_mBFCCCAF5052A1435C1BCD13D7297D8E39BBE748E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_SelectToPosition_m41B423EAFC6268CC1C3A32489B71A41F953C10C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_set_position_m021494940550A18AF6D726639F58E60528813EE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextEditor_set_text_mD9129625FFD2F23A4A1F40C2D8BB09F516C9356F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowFunction_BeginInvoke_m9F57C6EAE29A60C2D896F2FC784280ECE8AAFBCA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

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


// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor_TextEditOp>
struct  Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1B313EFD3570E30ADA79C6D1DEC34BBD05AB8724* ___entries_1;
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
	KeyCollection_t0B43DD6FA8A518E7BFEE3AA145DA9035733C1862 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4B4EA3861649863FBECADA2F20EFF81E8164EAED * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___entries_1)); }
	inline EntryU5BU5D_t1B313EFD3570E30ADA79C6D1DEC34BBD05AB8724* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1B313EFD3570E30ADA79C6D1DEC34BBD05AB8724** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1B313EFD3570E30ADA79C6D1DEC34BBD05AB8724* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___keys_7)); }
	inline KeyCollection_t0B43DD6FA8A518E7BFEE3AA145DA9035733C1862 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0B43DD6FA8A518E7BFEE3AA145DA9035733C1862 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0B43DD6FA8A518E7BFEE3AA145DA9035733C1862 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ___values_8)); }
	inline ValueCollection_t4B4EA3861649863FBECADA2F20EFF81E8164EAED * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4B4EA3861649863FBECADA2F20EFF81E8164EAED ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4B4EA3861649863FBECADA2F20EFF81E8164EAED * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Stack
struct  Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
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

// UnityEngine.GUIContent
struct  GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayoutUtility_LayoutCache
struct  LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.GUILayoutUtility_LayoutCache::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility_LayoutCache::topLevel
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility_LayoutCache::layoutGroups
	GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility_LayoutCache::windows
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___windows_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_topLevel_1() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___topLevel_1)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_topLevel_1() const { return ___topLevel_1; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_topLevel_1() { return &___topLevel_1; }
	inline void set_topLevel_1(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___topLevel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topLevel_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutGroups_2() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___layoutGroups_2)); }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * get_layoutGroups_2() const { return ___layoutGroups_2; }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C ** get_address_of_layoutGroups_2() { return &___layoutGroups_2; }
	inline void set_layoutGroups_2(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * value)
	{
		___layoutGroups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutGroups_2), (void*)value);
	}

	inline static int32_t get_offset_of_windows_3() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___windows_3)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_windows_3() const { return ___windows_3; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_windows_3() { return &___windows_3; }
	inline void set_windows_3(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___windows_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windows_3), (void*)value);
	}
};


// UnityEngine.SliderState
struct  SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngineInternal.GenericStack
struct  GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C  : public Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Event
struct  Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventType
struct  EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_Style_8;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___rect_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rect_4() const { return ___rect_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_consideredForMargin_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___consideredForMargin_7)); }
	inline bool get_consideredForMargin_7() const { return ___consideredForMargin_7; }
	inline bool* get_address_of_consideredForMargin_7() { return &___consideredForMargin_7; }
	inline void set_consideredForMargin_7(bool value)
	{
		___consideredForMargin_7 = value;
	}

	inline static int32_t get_offset_of_m_Style_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___m_Style_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_Style_8() const { return ___m_Style_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_Style_8() { return &___m_Style_8; }
	inline void set_m_Style_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_Style_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_8), (void*)value);
	}
};

struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;

public:
	inline static int32_t get_offset_of_kDummyRect_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___kDummyRect_9)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_kDummyRect_9() const { return ___kDummyRect_9; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_kDummyRect_9() { return &___kDummyRect_9; }
	inline void set_kDummyRect_9(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___kDummyRect_9 = value;
	}

	inline static int32_t get_offset_of_indent_10() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___indent_10)); }
	inline int32_t get_indent_10() const { return ___indent_10; }
	inline int32_t* get_address_of_indent_10() { return &___indent_10; }
	inline void set_indent_10(int32_t value)
	{
		___indent_10 = value;
	}
};


// UnityEngine.GUILayoutOption_Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_tA0F8964A9E51797792B4FCD070B5501858BEFC33 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_tA0F8964A9E51797792B4FCD070B5501858BEFC33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TextEditor_CharacterType
struct  CharacterType_tF584197EB8E510A866DD31B2E88080F1FF8ED5F0 
{
public:
	// System.Int32 UnityEngine.TextEditor_CharacterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterType_tF584197EB8E510A866DD31B2E88080F1FF8ED5F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextEditor_DblClickSnapping
struct  DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD 
{
public:
	// System.Byte UnityEngine.TextEditor_DblClickSnapping::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextEditor_Direction
struct  Direction_t8DFA98D0B9A87CC4CF5554D7550BB125CC5A6918 
{
public:
	// System.Int32 UnityEngine.TextEditor_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t8DFA98D0B9A87CC4CF5554D7550BB125CC5A6918, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextEditor_TextEditOp
struct  TextEditOp_t6C6705A198EA7EFB55340BED1D58F28A1129A4DE 
{
public:
	// System.Int32 UnityEngine.TextEditor_TextEditOp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextEditOp_t6C6705A198EA7EFB55340BED1D58F28A1129A4DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9  : public GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;

public:
	inline static int32_t get_offset_of_entries_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___entries_11)); }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * get_entries_11() const { return ___entries_11; }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA ** get_address_of_entries_11() { return &___entries_11; }
	inline void set_entries_11(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * value)
	{
		___entries_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_11), (void*)value);
	}

	inline static int32_t get_offset_of_isVertical_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isVertical_12)); }
	inline bool get_isVertical_12() const { return ___isVertical_12; }
	inline bool* get_address_of_isVertical_12() { return &___isVertical_12; }
	inline void set_isVertical_12(bool value)
	{
		___isVertical_12 = value;
	}

	inline static int32_t get_offset_of_resetCoords_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___resetCoords_13)); }
	inline bool get_resetCoords_13() const { return ___resetCoords_13; }
	inline bool* get_address_of_resetCoords_13() { return &___resetCoords_13; }
	inline void set_resetCoords_13(bool value)
	{
		___resetCoords_13 = value;
	}

	inline static int32_t get_offset_of_spacing_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___spacing_14)); }
	inline float get_spacing_14() const { return ___spacing_14; }
	inline float* get_address_of_spacing_14() { return &___spacing_14; }
	inline void set_spacing_14(float value)
	{
		___spacing_14 = value;
	}

	inline static int32_t get_offset_of_sameSize_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___sameSize_15)); }
	inline bool get_sameSize_15() const { return ___sameSize_15; }
	inline bool* get_address_of_sameSize_15() { return &___sameSize_15; }
	inline void set_sameSize_15(bool value)
	{
		___sameSize_15 = value;
	}

	inline static int32_t get_offset_of_isWindow_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isWindow_16)); }
	inline bool get_isWindow_16() const { return ___isWindow_16; }
	inline bool* get_address_of_isWindow_16() { return &___isWindow_16; }
	inline void set_isWindow_16(bool value)
	{
		___isWindow_16 = value;
	}

	inline static int32_t get_offset_of_windowID_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___windowID_17)); }
	inline int32_t get_windowID_17() const { return ___windowID_17; }
	inline int32_t* get_address_of_windowID_17() { return &___windowID_17; }
	inline void set_windowID_17(int32_t value)
	{
		___windowID_17 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_Cursor_18)); }
	inline int32_t get_m_Cursor_18() const { return ___m_Cursor_18; }
	inline int32_t* get_address_of_m_Cursor_18() { return &___m_Cursor_18; }
	inline void set_m_Cursor_18(int32_t value)
	{
		___m_Cursor_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountX_19)); }
	inline int32_t get_m_StretchableCountX_19() const { return ___m_StretchableCountX_19; }
	inline int32_t* get_address_of_m_StretchableCountX_19() { return &___m_StretchableCountX_19; }
	inline void set_m_StretchableCountX_19(int32_t value)
	{
		___m_StretchableCountX_19 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountY_20)); }
	inline int32_t get_m_StretchableCountY_20() const { return ___m_StretchableCountY_20; }
	inline int32_t* get_address_of_m_StretchableCountY_20() { return &___m_StretchableCountY_20; }
	inline void set_m_StretchableCountY_20(int32_t value)
	{
		___m_StretchableCountY_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedWidth_21)); }
	inline bool get_m_UserSpecifiedWidth_21() const { return ___m_UserSpecifiedWidth_21; }
	inline bool* get_address_of_m_UserSpecifiedWidth_21() { return &___m_UserSpecifiedWidth_21; }
	inline void set_m_UserSpecifiedWidth_21(bool value)
	{
		___m_UserSpecifiedWidth_21 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedHeight_22)); }
	inline bool get_m_UserSpecifiedHeight_22() const { return ___m_UserSpecifiedHeight_22; }
	inline bool* get_address_of_m_UserSpecifiedHeight_22() { return &___m_UserSpecifiedHeight_22; }
	inline void set_m_UserSpecifiedHeight_22(bool value)
	{
		___m_UserSpecifiedHeight_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinWidth_23)); }
	inline float get_m_ChildMinWidth_23() const { return ___m_ChildMinWidth_23; }
	inline float* get_address_of_m_ChildMinWidth_23() { return &___m_ChildMinWidth_23; }
	inline void set_m_ChildMinWidth_23(float value)
	{
		___m_ChildMinWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxWidth_24)); }
	inline float get_m_ChildMaxWidth_24() const { return ___m_ChildMaxWidth_24; }
	inline float* get_address_of_m_ChildMaxWidth_24() { return &___m_ChildMaxWidth_24; }
	inline void set_m_ChildMaxWidth_24(float value)
	{
		___m_ChildMaxWidth_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinHeight_25)); }
	inline float get_m_ChildMinHeight_25() const { return ___m_ChildMinHeight_25; }
	inline float* get_address_of_m_ChildMinHeight_25() { return &___m_ChildMinHeight_25; }
	inline void set_m_ChildMinHeight_25(float value)
	{
		___m_ChildMinHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxHeight_26)); }
	inline float get_m_ChildMaxHeight_26() const { return ___m_ChildMaxHeight_26; }
	inline float* get_address_of_m_ChildMaxHeight_26() { return &___m_ChildMaxHeight_26; }
	inline void set_m_ChildMaxHeight_26(float value)
	{
		___m_ChildMaxHeight_26 = value;
	}

	inline static int32_t get_offset_of_m_MarginLeft_27() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginLeft_27)); }
	inline int32_t get_m_MarginLeft_27() const { return ___m_MarginLeft_27; }
	inline int32_t* get_address_of_m_MarginLeft_27() { return &___m_MarginLeft_27; }
	inline void set_m_MarginLeft_27(int32_t value)
	{
		___m_MarginLeft_27 = value;
	}

	inline static int32_t get_offset_of_m_MarginRight_28() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginRight_28)); }
	inline int32_t get_m_MarginRight_28() const { return ___m_MarginRight_28; }
	inline int32_t* get_address_of_m_MarginRight_28() { return &___m_MarginRight_28; }
	inline void set_m_MarginRight_28(int32_t value)
	{
		___m_MarginRight_28 = value;
	}

	inline static int32_t get_offset_of_m_MarginTop_29() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginTop_29)); }
	inline int32_t get_m_MarginTop_29() const { return ___m_MarginTop_29; }
	inline int32_t* get_address_of_m_MarginTop_29() { return &___m_MarginTop_29; }
	inline void set_m_MarginTop_29(int32_t value)
	{
		___m_MarginTop_29 = value;
	}

	inline static int32_t get_offset_of_m_MarginBottom_30() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginBottom_30)); }
	inline int32_t get_m_MarginBottom_30() const { return ___m_MarginBottom_30; }
	inline int32_t* get_address_of_m_MarginBottom_30() { return &___m_MarginBottom_30; }
	inline void set_m_MarginBottom_30(int32_t value)
	{
		___m_MarginBottom_30 = value;
	}
};

struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields
{
public:
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * ___none_31;

public:
	inline static int32_t get_offset_of_none_31() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields, ___none_31)); }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * get_none_31() const { return ___none_31; }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE ** get_address_of_none_31() { return &___none_31; }
	inline void set_none_31(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * value)
	{
		___none_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_31), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.TextEditor
struct  TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_6;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollOffset_7;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_Content_8;
	// UnityEngine.Rect UnityEngine.TextEditor::m_Position
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_Position_9;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_10;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_11;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor_DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyboardOnScreen_0), (void*)value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___style_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_2), (void*)value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_m_HasFocus_6() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_HasFocus_6)); }
	inline bool get_m_HasFocus_6() const { return ___m_HasFocus_6; }
	inline bool* get_address_of_m_HasFocus_6() { return &___m_HasFocus_6; }
	inline void set_m_HasFocus_6(bool value)
	{
		___m_HasFocus_6 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_7() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___scrollOffset_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollOffset_7() const { return ___scrollOffset_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollOffset_7() { return &___scrollOffset_7; }
	inline void set_scrollOffset_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_Content_8() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_Content_8)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_Content_8() const { return ___m_Content_8; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_Content_8() { return &___m_Content_8; }
	inline void set_m_Content_8(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_Content_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Position_9() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_Position_9)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_Position_9() const { return ___m_Position_9; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_Position_9() { return &___m_Position_9; }
	inline void set_m_Position_9(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_Position_9 = value;
	}

	inline static int32_t get_offset_of_m_CursorIndex_10() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_CursorIndex_10)); }
	inline int32_t get_m_CursorIndex_10() const { return ___m_CursorIndex_10; }
	inline int32_t* get_address_of_m_CursorIndex_10() { return &___m_CursorIndex_10; }
	inline void set_m_CursorIndex_10(int32_t value)
	{
		___m_CursorIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_11() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_SelectIndex_11)); }
	inline int32_t get_m_SelectIndex_11() const { return ___m_SelectIndex_11; }
	inline int32_t* get_address_of_m_SelectIndex_11() { return &___m_SelectIndex_11; }
	inline void set_m_SelectIndex_11(int32_t value)
	{
		___m_SelectIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_12() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_RevealCursor_12)); }
	inline bool get_m_RevealCursor_12() const { return ___m_RevealCursor_12; }
	inline bool* get_address_of_m_RevealCursor_12() { return &___m_RevealCursor_12; }
	inline void set_m_RevealCursor_12(bool value)
	{
		___m_RevealCursor_12 = value;
	}

	inline static int32_t get_offset_of_graphicalCursorPos_13() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___graphicalCursorPos_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_graphicalCursorPos_13() const { return ___graphicalCursorPos_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_graphicalCursorPos_13() { return &___graphicalCursorPos_13; }
	inline void set_graphicalCursorPos_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___graphicalCursorPos_13 = value;
	}

	inline static int32_t get_offset_of_graphicalSelectCursorPos_14() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___graphicalSelectCursorPos_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_graphicalSelectCursorPos_14() const { return ___graphicalSelectCursorPos_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_graphicalSelectCursorPos_14() { return &___graphicalSelectCursorPos_14; }
	inline void set_graphicalSelectCursorPos_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___graphicalSelectCursorPos_14 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_15() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_MouseDragSelectsWholeWords_15)); }
	inline bool get_m_MouseDragSelectsWholeWords_15() const { return ___m_MouseDragSelectsWholeWords_15; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_15() { return &___m_MouseDragSelectsWholeWords_15; }
	inline void set_m_MouseDragSelectsWholeWords_15(bool value)
	{
		___m_MouseDragSelectsWholeWords_15 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_16() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickInitPos_16)); }
	inline int32_t get_m_DblClickInitPos_16() const { return ___m_DblClickInitPos_16; }
	inline int32_t* get_address_of_m_DblClickInitPos_16() { return &___m_DblClickInitPos_16; }
	inline void set_m_DblClickInitPos_16(int32_t value)
	{
		___m_DblClickInitPos_16 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_17() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickSnap_17)); }
	inline uint8_t get_m_DblClickSnap_17() const { return ___m_DblClickSnap_17; }
	inline uint8_t* get_address_of_m_DblClickSnap_17() { return &___m_DblClickSnap_17; }
	inline void set_m_DblClickSnap_17(uint8_t value)
	{
		___m_DblClickSnap_17 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_18() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_bJustSelected_18)); }
	inline bool get_m_bJustSelected_18() const { return ___m_bJustSelected_18; }
	inline bool* get_address_of_m_bJustSelected_18() { return &___m_bJustSelected_18; }
	inline void set_m_bJustSelected_18(bool value)
	{
		___m_bJustSelected_18 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_19() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_iAltCursorPos_19)); }
	inline int32_t get_m_iAltCursorPos_19() const { return ___m_iAltCursorPos_19; }
	inline int32_t* get_address_of_m_iAltCursorPos_19() { return &___m_iAltCursorPos_19; }
	inline void set_m_iAltCursorPos_19(int32_t value)
	{
		___m_iAltCursorPos_19 = value;
	}

	inline static int32_t get_offset_of_oldText_20() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___oldText_20)); }
	inline String_t* get_oldText_20() const { return ___oldText_20; }
	inline String_t** get_address_of_oldText_20() { return &___oldText_20; }
	inline void set_oldText_20(String_t* value)
	{
		___oldText_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldText_20), (void*)value);
	}

	inline static int32_t get_offset_of_oldPos_21() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___oldPos_21)); }
	inline int32_t get_oldPos_21() const { return ___oldPos_21; }
	inline int32_t* get_address_of_oldPos_21() { return &___oldPos_21; }
	inline void set_oldPos_21(int32_t value)
	{
		___oldPos_21 = value;
	}

	inline static int32_t get_offset_of_oldSelectPos_22() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___oldSelectPos_22)); }
	inline int32_t get_oldSelectPos_22() const { return ___oldSelectPos_22; }
	inline int32_t* get_address_of_oldSelectPos_22() { return &___oldSelectPos_22; }
	inline void set_oldSelectPos_22(int32_t value)
	{
		___oldSelectPos_22 = value;
	}
};

struct TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor_TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * ___s_Keyactions_23;

public:
	inline static int32_t get_offset_of_s_Keyactions_23() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields, ___s_Keyactions_23)); }
	inline Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * get_s_Keyactions_23() const { return ___s_Keyactions_23; }
	inline Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 ** get_address_of_s_Keyactions_23() { return &___s_Keyactions_23; }
	inline void set_s_Keyactions_23(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * value)
	{
		___s_Keyactions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Keyactions_23), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUI_WindowFunction
struct  WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUISkin_SkinChangedDelegate
struct  SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E  : public MulticastDelegate_t
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3D67FD7426AFEB88575E5BFD61BE5EB21665CD69_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mC3E2914537EF15406FA2F725DB20CA60F190F4F6_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m372B8E717F9F74C215C8DD80965211B7F7AF2856_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::EnsureValidCodePointIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t* ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m17C955A4F85F01A7CF0B43EDE41463301E93F6C1 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUIUtility::AlignRectToDevice(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUIUtility_AlignRectToDevice_m5E943EB06F79A20EB45B7E2EB74A4A0399CFAD87 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_UpdateScrollOffset_mF6F74A14D6F9824B19A0D01BC9D0A7583CD2A5F4 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectAll_m5EDB0E8D503B602A6A1AFF213E45766B57702598 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, int32_t ___cursorStringIndex2, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_HandleKeyEvent_mA953F9277140AD596AEB563FCC189E9974B1B14A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___e0, bool ___textIsReadOnly1, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::InitKeyActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_InitKeyActions_m1073E6D1966025612EFAD14D6C17E590EA95359A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mDD8A87D2680C370A2DBC4AFECE658B948EEA1202 (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, const RuntimeMethod*))Dictionary_2_ContainsKey_m3D67FD7426AFEB88575E5BFD61BE5EB21665CD69_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m5423F5CE10F5EA6145EECF26BE0F452A301D2B39 (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, const RuntimeMethod*))Dictionary_2_get_Item_mC3E2914537EF15406FA2F725DB20CA60F190F4F6_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_PerformOperation_mC8D7C480A86101BE510AB2ED83107110259C7821 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___operation0, bool ___textIsReadOnly1, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.String UnityEngine.TextEditor::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfPreviousWord_mDFB854C75C7B3BDB5920E004C1F106500966A8BF (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindStartOfNextWord_m59724B3A53A023031EDC1E852721F58B980ED36C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::NextCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::PreviousCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::ClearCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ReplaceSelection_m13BC53A0C2F3B95346CAA422AB3FAD8E1BA0A44C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, String_t* ___replace0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::DetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DetectFocusChange_mCD7E1E7B23D372E27A21C7A5012786C96EA962A0 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPixelPosition2, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_shift_m7B2926A0EEEBF7D6FEB12B14FCC130A37F5E4697 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveCursorToPosition_Internal(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveCursorToPosition_Internal_m78070B113CA2AF5F9283EA1200BE889336AAB442 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPosition0, bool ___shift1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,UnityEngine.TextEditor/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, int32_t ___dir1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579 (const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindNextSeperator_mBAD0845CFF4A4B87121612F879E6C83B4E7D4CE2 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startPos0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveRight_m634E85509D846218EAD1894FF67F7D9B8A61F9CA (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLeft_m5EF461B1A8E54955FA49CFE44A30B5D56D58D59B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m23E361BAE86A2B42BEEA0F8362E033BACFEDB3FC (String_t* ___s0, int32_t ___index1, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetterOrDigit(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetterOrDigit_mD4066056FDE44A25DBC022E73FED10C34CF642D8 (String_t* ___s0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindPrevSeperator_m559E369D55926E701F6A79644019A2500378754C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startPos0, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordRight_mFBBEA31EB6CD67F063ED3A6F2A343FBDAF08793C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordLeft_m76BE93FFEBB5E8A51EBD5BBCD4313681A2EC5638 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectOffset_Remove_m49C8247D2CBB0080F7A09A37D3F1288403AE1BFB (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GUIUtility::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37 (const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_get_contentOffset_mEDC41FC0FA4CBBF8E271A2F620305D16E7E36A1B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_contentOffset_m2EAB45D5CFBA13DFE580BD6805353BDE59D5A56D (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_Internal_clipOffset_mB7E8F11C269ECEE9F8277150C261E0C0534DEFBF (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIClip::UnclipToWindow(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIClip_UnclipToWindow_m32CAC364845EF5893B53AA6C36E4FB1EF1405E21 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_compositionCursorPos_m895C29DAB9335BC53602E6D05D4FD622C37BFB8D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_DrawWithTextSelection_m6A144949389804F371C359F159C9E7DAA1BEDA9A (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, int32_t ___controlID2, int32_t ___firstSelectedCharacter3, int32_t ___lastSelectedCharacter4, bool ___drawSelectionAsComposition5, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_DrawWithTextSelection_m0366243DD71AB06567B2E2AD777FC6E4585DA95F (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, int32_t ___controlID2, int32_t ___firstSelectedCharacter3, int32_t ___lastSelectedCharacter4, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_DrawCursor_m9E4A7C0BCD7E651B87B809B010DA75D2EE464676 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, int32_t ___controlID2, int32_t ___character3, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveUp_m8FDBC52051A639319A86502D6056BC06BB78E66C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveDown_m240765198B8A686EA80D018E8B71D435E2AFF89B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineStart_mF1B12EFAFA0CAC5F8A2B9F282E20CA3D36850E2E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineEnd_m2DC31831A0D37F75BFA6CBB51FAFAD50CC966AF5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToStartOfNextWord_mA96D839CF3EB07F5CDF19762D5D2E6B9C4BAD36D (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToEndOfPreviousWord_m51C33936E027A823E0F7500F4F1D2F8645823E40 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextStart_mE75FFE843DA63613826F3A90D74FDBA8BB0DAEFC (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextEnd_m25A227643D792D7D14149DBE67161C6A7843B739 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphForward_mD4466D00FDBEF6A3E9171F824531C65B495F3F55 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphBackward_m47BF508866B9B3506FC829E9BCB6461C282AE56F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineStart_m74DA4B4DF3B68653DB4EC655D3092688F4B13506 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineEnd_m577F85B3D593F7A004DE79B595E3357484F04655 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectLeft_m518E7C7EBC18D6219ECC2454C043187986B973B1 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectRight_mC546506FCEC238ACA078ABFF78AF7D2194E42E48 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectUp_m8295F3E145EA8791A259AD4655E2FE8199E53D2E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectDown_mB098A57D287374CA1A522982D54BCAAA2F38C6B7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordRight_mB94EF5DBF2D792E2FD9871312E23B737705E9A16 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordLeft_m9ED17611443EF88F11E5BF1E304ED3E30A5402DB (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToEndOfPreviousWord_mCDC12CEF4FF8461F10C680730E7B98C3DD45CAD2 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToStartOfNextWord_mE7ADBC51D9E0A68D3375612C4193787B661F42A7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextStart_m25834E49ED3D557CEC0ECAA129B0916309C16CB7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextEnd_m32FD60930FB84CD3C013FC067CC3FCB55973DA08 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineStart_m2968C0AE82AAF86E5D19F1B55C830237A171329B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineEnd_m92D7398F2E2B71A363F987FD9977B718B1CFBCDF (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphForward_m1B0F5BFA5639B8E863BE18672FECA9471420FC00 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphBackward_m2C719D95116BCFEACD7ED4D9443B8B067969AE6F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineStart_mB5F111592C097455D485724EA0EA691AF70D5393 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineEnd_mC6B13F73FDBEB9C38B137D894FFEB8DE3438536C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Delete_mA8F15F6B7EE373DBC15A399F9C33A0B078FED6C5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Backspace_m28CC7790088027A79B2F06F4FB3BEB65F40352CC (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Cut_m8C5226EB2736F62C4D1AA2E513878462AF69E233 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Copy_mA09CAF84F8FFBAB60E0E5FE7EC68AAF1C814D11B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::Paste()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Paste_m734B97FD4F98ADE4815DDE92A530EBB01F0D4781 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::SelectNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectNone_m204A64B599049EAF1EA39EA72560DD017E02B5CD (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordBack_mD5B1AA3E2F877EB51D2472C1308B217CA2F54A06 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteLineBack_mD4520B7DDC6E616C2AF04DDFE23A4AC234437DE1 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordForward_m7BB52B567A1BBECD4663DF683FD2B996E58CF040 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_mBB9578BE373E64754DAC9496DC4E2422B9CF438B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___localPosition0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___mContent1, int32_t ___selectIndex2, int32_t ___cursorIndex3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E (const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_ReplaceNewlinesWithSpaces_mBFCCCAF5052A1435C1BCD13D7297D8E39BBE748E (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_KeyboardEvent_mEDF3A001AE1C3D3AC324784C48A835738CF050B2 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m60C46D4985DD498C33D75B842121DD35929CF75E (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m372B8E717F9F74C215C8DD80965211B7F7AF2856_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor()
inline void Dictionary_2__ctor_m5F2CE464F67F4BDC4EB96CB769755BC675F66B18 (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *, const RuntimeMethod*))Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared)(__this, method);
}
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC (String_t* ___key0, int32_t ___action1, const RuntimeMethod* method);
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::get_operatingSystemFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_operatingSystemFamily_m797937E766B7FF87A5F1630263C49B814131DD95 (const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1 (const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::OnLostFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnLostFocus_m2E8FBC8864AA1B1EE5A56C13458618BE0EFFB783 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::OnFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnFocus_mA391FDD8A6F669C33F4F47AA6190DFA7E6C1DDE8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClampTextIndex_m7848BDECC588F52DE17768F3CE2DF23E7A728DC5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t* ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.TextEditor::IsValidCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_IsValidCodePointIndex_mB0A21AB9662958E103DF439F8433D27796B46AF8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsLowSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mDEC9592EC4C2A9524A20FD2C499CFEBDA8D392A2_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SliderState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderState__ctor_m52C1830A6B916BE4BD18799B3934E79665EE3EDE (SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A * __this, const RuntimeMethod* method)
{
	{
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
// System.String UnityEngine.TextEditor::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = __this->get_m_Content_8();
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.TextEditor::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_text_mD9129625FFD2F23A4A1F40C2D8BB09F516C9356F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_set_text_mD9129625FFD2F23A4A1F40C2D8BB09F516C9356F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * G_B1_1 = NULL;
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = __this->get_m_Content_8();
		String_t* L_1 = ___value0;
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_m_CursorIndex_10();
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)L_4, /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_m_SelectIndex_11();
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_m_Position_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_position_m021494940550A18AF6D726639F58E60528813EE8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_set_position_m021494940550A18AF6D726639F58E60528813EE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_m_Position_9();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = ___value0;
		bool L_2 = Rect_op_Equality_m17C955A4F85F01A7CF0B43EDE41463301E93F6C1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0031;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_scrollOffset_7(L_4);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = ___value0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = GUIUtility_AlignRectToDevice_m5E943EB06F79A20EB45B7E2EB74A4A0399CFAD87(L_5, /*hidden argument*/NULL);
		__this->set_m_Position_9(L_6);
		TextEditor_UpdateScrollOffset_mF6F74A14D6F9824B19A0D01BC9D0A7583CD2A5F4(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.TextEditor::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  TextEditor_get_localPosition_m0227C5065DAC9B874867C2C7862F747BABA56659 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_CursorIndex_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_CursorIndex_10();
		V_0 = L_0;
		int32_t L_1 = ___value0;
		__this->set_m_CursorIndex_10(L_1);
		int32_t* L_2 = __this->get_address_of_m_CursorIndex_10();
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_CursorIndex_10();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_m_RevealCursor_12((bool)1);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.TextEditor::OnCursorIndexChange() */, __this);
	}

IL_003c:
	{
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SelectIndex_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_SelectIndex_11();
		V_0 = L_0;
		int32_t L_1 = ___value0;
		__this->set_m_SelectIndex_11(L_1);
		int32_t* L_2 = __this->get_address_of_m_SelectIndex_11();
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_SelectIndex_11();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.TextEditor::OnSelectIndexChange() */, __this);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_m_iAltCursorPos_19((-1));
		return;
	}
}
// System.Void UnityEngine.TextEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_keyboardOnScreen_0((TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E *)NULL);
		__this->set_controlID_1(0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		__this->set_style_2(L_0);
		__this->set_multiline_3((bool)0);
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_isPasswordField_5((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_scrollOffset_7(L_1);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_2, /*hidden argument*/NULL);
		__this->set_m_Content_8(L_2);
		__this->set_m_CursorIndex_10(0);
		__this->set_m_SelectIndex_11(0);
		__this->set_m_RevealCursor_12((bool)0);
		__this->set_m_MouseDragSelectsWholeWords_15((bool)0);
		__this->set_m_DblClickInitPos_16(0);
		__this->set_m_DblClickSnap_17(0);
		__this->set_m_bJustSelected_18((bool)0);
		__this->set_m_iAltCursorPos_19((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnFocus_mA391FDD8A6F669C33F4F47AA6190DFA7E6C1DDE8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_multiline_3();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = 0;
		V_1 = L_2;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_3, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001f:
	{
		TextEditor_SelectAll_m5EDB0E8D503B602A6A1AFF213E45766B57702598(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->set_m_HasFocus_6((bool)1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnLostFocus_m2E8FBC8864AA1B1EE5A56C13458618BE0EFFB783 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_OnLostFocus_m2E8FBC8864AA1B1EE5A56C13458618BE0EFFB783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_HasFocus_6((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_scrollOffset_7(L_0);
		return;
	}
}
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_hasHorizontalCursorPos_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_4 = __this->get_m_Content_8();
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_graphicalCursorPos_13(L_6);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_9 = __this->get_m_Content_8();
		int32_t L_10 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_graphicalSelectCursorPos_14(L_11);
		__this->set_hasHorizontalCursorPos_4((bool)0);
	}

IL_005d:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_HandleKeyEvent_mECE746CCA51866A165A911C6566FEAC06AA9189C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___e0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ___e0;
		bool L_1 = TextEditor_HandleKeyEvent_mA953F9277140AD596AEB563FCC189E9974B1B14A(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_HandleKeyEvent_mA953F9277140AD596AEB563FCC189E9974B1B14A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___e0, bool ___textIsReadOnly1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_HandleKeyEvent_mA953F9277140AD596AEB563FCC189E9974B1B14A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		TextEditor_InitKeyActions_m1073E6D1966025612EFAD14D6C17E590EA95359A(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2 = ___e0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_3, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)-33))), /*hidden argument*/NULL);
		Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * L_5 = ((TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var))->get_s_Keyactions_23();
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_6 = ___e0;
		NullCheck(L_5);
		bool L_7 = Dictionary_2_ContainsKey_mDD8A87D2680C370A2DBC4AFECE658B948EEA1202(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_mDD8A87D2680C370A2DBC4AFECE658B948EEA1202_RuntimeMethod_var);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * L_9 = ((TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var))->get_s_Keyactions_23();
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_10 = ___e0;
		NullCheck(L_9);
		int32_t L_11 = Dictionary_2_get_Item_m5423F5CE10F5EA6145EECF26BE0F452A301D2B39(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m5423F5CE10F5EA6145EECF26BE0F452A301D2B39_RuntimeMethod_var);
		V_2 = L_11;
		int32_t L_12 = V_2;
		bool L_13 = ___textIsReadOnly1;
		TextEditor_PerformOperation_mC8D7C480A86101BE510AB2ED83107110259C7821(__this, L_12, L_13, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_14 = ___e0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_14, L_15, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_005c;
	}

IL_0050:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_16 = ___e0;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Event_set_modifiers_m375A78874878A2BA7822E93CA62579B0E4CA7AA2(L_16, L_17, /*hidden argument*/NULL);
		V_3 = (bool)0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_3;
		return L_18;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteLineBack_mD4520B7DDC6E616C2AF04DDFE23A4AC234437DE1 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_001a:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_0042;
	}

IL_0025:
	{
		String_t* L_4 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_0050;
	}

IL_0042:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_0025;
		}
	}

IL_0050:
	{
		int32_t L_12 = V_1;
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)(-1)))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_0 = 0;
	}

IL_005c:
	{
		int32_t L_14 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_17 = __this->get_m_Content_8();
		String_t* L_18 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		NullCheck(L_18);
		String_t* L_22 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		NullCheck(L_17);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_17, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_8 = L_24;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_8;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_25, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_00a7:
	{
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_00ab:
	{
		bool L_26 = V_3;
		return L_26;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordBack_mD5B1AA3E2F877EB51D2472C1308B217CA2F54A06 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0071;
	}

IL_0017:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_FindEndOfPreviousWord_mDFB854C75C7B3BDB5920E004C1F106500966A8BF(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_7 = __this->get_m_Content_8();
		String_t* L_8 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		int32_t L_10 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_8);
		String_t* L_12 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_8, L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_7, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_4 = L_14;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_4;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_15, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0071;
	}

IL_006d:
	{
		V_2 = (bool)0;
		goto IL_0071;
	}

IL_0071:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordForward_m7BB52B567A1BBECD4663DF683FD2B996E58CF040 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_0017:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_FindStartOfNextWord_m59724B3A53A023031EDC1E852721F58B980ED36C(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_5 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_8 = __this->get_m_Content_8();
		String_t* L_9 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_13 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_9, L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_8, L_13, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_0065:
	{
		V_2 = (bool)0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean UnityEngine.TextEditor::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Delete_mA8F15F6B7EE373DBC15A399F9C33A0B078FED6C5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0067;
	}

IL_0017:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_3 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = __this->get_m_Content_8();
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_9, /*hidden argument*/NULL);
		int32_t L_11 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_12 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_7, L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_6, L_12, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0067;
	}

IL_0063:
	{
		V_1 = (bool)0;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Boolean UnityEngine.TextEditor::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Backspace_m28CC7790088027A79B2F06F4FB3BEB65F40352CC (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0017:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = __this->get_m_Content_8();
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		NullCheck(L_7);
		String_t* L_11 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_7, L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)), /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_6, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		V_4 = L_13;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_14, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0071:
	{
		V_1 = (bool)0;
		goto IL_0075;
	}

IL_0075:
	{
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectAll_m5EDB0E8D503B602A6A1AFF213E45766B57702598 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, 0, /*hidden argument*/NULL);
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_1, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectNone_m204A64B599049EAF1EA39EA72560DD017E02B5CD (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_0, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_get_hasSelection_mB5CEC2D56136DDE95D62226438FA4620E027D41B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00e3;
	}

IL_001a:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = __this->get_m_Content_8();
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_7, 0, L_8, /*hidden argument*/NULL);
		String_t* L_10 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_11 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		String_t* L_12 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_15 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_10, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, L_15, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_6, L_16, /*hidden argument*/NULL);
		int32_t L_17 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_17, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0083:
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_18 = __this->get_m_Content_8();
		String_t* L_19 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_20 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_21 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, 0, L_20, /*hidden argument*/NULL);
		String_t* L_22 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_23 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_24 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		int32_t L_26 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_27 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_22, L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)), /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, L_27, /*hidden argument*/NULL);
		NullCheck(L_18);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_18, L_28, /*hidden argument*/NULL);
		int32_t L_29 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_29, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_00e3;
	}

IL_00e3:
	{
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ReplaceSelection_m13BC53A0C2F3B95346CAA422AB3FAD8E1BA0A44C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, String_t* ___replace0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = __this->get_m_Content_8();
		String_t* L_1 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___replace0;
		NullCheck(L_1);
		String_t* L_4 = String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB(L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_0, L_4, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___replace0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		V_0 = L_8;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_9, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::Insert(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Insert_m1C51BAF11E97287F7C78F8A9072A320AD0FD2ECE (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___c0), /*hidden argument*/NULL);
		TextEditor_ReplaceSelection_m13BC53A0C2F3B95346CAA422AB3FAD8E1BA0A44C(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveRight_m634E85509D846218EAD1894FF67F7D9B8A61F9CA (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_3, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
		TextEditor_DetectFocusChange_mCD7E1E7B23D372E27A21C7A5012786C96EA962A0(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_0045:
	{
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_9 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0067:
	{
		int32_t L_10 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_10, /*hidden argument*/NULL);
	}

IL_0074:
	{
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLeft_m5EF461B1A8E54955FA49CFE44A30B5D56D58D59B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_3, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0037:
	{
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_9, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0059:
	{
		int32_t L_10 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_10, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveUp_m8FDBC52051A639319A86502D6056BC06BB78E66C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_3, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_4 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_graphicalCursorPos_13();
		float* L_6 = L_5->get_address_of_y_1();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_subtract((float)L_8, (float)(1.0f)));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_11 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = __this->get_graphicalCursorPos_13();
		NullCheck(L_9);
		int32_t L_13 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		V_1 = L_14;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_15, /*hidden argument*/NULL);
		int32_t L_16 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveDown_m240765198B8A686EA80D018E8B71D435E2AFF89B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_3, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_4 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_graphicalCursorPos_13();
		float* L_6 = L_5->get_address_of_y_1();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = __this->get_style_2();
		NullCheck(L_9);
		float L_10 = GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71(L_9, /*hidden argument*/NULL);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_add((float)L_10, (float)(5.0f)))));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_13 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_graphicalCursorPos_13();
		NullCheck(L_11);
		int32_t L_15 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		V_1 = L_16;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_17, /*hidden argument*/NULL);
		int32_t L_18 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_19 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_19, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineStart_mF1B12EFAFA0CAC5F8A2B9F282E20CA3D36850E2E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0017:
	{
		int32_t L_3 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_004d;
	}

IL_0022:
	{
		String_t* L_5 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_3 = L_10;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_3;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_11, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_15 = 0;
		V_3 = L_15;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_3;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_16, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineEnd_m2DC31831A0D37F75BFA6CBB51FAFAD50CC966AF5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0017:
	{
		int32_t L_3 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		String_t* L_5 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_005f;
	}

IL_002e:
	{
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_4 = L_12;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_4;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_13, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_005a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		V_4 = L_19;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_4;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_20, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineStart_m74DA4B4DF3B68653DB4EC655D3092688F4B13506 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_2 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_2 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_3 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		G_B1_2 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			G_B2_2 = __this;
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		V_0 = L_5;
		NullCheck(G_B3_2);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(G_B3_2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_3);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineEnd_m577F85B3D593F7A004DE79B595E3357484F04655 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_2 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_2 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_3 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		G_B1_2 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			G_B2_2 = __this;
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		V_0 = L_5;
		NullCheck(G_B3_2);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(G_B3_2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_3);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextStart_mE75FFE843DA63613826F3A90D74FDBA8BB0DAEFC (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextEnd_m25A227643D792D7D14149DBE67161C6A7843B739 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		V_0 = L_2;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___startIndex0;
		NullCheck(L_0);
		int32_t L_2 = String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB(L_0, ((int32_t)10), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0022;
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0022:
	{
		V_1 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphForward_mD4466D00FDBEF6A3E9171F824531C65B495F3F55 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_5 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		V_1 = L_10;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_11, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphBackward_m47BF508866B9B3506FC829E9BCB6461C282AE56F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_8 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_6, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)2)), /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		V_1 = L_9;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_10, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005d:
	{
		int32_t L_11 = 0;
		V_1 = L_11;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_12, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveCursorToPosition_m2AD0E35FE4C8882F0B704DFF22AB3474340CAD1F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPosition0, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___cursorPosition0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_1 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Event_get_shift_m7B2926A0EEEBF7D6FEB12B14FCC130A37F5E4697(L_1, /*hidden argument*/NULL);
		TextEditor_MoveCursorToPosition_Internal_m78070B113CA2AF5F9283EA1200BE889336AAB442(__this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveCursorToPosition_Internal(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveCursorToPosition_Internal_m78070B113CA2AF5F9283EA1200BE889336AAB442 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPosition0, bool ___shift1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_MoveCursorToPosition_Internal_m78070B113CA2AF5F9283EA1200BE889336AAB442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___cursorPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_scrollOffset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_6 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_0, L_1, L_2, L_5, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ___shift1;
		V_0 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		TextEditor_DetectFocusChange_mCD7E1E7B23D372E27A21C7A5012786C96EA962A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToPosition_m41B423EAFC6268CC1C3A32489B71A41F953C10C0 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_SelectToPosition_m41B423EAFC6268CC1C3A32489B71A41F953C10C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		bool L_0 = __this->get_m_MouseDragSelectsWholeWords_15();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_4 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___cursorPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_scrollOffset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_8 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_2, L_3, L_4, L_7, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_8, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_003d:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_11 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___cursorPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = __this->get_scrollOffset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_15 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_9, L_10, L_11, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t* L_16 = __this->get_address_of_m_DblClickInitPos_16();
		TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662(__this, (int32_t*)L_16, /*hidden argument*/NULL);
		uint8_t L_17 = __this->get_m_DblClickSnap_17();
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->get_m_DblClickInitPos_16();
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_22, 1, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_23, /*hidden argument*/NULL);
		int32_t L_24 = __this->get_m_DblClickInitPos_16();
		int32_t L_25 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_24, 0, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_25, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00ba:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_26, 0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_27, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_m_DblClickInitPos_16();
		int32_t L_29 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_28, 1, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_29, /*hidden argument*/NULL);
	}

IL_00df:
	{
		goto IL_01b7;
	}

IL_00e5:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = __this->get_m_DblClickInitPos_16();
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_33 = V_1;
		V_5 = (bool)((((int32_t)L_33) > ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0121;
		}
	}
	{
		String_t* L_35 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_37 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_38 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_35, ((int32_t)10), L_37, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0121:
	{
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, 0, /*hidden argument*/NULL);
	}

IL_0129:
	{
		String_t* L_39 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		String_t* L_40 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_40, /*hidden argument*/NULL);
		int32_t L_42 = __this->get_m_DblClickInitPos_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_43 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_44 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_39, ((int32_t)10), L_43, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_44, /*hidden argument*/NULL);
		goto IL_01b6;
	}

IL_0158:
	{
		int32_t L_45 = V_1;
		String_t* L_46 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_46, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_45) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9(__this, L_49, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_50, /*hidden argument*/NULL);
		goto IL_0191;
	}

IL_017f:
	{
		String_t* L_51 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		int32_t L_52 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_51, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_52, /*hidden argument*/NULL);
	}

IL_0191:
	{
		String_t* L_53 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_54 = __this->get_m_DblClickInitPos_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_55 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_53);
		int32_t L_56 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_53, ((int32_t)10), L_55, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_01b6:
	{
	}

IL_01b7:
	{
	}

IL_01b8:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectLeft_m518E7C7EBC18D6219ECC2454C043187986B973B1 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->get_m_bJustSelected_18();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		__this->set_m_bJustSelected_18((bool)0);
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_8, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectRight_mC546506FCEC238ACA078ABFF78AF7D2194E42E48 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->get_m_bJustSelected_18();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		__this->set_m_bJustSelected_18((bool)0);
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_8, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectUp_m8295F3E145EA8791A259AD4655E2FE8199E53D2E (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_graphicalCursorPos_13();
		float* L_1 = L_0->get_address_of_y_1();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)(1.0f)));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_graphicalCursorPos_13();
		NullCheck(L_4);
		int32_t L_8 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectDown_mB098A57D287374CA1A522982D54BCAAA2F38C6B7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_GrabGraphicalCursorPos_m8B726D6524D664B81CC8D4EC0D11FFB51BDD236E(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_graphicalCursorPos_13();
		float* L_1 = L_0->get_address_of_y_1();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = __this->get_style_2();
		NullCheck(L_4);
		float L_5 = GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71(L_4, /*hidden argument*/NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_add((float)L_5, (float)(5.0f)))));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_8 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = __this->get_graphicalCursorPos_13();
		NullCheck(L_6);
		int32_t L_10 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextEnd_m32FD60930FB84CD3C013FC067CC3FCB55973DA08 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextStart_m25834E49ED3D557CEC0ECAA129B0916309C16CB7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MouseDragSelectsWholeWords_mE41D476CBDC08386C8ED86C7AC842926A49B467C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, bool ___on0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___on0;
		__this->set_m_MouseDragSelectsWholeWords_15(L_0);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		__this->set_m_DblClickInitPos_16(L_1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor_DblClickSnapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DblClickSnap_m5F79C658807D2E9C906FF0B5D3BD6907D381CAA1 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, uint8_t ___snapping0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___snapping0;
		__this->set_m_DblClickSnap_17(L_0);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = __this->get_m_Content_8();
		int32_t L_3 = ___p0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float* L_5 = (&V_0)->get_address_of_y_1();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)(1.0f)/(float)L_8))));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		V_1 = L_9;
		float L_10 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_10);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_13 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		NullCheck(L_11);
		int32_t L_15 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = __this->get_m_Content_8();
		int32_t L_3 = ___p0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float* L_5 = (&V_0)->get_address_of_y_1();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)(1.0f)/(float)L_8))));
		float* L_9 = (&V_0)->get_address_of_x_0();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add((float)L_11, (float)(5000.0f)));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_14 = __this->get_m_Content_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		NullCheck(L_12);
		int32_t L_16 = GUIStyle_GetCursorStringIndex_mE2F7B7942106C1BE3CC846F13ECA7C1BFEE6FDAF(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_005b;
	}

IL_005b:
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindNextSeperator_mBAD0845CFF4A4B87121612F879E6C83B4E7D4CE2 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startPos0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_000f:
	{
		int32_t L_2 = ___startPos0;
		int32_t L_3 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_2, /*hidden argument*/NULL);
		___startPos0 = L_3;
	}

IL_0018:
	{
		int32_t L_4 = ___startPos0;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___startPos0;
		int32_t L_7 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0038;
	}

IL_002f:
	{
		int32_t L_9 = ___startPos0;
		int32_t L_10 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_9, /*hidden argument*/NULL);
		___startPos0 = L_10;
	}

IL_0038:
	{
		int32_t L_11 = ___startPos0;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_13 = ___startPos0;
		int32_t L_14 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_13, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B11_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B11_0;
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = ___startPos0;
		V_3 = L_16;
		goto IL_0051;
	}

IL_0051:
	{
		int32_t L_17 = V_3;
		return L_17;
	}
}
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindPrevSeperator_m559E369D55926E701F6A79644019A2500378754C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___startPos0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = ___startPos0;
		int32_t L_1 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_0, /*hidden argument*/NULL);
		___startPos0 = L_1;
		goto IL_0015;
	}

IL_000c:
	{
		int32_t L_2 = ___startPos0;
		int32_t L_3 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_2, /*hidden argument*/NULL);
		___startPos0 = L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___startPos0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = ___startPos0;
		int32_t L_6 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_5, /*hidden argument*/NULL);
		G_B5_0 = ((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B5_0;
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___startPos0;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		goto IL_0041;
	}

IL_0038:
	{
		int32_t L_10 = ___startPos0;
		int32_t L_11 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_10, /*hidden argument*/NULL);
		___startPos0 = L_11;
	}

IL_0041:
	{
		int32_t L_12 = ___startPos0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = ___startPos0;
		int32_t L_14 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_13, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B13_0 = 0;
	}

IL_0052:
	{
		V_3 = (bool)G_B13_0;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = ___startPos0;
		int32_t L_17 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_16, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_19 = ___startPos0;
		V_2 = L_19;
		goto IL_0074;
	}

IL_006a:
	{
		int32_t L_20 = ___startPos0;
		int32_t L_21 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		goto IL_0074;
	}

IL_0074:
	{
		int32_t L_22 = V_2;
		return L_22;
	}
}
// System.Void UnityEngine.TextEditor::MoveWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordRight_mFBBEA31EB6CD67F063ED3A6F2A343FBDAF08793C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_FindNextSeperator_mBAD0845CFF4A4B87121612F879E6C83B4E7D4CE2(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		V_0 = L_6;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_7, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToStartOfNextWord_mA96D839CF3EB07F5CDF19762D5D2E6B9C4BAD36D (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_MoveRight_m634E85509D846218EAD1894FF67F7D9B8A61F9CA(__this, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_0027:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_FindStartOfNextWord_m59724B3A53A023031EDC1E852721F58B980ED36C(__this, L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		V_1 = L_5;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_6, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToEndOfPreviousWord_m51C33936E027A823E0F7500F4F1D2F8645823E40 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_MoveLeft_m5EF461B1A8E54955FA49CFE44A30B5D56D58D59B(__this, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_0027:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_FindEndOfPreviousWord_mDFB854C75C7B3BDB5920E004C1F106500966A8BF(__this, L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		V_1 = L_5;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_6, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToStartOfNextWord_mE7ADBC51D9E0A68D3375612C4193787B661F42A7 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_FindStartOfNextWord_m59724B3A53A023031EDC1E852721F58B980ED36C(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToEndOfPreviousWord_mCDC12CEF4FF8461F10C680730E7B98C3DD45CAD2 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_FindEndOfPreviousWord_mDFB854C75C7B3BDB5920E004C1F106500966A8BF(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TextEditor_CharacterType UnityEngine.TextEditor::ClassifyChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_2 = Char_IsWhiteSpace_m23E361BAE86A2B42BEEA0F8362E033BACFEDB3FC(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = 3;
		goto IL_0042;
	}

IL_0015:
	{
		String_t* L_4 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_5 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsLetterOrDigit_mD4066056FDE44A25DBC022E73FED10C34CF642D8(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)39)))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 1;
	}

IL_0036:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_003e:
	{
		V_1 = 1;
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindStartOfNextWord_m59724B3A53A023031EDC1E852721F58B980ED36C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___p0;
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = ___p0;
		V_3 = L_5;
		goto IL_0111;
	}

IL_001c:
	{
		int32_t L_6 = ___p0;
		int32_t L_7 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = ___p0;
		int32_t L_11 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_10, /*hidden argument*/NULL);
		___p0 = L_11;
		goto IL_0046;
	}

IL_003d:
	{
		int32_t L_12 = ___p0;
		int32_t L_13 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_12, /*hidden argument*/NULL);
		___p0 = L_13;
	}

IL_0046:
	{
		int32_t L_14 = ___p0;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_16 = ___p0;
		int32_t L_17 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_5 = (bool)G_B8_0;
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0095;
	}

IL_0060:
	{
		String_t* L_20 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_21 = ___p0;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)9))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_23 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_24 = ___p0;
		NullCheck(L_23);
		Il2CppChar L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, L_24, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B13_0 = 1;
	}

IL_0084:
	{
		V_6 = (bool)G_B13_0;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_27 = ___p0;
		int32_t L_28 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		goto IL_0111;
	}

IL_0094:
	{
	}

IL_0095:
	{
		int32_t L_29 = ___p0;
		int32_t L_30 = V_0;
		V_7 = (bool)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___p0;
		V_3 = L_32;
		goto IL_0111;
	}

IL_00a3:
	{
		String_t* L_33 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_34 = ___p0;
		NullCheck(L_33);
		Il2CppChar L_35 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_33, L_34, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_35) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_00df;
		}
	}
	{
		goto IL_00c5;
	}

IL_00bc:
	{
		int32_t L_37 = ___p0;
		int32_t L_38 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_37, /*hidden argument*/NULL);
		___p0 = L_38;
	}

IL_00c5:
	{
		int32_t L_39 = ___p0;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)L_40)))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_41 = ___p0;
		int32_t L_42 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_41, /*hidden argument*/NULL);
		G_B24_0 = ((((int32_t)L_42) == ((int32_t)3))? 1 : 0);
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B24_0 = 0;
	}

IL_00d6:
	{
		V_9 = (bool)G_B24_0;
		bool L_43 = V_9;
		if (L_43)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_010d;
	}

IL_00df:
	{
		String_t* L_44 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_45 = ___p0;
		NullCheck(L_44);
		Il2CppChar L_46 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_44, L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) == ((int32_t)((int32_t)9))))
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_47 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_48 = ___p0;
		NullCheck(L_47);
		Il2CppChar L_49 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_47, L_48, /*hidden argument*/NULL);
		G_B29_0 = ((((int32_t)L_49) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0102;
	}

IL_0101:
	{
		G_B29_0 = 1;
	}

IL_0102:
	{
		V_10 = (bool)G_B29_0;
		bool L_50 = V_10;
		if (!L_50)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_51 = ___p0;
		V_3 = L_51;
		goto IL_0111;
	}

IL_010d:
	{
		int32_t L_52 = ___p0;
		V_3 = L_52;
		goto IL_0111;
	}

IL_0111:
	{
		int32_t L_53 = V_3;
		return L_53;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfPreviousWord_mDFB854C75C7B3BDB5920E004C1F106500966A8BF (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___p0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___p0;
		V_2 = L_2;
		goto IL_007f;
	}

IL_000d:
	{
		int32_t L_3 = ___p0;
		int32_t L_4 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_3, /*hidden argument*/NULL);
		___p0 = L_4;
		goto IL_0021;
	}

IL_0018:
	{
		int32_t L_5 = ___p0;
		int32_t L_6 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_5, /*hidden argument*/NULL);
		___p0 = L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___p0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_9 = ___p0;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)((int32_t)32)))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_12 = ___p0;
		int32_t L_13 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_005d;
	}

IL_0054:
	{
		int32_t L_16 = ___p0;
		int32_t L_17 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_16, /*hidden argument*/NULL);
		___p0 = L_17;
	}

IL_005d:
	{
		int32_t L_18 = ___p0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_19 = ___p0;
		int32_t L_20 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_19, /*hidden argument*/NULL);
		int32_t L_21 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B14_0 = 0;
	}

IL_0074:
	{
		V_5 = (bool)G_B14_0;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0054;
		}
	}
	{
	}

IL_007b:
	{
		int32_t L_24 = ___p0;
		V_2 = L_24;
		goto IL_007f;
	}

IL_007f:
	{
		int32_t L_25 = V_2;
		return L_25;
	}
}
// System.Void UnityEngine.TextEditor::MoveWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordLeft_m76BE93FFEBB5E8A51EBD5BBCD4313681A2EC5638 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_1 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_FindPrevSeperator_m559E369D55926E701F6A79644019A2500378754C(__this, L_4, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordRight_mB94EF5DBF2D792E2FD9871312E23B737705E9A16 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B4_1 = NULL;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_4, /*hidden argument*/NULL);
		TextEditor_MoveWordRight_mFBBEA31EB6CD67F063ED3A6F2A343FBDAF08793C(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			G_B3_0 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_005b;
	}

IL_0055:
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_005b:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0063:
	{
		int32_t L_10 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_10, /*hidden argument*/NULL);
		TextEditor_MoveWordRight_mFBBEA31EB6CD67F063ED3A6F2A343FBDAF08793C(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_11, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordLeft_m9ED17611443EF88F11E5BF1E304ED3E30A5402DB (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B3_0 = NULL;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * G_B4_1 = NULL;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_4, /*hidden argument*/NULL);
		TextEditor_MoveWordLeft_m76BE93FFEBB5E8A51EBD5BBCD4313681A2EC5638(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			G_B3_0 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_005b;
	}

IL_0055:
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_005b:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0063:
	{
		int32_t L_10 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_10, /*hidden argument*/NULL);
		TextEditor_MoveWordLeft_m76BE93FFEBB5E8A51EBD5BBCD4313681A2EC5638(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_11, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineStart_m2968C0AE82AAF86E5D19F1B55C830237A171329B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9(__this, L_3, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_002f:
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9(__this, L_6, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineEnd_m92D7398F2E2B71A363F987FD9977B718B1CFBCDF (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6(__this, L_3, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_4, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_002f:
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6(__this, L_6, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineStart_mB5F111592C097455D485724EA0EA691AF70D5393 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_GetGraphicalLineStart_mEB3ECC40041B7A3A914DAD4F760C22E58ABAFDA9(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineEnd_mC6B13F73FDBEB9C38B137D894FFEB8DE3438536C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_GetGraphicalLineEnd_mD8BFB1EA8BA9BE75DA35E35706955BFF96FFE7F6(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphForward_m1B0F5BFA5639B8E863BE18672FECA9471420FC00 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_3 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_6 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 0;
	}

IL_0058:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphBackward_m2C719D95116BCFEACD7ED4D9443B8B067969AE6F (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_4 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_4, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2)), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_8 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 0;
	}

IL_0057:
	{
		V_2 = (bool)G_B4_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_11 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_11, /*hidden argument*/NULL);
	}

IL_0068:
	{
		goto IL_007d;
	}

IL_006b:
	{
		int32_t L_12 = 0;
		V_3 = L_12;
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_13, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectCurrentWord_m40BF5B28CF563523AAD378239C21B0E08BC582BE (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_4, 1, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_6, 0, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_7, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_8, 0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		int32_t L_11 = TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89(__this, L_10, 1, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, L_11, /*hidden argument*/NULL);
	}

IL_005c:
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		__this->set_m_bJustSelected_18((bool)1);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,UnityEngine.TextEditor_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfClassification_m2AA481A32EF0E114DE95EEF846E73FD99964CA89 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___p0, int32_t ___dir1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_2 = 0;
		goto IL_00d0;
	}

IL_001a:
	{
		int32_t L_3 = ___p0;
		String_t* L_4 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___p0;
		int32_t L_8 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_7, /*hidden argument*/NULL);
		___p0 = L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___p0;
		int32_t L_10 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_003d:
	{
		int32_t L_11 = ___dir1;
		V_4 = L_11;
		int32_t L_12 = V_4;
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0047;
	}

IL_0047:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_00a7;
	}

IL_004e:
	{
		int32_t L_14 = ___p0;
		int32_t L_15 = TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C(__this, L_14, /*hidden argument*/NULL);
		___p0 = L_15;
		int32_t L_16 = ___p0;
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_18 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, 0, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_20 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, 0, /*hidden argument*/NULL);
		G_B13_0 = L_20;
		goto IL_0075;
	}

IL_0074:
	{
		G_B13_0 = 0;
	}

IL_0075:
	{
		V_2 = G_B13_0;
		goto IL_00d0;
	}

IL_0078:
	{
		goto IL_00a7;
	}

IL_007a:
	{
		int32_t L_21 = ___p0;
		int32_t L_22 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_21, /*hidden argument*/NULL);
		___p0 = L_22;
		int32_t L_23 = ___p0;
		String_t* L_24 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00a5;
		}
	}
	{
		String_t* L_27 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_00d0;
	}

IL_00a5:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
		int32_t L_29 = ___p0;
		int32_t L_30 = TextEditor_ClassifyChar_m5F5AFD2489E3219B3005CB047A60F66C733023E3(__this, L_29, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		V_7 = (bool)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_33 = ___dir1;
		V_8 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_35 = ___p0;
		V_2 = L_35;
		goto IL_00d0;
	}

IL_00c6:
	{
		int32_t L_36 = ___p0;
		int32_t L_37 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		goto IL_00d0;
	}

IL_00d0:
	{
		int32_t L_38 = V_2;
		return L_38;
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectCurrentParagraph_m0B1D0D6F86FF6929131027BE649B5060656073F9 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		TextEditor_ClearCursorPos_m76EBF2A64D2E24499FAFA0788CD221C0B24FA0CD(__this, /*hidden argument*/NULL);
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_IndexOfEndOfLine_m4A524577C1989B9404AA7301741AB7F6286CF0A9(__this, L_5, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_mE268E3EB5E125257ACADE44F75DEAE7FAE2CF481(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_7 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_9 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_11 = String_LastIndexOf_m8DB57B87F39952A78925B5BF9BBB49B3EFA28155(L_9, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		TextEditor_set_selectIndex_mEF82F02E958CE673FBC882C6DC1F2C94A1DACC4F(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_UpdateScrollOffsetIfNeeded_mDF549A082D63B9326C05FDB6FF5CF198C25AFAE8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___evt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ___evt0;
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_0018;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2 = ___evt0;
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		TextEditor_UpdateScrollOffset_mF6F74A14D6F9824B19A0D01BC9D0A7583CD2A5F4(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_UpdateScrollOffset_mF6F74A14D6F9824B19A0D01BC9D0A7583CD2A5F4 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B19_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B23_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B22_0 = NULL;
	float G_B24_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B24_1 = NULL;
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		float L_3 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_7 = __this->get_m_Content_8();
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set_graphicalCursorPos_13(L_9);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = __this->get_style_2();
		NullCheck(L_10);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_11 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_10, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13 = RectOffset_Remove_m49C8247D2CBB0080F7A09A37D3F1288403AE1BFB(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_graphicalCursorPos_13();
		V_2 = L_14;
		float* L_15 = (&V_2)->get_address_of_x_0();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_style_2();
		NullCheck(L_18);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_19 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_19, /*hidden argument*/NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_subtract((float)L_17, (float)(((float)((float)L_20)))));
		float* L_21 = (&V_2)->get_address_of_y_1();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_24 = __this->get_style_2();
		NullCheck(L_24);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_25 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_25, /*hidden argument*/NULL);
		*((float*)L_22) = (float)((float)il2cpp_codegen_subtract((float)L_23, (float)(((float)((float)L_26)))));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_27 = __this->get_style_2();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_28 = __this->get_m_Content_8();
		NullCheck(L_27);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_0();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_31 = __this->get_style_2();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_32 = __this->get_m_Content_8();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_33 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_33;
		float L_34 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_31);
		float L_35 = GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9(L_31, L_32, L_34, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), L_30, L_35, /*hidden argument*/NULL);
		float* L_36 = (&V_3)->get_address_of_x_0();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_39 = __this->get_style_2();
		NullCheck(L_39);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_40 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_40, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_42 = __this->get_style_2();
		NullCheck(L_42);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_43 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_43, /*hidden argument*/NULL);
		*((float*)L_37) = (float)((float)il2cpp_codegen_subtract((float)L_38, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_44)))))));
		float* L_45 = (&V_3)->get_address_of_y_1();
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_48 = __this->get_style_2();
		NullCheck(L_48);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_49 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_49, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_51 = __this->get_style_2();
		NullCheck(L_51);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_52 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_52, /*hidden argument*/NULL);
		*((float*)L_46) = (float)((float)il2cpp_codegen_subtract((float)L_47, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_53)))))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54 = V_3;
		float L_55 = L_54.get_x_0();
		float L_56 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_5 = (bool)((((float)L_55) < ((float)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0163;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_58 = __this->get_address_of_scrollOffset_7();
		L_58->set_x_0((0.0f));
		goto IL_01e1;
	}

IL_0163:
	{
		bool L_59 = __this->get_m_RevealCursor_12();
		V_6 = L_59;
		bool L_60 = V_6;
		if (!L_60)
		{
			goto IL_01e1;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = V_2;
		float L_62 = L_61.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_63 = __this->get_address_of_scrollOffset_7();
		float L_64 = L_63->get_x_0();
		float L_65 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_7 = (bool)((((float)((float)il2cpp_codegen_add((float)L_62, (float)(1.0f)))) > ((float)((float)il2cpp_codegen_add((float)L_64, (float)L_65))))? 1 : 0);
		bool L_66 = V_7;
		if (!L_66)
		{
			goto IL_01b6;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_67 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68 = V_2;
		float L_69 = L_68.get_x_0();
		float L_70 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		L_67->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_69, (float)L_70)), (float)(1.0f))));
	}

IL_01b6:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = V_2;
		float L_72 = L_71.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_73 = __this->get_address_of_scrollOffset_7();
		float L_74 = L_73->get_x_0();
		V_8 = (bool)((((float)L_72) < ((float)L_74))? 1 : 0);
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_01e0;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_76 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77 = V_2;
		float L_78 = L_77.get_x_0();
		L_76->set_x_0(L_78);
	}

IL_01e0:
	{
	}

IL_01e1:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79 = V_3;
		float L_80 = L_79.get_y_1();
		float L_81 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_9 = (bool)((((float)L_80) < ((float)L_81))? 1 : 0);
		bool L_82 = V_9;
		if (!L_82)
		{
			goto IL_020d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_83 = __this->get_address_of_scrollOffset_7();
		L_83->set_y_1((0.0f));
		goto IL_0297;
	}

IL_020d:
	{
		bool L_84 = __this->get_m_RevealCursor_12();
		V_10 = L_84;
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_0297;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86 = V_2;
		float L_87 = L_86.get_y_1();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_88 = __this->get_style_2();
		NullCheck(L_88);
		float L_89 = GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71(L_88, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_90 = __this->get_address_of_scrollOffset_7();
		float L_91 = L_90->get_y_1();
		float L_92 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_11 = (bool)((((float)((float)il2cpp_codegen_add((float)L_87, (float)L_89))) > ((float)((float)il2cpp_codegen_add((float)L_91, (float)L_92))))? 1 : 0);
		bool L_93 = V_11;
		if (!L_93)
		{
			goto IL_026c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_94 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_95 = V_2;
		float L_96 = L_95.get_y_1();
		float L_97 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_98 = __this->get_style_2();
		NullCheck(L_98);
		float L_99 = GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71(L_98, /*hidden argument*/NULL);
		L_94->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_96, (float)L_97)), (float)L_99)));
	}

IL_026c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_100 = V_2;
		float L_101 = L_100.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_102 = __this->get_address_of_scrollOffset_7();
		float L_103 = L_102->get_y_1();
		V_12 = (bool)((((float)L_101) < ((float)L_103))? 1 : 0);
		bool L_104 = V_12;
		if (!L_104)
		{
			goto IL_0296;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_105 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_106 = V_2;
		float L_107 = L_106.get_y_1();
		L_105->set_y_1(L_107);
	}

IL_0296:
	{
	}

IL_0297:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_108 = __this->get_address_of_scrollOffset_7();
		float L_109 = L_108->get_y_1();
		if ((!(((float)L_109) > ((float)(0.0f)))))
		{
			goto IL_02c6;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_110 = V_3;
		float L_111 = L_110.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_112 = __this->get_address_of_scrollOffset_7();
		float L_113 = L_112->get_y_1();
		float L_114 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		G_B19_0 = ((((float)((float)il2cpp_codegen_subtract((float)L_111, (float)L_113))) < ((float)L_114))? 1 : 0);
		goto IL_02c7;
	}

IL_02c6:
	{
		G_B19_0 = 0;
	}

IL_02c7:
	{
		V_13 = (bool)G_B19_0;
		bool L_115 = V_13;
		if (!L_115)
		{
			goto IL_02e6;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_116 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_117 = V_3;
		float L_118 = L_117.get_y_1();
		float L_119 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		L_116->set_y_1(((float)il2cpp_codegen_subtract((float)L_118, (float)L_119)));
	}

IL_02e6:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_120 = __this->get_address_of_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_121 = __this->get_address_of_scrollOffset_7();
		float L_122 = L_121->get_y_1();
		G_B22_0 = L_120;
		if ((((float)L_122) < ((float)(0.0f))))
		{
			G_B23_0 = L_120;
			goto IL_030b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_123 = __this->get_address_of_scrollOffset_7();
		float L_124 = L_123->get_y_1();
		G_B24_0 = L_124;
		G_B24_1 = G_B22_0;
		goto IL_0310;
	}

IL_030b:
	{
		G_B24_0 = (0.0f);
		G_B24_1 = G_B23_0;
	}

IL_0310:
	{
		G_B24_1->set_y_1(G_B24_0);
		__this->set_m_RevealCursor_12((bool)0);
		return;
	}
}
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DrawCursor_mD628D96A54F61FF7F96EDD357C8D669FDD26F5AA (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, String_t* ___newText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_DrawCursor_mD628D96A54F61FF7F96EDD357C8D669FDD26F5AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_5 = __this->get_m_Content_8();
		String_t* L_6 = ___newText0;
		int32_t L_7 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_6, 0, L_7, /*hidden argument*/NULL);
		String_t* L_9 = GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37(/*hidden argument*/NULL);
		String_t* L_10 = ___newText0;
		int32_t L_11 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_12 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_10, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_5, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		String_t* L_15 = GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37(/*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16));
		goto IL_006d;
	}

IL_0060:
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_17 = __this->get_m_Content_8();
		String_t* L_18 = ___newText0;
		NullCheck(L_17);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_17, L_18, /*hidden argument*/NULL);
	}

IL_006d:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_24), (0.0f), (0.0f), L_21, L_23, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_25 = __this->get_m_Content_8();
		int32_t L_26 = V_1;
		NullCheck(L_19);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = GUIStyle_GetCursorPixelPosition_m8D4E34D8BFB582440B88F54643D095DF13DEA4F3(L_19, L_24, L_25, L_26, /*hidden argument*/NULL);
		__this->set_graphicalCursorPos_13(L_27);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_28 = __this->get_style_2();
		NullCheck(L_28);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = GUIStyle_get_contentOffset_mEDC41FC0FA4CBBF8E271A2F620305D16E7E36A1B(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_30 = __this->get_style_2();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_31 = L_30;
		NullCheck(L_31);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = GUIStyle_get_contentOffset_mEDC41FC0FA4CBBF8E271A2F620305D16E7E36A1B(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = __this->get_scrollOffset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_set_contentOffset_m2EAB45D5CFBA13DFE580BD6805353BDE59D5A56D(L_31, L_34, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = __this->get_style_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = __this->get_scrollOffset_7();
		NullCheck(L_35);
		GUIStyle_set_Internal_clipOffset_mB7E8F11C269ECEE9F8277150C261E0C0534DEFBF(L_35, L_36, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = __this->get_graphicalCursorPos_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_38 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_38;
		float L_39 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_40 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		V_4 = L_40;
		float L_41 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_42 = __this->get_style_2();
		NullCheck(L_42);
		float L_43 = GUIStyle_get_lineHeight_m2A3FC65C1395A047D28E3CC20015D4871729CC71(L_42, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_44), L_39, ((float)il2cpp_codegen_add((float)L_41, (float)L_43)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_37, L_44, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = __this->get_scrollOffset_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_45, L_46, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = GUIClip_UnclipToWindow_m32CAC364845EF5893B53AA6C36E4FB1EF1405E21(L_47, /*hidden argument*/NULL);
		GUIUtility_set_compositionCursorPos_m895C29DAB9335BC53602E6D05D4FD622C37BFB8D(L_48, /*hidden argument*/NULL);
		String_t* L_49 = GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37(/*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_49, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_50) > ((int32_t)0))? 1 : 0);
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0188;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_52 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_53 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_54 = __this->get_m_Content_8();
		int32_t L_55 = __this->get_controlID_1();
		int32_t L_56 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_57 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		String_t* L_58 = GUIUtility_get_compositionString_m49A5608DCFEC04B7BEF7278392A0DBCBDBC2EA37(/*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_58, /*hidden argument*/NULL);
		NullCheck(L_52);
		GUIStyle_DrawWithTextSelection_m6A144949389804F371C359F159C9E7DAA1BEDA9A(L_52, L_53, L_54, L_55, L_56, ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_59)), (bool)1, /*hidden argument*/NULL);
		goto IL_01b2;
	}

IL_0188:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_60 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_62 = __this->get_m_Content_8();
		int32_t L_63 = __this->get_controlID_1();
		int32_t L_64 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		int32_t L_65 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		GUIStyle_DrawWithTextSelection_m0366243DD71AB06567B2E2AD777FC6E4585DA95F(L_60, L_61, L_62, L_63, L_64, L_65, /*hidden argument*/NULL);
	}

IL_01b2:
	{
		int32_t L_66 = __this->get_m_iAltCursorPos_19();
		V_6 = (bool)((((int32_t)((((int32_t)L_66) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_6;
		if (!L_67)
		{
			goto IL_01e8;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_68 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_69 = TextEditor_get_position_m4B5263E81A4B8D76672C5A262126AABED1A2957A(__this, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_70 = __this->get_m_Content_8();
		int32_t L_71 = __this->get_controlID_1();
		int32_t L_72 = __this->get_m_iAltCursorPos_19();
		NullCheck(L_68);
		GUIStyle_DrawCursor_m9E4A7C0BCD7E651B87B809B010DA75D2EE464676(L_68, L_69, L_70, L_71, L_72, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_73 = __this->get_style_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74 = V_2;
		NullCheck(L_73);
		GUIStyle_set_contentOffset_m2EAB45D5CFBA13DFE580BD6805353BDE59D5A56D(L_73, L_74, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_75 = __this->get_style_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_75);
		GUIStyle_set_Internal_clipOffset_mB7E8F11C269ECEE9F8277150C261E0C0534DEFBF(L_75, L_76, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_77 = __this->get_m_Content_8();
		String_t* L_78 = V_0;
		NullCheck(L_77);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_77, L_78, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor_TextEditOp,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_PerformOperation_mC8D7C480A86101BE510AB2ED83107110259C7821 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___operation0, bool ___textIsReadOnly1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_PerformOperation_mC8D7C480A86101BE510AB2ED83107110259C7821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		__this->set_m_RevealCursor_12((bool)1);
		int32_t L_0 = ___operation0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_00cd;
			}
			case 1:
			{
				goto IL_00d9;
			}
			case 2:
			{
				goto IL_00e5;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_00fd;
			}
			case 5:
			{
				goto IL_0109;
			}
			case 6:
			{
				goto IL_0145;
			}
			case 7:
			{
				goto IL_0151;
			}
			case 8:
			{
				goto IL_0302;
			}
			case 9:
			{
				goto IL_0302;
			}
			case 10:
			{
				goto IL_0175;
			}
			case 11:
			{
				goto IL_0181;
			}
			case 12:
			{
				goto IL_0139;
			}
			case 13:
			{
				goto IL_0115;
			}
			case 14:
			{
				goto IL_015d;
			}
			case 15:
			{
				goto IL_0169;
			}
			case 16:
			{
				goto IL_0121;
			}
			case 17:
			{
				goto IL_012d;
			}
			case 18:
			{
				goto IL_018d;
			}
			case 19:
			{
				goto IL_0199;
			}
			case 20:
			{
				goto IL_01a5;
			}
			case 21:
			{
				goto IL_01b1;
			}
			case 22:
			{
				goto IL_01ed;
			}
			case 23:
			{
				goto IL_01f9;
			}
			case 24:
			{
				goto IL_0302;
			}
			case 25:
			{
				goto IL_0302;
			}
			case 26:
			{
				goto IL_0205;
			}
			case 27:
			{
				goto IL_0211;
			}
			case 28:
			{
				goto IL_0235;
			}
			case 29:
			{
				goto IL_0241;
			}
			case 30:
			{
				goto IL_01c9;
			}
			case 31:
			{
				goto IL_01bd;
			}
			case 32:
			{
				goto IL_01d5;
			}
			case 33:
			{
				goto IL_01e1;
			}
			case 34:
			{
				goto IL_0229;
			}
			case 35:
			{
				goto IL_021d;
			}
			case 36:
			{
				goto IL_024d;
			}
			case 37:
			{
				goto IL_0265;
			}
			case 38:
			{
				goto IL_02c6;
			}
			case 39:
			{
				goto IL_02ee;
			}
			case 40:
			{
				goto IL_02da;
			}
			case 41:
			{
				goto IL_027d;
			}
			case 42:
			{
				goto IL_0297;
			}
			case 43:
			{
				goto IL_02a0;
			}
			case 44:
			{
				goto IL_02b4;
			}
			case 45:
			{
				goto IL_02bd;
			}
		}
	}
	{
		goto IL_0302;
	}

IL_00cd:
	{
		TextEditor_MoveLeft_m5EF461B1A8E54955FA49CFE44A30B5D56D58D59B(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_00d9:
	{
		TextEditor_MoveRight_m634E85509D846218EAD1894FF67F7D9B8A61F9CA(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_00e5:
	{
		TextEditor_MoveUp_m8FDBC52051A639319A86502D6056BC06BB78E66C(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_00f1:
	{
		TextEditor_MoveDown_m240765198B8A686EA80D018E8B71D435E2AFF89B(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_00fd:
	{
		TextEditor_MoveLineStart_mF1B12EFAFA0CAC5F8A2B9F282E20CA3D36850E2E(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0109:
	{
		TextEditor_MoveLineEnd_m2DC31831A0D37F75BFA6CBB51FAFAD50CC966AF5(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0115:
	{
		TextEditor_MoveWordRight_mFBBEA31EB6CD67F063ED3A6F2A343FBDAF08793C(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0121:
	{
		TextEditor_MoveToStartOfNextWord_mA96D839CF3EB07F5CDF19762D5D2E6B9C4BAD36D(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_012d:
	{
		TextEditor_MoveToEndOfPreviousWord_m51C33936E027A823E0F7500F4F1D2F8645823E40(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0139:
	{
		TextEditor_MoveWordLeft_m76BE93FFEBB5E8A51EBD5BBCD4313681A2EC5638(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0145:
	{
		TextEditor_MoveTextStart_mE75FFE843DA63613826F3A90D74FDBA8BB0DAEFC(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0151:
	{
		TextEditor_MoveTextEnd_m25A227643D792D7D14149DBE67161C6A7843B739(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_015d:
	{
		TextEditor_MoveParagraphForward_mD4466D00FDBEF6A3E9171F824531C65B495F3F55(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0169:
	{
		TextEditor_MoveParagraphBackward_m47BF508866B9B3506FC829E9BCB6461C282AE56F(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0175:
	{
		TextEditor_MoveGraphicalLineStart_m74DA4B4DF3B68653DB4EC655D3092688F4B13506(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0181:
	{
		TextEditor_MoveGraphicalLineEnd_m577F85B3D593F7A004DE79B595E3357484F04655(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_018d:
	{
		TextEditor_SelectLeft_m518E7C7EBC18D6219ECC2454C043187986B973B1(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0199:
	{
		TextEditor_SelectRight_mC546506FCEC238ACA078ABFF78AF7D2194E42E48(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01a5:
	{
		TextEditor_SelectUp_m8295F3E145EA8791A259AD4655E2FE8199E53D2E(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01b1:
	{
		TextEditor_SelectDown_mB098A57D287374CA1A522982D54BCAAA2F38C6B7(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01bd:
	{
		TextEditor_SelectWordRight_mB94EF5DBF2D792E2FD9871312E23B737705E9A16(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01c9:
	{
		TextEditor_SelectWordLeft_m9ED17611443EF88F11E5BF1E304ED3E30A5402DB(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01d5:
	{
		TextEditor_SelectToEndOfPreviousWord_mCDC12CEF4FF8461F10C680730E7B98C3DD45CAD2(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01e1:
	{
		TextEditor_SelectToStartOfNextWord_mE7ADBC51D9E0A68D3375612C4193787B661F42A7(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01ed:
	{
		TextEditor_SelectTextStart_m25834E49ED3D557CEC0ECAA129B0916309C16CB7(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_01f9:
	{
		TextEditor_SelectTextEnd_m32FD60930FB84CD3C013FC067CC3FCB55973DA08(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0205:
	{
		TextEditor_ExpandSelectGraphicalLineStart_m2968C0AE82AAF86E5D19F1B55C830237A171329B(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0211:
	{
		TextEditor_ExpandSelectGraphicalLineEnd_m92D7398F2E2B71A363F987FD9977B718B1CFBCDF(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_021d:
	{
		TextEditor_SelectParagraphForward_m1B0F5BFA5639B8E863BE18672FECA9471420FC00(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0229:
	{
		TextEditor_SelectParagraphBackward_m2C719D95116BCFEACD7ED4D9443B8B067969AE6F(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0235:
	{
		TextEditor_SelectGraphicalLineStart_mB5F111592C097455D485724EA0EA691AF70D5393(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_0241:
	{
		TextEditor_SelectGraphicalLineEnd_mC6B13F73FDBEB9C38B137D894FFEB8DE3438536C(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_024d:
	{
		bool L_2 = ___textIsReadOnly1;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0259;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_0259:
	{
		bool L_4 = TextEditor_Delete_mA8F15F6B7EE373DBC15A399F9C33A0B078FED6C5(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_031e;
	}

IL_0265:
	{
		bool L_5 = ___textIsReadOnly1;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0271;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_0271:
	{
		bool L_7 = TextEditor_Backspace_m28CC7790088027A79B2F06F4FB3BEB65F40352CC(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_031e;
	}

IL_027d:
	{
		bool L_8 = ___textIsReadOnly1;
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_028b;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_028b:
	{
		bool L_10 = TextEditor_Cut_m8C5226EB2736F62C4D1AA2E513878462AF69E233(__this, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_031e;
	}

IL_0297:
	{
		TextEditor_Copy_mA09CAF84F8FFBAB60E0E5FE7EC68AAF1C814D11B(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_02a0:
	{
		bool L_11 = ___textIsReadOnly1;
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_02ab;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_02ab:
	{
		bool L_13 = TextEditor_Paste_m734B97FD4F98ADE4815DDE92A530EBB01F0D4781(__this, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_031e;
	}

IL_02b4:
	{
		TextEditor_SelectAll_m5EDB0E8D503B602A6A1AFF213E45766B57702598(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_02bd:
	{
		TextEditor_SelectNone_m204A64B599049EAF1EA39EA72560DD017E02B5CD(__this, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_02c6:
	{
		bool L_14 = ___textIsReadOnly1;
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_02d1;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_02d1:
	{
		bool L_16 = TextEditor_DeleteWordBack_mD5B1AA3E2F877EB51D2472C1308B217CA2F54A06(__this, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_031e;
	}

IL_02da:
	{
		bool L_17 = ___textIsReadOnly1;
		V_7 = L_17;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_02e5;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_02e5:
	{
		bool L_19 = TextEditor_DeleteLineBack_mD4520B7DDC6E616C2AF04DDFE23A4AC234437DE1(__this, /*hidden argument*/NULL);
		V_2 = L_19;
		goto IL_031e;
	}

IL_02ee:
	{
		bool L_20 = ___textIsReadOnly1;
		V_8 = L_20;
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_02f9;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_02f9:
	{
		bool L_22 = TextEditor_DeleteWordForward_m7BB52B567A1BBECD4663DF683FD2B996E58CF040(__this, /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_031e;
	}

IL_0302:
	{
		int32_t L_23 = ___operation0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(TextEditOp_t6C6705A198EA7EFB55340BED1D58F28A1129A4DE_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralBD26781B489D74246E46948A3CF454478F1000C5, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		goto IL_031a;
	}

IL_031a:
	{
		V_2 = (bool)0;
		goto IL_031e;
	}

IL_031e:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SaveBackup_m94397DB7F5E9297C24AF2792CAA7574C26627722 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		__this->set_oldText_20(L_0);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		__this->set_oldPos_21(L_1);
		int32_t L_2 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		__this->set_oldSelectPos_22(L_2);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Cut_m8C5226EB2736F62C4D1AA2E513878462AF69E233 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->get_isPasswordField_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_000f:
	{
		TextEditor_Copy_mA09CAF84F8FFBAB60E0E5FE7EC68AAF1C814D11B(__this, /*hidden argument*/NULL);
		bool L_2 = TextEditor_DeleteSelection_mE4E2C5419910E31D262D55F1FEA168E9072D9E6D(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Copy_mA09CAF84F8FFBAB60E0E5FE7EC68AAF1C814D11B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_004c;
	}

IL_0015:
	{
		bool L_3 = __this->get_isPasswordField_5();
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_004c;
	}

IL_0021:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = __this->get_style_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = VirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_7 = __this->get_m_Content_8();
		int32_t L_8 = TextEditor_get_selectIndex_mD6C80FE40149B0F0990868B3AC218479EEF3378C(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_get_cursorIndex_m7D846379E1E16C578FF7206280FF522622A8061C(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_10 = GUIStyle_Internal_GetSelectedRenderedText_mBB9578BE373E64754DAC9496DC4E2422B9CF438B(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95(L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_ReplaceNewlinesWithSpaces_mBFCCCAF5052A1435C1BCD13D7297D8E39BBE748E (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_ReplaceNewlinesWithSpaces_mBFCCCAF5052A1435C1BCD13D7297D8E39BBE748E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_0, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		___value0 = L_1;
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value0 = L_3;
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value0 = L_5;
		String_t* L_6 = ___value0;
		V_0 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Paste_m734B97FD4F98ADE4815DDE92A530EBB01F0D4781 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_Paste_m734B97FD4F98ADE4815DDE92A530EBB01F0D4781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = __this->get_multiline_3();
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = TextEditor_ReplaceNewlinesWithSpaces_mBFCCCAF5052A1435C1BCD13D7297D8E39BBE748E(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002b:
	{
		String_t* L_8 = V_0;
		TextEditor_ReplaceSelection_m13BC53A0C2F3B95346CAA422AB3FAD8E1BA0A44C(__this, L_8, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_003b;
	}

IL_0037:
	{
		V_3 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor_TextEditOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC (String_t* ___key0, int32_t ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * L_0 = ((TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var))->get_s_Keyactions_23();
		String_t* L_1 = ___key0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2 = Event_KeyboardEvent_mEDF3A001AE1C3D3AC324784C48A835738CF050B2(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___action1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m60C46D4985DD498C33D75B842121DD35929CF75E(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_set_Item_m60C46D4985DD498C33D75B842121DD35929CF75E_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.TextEditor::InitKeyActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_InitKeyActions_m1073E6D1966025612EFAD14D6C17E590EA95359A (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_InitKeyActions_m1073E6D1966025612EFAD14D6C17E590EA95359A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * L_0 = ((TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var))->get_s_Keyactions_23();
		V_0 = (bool)((!(((RuntimeObject*)(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_03ec;
	}

IL_0012:
	{
		Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 * L_2 = (Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4 *)il2cpp_codegen_object_new(Dictionary_2_t56E51EEE113986EC168CDC77EA280DAB24101BF4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5F2CE464F67F4BDC4EB96CB769755BC675F66B18(L_2, /*hidden argument*/Dictionary_2__ctor_m5F2CE464F67F4BDC4EB96CB769755BC675F66B18_RuntimeMethod_var);
		((TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_il2cpp_TypeInfo_var))->set_s_Keyactions_23(L_2);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, 0, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, 1, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, 2, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, 3, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral4718C7000562AF450B2C8B2BD4445A87205F7666, ((int32_t)18), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralB468B2E60F7F60260C2916459A799050DD6D3E85, ((int32_t)19), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralC581158E993200B82B36A56301468170ADB021DA, ((int32_t)20), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral46AC1D8C432B177A3C113AD943EB74504A0EB337, ((int32_t)21), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317, ((int32_t)36), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293, ((int32_t)37), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral350D3BF828268FA677A331CBD1D40C9DB88673B3, ((int32_t)37), /*hidden argument*/NULL);
		int32_t L_3 = SystemInfo_get_operatingSystemFamily_m797937E766B7FF87A5F1630263C49B814131DD95(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0298;
		}
	}
	{
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral1CD31FFC09BB731749BFAAC984D2EED8E22C771A, ((int32_t)12), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7AADBCDB9D121BC9D88064E31E08A3186262CAE6, ((int32_t)13), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralE18A20FF89E2801DE5C0C60E05D569C3513C48C7, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral9FA1FF57F726441CA277BF9734892B299CA3297B, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral70E962167414B98D1C47009CF2298022592E68D4, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008, 6, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF, 7, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D, ((int32_t)22), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706, ((int32_t)23), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783, ((int32_t)26), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926, ((int32_t)27), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7EF39B884F9764078345103493B55121123B1B46, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralD91C866DD696C68303515E6926044A10A2ADAB3C, ((int32_t)30), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral6458183EA8D5BC1AAE58A98C841058647CCC35DE, ((int32_t)31), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral3D3A00B527F2755AFFF36C8F4AC13A53B5DC81D3, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralE3EADA58476D85227490ACED9D3239769769DFDC, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralA8D3437438DB8A85C804DDB64E69721F1D275030, ((int32_t)26), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralA3955ADB3BC69ECFE423744D4F4F597294A20827, ((int32_t)27), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral28C03674125DA29250BA73594E6061FD480A3CB7, ((int32_t)22), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral34D4B5F20FD7AA47487EDE07001792463720D1CE, ((int32_t)23), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralFA1435556F32329DD212289449459CCFA67730F8, ((int32_t)44), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral13CDCE216B91792515C4C64C7FCF5B265C404257, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralB8AA8F2673947FA36BB764D4DD75961AB3AF723E, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral62F0048B45A8ADBC774F1B00911C9AA337E1F633, ((int32_t)43), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral13490EE15BBBA5055FAF4DFF43BAF8642B91BD99, ((int32_t)36), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral34F817DA4635C4C22DF5692FF51A196067483534, ((int32_t)37), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral3C3D97D6F00F5718D7008966DC8F93F9BB87FA51, 0, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralB8E1418EB9CE2E5CF97CF8246D2776B9F1F33D67, 1, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B, 4, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral837B17505EC06BAC0E4AA984798E9DB32B9C3CA0, 5, /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral9C1E874DA059D22C91283C44117D602D9080875A, ((int32_t)39), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral877F6F7B61373508B1123D79708B393A9438C37E, ((int32_t)38), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_03ec;
	}

IL_0298:
	{
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691, ((int32_t)12), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral70E962167414B98D1C47009CF2298022592E68D4, ((int32_t)13), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894, ((int32_t)17), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE, ((int32_t)16), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralDBA1945CFAADC613DE5170FD5C21296CCFF83615, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral3E5BBD622A1890626F72D09F11351B02F04CD245, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783, ((int32_t)32), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926, ((int32_t)33), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral7EF39B884F9764078345103493B55121123B1B46, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D, ((int32_t)28), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706, ((int32_t)29), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral3D5EAEDD29399C149223964BD7513C036E82B631, ((int32_t)39), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral1388D2C9310312FF15F8415A0A8F63A7EA461B41, ((int32_t)38), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A, ((int32_t)40), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B, ((int32_t)44), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralF25B95468DAA02EC9AF41A21C2F589D8847BC27F, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralA314507B0573B983FD845620D28E0B2F951D0E10, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralBA6BD45D12B4E9306BD7E0CC99FEC1DEEBFBBC58, ((int32_t)43), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral16D9C3063FF5F852963147CC12C5C552A5635796, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteral0EF758EF1A06CA13329086B705ED12F47B9F606F, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m8EF99F16B324ABE126BB8450D963E6CCE2F14ACC(_stringLiteralE7B9F94C0B0B71996D09AA98D20E270C100EAB93, ((int32_t)43), /*hidden argument*/NULL);
	}

IL_03ec:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::DetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DetectFocusChange_mCD7E1E7B23D372E27A21C7A5012786C96EA962A0 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.TextEditor::OnDetectFocusChange() */, __this);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnDetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnDetectFocusChange_m838BA6AFE6EA2819C353205C69B0D9884E56C9E5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = __this->get_m_HasFocus_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_controlID_1();
		int32_t L_2 = GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1(/*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_OnLostFocus_m2E8FBC8864AA1B1EE5A56C13458618BE0EFFB783(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_4 = __this->get_m_HasFocus_6();
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = __this->get_controlID_1();
		int32_t L_6 = GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1(/*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B8_0 = 0;
	}

IL_003f:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		TextEditor_OnFocus_mA391FDD8A6F669C33F4F47AA6190DFA7E6C1DDE8(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnCursorIndexChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnCursorIndexChange_mBCB374107D1C8683F3F5AA4E4CC9760898D9902B (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnSelectIndexChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnSelectIndexChange_m011581CACCDA51F92D064AA938B5FD23660585D4 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClampTextIndex_m7848BDECC588F52DE17768F3CE2DF23E7A728DC5 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t* ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_ClampTextIndex_m7848BDECC588F52DE17768F3CE2DF23E7A728DC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___index0;
		int32_t* L_1 = ___index0;
		int32_t L_2 = *((int32_t*)L_1);
		String_t* L_3 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_2, 0, L_4, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_5;
		return;
	}
}
// System.Void UnityEngine.TextEditor::EnsureValidCodePointIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_EnsureValidCodePointIndex_mB443C43308B056AE4E13DA6108E1DC1549CF7662 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t* ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t* L_0 = ___index0;
		TextEditor_ClampTextIndex_m7848BDECC588F52DE17768F3CE2DF23E7A728DC5(__this, (int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_1 = ___index0;
		int32_t L_2 = *((int32_t*)L_1);
		bool L_3 = TextEditor_IsValidCodePointIndex_mB0A21AB9662958E103DF439F8433D27796B46AF8(__this, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		int32_t* L_5 = ___index0;
		int32_t* L_6 = ___index0;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951(__this, L_7, /*hidden argument*/NULL);
		*((int32_t*)L_5) = (int32_t)L_8;
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::IsValidCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_IsValidCodePointIndex_mB0A21AB9662958E103DF439F8433D27796B46AF8 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_IsValidCodePointIndex_mB0A21AB9662958E103DF439F8433D27796B46AF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___index0;
		String_t* L_2 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)L_3))? 1 : 0);
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
			goto IL_001e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_001e:
	{
		int32_t L_5 = ___index0;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = ___index0;
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B8_0 = 1;
	}

IL_0032:
	{
		V_2 = (bool)G_B8_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_003a:
	{
		String_t* L_10 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		Il2CppChar L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_13 = Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E(L_12, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0051:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UnityEngine.TextEditor::PreviousCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_PreviousCodePointIndex_m5F3FB1486A2221A2F7B70459094BC79E3A5B926C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = ___index0;
		___index0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}

IL_000e:
	{
		goto IL_0015;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		___index0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_5 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E(L_7, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_002d;
	}

IL_002c:
	{
		G_B7_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B7_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_10 = ___index0;
		V_2 = L_10;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Int32 UnityEngine.TextEditor::NextCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor_NextCodePointIndex_m8D148585BD59DADBE637B142A7854145FA018951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index0;
		___index0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		goto IL_001f;
	}

IL_001a:
	{
		int32_t L_5 = ___index0;
		___index0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_6 = ___index0;
		String_t* L_7 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_9 = TextEditor_get_text_mE15B60D55F2AAF0D8635591E0DA94C9120911EA3(__this, /*hidden argument*/NULL);
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E(L_11, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_1 = (bool)G_B7_0;
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_14 = ___index0;
		V_2 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		int32_t L_15 = V_2;
		return L_15;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI_WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUI_WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
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
					((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___id0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUI_WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowFunction_BeginInvoke_m9F57C6EAE29A60C2D896F2FC784280ECE8AAFBCA (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowFunction_BeginInvoke_m9F57C6EAE29A60C2D896F2FC784280ECE8AAFBCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.GUI_WindowFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_EndInvoke_mD9651FD07B46D56BB2BC6B061FB90D3423A0B761 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Int32 UnityEngine.GUILayoutUtility_LayoutCache::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mDEC9592EC4C2A9524A20FD2C499CFEBDA8D392A2 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutUtility_LayoutCache::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility_LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_1(L_0);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_1 = (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C *)il2cpp_codegen_object_new(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_2(L_1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_2 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_2, /*hidden argument*/NULL);
		__this->set_windows_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___instanceID0;
		LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline(__this, L_3, /*hidden argument*/NULL);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_4 = __this->get_layoutGroups_2();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_5 = __this->get_topLevel_1();
		NullCheck(L_4);
		VirtActionInvoker1< RuntimeObject * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility_LayoutCache::.ctor(UnityEngine.GUILayoutUtility_LayoutCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m4BA1E6214FB7EEA6668E787F83231AD51911631B (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutCache__ctor_m4BA1E6214FB7EEA6668E787F83231AD51911631B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_1(L_0);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_1 = (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C *)il2cpp_codegen_object_new(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_2(L_1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_2 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_2, /*hidden argument*/NULL);
		__this->set_windows_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4 = LayoutCache_get_id_mDEC9592EC4C2A9524A20FD2C499CFEBDA8D392A2_inline(L_3, /*hidden argument*/NULL);
		LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline(__this, L_4, /*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_5 = ___other0;
		NullCheck(L_5);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_6 = L_5->get_topLevel_1();
		__this->set_topLevel_1(L_6);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_7 = ___other0;
		NullCheck(L_7);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_8 = L_7->get_layoutGroups_2();
		__this->set_layoutGroups_2(L_8);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_9 = ___other0;
		NullCheck(L_9);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_10 = L_9->get_windows_3();
		__this->set_windows_3(L_10);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility_LayoutCache::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_ResetCursor_m3F4674618BC17F76EB3CCF67AD3A10C43E46EB0B (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutCache_ResetCursor_m3F4674618BC17F76EB3CCF67AD3A10C43E46EB0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = __this->get_windows_3();
		NullCheck(L_0);
		GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32(L_0, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_1 = __this->get_topLevel_1();
		NullCheck(L_1);
		GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32(L_1, /*hidden argument*/NULL);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_2 = __this->get_layoutGroups_2();
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Stack::GetEnumerator() */, L_2);
		V_0 = L_3;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0028:
		{
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			RuntimeObject * L_6 = V_1;
			NullCheck(((GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)CastclassClass((RuntimeObject*)L_6, GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var)));
			GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32(((GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)CastclassClass((RuntimeObject*)L_6, GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_003b:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0028;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_2;
			if (!L_10)
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m89C35E9FE770168E1BEE3990E7E399891788B6DB (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m5FEBFA0F8E80B0745121ECB1C59C9E0EF595CC3C (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUISkin_SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkinChangedDelegate_BeginInvoke_m7FA7715C6C7E8D8B0C95159E565520492D01F5CE (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_EndInvoke_m6F5C8C0C660819B74CB8541173EA917C1A6A8D87 (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mDEC9592EC4C2A9524A20FD2C499CFEBDA8D392A2_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
