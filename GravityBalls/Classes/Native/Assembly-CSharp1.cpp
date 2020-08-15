#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.Examples.VertexColorCycler
struct VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// TMPro.Examples.VertexJitter
struct VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A;
// TMPro.Examples.VertexShakeA
struct VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A;
// TMPro.Examples.VertexShakeB
struct VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9;
// TMPro.Examples.VertexZoom
struct VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96;
// basicItem
struct basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD;
// countDown
struct countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977;
// paddle
struct paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4;
// spawner
struct spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3
struct U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF;
// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741;
// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155;
// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6;
// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76;
// basicItem/<stopXV>d__3
struct U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772;
// countDown/<CountDown>d__4
struct U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B;
// paddle/<brickBreak>d__21
struct U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F;
// paddle/<waitResize>d__20
struct U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6;
// paddle/<waitTen>d__19
struct U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B;
// spawner/<wait>d__12
struct U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;

IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountDownU3Ed__4_System_Collections_IEnumerator_Reset_m31E5D86671F45795E35FDDAD3523299A795F713E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_Reset_m2C531AED5789BE653239F1BC25F96A1380456A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CstopXVU3Ed__3_System_Collections_IEnumerator_Reset_m93F793615F2BCB77F2C8C3C136ED8D001F108774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_Reset_m8106A24B5B1703F7051A4C1B4DFC9986416C1FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitTenU3Ed__19_System_Collections_IEnumerator_Reset_m0A5DBA03881B6D4652E621C82021B18F1816800E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitU3Ed__12_System_Collections_IEnumerator_Reset_m97BEADEDCEF95E831636B63B0C98724960EA0A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__10_MoveNext_m0534E436514E663BF024364E524EE5716FF15C8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__10_MoveNext_m8340EFEB2B2CF6EA1545CFB6967968CA171FEE66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__11_MoveNext_m169A75C7E2147372CB933520B670AF77907C1C6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__11_MoveNext_mCEEDE03667D329386BB4AE7B8252B7A9B54F443F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__3_MoveNext_m2842AF5B12AFC17112D1AE75E46AB1B12776D2A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCountDownU3Ed__4_MoveNext_mF7BE46F661644D2C1705FCE23C83DE243CFF9D1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCountDownU3Ed__4_System_Collections_IEnumerator_Reset_m31E5D86671F45795E35FDDAD3523299A795F713E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWarpTextU3Ed__8_MoveNext_m9C83C8455FF8ADFBAA8D05958C3048612A96EB84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CbrickBreakU3Ed__21_MoveNext_m5199D4642ACE3ED68F955AC41E7D45902D3BB1ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_Reset_m2C531AED5789BE653239F1BC25F96A1380456A1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CstopXVU3Ed__3_MoveNext_m383EF5805D2A176650927FD95806E67666F0502E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CstopXVU3Ed__3_System_Collections_IEnumerator_Reset_m93F793615F2BCB77F2C8C3C136ED8D001F108774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitResizeU3Ed__20_MoveNext_m18DA28ADAF9967841FE958F3B5EC851AD710B48B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_Reset_m8106A24B5B1703F7051A4C1B4DFC9986416C1FBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitTenU3Ed__19_MoveNext_mDBB0E844228958903E8A1AC7EE527E493BBE416C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitTenU3Ed__19_System_Collections_IEnumerator_Reset_m0A5DBA03881B6D4652E621C82021B18F1816800E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitU3Ed__12_MoveNext_m94D420815876FD00EE742CEA43FE1B62B4FE0461_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CwaitU3Ed__12_System_Collections_IEnumerator_Reset_m97BEADEDCEF95E831636B63B0C98724960EA0A6B_MetadataUsageId;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF;
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB;

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


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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

// TMPro.Examples.VertexZoom_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom_<>c__DisplayClass10_0::modifiedCharScale
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___modifiedCharScale_0;
	// System.Comparison`1<System.Int32> TMPro.Examples.VertexZoom_<>c__DisplayClass10_0::<>9__0
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_modifiedCharScale_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6, ___modifiedCharScale_0)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_modifiedCharScale_0() const { return ___modifiedCharScale_0; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_modifiedCharScale_0() { return &___modifiedCharScale_0; }
	inline void set_modifiedCharScale_0(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___modifiedCharScale_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modifiedCharScale_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6, ___U3CU3E9__0_1)); }
	inline Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
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

// basicItem_<stopXV>d__3
struct  U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772  : public RuntimeObject
{
public:
	// System.Int32 basicItem_<stopXV>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object basicItem_<stopXV>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// basicItem basicItem_<stopXV>d__3::<>4__this
	basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772, ___U3CU3E4__this_2)); }
	inline basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// countDown_<CountDown>d__4
struct  U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B  : public RuntimeObject
{
public:
	// System.Int32 countDown_<CountDown>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object countDown_<CountDown>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// countDown countDown_<CountDown>d__4::<>4__this
	countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B, ___U3CU3E4__this_2)); }
	inline countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// paddle_<brickBreak>d__21
struct  U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F  : public RuntimeObject
{
public:
	// System.Int32 paddle_<brickBreak>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object paddle_<brickBreak>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// paddle paddle_<brickBreak>d__21::<>4__this
	paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F, ___U3CU3E4__this_2)); }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// paddle_<waitResize>d__20
struct  U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6  : public RuntimeObject
{
public:
	// System.Int32 paddle_<waitResize>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object paddle_<waitResize>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// paddle paddle_<waitResize>d__20::<>4__this
	paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6, ___U3CU3E4__this_2)); }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// paddle_<waitTen>d__19
struct  U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B  : public RuntimeObject
{
public:
	// System.Int32 paddle_<waitTen>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object paddle_<waitTen>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// paddle paddle_<waitTen>d__19::<>4__this
	paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B, ___U3CU3E4__this_2)); }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// spawner_<wait>d__12
struct  U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3  : public RuntimeObject
{
public:
	// System.Int32 spawner_<wait>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object spawner_<wait>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// spawner spawner_<wait>d__12::<>4__this
	spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3, ___U3CU3E4__this_2)); }
	inline spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// TMPro.Examples.VertexJitter_VertexAnim
struct  VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 
{
public:
	// System.Single TMPro.Examples.VertexJitter_VertexAnim::angleRange
	float ___angleRange_0;
	// System.Single TMPro.Examples.VertexJitter_VertexAnim::angle
	float ___angle_1;
	// System.Single TMPro.Examples.VertexJitter_VertexAnim::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_angleRange_0() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___angleRange_0)); }
	inline float get_angleRange_0() const { return ___angleRange_0; }
	inline float* get_address_of_angleRange_0() { return &___angleRange_0; }
	inline void set_angleRange_0(float value)
	{
		___angleRange_0 = value;
	}

	inline static int32_t get_offset_of_angle_1() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___angle_1)); }
	inline float get_angle_1() const { return ___angle_1; }
	inline float* get_address_of_angle_1() { return &___angle_1; }
	inline void set_angle_1(float value)
	{
		___angle_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};


// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text_SpecialCharacter
struct  SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text_SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text_SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text_SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text_SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
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
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
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

// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3
struct  U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexColorCycler TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<>4__this
	VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<textInfo>5__1
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__1_3;
	// System.Int32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<currentCharacter>5__2
	int32_t ___U3CcurrentCharacterU3E5__2_4;
	// UnityEngine.Color32[] TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<newVertexColors>5__3
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___U3CnewVertexColorsU3E5__3_5;
	// UnityEngine.Color32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<c0>5__4
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___U3Cc0U3E5__4_6;
	// System.Int32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<characterCount>5__5
	int32_t ___U3CcharacterCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<materialIndex>5__6
	int32_t ___U3CmaterialIndexU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::<vertexIndex>5__7
	int32_t ___U3CvertexIndexU3E5__7_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CU3E4__this_2)); }
	inline VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CtextInfoU3E5__1_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__1_3() const { return ___U3CtextInfoU3E5__1_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__1_3() { return &___U3CtextInfoU3E5__1_3; }
	inline void set_U3CtextInfoU3E5__1_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCharacterU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CcurrentCharacterU3E5__2_4)); }
	inline int32_t get_U3CcurrentCharacterU3E5__2_4() const { return ___U3CcurrentCharacterU3E5__2_4; }
	inline int32_t* get_address_of_U3CcurrentCharacterU3E5__2_4() { return &___U3CcurrentCharacterU3E5__2_4; }
	inline void set_U3CcurrentCharacterU3E5__2_4(int32_t value)
	{
		___U3CcurrentCharacterU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CnewVertexColorsU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CnewVertexColorsU3E5__3_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_U3CnewVertexColorsU3E5__3_5() const { return ___U3CnewVertexColorsU3E5__3_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_U3CnewVertexColorsU3E5__3_5() { return &___U3CnewVertexColorsU3E5__3_5; }
	inline void set_U3CnewVertexColorsU3E5__3_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___U3CnewVertexColorsU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewVertexColorsU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cc0U3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3Cc0U3E5__4_6)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_U3Cc0U3E5__4_6() const { return ___U3Cc0U3E5__4_6; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_U3Cc0U3E5__4_6() { return &___U3Cc0U3E5__4_6; }
	inline void set_U3Cc0U3E5__4_6(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___U3Cc0U3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CcharacterCountU3E5__5_7)); }
	inline int32_t get_U3CcharacterCountU3E5__5_7() const { return ___U3CcharacterCountU3E5__5_7; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__5_7() { return &___U3CcharacterCountU3E5__5_7; }
	inline void set_U3CcharacterCountU3E5__5_7(int32_t value)
	{
		___U3CcharacterCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CmaterialIndexU3E5__6_8)); }
	inline int32_t get_U3CmaterialIndexU3E5__6_8() const { return ___U3CmaterialIndexU3E5__6_8; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__6_8() { return &___U3CmaterialIndexU3E5__6_8; }
	inline void set_U3CmaterialIndexU3E5__6_8(int32_t value)
	{
		___U3CmaterialIndexU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF, ___U3CvertexIndexU3E5__7_9)); }
	inline int32_t get_U3CvertexIndexU3E5__7_9() const { return ___U3CvertexIndexU3E5__7_9; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__7_9() { return &___U3CvertexIndexU3E5__7_9; }
	inline void set_U3CvertexIndexU3E5__7_9(int32_t value)
	{
		___U3CvertexIndexU3E5__7_9 = value;
	}
};


// TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11
struct  U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeA TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<>4__this
	VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<textInfo>5__1
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<matrix>5__2
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__2_4;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* ___U3CcopyOfVerticesU3E5__3_5;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<characterCount>5__4
	int32_t ___U3CcharacterCountU3E5__4_6;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<lineCount>5__5
	int32_t ___U3ClineCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<length>5__7
	int32_t ___U3ClengthU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<first>5__9
	int32_t ___U3CfirstU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<last>5__10
	int32_t ___U3ClastU3E5__10_12;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<centerOfLine>5__11
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcenterOfLineU3E5__11_13;
	// UnityEngine.Quaternion TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<rotation>5__12
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3E5__12_14;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<j>5__13
	int32_t ___U3CjU3E5__13_15;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<materialIndex>5__14
	int32_t ___U3CmaterialIndexU3E5__14_16;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<vertexIndex>5__15
	int32_t ___U3CvertexIndexU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<sourceVertices>5__16
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CsourceVerticesU3E5__16_18;
	// System.Single TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<randomScale>5__17
	float ___U3CrandomScaleU3E5__17_19;
	// System.Int32 TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::<i>5__18
	int32_t ___U3CiU3E5__18_20;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CU3E4__this_2)); }
	inline VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CtextInfoU3E5__1_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__1_3() const { return ___U3CtextInfoU3E5__1_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__1_3() { return &___U3CtextInfoU3E5__1_3; }
	inline void set_U3CtextInfoU3E5__1_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CmatrixU3E5__2_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__2_4() const { return ___U3CmatrixU3E5__2_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__2_4() { return &___U3CmatrixU3E5__2_4; }
	inline void set_U3CmatrixU3E5__2_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CcopyOfVerticesU3E5__3_5)); }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* get_U3CcopyOfVerticesU3E5__3_5() const { return ___U3CcopyOfVerticesU3E5__3_5; }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB** get_address_of_U3CcopyOfVerticesU3E5__3_5() { return &___U3CcopyOfVerticesU3E5__3_5; }
	inline void set_U3CcopyOfVerticesU3E5__3_5(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* value)
	{
		___U3CcopyOfVerticesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcopyOfVerticesU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CcharacterCountU3E5__4_6)); }
	inline int32_t get_U3CcharacterCountU3E5__4_6() const { return ___U3CcharacterCountU3E5__4_6; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__4_6() { return &___U3CcharacterCountU3E5__4_6; }
	inline void set_U3CcharacterCountU3E5__4_6(int32_t value)
	{
		___U3CcharacterCountU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3ClineCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3ClineCountU3E5__5_7)); }
	inline int32_t get_U3ClineCountU3E5__5_7() const { return ___U3ClineCountU3E5__5_7; }
	inline int32_t* get_address_of_U3ClineCountU3E5__5_7() { return &___U3ClineCountU3E5__5_7; }
	inline void set_U3ClineCountU3E5__5_7(int32_t value)
	{
		___U3ClineCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CiU3E5__6_8)); }
	inline int32_t get_U3CiU3E5__6_8() const { return ___U3CiU3E5__6_8; }
	inline int32_t* get_address_of_U3CiU3E5__6_8() { return &___U3CiU3E5__6_8; }
	inline void set_U3CiU3E5__6_8(int32_t value)
	{
		___U3CiU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3ClengthU3E5__7_9)); }
	inline int32_t get_U3ClengthU3E5__7_9() const { return ___U3ClengthU3E5__7_9; }
	inline int32_t* get_address_of_U3ClengthU3E5__7_9() { return &___U3ClengthU3E5__7_9; }
	inline void set_U3ClengthU3E5__7_9(int32_t value)
	{
		___U3ClengthU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CiU3E5__8_10)); }
	inline int32_t get_U3CiU3E5__8_10() const { return ___U3CiU3E5__8_10; }
	inline int32_t* get_address_of_U3CiU3E5__8_10() { return &___U3CiU3E5__8_10; }
	inline void set_U3CiU3E5__8_10(int32_t value)
	{
		___U3CiU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CfirstU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CfirstU3E5__9_11)); }
	inline int32_t get_U3CfirstU3E5__9_11() const { return ___U3CfirstU3E5__9_11; }
	inline int32_t* get_address_of_U3CfirstU3E5__9_11() { return &___U3CfirstU3E5__9_11; }
	inline void set_U3CfirstU3E5__9_11(int32_t value)
	{
		___U3CfirstU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3ClastU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3ClastU3E5__10_12)); }
	inline int32_t get_U3ClastU3E5__10_12() const { return ___U3ClastU3E5__10_12; }
	inline int32_t* get_address_of_U3ClastU3E5__10_12() { return &___U3ClastU3E5__10_12; }
	inline void set_U3ClastU3E5__10_12(int32_t value)
	{
		___U3ClastU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CcenterOfLineU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CcenterOfLineU3E5__11_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcenterOfLineU3E5__11_13() const { return ___U3CcenterOfLineU3E5__11_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcenterOfLineU3E5__11_13() { return &___U3CcenterOfLineU3E5__11_13; }
	inline void set_U3CcenterOfLineU3E5__11_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcenterOfLineU3E5__11_13 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CrotationU3E5__12_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3E5__12_14() const { return ___U3CrotationU3E5__12_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3E5__12_14() { return &___U3CrotationU3E5__12_14; }
	inline void set_U3CrotationU3E5__12_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CjU3E5__13_15() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CjU3E5__13_15)); }
	inline int32_t get_U3CjU3E5__13_15() const { return ___U3CjU3E5__13_15; }
	inline int32_t* get_address_of_U3CjU3E5__13_15() { return &___U3CjU3E5__13_15; }
	inline void set_U3CjU3E5__13_15(int32_t value)
	{
		___U3CjU3E5__13_15 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__14_16() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CmaterialIndexU3E5__14_16)); }
	inline int32_t get_U3CmaterialIndexU3E5__14_16() const { return ___U3CmaterialIndexU3E5__14_16; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__14_16() { return &___U3CmaterialIndexU3E5__14_16; }
	inline void set_U3CmaterialIndexU3E5__14_16(int32_t value)
	{
		___U3CmaterialIndexU3E5__14_16 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__15_17() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CvertexIndexU3E5__15_17)); }
	inline int32_t get_U3CvertexIndexU3E5__15_17() const { return ___U3CvertexIndexU3E5__15_17; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__15_17() { return &___U3CvertexIndexU3E5__15_17; }
	inline void set_U3CvertexIndexU3E5__15_17(int32_t value)
	{
		___U3CvertexIndexU3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3CsourceVerticesU3E5__16_18() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CsourceVerticesU3E5__16_18)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CsourceVerticesU3E5__16_18() const { return ___U3CsourceVerticesU3E5__16_18; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CsourceVerticesU3E5__16_18() { return &___U3CsourceVerticesU3E5__16_18; }
	inline void set_U3CsourceVerticesU3E5__16_18(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CsourceVerticesU3E5__16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceVerticesU3E5__16_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrandomScaleU3E5__17_19() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CrandomScaleU3E5__17_19)); }
	inline float get_U3CrandomScaleU3E5__17_19() const { return ___U3CrandomScaleU3E5__17_19; }
	inline float* get_address_of_U3CrandomScaleU3E5__17_19() { return &___U3CrandomScaleU3E5__17_19; }
	inline void set_U3CrandomScaleU3E5__17_19(float value)
	{
		___U3CrandomScaleU3E5__17_19 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__18_20() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155, ___U3CiU3E5__18_20)); }
	inline int32_t get_U3CiU3E5__18_20() const { return ___U3CiU3E5__18_20; }
	inline int32_t* get_address_of_U3CiU3E5__18_20() { return &___U3CiU3E5__18_20; }
	inline void set_U3CiU3E5__18_20(int32_t value)
	{
		___U3CiU3E5__18_20 = value;
	}
};


// TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10
struct  U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeB TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<>4__this
	VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<textInfo>5__1
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<matrix>5__2
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__2_4;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* ___U3CcopyOfVerticesU3E5__3_5;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<characterCount>5__4
	int32_t ___U3CcharacterCountU3E5__4_6;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<lineCount>5__5
	int32_t ___U3ClineCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<length>5__7
	int32_t ___U3ClengthU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<first>5__9
	int32_t ___U3CfirstU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<last>5__10
	int32_t ___U3ClastU3E5__10_12;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<centerOfLine>5__11
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcenterOfLineU3E5__11_13;
	// UnityEngine.Quaternion TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<rotation>5__12
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3E5__12_14;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<j>5__13
	int32_t ___U3CjU3E5__13_15;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<materialIndex>5__14
	int32_t ___U3CmaterialIndexU3E5__14_16;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<vertexIndex>5__15
	int32_t ___U3CvertexIndexU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<sourceVertices>5__16
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CsourceVerticesU3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<charCenter>5__17
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcharCenterU3E5__17_19;
	// System.Single TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<randomScale>5__18
	float ___U3CrandomScaleU3E5__18_20;
	// System.Int32 TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::<i>5__19
	int32_t ___U3CiU3E5__19_21;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CU3E4__this_2)); }
	inline VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CtextInfoU3E5__1_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__1_3() const { return ___U3CtextInfoU3E5__1_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__1_3() { return &___U3CtextInfoU3E5__1_3; }
	inline void set_U3CtextInfoU3E5__1_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CmatrixU3E5__2_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__2_4() const { return ___U3CmatrixU3E5__2_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__2_4() { return &___U3CmatrixU3E5__2_4; }
	inline void set_U3CmatrixU3E5__2_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CcopyOfVerticesU3E5__3_5)); }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* get_U3CcopyOfVerticesU3E5__3_5() const { return ___U3CcopyOfVerticesU3E5__3_5; }
	inline Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB** get_address_of_U3CcopyOfVerticesU3E5__3_5() { return &___U3CcopyOfVerticesU3E5__3_5; }
	inline void set_U3CcopyOfVerticesU3E5__3_5(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* value)
	{
		___U3CcopyOfVerticesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcopyOfVerticesU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CcharacterCountU3E5__4_6)); }
	inline int32_t get_U3CcharacterCountU3E5__4_6() const { return ___U3CcharacterCountU3E5__4_6; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__4_6() { return &___U3CcharacterCountU3E5__4_6; }
	inline void set_U3CcharacterCountU3E5__4_6(int32_t value)
	{
		___U3CcharacterCountU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3ClineCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3ClineCountU3E5__5_7)); }
	inline int32_t get_U3ClineCountU3E5__5_7() const { return ___U3ClineCountU3E5__5_7; }
	inline int32_t* get_address_of_U3ClineCountU3E5__5_7() { return &___U3ClineCountU3E5__5_7; }
	inline void set_U3ClineCountU3E5__5_7(int32_t value)
	{
		___U3ClineCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CiU3E5__6_8)); }
	inline int32_t get_U3CiU3E5__6_8() const { return ___U3CiU3E5__6_8; }
	inline int32_t* get_address_of_U3CiU3E5__6_8() { return &___U3CiU3E5__6_8; }
	inline void set_U3CiU3E5__6_8(int32_t value)
	{
		___U3CiU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3ClengthU3E5__7_9)); }
	inline int32_t get_U3ClengthU3E5__7_9() const { return ___U3ClengthU3E5__7_9; }
	inline int32_t* get_address_of_U3ClengthU3E5__7_9() { return &___U3ClengthU3E5__7_9; }
	inline void set_U3ClengthU3E5__7_9(int32_t value)
	{
		___U3ClengthU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CiU3E5__8_10)); }
	inline int32_t get_U3CiU3E5__8_10() const { return ___U3CiU3E5__8_10; }
	inline int32_t* get_address_of_U3CiU3E5__8_10() { return &___U3CiU3E5__8_10; }
	inline void set_U3CiU3E5__8_10(int32_t value)
	{
		___U3CiU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CfirstU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CfirstU3E5__9_11)); }
	inline int32_t get_U3CfirstU3E5__9_11() const { return ___U3CfirstU3E5__9_11; }
	inline int32_t* get_address_of_U3CfirstU3E5__9_11() { return &___U3CfirstU3E5__9_11; }
	inline void set_U3CfirstU3E5__9_11(int32_t value)
	{
		___U3CfirstU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3ClastU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3ClastU3E5__10_12)); }
	inline int32_t get_U3ClastU3E5__10_12() const { return ___U3ClastU3E5__10_12; }
	inline int32_t* get_address_of_U3ClastU3E5__10_12() { return &___U3ClastU3E5__10_12; }
	inline void set_U3ClastU3E5__10_12(int32_t value)
	{
		___U3ClastU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CcenterOfLineU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CcenterOfLineU3E5__11_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcenterOfLineU3E5__11_13() const { return ___U3CcenterOfLineU3E5__11_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcenterOfLineU3E5__11_13() { return &___U3CcenterOfLineU3E5__11_13; }
	inline void set_U3CcenterOfLineU3E5__11_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcenterOfLineU3E5__11_13 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CrotationU3E5__12_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3E5__12_14() const { return ___U3CrotationU3E5__12_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3E5__12_14() { return &___U3CrotationU3E5__12_14; }
	inline void set_U3CrotationU3E5__12_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CjU3E5__13_15() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CjU3E5__13_15)); }
	inline int32_t get_U3CjU3E5__13_15() const { return ___U3CjU3E5__13_15; }
	inline int32_t* get_address_of_U3CjU3E5__13_15() { return &___U3CjU3E5__13_15; }
	inline void set_U3CjU3E5__13_15(int32_t value)
	{
		___U3CjU3E5__13_15 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__14_16() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CmaterialIndexU3E5__14_16)); }
	inline int32_t get_U3CmaterialIndexU3E5__14_16() const { return ___U3CmaterialIndexU3E5__14_16; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__14_16() { return &___U3CmaterialIndexU3E5__14_16; }
	inline void set_U3CmaterialIndexU3E5__14_16(int32_t value)
	{
		___U3CmaterialIndexU3E5__14_16 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__15_17() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CvertexIndexU3E5__15_17)); }
	inline int32_t get_U3CvertexIndexU3E5__15_17() const { return ___U3CvertexIndexU3E5__15_17; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__15_17() { return &___U3CvertexIndexU3E5__15_17; }
	inline void set_U3CvertexIndexU3E5__15_17(int32_t value)
	{
		___U3CvertexIndexU3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3CsourceVerticesU3E5__16_18() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CsourceVerticesU3E5__16_18)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CsourceVerticesU3E5__16_18() const { return ___U3CsourceVerticesU3E5__16_18; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CsourceVerticesU3E5__16_18() { return &___U3CsourceVerticesU3E5__16_18; }
	inline void set_U3CsourceVerticesU3E5__16_18(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CsourceVerticesU3E5__16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceVerticesU3E5__16_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharCenterU3E5__17_19() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CcharCenterU3E5__17_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcharCenterU3E5__17_19() const { return ___U3CcharCenterU3E5__17_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcharCenterU3E5__17_19() { return &___U3CcharCenterU3E5__17_19; }
	inline void set_U3CcharCenterU3E5__17_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcharCenterU3E5__17_19 = value;
	}

	inline static int32_t get_offset_of_U3CrandomScaleU3E5__18_20() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CrandomScaleU3E5__18_20)); }
	inline float get_U3CrandomScaleU3E5__18_20() const { return ___U3CrandomScaleU3E5__18_20; }
	inline float* get_address_of_U3CrandomScaleU3E5__18_20() { return &___U3CrandomScaleU3E5__18_20; }
	inline void set_U3CrandomScaleU3E5__18_20(float value)
	{
		___U3CrandomScaleU3E5__18_20 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__19_21() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6, ___U3CiU3E5__19_21)); }
	inline int32_t get_U3CiU3E5__19_21() const { return ___U3CiU3E5__19_21; }
	inline int32_t* get_address_of_U3CiU3E5__19_21() { return &___U3CiU3E5__19_21; }
	inline void set_U3CiU3E5__19_21(int32_t value)
	{
		___U3CiU3E5__19_21 = value;
	}
};


// TMPro.Examples.WarpTextExample_<WarpText>d__8
struct  U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample_<WarpText>d__8::<>4__this
	WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3[] TMPro.Examples.WarpTextExample_<WarpText>d__8::<vertices>5__1
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CverticesU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.WarpTextExample_<WarpText>d__8::<matrix>5__2
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__2_4;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<old_CurveScale>5__3
	float ___U3Cold_CurveScaleU3E5__3_5;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample_<WarpText>d__8::<old_curve>5__4
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3Cold_curveU3E5__4_6;
	// TMPro.TMP_TextInfo TMPro.Examples.WarpTextExample_<WarpText>d__8::<textInfo>5__5
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__5_7;
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<characterCount>5__6
	int32_t ___U3CcharacterCountU3E5__6_8;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<boundsMinX>5__7
	float ___U3CboundsMinXU3E5__7_9;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<boundsMaxX>5__8
	float ___U3CboundsMaxXU3E5__8_10;
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<i>5__9
	int32_t ___U3CiU3E5__9_11;
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<vertexIndex>5__10
	int32_t ___U3CvertexIndexU3E5__10_12;
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<materialIndex>5__11
	int32_t ___U3CmaterialIndexU3E5__11_13;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample_<WarpText>d__8::<offsetToMidBaseline>5__12
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoffsetToMidBaselineU3E5__12_14;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<x0>5__13
	float ___U3Cx0U3E5__13_15;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<x1>5__14
	float ___U3Cx1U3E5__14_16;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<y0>5__15
	float ___U3Cy0U3E5__15_17;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<y1>5__16
	float ___U3Cy1U3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample_<WarpText>d__8::<horizontal>5__17
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ChorizontalU3E5__17_19;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample_<WarpText>d__8::<tangent>5__18
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtangentU3E5__18_20;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<dot>5__19
	float ___U3CdotU3E5__19_21;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample_<WarpText>d__8::<cross>5__20
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcrossU3E5__20_22;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<angle>5__21
	float ___U3CangleU3E5__21_23;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CU3E4__this_2)); }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CverticesU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CverticesU3E5__1_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CverticesU3E5__1_3() const { return ___U3CverticesU3E5__1_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CverticesU3E5__1_3() { return &___U3CverticesU3E5__1_3; }
	inline void set_U3CverticesU3E5__1_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CverticesU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CverticesU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CmatrixU3E5__2_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__2_4() const { return ___U3CmatrixU3E5__2_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__2_4() { return &___U3CmatrixU3E5__2_4; }
	inline void set_U3CmatrixU3E5__2_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_CurveScaleU3E5__3_5)); }
	inline float get_U3Cold_CurveScaleU3E5__3_5() const { return ___U3Cold_CurveScaleU3E5__3_5; }
	inline float* get_address_of_U3Cold_CurveScaleU3E5__3_5() { return &___U3Cold_CurveScaleU3E5__3_5; }
	inline void set_U3Cold_CurveScaleU3E5__3_5(float value)
	{
		___U3Cold_CurveScaleU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cold_curveU3E5__4_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3Cold_curveU3E5__4_6() const { return ___U3Cold_curveU3E5__4_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3Cold_curveU3E5__4_6() { return &___U3Cold_curveU3E5__4_6; }
	inline void set_U3Cold_curveU3E5__4_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3Cold_curveU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cold_curveU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CtextInfoU3E5__5_7)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__5_7() const { return ___U3CtextInfoU3E5__5_7; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__5_7() { return &___U3CtextInfoU3E5__5_7; }
	inline void set_U3CtextInfoU3E5__5_7(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CcharacterCountU3E5__6_8)); }
	inline int32_t get_U3CcharacterCountU3E5__6_8() const { return ___U3CcharacterCountU3E5__6_8; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__6_8() { return &___U3CcharacterCountU3E5__6_8; }
	inline void set_U3CcharacterCountU3E5__6_8(int32_t value)
	{
		___U3CcharacterCountU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMinXU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CboundsMinXU3E5__7_9)); }
	inline float get_U3CboundsMinXU3E5__7_9() const { return ___U3CboundsMinXU3E5__7_9; }
	inline float* get_address_of_U3CboundsMinXU3E5__7_9() { return &___U3CboundsMinXU3E5__7_9; }
	inline void set_U3CboundsMinXU3E5__7_9(float value)
	{
		___U3CboundsMinXU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMaxXU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CboundsMaxXU3E5__8_10)); }
	inline float get_U3CboundsMaxXU3E5__8_10() const { return ___U3CboundsMaxXU3E5__8_10; }
	inline float* get_address_of_U3CboundsMaxXU3E5__8_10() { return &___U3CboundsMaxXU3E5__8_10; }
	inline void set_U3CboundsMaxXU3E5__8_10(float value)
	{
		___U3CboundsMaxXU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CiU3E5__9_11)); }
	inline int32_t get_U3CiU3E5__9_11() const { return ___U3CiU3E5__9_11; }
	inline int32_t* get_address_of_U3CiU3E5__9_11() { return &___U3CiU3E5__9_11; }
	inline void set_U3CiU3E5__9_11(int32_t value)
	{
		___U3CiU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CvertexIndexU3E5__10_12)); }
	inline int32_t get_U3CvertexIndexU3E5__10_12() const { return ___U3CvertexIndexU3E5__10_12; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__10_12() { return &___U3CvertexIndexU3E5__10_12; }
	inline void set_U3CvertexIndexU3E5__10_12(int32_t value)
	{
		___U3CvertexIndexU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CmaterialIndexU3E5__11_13)); }
	inline int32_t get_U3CmaterialIndexU3E5__11_13() const { return ___U3CmaterialIndexU3E5__11_13; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__11_13() { return &___U3CmaterialIndexU3E5__11_13; }
	inline void set_U3CmaterialIndexU3E5__11_13(int32_t value)
	{
		___U3CmaterialIndexU3E5__11_13 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetToMidBaselineU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CoffsetToMidBaselineU3E5__12_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoffsetToMidBaselineU3E5__12_14() const { return ___U3CoffsetToMidBaselineU3E5__12_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoffsetToMidBaselineU3E5__12_14() { return &___U3CoffsetToMidBaselineU3E5__12_14; }
	inline void set_U3CoffsetToMidBaselineU3E5__12_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoffsetToMidBaselineU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3Cx0U3E5__13_15() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cx0U3E5__13_15)); }
	inline float get_U3Cx0U3E5__13_15() const { return ___U3Cx0U3E5__13_15; }
	inline float* get_address_of_U3Cx0U3E5__13_15() { return &___U3Cx0U3E5__13_15; }
	inline void set_U3Cx0U3E5__13_15(float value)
	{
		___U3Cx0U3E5__13_15 = value;
	}

	inline static int32_t get_offset_of_U3Cx1U3E5__14_16() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cx1U3E5__14_16)); }
	inline float get_U3Cx1U3E5__14_16() const { return ___U3Cx1U3E5__14_16; }
	inline float* get_address_of_U3Cx1U3E5__14_16() { return &___U3Cx1U3E5__14_16; }
	inline void set_U3Cx1U3E5__14_16(float value)
	{
		___U3Cx1U3E5__14_16 = value;
	}

	inline static int32_t get_offset_of_U3Cy0U3E5__15_17() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cy0U3E5__15_17)); }
	inline float get_U3Cy0U3E5__15_17() const { return ___U3Cy0U3E5__15_17; }
	inline float* get_address_of_U3Cy0U3E5__15_17() { return &___U3Cy0U3E5__15_17; }
	inline void set_U3Cy0U3E5__15_17(float value)
	{
		___U3Cy0U3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3Cy1U3E5__16_18() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3Cy1U3E5__16_18)); }
	inline float get_U3Cy1U3E5__16_18() const { return ___U3Cy1U3E5__16_18; }
	inline float* get_address_of_U3Cy1U3E5__16_18() { return &___U3Cy1U3E5__16_18; }
	inline void set_U3Cy1U3E5__16_18(float value)
	{
		___U3Cy1U3E5__16_18 = value;
	}

	inline static int32_t get_offset_of_U3ChorizontalU3E5__17_19() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3ChorizontalU3E5__17_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ChorizontalU3E5__17_19() const { return ___U3ChorizontalU3E5__17_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ChorizontalU3E5__17_19() { return &___U3ChorizontalU3E5__17_19; }
	inline void set_U3ChorizontalU3E5__17_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ChorizontalU3E5__17_19 = value;
	}

	inline static int32_t get_offset_of_U3CtangentU3E5__18_20() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CtangentU3E5__18_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtangentU3E5__18_20() const { return ___U3CtangentU3E5__18_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtangentU3E5__18_20() { return &___U3CtangentU3E5__18_20; }
	inline void set_U3CtangentU3E5__18_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtangentU3E5__18_20 = value;
	}

	inline static int32_t get_offset_of_U3CdotU3E5__19_21() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CdotU3E5__19_21)); }
	inline float get_U3CdotU3E5__19_21() const { return ___U3CdotU3E5__19_21; }
	inline float* get_address_of_U3CdotU3E5__19_21() { return &___U3CdotU3E5__19_21; }
	inline void set_U3CdotU3E5__19_21(float value)
	{
		___U3CdotU3E5__19_21 = value;
	}

	inline static int32_t get_offset_of_U3CcrossU3E5__20_22() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CcrossU3E5__20_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcrossU3E5__20_22() const { return ___U3CcrossU3E5__20_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcrossU3E5__20_22() { return &___U3CcrossU3E5__20_22; }
	inline void set_U3CcrossU3E5__20_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcrossU3E5__20_22 = value;
	}

	inline static int32_t get_offset_of_U3CangleU3E5__21_23() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76, ___U3CangleU3E5__21_23)); }
	inline float get_U3CangleU3E5__21_23() const { return ___U3CangleU3E5__21_23; }
	inline float* get_address_of_U3CangleU3E5__21_23() { return &___U3CangleU3E5__21_23; }
	inline void set_U3CangleU3E5__21_23(float value)
	{
		___U3CangleU3E5__21_23 = value;
	}
};


// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct  MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextInfo
struct  TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_Vertex
struct  TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// TMPro.TMP_VertexDataUpdateFlags
struct  TMP_VertexDataUpdateFlags_tE7C38BDA9FC5B09848F4412694FFA8AEC56C4782 
{
public:
	// System.Int32 TMPro.TMP_VertexDataUpdateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_VertexDataUpdateFlags_tE7C38BDA9FC5B09848F4412694FFA8AEC56C4782, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
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

// UnityEngine.WrapMode
struct  WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
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


// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_MeshInfo
struct  TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Comparison`1<System.Int32>
struct  Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C  : public MulticastDelegate_t
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


// TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11
struct  U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexJitter TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<>4__this
	VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<textInfo>5__1
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<matrix>5__2
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__2_4;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<loopCount>5__3
	int32_t ___U3CloopCountU3E5__3_5;
	// TMPro.Examples.VertexJitter_VertexAnim[] TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<vertexAnim>5__4
	VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* ___U3CvertexAnimU3E5__4_6;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<cachedMeshInfo>5__5
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___U3CcachedMeshInfoU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<characterCount>5__7
	int32_t ___U3CcharacterCountU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// TMPro.TMP_CharacterInfo TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<charInfo>5__9
	TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  ___U3CcharInfoU3E5__9_11;
	// TMPro.Examples.VertexJitter_VertexAnim TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<vertAnim>5__10
	VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  ___U3CvertAnimU3E5__10_12;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<materialIndex>5__11
	int32_t ___U3CmaterialIndexU3E5__11_13;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<vertexIndex>5__12
	int32_t ___U3CvertexIndexU3E5__12_14;
	// UnityEngine.Vector3[] TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<sourceVertices>5__13
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CsourceVerticesU3E5__13_15;
	// UnityEngine.Vector2 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<charMidBasline>5__14
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CcharMidBaslineU3E5__14_16;
	// UnityEngine.Vector3 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<offset>5__15
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoffsetU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<destinationVertices>5__16
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CdestinationVerticesU3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<jitterOffset>5__17
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CjitterOffsetU3E5__17_19;
	// System.Int32 TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::<i>5__18
	int32_t ___U3CiU3E5__18_20;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CU3E4__this_2)); }
	inline VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CtextInfoU3E5__1_3)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__1_3() const { return ___U3CtextInfoU3E5__1_3; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__1_3() { return &___U3CtextInfoU3E5__1_3; }
	inline void set_U3CtextInfoU3E5__1_3(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CmatrixU3E5__2_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__2_4() const { return ___U3CmatrixU3E5__2_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__2_4() { return &___U3CmatrixU3E5__2_4; }
	inline void set_U3CmatrixU3E5__2_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CloopCountU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CloopCountU3E5__3_5)); }
	inline int32_t get_U3CloopCountU3E5__3_5() const { return ___U3CloopCountU3E5__3_5; }
	inline int32_t* get_address_of_U3CloopCountU3E5__3_5() { return &___U3CloopCountU3E5__3_5; }
	inline void set_U3CloopCountU3E5__3_5(int32_t value)
	{
		___U3CloopCountU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CvertexAnimU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CvertexAnimU3E5__4_6)); }
	inline VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* get_U3CvertexAnimU3E5__4_6() const { return ___U3CvertexAnimU3E5__4_6; }
	inline VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF** get_address_of_U3CvertexAnimU3E5__4_6() { return &___U3CvertexAnimU3E5__4_6; }
	inline void set_U3CvertexAnimU3E5__4_6(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* value)
	{
		___U3CvertexAnimU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvertexAnimU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CcachedMeshInfoU3E5__5_7)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_U3CcachedMeshInfoU3E5__5_7() const { return ___U3CcachedMeshInfoU3E5__5_7; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_U3CcachedMeshInfoU3E5__5_7() { return &___U3CcachedMeshInfoU3E5__5_7; }
	inline void set_U3CcachedMeshInfoU3E5__5_7(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___U3CcachedMeshInfoU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedMeshInfoU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CiU3E5__6_8)); }
	inline int32_t get_U3CiU3E5__6_8() const { return ___U3CiU3E5__6_8; }
	inline int32_t* get_address_of_U3CiU3E5__6_8() { return &___U3CiU3E5__6_8; }
	inline void set_U3CiU3E5__6_8(int32_t value)
	{
		___U3CiU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CcharacterCountU3E5__7_9)); }
	inline int32_t get_U3CcharacterCountU3E5__7_9() const { return ___U3CcharacterCountU3E5__7_9; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__7_9() { return &___U3CcharacterCountU3E5__7_9; }
	inline void set_U3CcharacterCountU3E5__7_9(int32_t value)
	{
		___U3CcharacterCountU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CiU3E5__8_10)); }
	inline int32_t get_U3CiU3E5__8_10() const { return ___U3CiU3E5__8_10; }
	inline int32_t* get_address_of_U3CiU3E5__8_10() { return &___U3CiU3E5__8_10; }
	inline void set_U3CiU3E5__8_10(int32_t value)
	{
		___U3CiU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CcharInfoU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CcharInfoU3E5__9_11)); }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  get_U3CcharInfoU3E5__9_11() const { return ___U3CcharInfoU3E5__9_11; }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * get_address_of_U3CcharInfoU3E5__9_11() { return &___U3CcharInfoU3E5__9_11; }
	inline void set_U3CcharInfoU3E5__9_11(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		___U3CcharInfoU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__9_11))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__9_11))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__9_11))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__9_11))->___material_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvertAnimU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CvertAnimU3E5__10_12)); }
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  get_U3CvertAnimU3E5__10_12() const { return ___U3CvertAnimU3E5__10_12; }
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * get_address_of_U3CvertAnimU3E5__10_12() { return &___U3CvertAnimU3E5__10_12; }
	inline void set_U3CvertAnimU3E5__10_12(VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  value)
	{
		___U3CvertAnimU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CmaterialIndexU3E5__11_13)); }
	inline int32_t get_U3CmaterialIndexU3E5__11_13() const { return ___U3CmaterialIndexU3E5__11_13; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__11_13() { return &___U3CmaterialIndexU3E5__11_13; }
	inline void set_U3CmaterialIndexU3E5__11_13(int32_t value)
	{
		___U3CmaterialIndexU3E5__11_13 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CvertexIndexU3E5__12_14)); }
	inline int32_t get_U3CvertexIndexU3E5__12_14() const { return ___U3CvertexIndexU3E5__12_14; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__12_14() { return &___U3CvertexIndexU3E5__12_14; }
	inline void set_U3CvertexIndexU3E5__12_14(int32_t value)
	{
		___U3CvertexIndexU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CsourceVerticesU3E5__13_15() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CsourceVerticesU3E5__13_15)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CsourceVerticesU3E5__13_15() const { return ___U3CsourceVerticesU3E5__13_15; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CsourceVerticesU3E5__13_15() { return &___U3CsourceVerticesU3E5__13_15; }
	inline void set_U3CsourceVerticesU3E5__13_15(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CsourceVerticesU3E5__13_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceVerticesU3E5__13_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharMidBaslineU3E5__14_16() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CcharMidBaslineU3E5__14_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CcharMidBaslineU3E5__14_16() const { return ___U3CcharMidBaslineU3E5__14_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CcharMidBaslineU3E5__14_16() { return &___U3CcharMidBaslineU3E5__14_16; }
	inline void set_U3CcharMidBaslineU3E5__14_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CcharMidBaslineU3E5__14_16 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetU3E5__15_17() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CoffsetU3E5__15_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoffsetU3E5__15_17() const { return ___U3CoffsetU3E5__15_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoffsetU3E5__15_17() { return &___U3CoffsetU3E5__15_17; }
	inline void set_U3CoffsetU3E5__15_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoffsetU3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3CdestinationVerticesU3E5__16_18() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CdestinationVerticesU3E5__16_18)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CdestinationVerticesU3E5__16_18() const { return ___U3CdestinationVerticesU3E5__16_18; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CdestinationVerticesU3E5__16_18() { return &___U3CdestinationVerticesU3E5__16_18; }
	inline void set_U3CdestinationVerticesU3E5__16_18(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CdestinationVerticesU3E5__16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationVerticesU3E5__16_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjitterOffsetU3E5__17_19() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CjitterOffsetU3E5__17_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CjitterOffsetU3E5__17_19() const { return ___U3CjitterOffsetU3E5__17_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CjitterOffsetU3E5__17_19() { return &___U3CjitterOffsetU3E5__17_19; }
	inline void set_U3CjitterOffsetU3E5__17_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CjitterOffsetU3E5__17_19 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__18_20() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741, ___U3CiU3E5__18_20)); }
	inline int32_t get_U3CiU3E5__18_20() const { return ___U3CiU3E5__18_20; }
	inline int32_t* get_address_of_U3CiU3E5__18_20() { return &___U3CiU3E5__18_20; }
	inline void set_U3CiU3E5__18_20(int32_t value)
	{
		___U3CiU3E5__18_20 = value;
	}
};


// TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10
struct  U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<>4__this
	VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * ___U3CU3E4__this_2;
	// TMPro.Examples.VertexZoom_<>c__DisplayClass10_0 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * ___U3CU3E8__1_3;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__2_4;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<matrix>5__3
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__3_5;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<cachedMeshInfoVertexData>5__4
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___U3CcachedMeshInfoVertexDataU3E5__4_6;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<scaleSortingOrder>5__5
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CscaleSortingOrderU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<characterCount>5__6
	int32_t ___U3CcharacterCountU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<i>5__7
	int32_t ___U3CiU3E5__7_9;
	// TMPro.TMP_CharacterInfo TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<charInfo>5__8
	TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  ___U3CcharInfoU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<materialIndex>5__9
	int32_t ___U3CmaterialIndexU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<vertexIndex>5__10
	int32_t ___U3CvertexIndexU3E5__10_12;
	// UnityEngine.Vector3[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<sourceVertices>5__11
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CsourceVerticesU3E5__11_13;
	// UnityEngine.Vector2 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<charMidBasline>5__12
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CcharMidBaslineU3E5__12_14;
	// UnityEngine.Vector3 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<offset>5__13
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoffsetU3E5__13_15;
	// UnityEngine.Vector3[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<destinationVertices>5__14
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CdestinationVerticesU3E5__14_16;
	// System.Single TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<randomScale>5__15
	float ___U3CrandomScaleU3E5__15_17;
	// UnityEngine.Vector2[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<sourceUVs0>5__16
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CsourceUVs0U3E5__16_18;
	// UnityEngine.Vector2[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<destinationUVs0>5__17
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CdestinationUVs0U3E5__17_19;
	// UnityEngine.Color32[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<sourceColors32>5__18
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___U3CsourceColors32U3E5__18_20;
	// UnityEngine.Color32[] TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<destinationColors32>5__19
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___U3CdestinationColors32U3E5__19_21;
	// System.Int32 TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::<i>5__20
	int32_t ___U3CiU3E5__20_22;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E4__this_2)); }
	inline VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CtextInfoU3E5__2_4)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__2_4() const { return ___U3CtextInfoU3E5__2_4; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__2_4() { return &___U3CtextInfoU3E5__2_4; }
	inline void set_U3CtextInfoU3E5__2_4(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CmatrixU3E5__3_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__3_5() const { return ___U3CmatrixU3E5__3_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__3_5() { return &___U3CmatrixU3E5__3_5; }
	inline void set_U3CmatrixU3E5__3_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoVertexDataU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CcachedMeshInfoVertexDataU3E5__4_6)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_U3CcachedMeshInfoVertexDataU3E5__4_6() const { return ___U3CcachedMeshInfoVertexDataU3E5__4_6; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_U3CcachedMeshInfoVertexDataU3E5__4_6() { return &___U3CcachedMeshInfoVertexDataU3E5__4_6; }
	inline void set_U3CcachedMeshInfoVertexDataU3E5__4_6(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___U3CcachedMeshInfoVertexDataU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedMeshInfoVertexDataU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CscaleSortingOrderU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CscaleSortingOrderU3E5__5_7)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CscaleSortingOrderU3E5__5_7() const { return ___U3CscaleSortingOrderU3E5__5_7; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CscaleSortingOrderU3E5__5_7() { return &___U3CscaleSortingOrderU3E5__5_7; }
	inline void set_U3CscaleSortingOrderU3E5__5_7(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CscaleSortingOrderU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CscaleSortingOrderU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CcharacterCountU3E5__6_8)); }
	inline int32_t get_U3CcharacterCountU3E5__6_8() const { return ___U3CcharacterCountU3E5__6_8; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__6_8() { return &___U3CcharacterCountU3E5__6_8; }
	inline void set_U3CcharacterCountU3E5__6_8(int32_t value)
	{
		___U3CcharacterCountU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CiU3E5__7_9)); }
	inline int32_t get_U3CiU3E5__7_9() const { return ___U3CiU3E5__7_9; }
	inline int32_t* get_address_of_U3CiU3E5__7_9() { return &___U3CiU3E5__7_9; }
	inline void set_U3CiU3E5__7_9(int32_t value)
	{
		___U3CiU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CcharInfoU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CcharInfoU3E5__8_10)); }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  get_U3CcharInfoU3E5__8_10() const { return ___U3CcharInfoU3E5__8_10; }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * get_address_of_U3CcharInfoU3E5__8_10() { return &___U3CcharInfoU3E5__8_10; }
	inline void set_U3CcharInfoU3E5__8_10(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		___U3CcharInfoU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__8_10))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__8_10))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__8_10))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__8_10))->___material_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CmaterialIndexU3E5__9_11)); }
	inline int32_t get_U3CmaterialIndexU3E5__9_11() const { return ___U3CmaterialIndexU3E5__9_11; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__9_11() { return &___U3CmaterialIndexU3E5__9_11; }
	inline void set_U3CmaterialIndexU3E5__9_11(int32_t value)
	{
		___U3CmaterialIndexU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CvertexIndexU3E5__10_12)); }
	inline int32_t get_U3CvertexIndexU3E5__10_12() const { return ___U3CvertexIndexU3E5__10_12; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__10_12() { return &___U3CvertexIndexU3E5__10_12; }
	inline void set_U3CvertexIndexU3E5__10_12(int32_t value)
	{
		___U3CvertexIndexU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CsourceVerticesU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CsourceVerticesU3E5__11_13)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CsourceVerticesU3E5__11_13() const { return ___U3CsourceVerticesU3E5__11_13; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CsourceVerticesU3E5__11_13() { return &___U3CsourceVerticesU3E5__11_13; }
	inline void set_U3CsourceVerticesU3E5__11_13(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CsourceVerticesU3E5__11_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceVerticesU3E5__11_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharMidBaslineU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CcharMidBaslineU3E5__12_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CcharMidBaslineU3E5__12_14() const { return ___U3CcharMidBaslineU3E5__12_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CcharMidBaslineU3E5__12_14() { return &___U3CcharMidBaslineU3E5__12_14; }
	inline void set_U3CcharMidBaslineU3E5__12_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CcharMidBaslineU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetU3E5__13_15() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CoffsetU3E5__13_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoffsetU3E5__13_15() const { return ___U3CoffsetU3E5__13_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoffsetU3E5__13_15() { return &___U3CoffsetU3E5__13_15; }
	inline void set_U3CoffsetU3E5__13_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoffsetU3E5__13_15 = value;
	}

	inline static int32_t get_offset_of_U3CdestinationVerticesU3E5__14_16() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CdestinationVerticesU3E5__14_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CdestinationVerticesU3E5__14_16() const { return ___U3CdestinationVerticesU3E5__14_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CdestinationVerticesU3E5__14_16() { return &___U3CdestinationVerticesU3E5__14_16; }
	inline void set_U3CdestinationVerticesU3E5__14_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CdestinationVerticesU3E5__14_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationVerticesU3E5__14_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrandomScaleU3E5__15_17() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CrandomScaleU3E5__15_17)); }
	inline float get_U3CrandomScaleU3E5__15_17() const { return ___U3CrandomScaleU3E5__15_17; }
	inline float* get_address_of_U3CrandomScaleU3E5__15_17() { return &___U3CrandomScaleU3E5__15_17; }
	inline void set_U3CrandomScaleU3E5__15_17(float value)
	{
		___U3CrandomScaleU3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3CsourceUVs0U3E5__16_18() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CsourceUVs0U3E5__16_18)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CsourceUVs0U3E5__16_18() const { return ___U3CsourceUVs0U3E5__16_18; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CsourceUVs0U3E5__16_18() { return &___U3CsourceUVs0U3E5__16_18; }
	inline void set_U3CsourceUVs0U3E5__16_18(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CsourceUVs0U3E5__16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceUVs0U3E5__16_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationUVs0U3E5__17_19() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CdestinationUVs0U3E5__17_19)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CdestinationUVs0U3E5__17_19() const { return ___U3CdestinationUVs0U3E5__17_19; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CdestinationUVs0U3E5__17_19() { return &___U3CdestinationUVs0U3E5__17_19; }
	inline void set_U3CdestinationUVs0U3E5__17_19(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CdestinationUVs0U3E5__17_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationUVs0U3E5__17_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceColors32U3E5__18_20() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CsourceColors32U3E5__18_20)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_U3CsourceColors32U3E5__18_20() const { return ___U3CsourceColors32U3E5__18_20; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_U3CsourceColors32U3E5__18_20() { return &___U3CsourceColors32U3E5__18_20; }
	inline void set_U3CsourceColors32U3E5__18_20(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___U3CsourceColors32U3E5__18_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceColors32U3E5__18_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationColors32U3E5__19_21() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CdestinationColors32U3E5__19_21)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_U3CdestinationColors32U3E5__19_21() const { return ___U3CdestinationColors32U3E5__19_21; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_U3CdestinationColors32U3E5__19_21() { return &___U3CdestinationColors32U3E5__19_21; }
	inline void set_U3CdestinationColors32U3E5__19_21(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___U3CdestinationColors32U3E5__19_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationColors32U3E5__19_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__20_22() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40, ___U3CiU3E5__20_22)); }
	inline int32_t get_U3CiU3E5__20_22() const { return ___U3CiU3E5__20_22; }
	inline int32_t* get_address_of_U3CiU3E5__20_22() { return &___U3CiU3E5__20_22; }
	inline void set_U3CiU3E5__20_22(int32_t value)
	{
		___U3CiU3E5__20_22 = value;
	}
};


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_36)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_37)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_41)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_59)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_63)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// TMPro.Examples.VertexColorCycler
struct  VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.VertexColorCycler::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}
};


// TMPro.Examples.VertexJitter
struct  VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexJitter::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexJitter::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexJitter::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexJitter::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexJitter::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.VertexShakeA
struct  VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexShakeA::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeA::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeA::ScaleMultiplier
	float ___ScaleMultiplier_6;
	// System.Single TMPro.Examples.VertexShakeA::RotationMultiplier
	float ___RotationMultiplier_7;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeA::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_8;
	// System.Boolean TMPro.Examples.VertexShakeA::hasTextChanged
	bool ___hasTextChanged_9;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_ScaleMultiplier_6() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___ScaleMultiplier_6)); }
	inline float get_ScaleMultiplier_6() const { return ___ScaleMultiplier_6; }
	inline float* get_address_of_ScaleMultiplier_6() { return &___ScaleMultiplier_6; }
	inline void set_ScaleMultiplier_6(float value)
	{
		___ScaleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_RotationMultiplier_7() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___RotationMultiplier_7)); }
	inline float get_RotationMultiplier_7() const { return ___RotationMultiplier_7; }
	inline float* get_address_of_RotationMultiplier_7() { return &___RotationMultiplier_7; }
	inline void set_RotationMultiplier_7(float value)
	{
		___RotationMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_8() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___m_TextComponent_8)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_8() const { return ___m_TextComponent_8; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_8() { return &___m_TextComponent_8; }
	inline void set_m_TextComponent_8(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_8), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_9() { return static_cast<int32_t>(offsetof(VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A, ___hasTextChanged_9)); }
	inline bool get_hasTextChanged_9() const { return ___hasTextChanged_9; }
	inline bool* get_address_of_hasTextChanged_9() { return &___hasTextChanged_9; }
	inline void set_hasTextChanged_9(bool value)
	{
		___hasTextChanged_9 = value;
	}
};


// TMPro.Examples.VertexShakeB
struct  VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.VertexZoom
struct  VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_8;

public:
	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_7() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___m_TextComponent_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_7() const { return ___m_TextComponent_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_7() { return &___m_TextComponent_7; }
	inline void set_m_TextComponent_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasTextChanged_8() { return static_cast<int32_t>(offsetof(VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163, ___hasTextChanged_8)); }
	inline bool get_hasTextChanged_8() const { return ___hasTextChanged_8; }
	inline bool* get_address_of_hasTextChanged_8() { return &___hasTextChanged_8; }
	inline void set_hasTextChanged_8(bool value)
	{
		___hasTextChanged_8 = value;
	}
};


// TMPro.Examples.WarpTextExample
struct  WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___m_TextComponent_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_VertexCurve_5() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___VertexCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_VertexCurve_5() const { return ___VertexCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_VertexCurve_5() { return &___VertexCurve_5; }
	inline void set_VertexCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___VertexCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_AngleMultiplier_6() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___AngleMultiplier_6)); }
	inline float get_AngleMultiplier_6() const { return ___AngleMultiplier_6; }
	inline float* get_address_of_AngleMultiplier_6() { return &___AngleMultiplier_6; }
	inline void set_AngleMultiplier_6(float value)
	{
		___AngleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_7() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___SpeedMultiplier_7)); }
	inline float get_SpeedMultiplier_7() const { return ___SpeedMultiplier_7; }
	inline float* get_address_of_SpeedMultiplier_7() { return &___SpeedMultiplier_7; }
	inline void set_SpeedMultiplier_7(float value)
	{
		___SpeedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_CurveScale_8() { return static_cast<int32_t>(offsetof(WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96, ___CurveScale_8)); }
	inline float get_CurveScale_8() const { return ___CurveScale_8; }
	inline float* get_address_of_CurveScale_8() { return &___CurveScale_8; }
	inline void set_CurveScale_8(float value)
	{
		___CurveScale_8 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// basicItem
struct  basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single basicItem::speed
	float ___speed_4;
	// UnityEngine.Rigidbody basicItem::localRgb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___localRgb_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_localRgb_5() { return static_cast<int32_t>(offsetof(basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD, ___localRgb_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_localRgb_5() const { return ___localRgb_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_localRgb_5() { return &___localRgb_5; }
	inline void set_localRgb_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___localRgb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localRgb_5), (void*)value);
	}
};


// countDown
struct  countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TextMeshPro countDown::text
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977, ___text_4)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_text_4() const { return ___text_4; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// paddle
struct  paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Collider paddle::wall
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___wall_4;
	// UnityEngine.Collider paddle::wall2
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___wall2_5;
	// UnityEngine.Collider paddle::switchL
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___switchL_6;
	// UnityEngine.Collider paddle::switchR
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___switchR_7;
	// System.Boolean paddle::isPaddle1
	bool ___isPaddle1_8;
	// System.Single paddle::speed
	float ___speed_9;
	// UnityEngine.Vector3 paddle::touchPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___touchPosition_10;
	// UnityEngine.Vector3 paddle::tP2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___tP2_11;
	// UnityEngine.Rigidbody paddle::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_12;
	// UnityEngine.Vector3 paddle::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_13;
	// UnityEngine.GameObject paddle::brickWall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___brickWall_14;
	// UnityEngine.GameObject paddle::paddleP1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___paddleP1_15;
	// UnityEngine.GameObject paddle::paddle2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___paddle2_16;
	// System.Boolean paddle::isActive
	bool ___isActive_17;

public:
	inline static int32_t get_offset_of_wall_4() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___wall_4)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_wall_4() const { return ___wall_4; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_wall_4() { return &___wall_4; }
	inline void set_wall_4(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___wall_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall_4), (void*)value);
	}

	inline static int32_t get_offset_of_wall2_5() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___wall2_5)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_wall2_5() const { return ___wall2_5; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_wall2_5() { return &___wall2_5; }
	inline void set_wall2_5(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___wall2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall2_5), (void*)value);
	}

	inline static int32_t get_offset_of_switchL_6() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___switchL_6)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_switchL_6() const { return ___switchL_6; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_switchL_6() { return &___switchL_6; }
	inline void set_switchL_6(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___switchL_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchL_6), (void*)value);
	}

	inline static int32_t get_offset_of_switchR_7() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___switchR_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_switchR_7() const { return ___switchR_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_switchR_7() { return &___switchR_7; }
	inline void set_switchR_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___switchR_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchR_7), (void*)value);
	}

	inline static int32_t get_offset_of_isPaddle1_8() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___isPaddle1_8)); }
	inline bool get_isPaddle1_8() const { return ___isPaddle1_8; }
	inline bool* get_address_of_isPaddle1_8() { return &___isPaddle1_8; }
	inline void set_isPaddle1_8(bool value)
	{
		___isPaddle1_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_touchPosition_10() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___touchPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_touchPosition_10() const { return ___touchPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_touchPosition_10() { return &___touchPosition_10; }
	inline void set_touchPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___touchPosition_10 = value;
	}

	inline static int32_t get_offset_of_tP2_11() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___tP2_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_tP2_11() const { return ___tP2_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_tP2_11() { return &___tP2_11; }
	inline void set_tP2_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___tP2_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___rb_12)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_12), (void*)value);
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___direction_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_13() const { return ___direction_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_13 = value;
	}

	inline static int32_t get_offset_of_brickWall_14() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___brickWall_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_brickWall_14() const { return ___brickWall_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_brickWall_14() { return &___brickWall_14; }
	inline void set_brickWall_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___brickWall_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brickWall_14), (void*)value);
	}

	inline static int32_t get_offset_of_paddleP1_15() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___paddleP1_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_paddleP1_15() const { return ___paddleP1_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_paddleP1_15() { return &___paddleP1_15; }
	inline void set_paddleP1_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___paddleP1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paddleP1_15), (void*)value);
	}

	inline static int32_t get_offset_of_paddle2_16() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___paddle2_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_paddle2_16() const { return ___paddle2_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_paddle2_16() { return &___paddle2_16; }
	inline void set_paddle2_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___paddle2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paddle2_16), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_17() { return static_cast<int32_t>(offsetof(paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4, ___isActive_17)); }
	inline bool get_isActive_17() const { return ___isActive_17; }
	inline bool* get_address_of_isActive_17() { return &___isActive_17; }
	inline void set_isActive_17(bool value)
	{
		___isActive_17 = value;
	}
};


// spawner
struct  spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject spawner::gravBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gravBall_4;
	// UnityEngine.GameObject spawner::extendP
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___extendP_5;
	// UnityEngine.GameObject spawner::extraLife
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___extraLife_6;
	// UnityEngine.GameObject spawner::brickW
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___brickW_7;
	// UnityEngine.GameObject spawner::coin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coin_8;
	// UnityEngine.Transform spawner::node1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___node1_9;
	// System.Boolean spawner::spawnedBall
	bool ___spawnedBall_10;
	// System.Boolean spawner::spawnedItem
	bool ___spawnedItem_11;
	// System.Boolean spawner::spawnedCoin
	bool ___spawnedCoin_12;
	// UnityEngine.GameObject[] spawner::items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___items_13;
	// System.Int32 spawner::randItem
	int32_t ___randItem_14;

public:
	inline static int32_t get_offset_of_gravBall_4() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___gravBall_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gravBall_4() const { return ___gravBall_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gravBall_4() { return &___gravBall_4; }
	inline void set_gravBall_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gravBall_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravBall_4), (void*)value);
	}

	inline static int32_t get_offset_of_extendP_5() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___extendP_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_extendP_5() const { return ___extendP_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_extendP_5() { return &___extendP_5; }
	inline void set_extendP_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___extendP_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extendP_5), (void*)value);
	}

	inline static int32_t get_offset_of_extraLife_6() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___extraLife_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_extraLife_6() const { return ___extraLife_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_extraLife_6() { return &___extraLife_6; }
	inline void set_extraLife_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___extraLife_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraLife_6), (void*)value);
	}

	inline static int32_t get_offset_of_brickW_7() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___brickW_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_brickW_7() const { return ___brickW_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_brickW_7() { return &___brickW_7; }
	inline void set_brickW_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___brickW_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brickW_7), (void*)value);
	}

	inline static int32_t get_offset_of_coin_8() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___coin_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coin_8() const { return ___coin_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coin_8() { return &___coin_8; }
	inline void set_coin_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coin_8), (void*)value);
	}

	inline static int32_t get_offset_of_node1_9() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___node1_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_node1_9() const { return ___node1_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_node1_9() { return &___node1_9; }
	inline void set_node1_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___node1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node1_9), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedBall_10() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___spawnedBall_10)); }
	inline bool get_spawnedBall_10() const { return ___spawnedBall_10; }
	inline bool* get_address_of_spawnedBall_10() { return &___spawnedBall_10; }
	inline void set_spawnedBall_10(bool value)
	{
		___spawnedBall_10 = value;
	}

	inline static int32_t get_offset_of_spawnedItem_11() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___spawnedItem_11)); }
	inline bool get_spawnedItem_11() const { return ___spawnedItem_11; }
	inline bool* get_address_of_spawnedItem_11() { return &___spawnedItem_11; }
	inline void set_spawnedItem_11(bool value)
	{
		___spawnedItem_11 = value;
	}

	inline static int32_t get_offset_of_spawnedCoin_12() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___spawnedCoin_12)); }
	inline bool get_spawnedCoin_12() const { return ___spawnedCoin_12; }
	inline bool* get_address_of_spawnedCoin_12() { return &___spawnedCoin_12; }
	inline void set_spawnedCoin_12(bool value)
	{
		___spawnedCoin_12 = value;
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___items_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_items_13() const { return ___items_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_13), (void*)value);
	}

	inline static int32_t get_offset_of_randItem_14() { return static_cast<int32_t>(offsetof(spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B, ___randItem_14)); }
	inline int32_t get_randItem_14() const { return ___randItem_14; }
	inline int32_t* get_address_of_randItem_14() { return &___randItem_14; }
	inline void set_randItem_14(int32_t value)
	{
		___randItem_14 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_34)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_36;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_39;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_40;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_41;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_42;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_43;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_44;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_47;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_49;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_51;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_63;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_64;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_65;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_66;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_69;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_70;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_71;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_72;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_73;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_76;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_77;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_78;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_79;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_80;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_82;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_83;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_85;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_87;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_88;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_89;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_90;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_91;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_93;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_94;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_95;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_96;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_97;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_98;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_99;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_101;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_102;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_104;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_105;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_106;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_107;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_108;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_110;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_111;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_112;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_113;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_114;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_115;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_116;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_117;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_118;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_119;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_120;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_121;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_122;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_123;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_124;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_125;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_126;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_127;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_128;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_129;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_131;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_132;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_133;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_134;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_135;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_136;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_137;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_140;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_141;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_142;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_143;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_144;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_145;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_146;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_147;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_148;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_149;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_150;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_151;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_152;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_153;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_154;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_156;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_157;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_158;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_159;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_160;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_163;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_164;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_165;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_166;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_167;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_168;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_169;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_170;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_171;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_172;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_173;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_174;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_176;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_177;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_178;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_180;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_181;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_182;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_183;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_184;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_185;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_186;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_187;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_188;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_189;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_190;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_191;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_192;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_193;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_194;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_195;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_InternalParsingBuffer_196;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_197;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_198;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_199;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_207;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_247;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_248;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_255;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_256;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_36)); }
	inline RuntimeObject* get_m_TextPreprocessor_36() const { return ___m_TextPreprocessor_36; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_36() { return &___m_TextPreprocessor_36; }
	inline void set_m_TextPreprocessor_36(RuntimeObject* value)
	{
		___m_TextPreprocessor_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_37)); }
	inline bool get_m_isRightToLeft_37() const { return ___m_isRightToLeft_37; }
	inline bool* get_address_of_m_isRightToLeft_37() { return &___m_isRightToLeft_37; }
	inline void set_m_isRightToLeft_37(bool value)
	{
		___m_isRightToLeft_37 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_38)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_38() const { return ___m_fontAsset_38; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_38() { return &___m_fontAsset_38; }
	inline void set_m_fontAsset_38(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_39() const { return ___m_currentFontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_39() { return &___m_currentFontAsset_39; }
	inline void set_m_currentFontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_40)); }
	inline bool get_m_isSDFShader_40() const { return ___m_isSDFShader_40; }
	inline bool* get_address_of_m_isSDFShader_40() { return &___m_isSDFShader_40; }
	inline void set_m_isSDFShader_40(bool value)
	{
		___m_isSDFShader_40 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_41() const { return ___m_sharedMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_41() { return &___m_sharedMaterial_41; }
	inline void set_m_sharedMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_42() const { return ___m_currentMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_42() { return &___m_currentMaterial_42; }
	inline void set_m_currentMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_43)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_43() const { return ___m_materialReferences_43; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_43() { return &___m_materialReferences_43; }
	inline void set_m_materialReferences_43(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_44)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_44() const { return ___m_materialReferenceIndexLookup_44; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_44() { return &___m_materialReferenceIndexLookup_44; }
	inline void set_m_materialReferenceIndexLookup_44(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_45)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_45() const { return ___m_materialReferenceStack_45; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_45() { return &___m_materialReferenceStack_45; }
	inline void set_m_materialReferenceStack_45(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_45))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_46)); }
	inline int32_t get_m_currentMaterialIndex_46() const { return ___m_currentMaterialIndex_46; }
	inline int32_t* get_address_of_m_currentMaterialIndex_46() { return &___m_currentMaterialIndex_46; }
	inline void set_m_currentMaterialIndex_46(int32_t value)
	{
		___m_currentMaterialIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_47)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_47() const { return ___m_fontSharedMaterials_47; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_47() { return &___m_fontSharedMaterials_47; }
	inline void set_m_fontSharedMaterials_47(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_48)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_48() const { return ___m_fontMaterial_48; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_48() { return &___m_fontMaterial_48; }
	inline void set_m_fontMaterial_48(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_49() const { return ___m_fontMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_49() { return &___m_fontMaterials_49; }
	inline void set_m_fontMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_50)); }
	inline bool get_m_isMaterialDirty_50() const { return ___m_isMaterialDirty_50; }
	inline bool* get_address_of_m_isMaterialDirty_50() { return &___m_isMaterialDirty_50; }
	inline void set_m_isMaterialDirty_50(bool value)
	{
		___m_isMaterialDirty_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_51)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_51() const { return ___m_fontColor32_51; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_51() { return &___m_fontColor32_51; }
	inline void set_m_fontColor32_51(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_52)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_52() const { return ___m_fontColor_52; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_52() { return &___m_fontColor_52; }
	inline void set_m_fontColor_52(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_52 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_54() const { return ___m_underlineColor_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_54() { return &___m_underlineColor_54; }
	inline void set_m_underlineColor_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_54 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_55() const { return ___m_strikethroughColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_55() { return &___m_strikethroughColor_55; }
	inline void set_m_strikethroughColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_58)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_63)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_64)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_64() const { return ___m_StyleSheet_64; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_64() { return &___m_StyleSheet_64; }
	inline void set_m_StyleSheet_64(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_65)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_65() const { return ___m_TextStyle_65; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_65() { return &___m_TextStyle_65; }
	inline void set_m_TextStyle_65(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_66)); }
	inline int32_t get_m_TextStyleHashCode_66() const { return ___m_TextStyleHashCode_66; }
	inline int32_t* get_address_of_m_TextStyleHashCode_66() { return &___m_TextStyleHashCode_66; }
	inline void set_m_TextStyleHashCode_66(int32_t value)
	{
		___m_TextStyleHashCode_66 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_67)); }
	inline bool get_m_overrideHtmlColors_67() const { return ___m_overrideHtmlColors_67; }
	inline bool* get_address_of_m_overrideHtmlColors_67() { return &___m_overrideHtmlColors_67; }
	inline void set_m_overrideHtmlColors_67(bool value)
	{
		___m_overrideHtmlColors_67 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_68)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_68() const { return ___m_faceColor_68; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_68() { return &___m_faceColor_68; }
	inline void set_m_faceColor_68(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_69)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_69() const { return ___m_outlineColor_69; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_69() { return &___m_outlineColor_69; }
	inline void set_m_outlineColor_69(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_70)); }
	inline float get_m_outlineWidth_70() const { return ___m_outlineWidth_70; }
	inline float* get_address_of_m_outlineWidth_70() { return &___m_outlineWidth_70; }
	inline void set_m_outlineWidth_70(float value)
	{
		___m_outlineWidth_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_71)); }
	inline float get_m_fontSize_71() const { return ___m_fontSize_71; }
	inline float* get_address_of_m_fontSize_71() { return &___m_fontSize_71; }
	inline void set_m_fontSize_71(float value)
	{
		___m_fontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_72)); }
	inline float get_m_currentFontSize_72() const { return ___m_currentFontSize_72; }
	inline float* get_address_of_m_currentFontSize_72() { return &___m_currentFontSize_72; }
	inline void set_m_currentFontSize_72(float value)
	{
		___m_currentFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_73)); }
	inline float get_m_fontSizeBase_73() const { return ___m_fontSizeBase_73; }
	inline float* get_address_of_m_fontSizeBase_73() { return &___m_fontSizeBase_73; }
	inline void set_m_fontSizeBase_73(float value)
	{
		___m_fontSizeBase_73 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_74)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_74() const { return ___m_sizeStack_74; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_74() { return &___m_sizeStack_74; }
	inline void set_m_sizeStack_74(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_74))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_75)); }
	inline int32_t get_m_fontWeight_75() const { return ___m_fontWeight_75; }
	inline int32_t* get_address_of_m_fontWeight_75() { return &___m_fontWeight_75; }
	inline void set_m_fontWeight_75(int32_t value)
	{
		___m_fontWeight_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_76)); }
	inline int32_t get_m_FontWeightInternal_76() const { return ___m_FontWeightInternal_76; }
	inline int32_t* get_address_of_m_FontWeightInternal_76() { return &___m_FontWeightInternal_76; }
	inline void set_m_FontWeightInternal_76(int32_t value)
	{
		___m_FontWeightInternal_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_77)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_77() const { return ___m_FontWeightStack_77; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_77() { return &___m_FontWeightStack_77; }
	inline void set_m_FontWeightStack_77(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_78)); }
	inline bool get_m_enableAutoSizing_78() const { return ___m_enableAutoSizing_78; }
	inline bool* get_address_of_m_enableAutoSizing_78() { return &___m_enableAutoSizing_78; }
	inline void set_m_enableAutoSizing_78(bool value)
	{
		___m_enableAutoSizing_78 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_79)); }
	inline float get_m_maxFontSize_79() const { return ___m_maxFontSize_79; }
	inline float* get_address_of_m_maxFontSize_79() { return &___m_maxFontSize_79; }
	inline void set_m_maxFontSize_79(float value)
	{
		___m_maxFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_80)); }
	inline float get_m_minFontSize_80() const { return ___m_minFontSize_80; }
	inline float* get_address_of_m_minFontSize_80() { return &___m_minFontSize_80; }
	inline void set_m_minFontSize_80(float value)
	{
		___m_minFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_81)); }
	inline int32_t get_m_AutoSizeIterationCount_81() const { return ___m_AutoSizeIterationCount_81; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_81() { return &___m_AutoSizeIterationCount_81; }
	inline void set_m_AutoSizeIterationCount_81(int32_t value)
	{
		___m_AutoSizeIterationCount_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_82)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_82() const { return ___m_AutoSizeMaxIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_82() { return &___m_AutoSizeMaxIterationCount_82; }
	inline void set_m_AutoSizeMaxIterationCount_82(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_83)); }
	inline bool get_m_IsAutoSizePointSizeSet_83() const { return ___m_IsAutoSizePointSizeSet_83; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_83() { return &___m_IsAutoSizePointSizeSet_83; }
	inline void set_m_IsAutoSizePointSizeSet_83(bool value)
	{
		___m_IsAutoSizePointSizeSet_83 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_84)); }
	inline float get_m_fontSizeMin_84() const { return ___m_fontSizeMin_84; }
	inline float* get_address_of_m_fontSizeMin_84() { return &___m_fontSizeMin_84; }
	inline void set_m_fontSizeMin_84(float value)
	{
		___m_fontSizeMin_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_85)); }
	inline float get_m_fontSizeMax_85() const { return ___m_fontSizeMax_85; }
	inline float* get_address_of_m_fontSizeMax_85() { return &___m_fontSizeMax_85; }
	inline void set_m_fontSizeMax_85(float value)
	{
		___m_fontSizeMax_85 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_86)); }
	inline int32_t get_m_fontStyle_86() const { return ___m_fontStyle_86; }
	inline int32_t* get_address_of_m_fontStyle_86() { return &___m_fontStyle_86; }
	inline void set_m_fontStyle_86(int32_t value)
	{
		___m_fontStyle_86 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_87)); }
	inline int32_t get_m_FontStyleInternal_87() const { return ___m_FontStyleInternal_87; }
	inline int32_t* get_address_of_m_FontStyleInternal_87() { return &___m_FontStyleInternal_87; }
	inline void set_m_FontStyleInternal_87(int32_t value)
	{
		___m_FontStyleInternal_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_88)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_88() const { return ___m_fontStyleStack_88; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_88() { return &___m_fontStyleStack_88; }
	inline void set_m_fontStyleStack_88(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_88 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_89)); }
	inline bool get_m_isUsingBold_89() const { return ___m_isUsingBold_89; }
	inline bool* get_address_of_m_isUsingBold_89() { return &___m_isUsingBold_89; }
	inline void set_m_isUsingBold_89(bool value)
	{
		___m_isUsingBold_89 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_90)); }
	inline int32_t get_m_HorizontalAlignment_90() const { return ___m_HorizontalAlignment_90; }
	inline int32_t* get_address_of_m_HorizontalAlignment_90() { return &___m_HorizontalAlignment_90; }
	inline void set_m_HorizontalAlignment_90(int32_t value)
	{
		___m_HorizontalAlignment_90 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_91)); }
	inline int32_t get_m_VerticalAlignment_91() const { return ___m_VerticalAlignment_91; }
	inline int32_t* get_address_of_m_VerticalAlignment_91() { return &___m_VerticalAlignment_91; }
	inline void set_m_VerticalAlignment_91(int32_t value)
	{
		___m_VerticalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_92)); }
	inline int32_t get_m_textAlignment_92() const { return ___m_textAlignment_92; }
	inline int32_t* get_address_of_m_textAlignment_92() { return &___m_textAlignment_92; }
	inline void set_m_textAlignment_92(int32_t value)
	{
		___m_textAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_93)); }
	inline int32_t get_m_lineJustification_93() const { return ___m_lineJustification_93; }
	inline int32_t* get_address_of_m_lineJustification_93() { return &___m_lineJustification_93; }
	inline void set_m_lineJustification_93(int32_t value)
	{
		___m_lineJustification_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_94)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_94() const { return ___m_lineJustificationStack_94; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_94() { return &___m_lineJustificationStack_94; }
	inline void set_m_lineJustificationStack_94(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_94 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_94))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_95)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_95() const { return ___m_textContainerLocalCorners_95; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_95() { return &___m_textContainerLocalCorners_95; }
	inline void set_m_textContainerLocalCorners_95(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_95), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_96)); }
	inline float get_m_characterSpacing_96() const { return ___m_characterSpacing_96; }
	inline float* get_address_of_m_characterSpacing_96() { return &___m_characterSpacing_96; }
	inline void set_m_characterSpacing_96(float value)
	{
		___m_characterSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_97)); }
	inline float get_m_cSpacing_97() const { return ___m_cSpacing_97; }
	inline float* get_address_of_m_cSpacing_97() { return &___m_cSpacing_97; }
	inline void set_m_cSpacing_97(float value)
	{
		___m_cSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_98)); }
	inline float get_m_monoSpacing_98() const { return ___m_monoSpacing_98; }
	inline float* get_address_of_m_monoSpacing_98() { return &___m_monoSpacing_98; }
	inline void set_m_monoSpacing_98(float value)
	{
		___m_monoSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_99)); }
	inline float get_m_wordSpacing_99() const { return ___m_wordSpacing_99; }
	inline float* get_address_of_m_wordSpacing_99() { return &___m_wordSpacing_99; }
	inline void set_m_wordSpacing_99(float value)
	{
		___m_wordSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_100)); }
	inline float get_m_lineSpacing_100() const { return ___m_lineSpacing_100; }
	inline float* get_address_of_m_lineSpacing_100() { return &___m_lineSpacing_100; }
	inline void set_m_lineSpacing_100(float value)
	{
		___m_lineSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_101)); }
	inline float get_m_lineSpacingDelta_101() const { return ___m_lineSpacingDelta_101; }
	inline float* get_address_of_m_lineSpacingDelta_101() { return &___m_lineSpacingDelta_101; }
	inline void set_m_lineSpacingDelta_101(float value)
	{
		___m_lineSpacingDelta_101 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_102)); }
	inline float get_m_lineHeight_102() const { return ___m_lineHeight_102; }
	inline float* get_address_of_m_lineHeight_102() { return &___m_lineHeight_102; }
	inline void set_m_lineHeight_102(float value)
	{
		___m_lineHeight_102 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_103)); }
	inline bool get_m_IsDrivenLineSpacing_103() const { return ___m_IsDrivenLineSpacing_103; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_103() { return &___m_IsDrivenLineSpacing_103; }
	inline void set_m_IsDrivenLineSpacing_103(bool value)
	{
		___m_IsDrivenLineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_104)); }
	inline float get_m_lineSpacingMax_104() const { return ___m_lineSpacingMax_104; }
	inline float* get_address_of_m_lineSpacingMax_104() { return &___m_lineSpacingMax_104; }
	inline void set_m_lineSpacingMax_104(float value)
	{
		___m_lineSpacingMax_104 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_105)); }
	inline float get_m_paragraphSpacing_105() const { return ___m_paragraphSpacing_105; }
	inline float* get_address_of_m_paragraphSpacing_105() { return &___m_paragraphSpacing_105; }
	inline void set_m_paragraphSpacing_105(float value)
	{
		___m_paragraphSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_106)); }
	inline float get_m_charWidthMaxAdj_106() const { return ___m_charWidthMaxAdj_106; }
	inline float* get_address_of_m_charWidthMaxAdj_106() { return &___m_charWidthMaxAdj_106; }
	inline void set_m_charWidthMaxAdj_106(float value)
	{
		___m_charWidthMaxAdj_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_107)); }
	inline float get_m_charWidthAdjDelta_107() const { return ___m_charWidthAdjDelta_107; }
	inline float* get_address_of_m_charWidthAdjDelta_107() { return &___m_charWidthAdjDelta_107; }
	inline void set_m_charWidthAdjDelta_107(float value)
	{
		___m_charWidthAdjDelta_107 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_108)); }
	inline bool get_m_enableWordWrapping_108() const { return ___m_enableWordWrapping_108; }
	inline bool* get_address_of_m_enableWordWrapping_108() { return &___m_enableWordWrapping_108; }
	inline void set_m_enableWordWrapping_108(bool value)
	{
		___m_enableWordWrapping_108 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_109)); }
	inline bool get_m_isCharacterWrappingEnabled_109() const { return ___m_isCharacterWrappingEnabled_109; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_109() { return &___m_isCharacterWrappingEnabled_109; }
	inline void set_m_isCharacterWrappingEnabled_109(bool value)
	{
		___m_isCharacterWrappingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_110)); }
	inline bool get_m_isNonBreakingSpace_110() const { return ___m_isNonBreakingSpace_110; }
	inline bool* get_address_of_m_isNonBreakingSpace_110() { return &___m_isNonBreakingSpace_110; }
	inline void set_m_isNonBreakingSpace_110(bool value)
	{
		___m_isNonBreakingSpace_110 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_111)); }
	inline bool get_m_isIgnoringAlignment_111() const { return ___m_isIgnoringAlignment_111; }
	inline bool* get_address_of_m_isIgnoringAlignment_111() { return &___m_isIgnoringAlignment_111; }
	inline void set_m_isIgnoringAlignment_111(bool value)
	{
		___m_isIgnoringAlignment_111 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_112)); }
	inline float get_m_wordWrappingRatios_112() const { return ___m_wordWrappingRatios_112; }
	inline float* get_address_of_m_wordWrappingRatios_112() { return &___m_wordWrappingRatios_112; }
	inline void set_m_wordWrappingRatios_112(float value)
	{
		___m_wordWrappingRatios_112 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_113)); }
	inline int32_t get_m_overflowMode_113() const { return ___m_overflowMode_113; }
	inline int32_t* get_address_of_m_overflowMode_113() { return &___m_overflowMode_113; }
	inline void set_m_overflowMode_113(int32_t value)
	{
		___m_overflowMode_113 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_114)); }
	inline int32_t get_m_firstOverflowCharacterIndex_114() const { return ___m_firstOverflowCharacterIndex_114; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_114() { return &___m_firstOverflowCharacterIndex_114; }
	inline void set_m_firstOverflowCharacterIndex_114(int32_t value)
	{
		___m_firstOverflowCharacterIndex_114 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_115)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_115() const { return ___m_linkedTextComponent_115; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_115() { return &___m_linkedTextComponent_115; }
	inline void set_m_linkedTextComponent_115(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_115), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_116)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_116() const { return ___parentLinkedComponent_116; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_116() { return &___parentLinkedComponent_116; }
	inline void set_parentLinkedComponent_116(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_117)); }
	inline bool get_m_isTextTruncated_117() const { return ___m_isTextTruncated_117; }
	inline bool* get_address_of_m_isTextTruncated_117() { return &___m_isTextTruncated_117; }
	inline void set_m_isTextTruncated_117(bool value)
	{
		___m_isTextTruncated_117 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_118)); }
	inline bool get_m_enableKerning_118() const { return ___m_enableKerning_118; }
	inline bool* get_address_of_m_enableKerning_118() { return &___m_enableKerning_118; }
	inline void set_m_enableKerning_118(bool value)
	{
		___m_enableKerning_118 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_119)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_119() const { return ___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_119() { return &___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_119(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_119 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_120)); }
	inline bool get_m_enableExtraPadding_120() const { return ___m_enableExtraPadding_120; }
	inline bool* get_address_of_m_enableExtraPadding_120() { return &___m_enableExtraPadding_120; }
	inline void set_m_enableExtraPadding_120(bool value)
	{
		___m_enableExtraPadding_120 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_121)); }
	inline bool get_checkPaddingRequired_121() const { return ___checkPaddingRequired_121; }
	inline bool* get_address_of_checkPaddingRequired_121() { return &___checkPaddingRequired_121; }
	inline void set_checkPaddingRequired_121(bool value)
	{
		___checkPaddingRequired_121 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_122)); }
	inline bool get_m_isRichText_122() const { return ___m_isRichText_122; }
	inline bool* get_address_of_m_isRichText_122() { return &___m_isRichText_122; }
	inline void set_m_isRichText_122(bool value)
	{
		___m_isRichText_122 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_123)); }
	inline bool get_m_parseCtrlCharacters_123() const { return ___m_parseCtrlCharacters_123; }
	inline bool* get_address_of_m_parseCtrlCharacters_123() { return &___m_parseCtrlCharacters_123; }
	inline void set_m_parseCtrlCharacters_123(bool value)
	{
		___m_parseCtrlCharacters_123 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_124)); }
	inline bool get_m_isOverlay_124() const { return ___m_isOverlay_124; }
	inline bool* get_address_of_m_isOverlay_124() { return &___m_isOverlay_124; }
	inline void set_m_isOverlay_124(bool value)
	{
		___m_isOverlay_124 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_125)); }
	inline bool get_m_isOrthographic_125() const { return ___m_isOrthographic_125; }
	inline bool* get_address_of_m_isOrthographic_125() { return &___m_isOrthographic_125; }
	inline void set_m_isOrthographic_125(bool value)
	{
		___m_isOrthographic_125 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_126)); }
	inline bool get_m_isCullingEnabled_126() const { return ___m_isCullingEnabled_126; }
	inline bool* get_address_of_m_isCullingEnabled_126() { return &___m_isCullingEnabled_126; }
	inline void set_m_isCullingEnabled_126(bool value)
	{
		___m_isCullingEnabled_126 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_127)); }
	inline bool get_m_isMaskingEnabled_127() const { return ___m_isMaskingEnabled_127; }
	inline bool* get_address_of_m_isMaskingEnabled_127() { return &___m_isMaskingEnabled_127; }
	inline void set_m_isMaskingEnabled_127(bool value)
	{
		___m_isMaskingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_128)); }
	inline bool get_isMaskUpdateRequired_128() const { return ___isMaskUpdateRequired_128; }
	inline bool* get_address_of_isMaskUpdateRequired_128() { return &___isMaskUpdateRequired_128; }
	inline void set_isMaskUpdateRequired_128(bool value)
	{
		___isMaskUpdateRequired_128 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_129)); }
	inline bool get_m_ignoreCulling_129() const { return ___m_ignoreCulling_129; }
	inline bool* get_address_of_m_ignoreCulling_129() { return &___m_ignoreCulling_129; }
	inline void set_m_ignoreCulling_129(bool value)
	{
		___m_ignoreCulling_129 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_130)); }
	inline int32_t get_m_horizontalMapping_130() const { return ___m_horizontalMapping_130; }
	inline int32_t* get_address_of_m_horizontalMapping_130() { return &___m_horizontalMapping_130; }
	inline void set_m_horizontalMapping_130(int32_t value)
	{
		___m_horizontalMapping_130 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_131)); }
	inline int32_t get_m_verticalMapping_131() const { return ___m_verticalMapping_131; }
	inline int32_t* get_address_of_m_verticalMapping_131() { return &___m_verticalMapping_131; }
	inline void set_m_verticalMapping_131(int32_t value)
	{
		___m_verticalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_132)); }
	inline float get_m_uvLineOffset_132() const { return ___m_uvLineOffset_132; }
	inline float* get_address_of_m_uvLineOffset_132() { return &___m_uvLineOffset_132; }
	inline void set_m_uvLineOffset_132(float value)
	{
		___m_uvLineOffset_132 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_133)); }
	inline int32_t get_m_renderMode_133() const { return ___m_renderMode_133; }
	inline int32_t* get_address_of_m_renderMode_133() { return &___m_renderMode_133; }
	inline void set_m_renderMode_133(int32_t value)
	{
		___m_renderMode_133 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_134)); }
	inline int32_t get_m_geometrySortingOrder_134() const { return ___m_geometrySortingOrder_134; }
	inline int32_t* get_address_of_m_geometrySortingOrder_134() { return &___m_geometrySortingOrder_134; }
	inline void set_m_geometrySortingOrder_134(int32_t value)
	{
		___m_geometrySortingOrder_134 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_135)); }
	inline bool get_m_IsTextObjectScaleStatic_135() const { return ___m_IsTextObjectScaleStatic_135; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_135() { return &___m_IsTextObjectScaleStatic_135; }
	inline void set_m_IsTextObjectScaleStatic_135(bool value)
	{
		___m_IsTextObjectScaleStatic_135 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_136)); }
	inline bool get_m_VertexBufferAutoSizeReduction_136() const { return ___m_VertexBufferAutoSizeReduction_136; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_136() { return &___m_VertexBufferAutoSizeReduction_136; }
	inline void set_m_VertexBufferAutoSizeReduction_136(bool value)
	{
		___m_VertexBufferAutoSizeReduction_136 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_137)); }
	inline int32_t get_m_firstVisibleCharacter_137() const { return ___m_firstVisibleCharacter_137; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_137() { return &___m_firstVisibleCharacter_137; }
	inline void set_m_firstVisibleCharacter_137(int32_t value)
	{
		___m_firstVisibleCharacter_137 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_138)); }
	inline int32_t get_m_maxVisibleCharacters_138() const { return ___m_maxVisibleCharacters_138; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_138() { return &___m_maxVisibleCharacters_138; }
	inline void set_m_maxVisibleCharacters_138(int32_t value)
	{
		___m_maxVisibleCharacters_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_139)); }
	inline int32_t get_m_maxVisibleWords_139() const { return ___m_maxVisibleWords_139; }
	inline int32_t* get_address_of_m_maxVisibleWords_139() { return &___m_maxVisibleWords_139; }
	inline void set_m_maxVisibleWords_139(int32_t value)
	{
		___m_maxVisibleWords_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_140)); }
	inline int32_t get_m_maxVisibleLines_140() const { return ___m_maxVisibleLines_140; }
	inline int32_t* get_address_of_m_maxVisibleLines_140() { return &___m_maxVisibleLines_140; }
	inline void set_m_maxVisibleLines_140(int32_t value)
	{
		___m_maxVisibleLines_140 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_141)); }
	inline bool get_m_useMaxVisibleDescender_141() const { return ___m_useMaxVisibleDescender_141; }
	inline bool* get_address_of_m_useMaxVisibleDescender_141() { return &___m_useMaxVisibleDescender_141; }
	inline void set_m_useMaxVisibleDescender_141(bool value)
	{
		___m_useMaxVisibleDescender_141 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_142)); }
	inline int32_t get_m_pageToDisplay_142() const { return ___m_pageToDisplay_142; }
	inline int32_t* get_address_of_m_pageToDisplay_142() { return &___m_pageToDisplay_142; }
	inline void set_m_pageToDisplay_142(int32_t value)
	{
		___m_pageToDisplay_142 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_143)); }
	inline bool get_m_isNewPage_143() const { return ___m_isNewPage_143; }
	inline bool* get_address_of_m_isNewPage_143() { return &___m_isNewPage_143; }
	inline void set_m_isNewPage_143(bool value)
	{
		___m_isNewPage_143 = value;
	}

	inline static int32_t get_offset_of_m_margin_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_144)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_144() const { return ___m_margin_144; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_144() { return &___m_margin_144; }
	inline void set_m_margin_144(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_144 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_145)); }
	inline float get_m_marginLeft_145() const { return ___m_marginLeft_145; }
	inline float* get_address_of_m_marginLeft_145() { return &___m_marginLeft_145; }
	inline void set_m_marginLeft_145(float value)
	{
		___m_marginLeft_145 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_146)); }
	inline float get_m_marginRight_146() const { return ___m_marginRight_146; }
	inline float* get_address_of_m_marginRight_146() { return &___m_marginRight_146; }
	inline void set_m_marginRight_146(float value)
	{
		___m_marginRight_146 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_147)); }
	inline float get_m_marginWidth_147() const { return ___m_marginWidth_147; }
	inline float* get_address_of_m_marginWidth_147() { return &___m_marginWidth_147; }
	inline void set_m_marginWidth_147(float value)
	{
		___m_marginWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_148)); }
	inline float get_m_marginHeight_148() const { return ___m_marginHeight_148; }
	inline float* get_address_of_m_marginHeight_148() { return &___m_marginHeight_148; }
	inline void set_m_marginHeight_148(float value)
	{
		___m_marginHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_width_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_149)); }
	inline float get_m_width_149() const { return ___m_width_149; }
	inline float* get_address_of_m_width_149() { return &___m_width_149; }
	inline void set_m_width_149(float value)
	{
		___m_width_149 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_150)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_150() const { return ___m_textInfo_150; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_150() { return &___m_textInfo_150; }
	inline void set_m_textInfo_150(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_150), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_151)); }
	inline bool get_m_havePropertiesChanged_151() const { return ___m_havePropertiesChanged_151; }
	inline bool* get_address_of_m_havePropertiesChanged_151() { return &___m_havePropertiesChanged_151; }
	inline void set_m_havePropertiesChanged_151(bool value)
	{
		___m_havePropertiesChanged_151 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_152)); }
	inline bool get_m_isUsingLegacyAnimationComponent_152() const { return ___m_isUsingLegacyAnimationComponent_152; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_152() { return &___m_isUsingLegacyAnimationComponent_152; }
	inline void set_m_isUsingLegacyAnimationComponent_152(bool value)
	{
		___m_isUsingLegacyAnimationComponent_152 = value;
	}

	inline static int32_t get_offset_of_m_transform_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_153)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_153() const { return ___m_transform_153; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_153() { return &___m_transform_153; }
	inline void set_m_transform_153(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_154)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_154() const { return ___m_rectTransform_154; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_154() { return &___m_rectTransform_154; }
	inline void set_m_rectTransform_154(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_155)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_155() const { return ___m_PreviousRectTransformSize_155; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_155() { return &___m_PreviousRectTransformSize_155; }
	inline void set_m_PreviousRectTransformSize_155(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_155 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_156)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_156() const { return ___m_PreviousPivotPosition_156; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_156() { return &___m_PreviousPivotPosition_156; }
	inline void set_m_PreviousPivotPosition_156(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_156 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_157)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_157() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return &___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_157(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_157 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_158)); }
	inline bool get_m_autoSizeTextContainer_158() const { return ___m_autoSizeTextContainer_158; }
	inline bool* get_address_of_m_autoSizeTextContainer_158() { return &___m_autoSizeTextContainer_158; }
	inline void set_m_autoSizeTextContainer_158(bool value)
	{
		___m_autoSizeTextContainer_158 = value;
	}

	inline static int32_t get_offset_of_m_mesh_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_159)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_159() const { return ___m_mesh_159; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_159() { return &___m_mesh_159; }
	inline void set_m_mesh_159(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_159 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_159), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_160)); }
	inline bool get_m_isVolumetricText_160() const { return ___m_isVolumetricText_160; }
	inline bool* get_address_of_m_isVolumetricText_160() { return &___m_isVolumetricText_160; }
	inline void set_m_isVolumetricText_160(bool value)
	{
		___m_isVolumetricText_160 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_163)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_163() const { return ___m_spriteAnimator_163; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_163() { return &___m_spriteAnimator_163; }
	inline void set_m_spriteAnimator_163(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_164)); }
	inline float get_m_flexibleHeight_164() const { return ___m_flexibleHeight_164; }
	inline float* get_address_of_m_flexibleHeight_164() { return &___m_flexibleHeight_164; }
	inline void set_m_flexibleHeight_164(float value)
	{
		___m_flexibleHeight_164 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_165)); }
	inline float get_m_flexibleWidth_165() const { return ___m_flexibleWidth_165; }
	inline float* get_address_of_m_flexibleWidth_165() { return &___m_flexibleWidth_165; }
	inline void set_m_flexibleWidth_165(float value)
	{
		___m_flexibleWidth_165 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_166)); }
	inline float get_m_minWidth_166() const { return ___m_minWidth_166; }
	inline float* get_address_of_m_minWidth_166() { return &___m_minWidth_166; }
	inline void set_m_minWidth_166(float value)
	{
		___m_minWidth_166 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_167)); }
	inline float get_m_minHeight_167() const { return ___m_minHeight_167; }
	inline float* get_address_of_m_minHeight_167() { return &___m_minHeight_167; }
	inline void set_m_minHeight_167(float value)
	{
		___m_minHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_168)); }
	inline float get_m_maxWidth_168() const { return ___m_maxWidth_168; }
	inline float* get_address_of_m_maxWidth_168() { return &___m_maxWidth_168; }
	inline void set_m_maxWidth_168(float value)
	{
		___m_maxWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_169)); }
	inline float get_m_maxHeight_169() const { return ___m_maxHeight_169; }
	inline float* get_address_of_m_maxHeight_169() { return &___m_maxHeight_169; }
	inline void set_m_maxHeight_169(float value)
	{
		___m_maxHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_170)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_170() const { return ___m_LayoutElement_170; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_170() { return &___m_LayoutElement_170; }
	inline void set_m_LayoutElement_170(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_170 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_170), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_171)); }
	inline float get_m_preferredWidth_171() const { return ___m_preferredWidth_171; }
	inline float* get_address_of_m_preferredWidth_171() { return &___m_preferredWidth_171; }
	inline void set_m_preferredWidth_171(float value)
	{
		___m_preferredWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_172)); }
	inline float get_m_renderedWidth_172() const { return ___m_renderedWidth_172; }
	inline float* get_address_of_m_renderedWidth_172() { return &___m_renderedWidth_172; }
	inline void set_m_renderedWidth_172(float value)
	{
		___m_renderedWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_173)); }
	inline bool get_m_isPreferredWidthDirty_173() const { return ___m_isPreferredWidthDirty_173; }
	inline bool* get_address_of_m_isPreferredWidthDirty_173() { return &___m_isPreferredWidthDirty_173; }
	inline void set_m_isPreferredWidthDirty_173(bool value)
	{
		___m_isPreferredWidthDirty_173 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_174)); }
	inline float get_m_preferredHeight_174() const { return ___m_preferredHeight_174; }
	inline float* get_address_of_m_preferredHeight_174() { return &___m_preferredHeight_174; }
	inline void set_m_preferredHeight_174(float value)
	{
		___m_preferredHeight_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_175)); }
	inline float get_m_renderedHeight_175() const { return ___m_renderedHeight_175; }
	inline float* get_address_of_m_renderedHeight_175() { return &___m_renderedHeight_175; }
	inline void set_m_renderedHeight_175(float value)
	{
		___m_renderedHeight_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_176)); }
	inline bool get_m_isPreferredHeightDirty_176() const { return ___m_isPreferredHeightDirty_176; }
	inline bool* get_address_of_m_isPreferredHeightDirty_176() { return &___m_isPreferredHeightDirty_176; }
	inline void set_m_isPreferredHeightDirty_176(bool value)
	{
		___m_isPreferredHeightDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_177)); }
	inline bool get_m_isCalculatingPreferredValues_177() const { return ___m_isCalculatingPreferredValues_177; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_177() { return &___m_isCalculatingPreferredValues_177; }
	inline void set_m_isCalculatingPreferredValues_177(bool value)
	{
		___m_isCalculatingPreferredValues_177 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_178)); }
	inline int32_t get_m_layoutPriority_178() const { return ___m_layoutPriority_178; }
	inline int32_t* get_address_of_m_layoutPriority_178() { return &___m_layoutPriority_178; }
	inline void set_m_layoutPriority_178(int32_t value)
	{
		___m_layoutPriority_178 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_179)); }
	inline bool get_m_isLayoutDirty_179() const { return ___m_isLayoutDirty_179; }
	inline bool* get_address_of_m_isLayoutDirty_179() { return &___m_isLayoutDirty_179; }
	inline void set_m_isLayoutDirty_179(bool value)
	{
		___m_isLayoutDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_180)); }
	inline bool get_m_isAwake_180() const { return ___m_isAwake_180; }
	inline bool* get_address_of_m_isAwake_180() { return &___m_isAwake_180; }
	inline void set_m_isAwake_180(bool value)
	{
		___m_isAwake_180 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_181)); }
	inline bool get_m_isWaitingOnResourceLoad_181() const { return ___m_isWaitingOnResourceLoad_181; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_181() { return &___m_isWaitingOnResourceLoad_181; }
	inline void set_m_isWaitingOnResourceLoad_181(bool value)
	{
		___m_isWaitingOnResourceLoad_181 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_182)); }
	inline bool get_m_isInputParsingRequired_182() const { return ___m_isInputParsingRequired_182; }
	inline bool* get_address_of_m_isInputParsingRequired_182() { return &___m_isInputParsingRequired_182; }
	inline void set_m_isInputParsingRequired_182(bool value)
	{
		___m_isInputParsingRequired_182 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_183)); }
	inline int32_t get_m_inputSource_183() const { return ___m_inputSource_183; }
	inline int32_t* get_address_of_m_inputSource_183() { return &___m_inputSource_183; }
	inline void set_m_inputSource_183(int32_t value)
	{
		___m_inputSource_183 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_184)); }
	inline float get_m_fontScale_184() const { return ___m_fontScale_184; }
	inline float* get_address_of_m_fontScale_184() { return &___m_fontScale_184; }
	inline void set_m_fontScale_184(float value)
	{
		___m_fontScale_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_185)); }
	inline float get_m_fontScaleMultiplier_185() const { return ___m_fontScaleMultiplier_185; }
	inline float* get_address_of_m_fontScaleMultiplier_185() { return &___m_fontScaleMultiplier_185; }
	inline void set_m_fontScaleMultiplier_185(float value)
	{
		___m_fontScaleMultiplier_185 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_186)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_186() const { return ___m_htmlTag_186; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_186() { return &___m_htmlTag_186; }
	inline void set_m_htmlTag_186(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_187)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_187() const { return ___m_xmlAttribute_187; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_187() { return &___m_xmlAttribute_187; }
	inline void set_m_xmlAttribute_187(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_188)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_188() const { return ___m_attributeParameterValues_188; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_188() { return &___m_attributeParameterValues_188; }
	inline void set_m_attributeParameterValues_188(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_188), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_189)); }
	inline float get_tag_LineIndent_189() const { return ___tag_LineIndent_189; }
	inline float* get_address_of_tag_LineIndent_189() { return &___tag_LineIndent_189; }
	inline void set_tag_LineIndent_189(float value)
	{
		___tag_LineIndent_189 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_190)); }
	inline float get_tag_Indent_190() const { return ___tag_Indent_190; }
	inline float* get_address_of_tag_Indent_190() { return &___tag_Indent_190; }
	inline void set_tag_Indent_190(float value)
	{
		___tag_Indent_190 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_191)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_191() const { return ___m_indentStack_191; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_191() { return &___m_indentStack_191; }
	inline void set_m_indentStack_191(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_191))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_192)); }
	inline bool get_tag_NoParsing_192() const { return ___tag_NoParsing_192; }
	inline bool* get_address_of_tag_NoParsing_192() { return &___tag_NoParsing_192; }
	inline void set_tag_NoParsing_192(bool value)
	{
		___tag_NoParsing_192 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_193)); }
	inline bool get_m_isParsingText_193() const { return ___m_isParsingText_193; }
	inline bool* get_address_of_m_isParsingText_193() { return &___m_isParsingText_193; }
	inline void set_m_isParsingText_193(bool value)
	{
		___m_isParsingText_193 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_194)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_194() const { return ___m_FXMatrix_194; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_194() { return &___m_FXMatrix_194; }
	inline void set_m_FXMatrix_194(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_194 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_195)); }
	inline bool get_m_isFXMatrixSet_195() const { return ___m_isFXMatrixSet_195; }
	inline bool* get_address_of_m_isFXMatrixSet_195() { return &___m_isFXMatrixSet_195; }
	inline void set_m_isFXMatrixSet_195(bool value)
	{
		___m_isFXMatrixSet_195 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBuffer_196)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_InternalParsingBuffer_196() const { return ___m_InternalParsingBuffer_196; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_InternalParsingBuffer_196() { return &___m_InternalParsingBuffer_196; }
	inline void set_m_InternalParsingBuffer_196(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_InternalParsingBuffer_196 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_196), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBufferSize_197)); }
	inline int32_t get_m_InternalParsingBufferSize_197() const { return ___m_InternalParsingBufferSize_197; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_197() { return &___m_InternalParsingBufferSize_197; }
	inline void set_m_InternalParsingBufferSize_197(int32_t value)
	{
		___m_InternalParsingBufferSize_197 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_198)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_198() const { return ___m_internalCharacterInfo_198; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_198() { return &___m_internalCharacterInfo_198; }
	inline void set_m_internalCharacterInfo_198(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_199)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_199() const { return ___m_input_CharArray_199; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_199() { return &___m_input_CharArray_199; }
	inline void set_m_input_CharArray_199(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_200)); }
	inline int32_t get_m_charArray_Length_200() const { return ___m_charArray_Length_200; }
	inline int32_t* get_address_of_m_charArray_Length_200() { return &___m_charArray_Length_200; }
	inline void set_m_charArray_Length_200(int32_t value)
	{
		___m_charArray_Length_200 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_201)); }
	inline int32_t get_m_totalCharacterCount_201() const { return ___m_totalCharacterCount_201; }
	inline int32_t* get_address_of_m_totalCharacterCount_201() { return &___m_totalCharacterCount_201; }
	inline void set_m_totalCharacterCount_201(int32_t value)
	{
		___m_totalCharacterCount_201 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_202() const { return ___m_SavedWordWrapState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_202() { return &___m_SavedWordWrapState_202; }
	inline void set_m_SavedWordWrapState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_203() const { return ___m_SavedLineState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_203() { return &___m_SavedLineState_203; }
	inline void set_m_SavedLineState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedEllipsisState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_204() const { return ___m_SavedEllipsisState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_204() { return &___m_SavedEllipsisState_204; }
	inline void set_m_SavedEllipsisState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLastValidState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_205() const { return ___m_SavedLastValidState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_205() { return &___m_SavedLastValidState_205; }
	inline void set_m_SavedLastValidState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedSoftLineBreakState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_206() const { return ___m_SavedSoftLineBreakState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_206() { return &___m_SavedSoftLineBreakState_206; }
	inline void set_m_SavedSoftLineBreakState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_EllipsisInsertionCandidateStack_207)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_207() const { return ___m_EllipsisInsertionCandidateStack_207; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_207() { return &___m_EllipsisInsertionCandidateStack_207; }
	inline void set_m_EllipsisInsertionCandidateStack_207(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_207))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_208)); }
	inline int32_t get_m_characterCount_208() const { return ___m_characterCount_208; }
	inline int32_t* get_address_of_m_characterCount_208() { return &___m_characterCount_208; }
	inline void set_m_characterCount_208(int32_t value)
	{
		___m_characterCount_208 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_209)); }
	inline int32_t get_m_firstCharacterOfLine_209() const { return ___m_firstCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_209() { return &___m_firstCharacterOfLine_209; }
	inline void set_m_firstCharacterOfLine_209(int32_t value)
	{
		___m_firstCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_210)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_210() const { return ___m_firstVisibleCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_210() { return &___m_firstVisibleCharacterOfLine_210; }
	inline void set_m_firstVisibleCharacterOfLine_210(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_211)); }
	inline int32_t get_m_lastCharacterOfLine_211() const { return ___m_lastCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_211() { return &___m_lastCharacterOfLine_211; }
	inline void set_m_lastCharacterOfLine_211(int32_t value)
	{
		___m_lastCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_212)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_212() const { return ___m_lastVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_212() { return &___m_lastVisibleCharacterOfLine_212; }
	inline void set_m_lastVisibleCharacterOfLine_212(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_213)); }
	inline int32_t get_m_lineNumber_213() const { return ___m_lineNumber_213; }
	inline int32_t* get_address_of_m_lineNumber_213() { return &___m_lineNumber_213; }
	inline void set_m_lineNumber_213(int32_t value)
	{
		___m_lineNumber_213 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_214)); }
	inline int32_t get_m_lineVisibleCharacterCount_214() const { return ___m_lineVisibleCharacterCount_214; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_214() { return &___m_lineVisibleCharacterCount_214; }
	inline void set_m_lineVisibleCharacterCount_214(int32_t value)
	{
		___m_lineVisibleCharacterCount_214 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_215)); }
	inline int32_t get_m_pageNumber_215() const { return ___m_pageNumber_215; }
	inline int32_t* get_address_of_m_pageNumber_215() { return &___m_pageNumber_215; }
	inline void set_m_pageNumber_215(int32_t value)
	{
		___m_pageNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_216)); }
	inline float get_m_PageAscender_216() const { return ___m_PageAscender_216; }
	inline float* get_address_of_m_PageAscender_216() { return &___m_PageAscender_216; }
	inline void set_m_PageAscender_216(float value)
	{
		___m_PageAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_217)); }
	inline float get_m_maxTextAscender_217() const { return ___m_maxTextAscender_217; }
	inline float* get_address_of_m_maxTextAscender_217() { return &___m_maxTextAscender_217; }
	inline void set_m_maxTextAscender_217(float value)
	{
		___m_maxTextAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_218)); }
	inline float get_m_maxCapHeight_218() const { return ___m_maxCapHeight_218; }
	inline float* get_address_of_m_maxCapHeight_218() { return &___m_maxCapHeight_218; }
	inline void set_m_maxCapHeight_218(float value)
	{
		___m_maxCapHeight_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_219)); }
	inline float get_m_ElementAscender_219() const { return ___m_ElementAscender_219; }
	inline float* get_address_of_m_ElementAscender_219() { return &___m_ElementAscender_219; }
	inline void set_m_ElementAscender_219(float value)
	{
		___m_ElementAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_220)); }
	inline float get_m_ElementDescender_220() const { return ___m_ElementDescender_220; }
	inline float* get_address_of_m_ElementDescender_220() { return &___m_ElementDescender_220; }
	inline void set_m_ElementDescender_220(float value)
	{
		___m_ElementDescender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_221)); }
	inline float get_m_maxLineAscender_221() const { return ___m_maxLineAscender_221; }
	inline float* get_address_of_m_maxLineAscender_221() { return &___m_maxLineAscender_221; }
	inline void set_m_maxLineAscender_221(float value)
	{
		___m_maxLineAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_222)); }
	inline float get_m_maxLineDescender_222() const { return ___m_maxLineDescender_222; }
	inline float* get_address_of_m_maxLineDescender_222() { return &___m_maxLineDescender_222; }
	inline void set_m_maxLineDescender_222(float value)
	{
		___m_maxLineDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_223)); }
	inline float get_m_startOfLineAscender_223() const { return ___m_startOfLineAscender_223; }
	inline float* get_address_of_m_startOfLineAscender_223() { return &___m_startOfLineAscender_223; }
	inline void set_m_startOfLineAscender_223(float value)
	{
		___m_startOfLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_224)); }
	inline float get_m_startOfLineDescender_224() const { return ___m_startOfLineDescender_224; }
	inline float* get_address_of_m_startOfLineDescender_224() { return &___m_startOfLineDescender_224; }
	inline void set_m_startOfLineDescender_224(float value)
	{
		___m_startOfLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_225)); }
	inline float get_m_lineOffset_225() const { return ___m_lineOffset_225; }
	inline float* get_address_of_m_lineOffset_225() { return &___m_lineOffset_225; }
	inline void set_m_lineOffset_225(float value)
	{
		___m_lineOffset_225 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_226)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_226() const { return ___m_meshExtents_226; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_226() { return &___m_meshExtents_226; }
	inline void set_m_meshExtents_226(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_226 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_227)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_227() const { return ___m_htmlColor_227; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_227() { return &___m_htmlColor_227; }
	inline void set_m_htmlColor_227(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_227 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_228() const { return ___m_colorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_228() { return &___m_colorStack_228; }
	inline void set_m_colorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_229() const { return ___m_underlineColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_229() { return &___m_underlineColorStack_229; }
	inline void set_m_underlineColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_230() const { return ___m_strikethroughColorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_230() { return &___m_strikethroughColorStack_230; }
	inline void set_m_strikethroughColorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_231)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_231() const { return ___m_HighlightStateStack_231; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_231() { return &___m_HighlightStateStack_231; }
	inline void set_m_HighlightStateStack_231(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_232)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_232() const { return ___m_colorGradientPreset_232; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_232() { return &___m_colorGradientPreset_232; }
	inline void set_m_colorGradientPreset_232(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_232 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_232), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_233)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_233() const { return ___m_colorGradientStack_233; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_233() { return &___m_colorGradientStack_233; }
	inline void set_m_colorGradientStack_233(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_234)); }
	inline bool get_m_colorGradientPresetIsTinted_234() const { return ___m_colorGradientPresetIsTinted_234; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_234() { return &___m_colorGradientPresetIsTinted_234; }
	inline void set_m_colorGradientPresetIsTinted_234(bool value)
	{
		___m_colorGradientPresetIsTinted_234 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_235)); }
	inline float get_m_tabSpacing_235() const { return ___m_tabSpacing_235; }
	inline float* get_address_of_m_tabSpacing_235() { return &___m_tabSpacing_235; }
	inline void set_m_tabSpacing_235(float value)
	{
		___m_tabSpacing_235 = value;
	}

	inline static int32_t get_offset_of_m_spacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_236)); }
	inline float get_m_spacing_236() const { return ___m_spacing_236; }
	inline float* get_address_of_m_spacing_236() { return &___m_spacing_236; }
	inline void set_m_spacing_236(float value)
	{
		___m_spacing_236 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_237)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_237() const { return ___m_TextStyleStacks_237; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_237() { return &___m_TextStyleStacks_237; }
	inline void set_m_TextStyleStacks_237(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_237 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_237), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_238)); }
	inline int32_t get_m_TextStyleStackDepth_238() const { return ___m_TextStyleStackDepth_238; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_238() { return &___m_TextStyleStackDepth_238; }
	inline void set_m_TextStyleStackDepth_238(int32_t value)
	{
		___m_TextStyleStackDepth_238 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_239)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_239() const { return ___m_ItalicAngleStack_239; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_239() { return &___m_ItalicAngleStack_239; }
	inline void set_m_ItalicAngleStack_239(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_239 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_239))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_240)); }
	inline int32_t get_m_ItalicAngle_240() const { return ___m_ItalicAngle_240; }
	inline int32_t* get_address_of_m_ItalicAngle_240() { return &___m_ItalicAngle_240; }
	inline void set_m_ItalicAngle_240(int32_t value)
	{
		___m_ItalicAngle_240 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_241() const { return ___m_actionStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_241() { return &___m_actionStack_241; }
	inline void set_m_actionStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_242)); }
	inline float get_m_padding_242() const { return ___m_padding_242; }
	inline float* get_address_of_m_padding_242() { return &___m_padding_242; }
	inline void set_m_padding_242(float value)
	{
		___m_padding_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_243)); }
	inline float get_m_baselineOffset_243() const { return ___m_baselineOffset_243; }
	inline float* get_address_of_m_baselineOffset_243() { return &___m_baselineOffset_243; }
	inline void set_m_baselineOffset_243(float value)
	{
		___m_baselineOffset_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_244)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_244() const { return ___m_baselineOffsetStack_244; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_244() { return &___m_baselineOffsetStack_244; }
	inline void set_m_baselineOffsetStack_244(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_244 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_244))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_245)); }
	inline float get_m_xAdvance_245() const { return ___m_xAdvance_245; }
	inline float* get_address_of_m_xAdvance_245() { return &___m_xAdvance_245; }
	inline void set_m_xAdvance_245(float value)
	{
		___m_xAdvance_245 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_246)); }
	inline int32_t get_m_textElementType_246() const { return ___m_textElementType_246; }
	inline int32_t* get_address_of_m_textElementType_246() { return &___m_textElementType_246; }
	inline void set_m_textElementType_246(int32_t value)
	{
		___m_textElementType_246 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_247)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_247() const { return ___m_cached_TextElement_247; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_247() { return &___m_cached_TextElement_247; }
	inline void set_m_cached_TextElement_247(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_247 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_247), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_248() const { return ___m_Ellipsis_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_248() { return &___m_Ellipsis_248; }
	inline void set_m_Ellipsis_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_249)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_249() const { return ___m_Underline_249; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_249() { return &___m_Underline_249; }
	inline void set_m_Underline_249(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_250() const { return ___m_defaultSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_250() { return &___m_defaultSpriteAsset_250; }
	inline void set_m_defaultSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_251)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_251() const { return ___m_currentSpriteAsset_251; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_251() { return &___m_currentSpriteAsset_251; }
	inline void set_m_currentSpriteAsset_251(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_252)); }
	inline int32_t get_m_spriteCount_252() const { return ___m_spriteCount_252; }
	inline int32_t* get_address_of_m_spriteCount_252() { return &___m_spriteCount_252; }
	inline void set_m_spriteCount_252(int32_t value)
	{
		___m_spriteCount_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_253)); }
	inline int32_t get_m_spriteIndex_253() const { return ___m_spriteIndex_253; }
	inline int32_t* get_address_of_m_spriteIndex_253() { return &___m_spriteIndex_253; }
	inline void set_m_spriteIndex_253(int32_t value)
	{
		___m_spriteIndex_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_254)); }
	inline int32_t get_m_spriteAnimationID_254() const { return ___m_spriteAnimationID_254; }
	inline int32_t* get_address_of_m_spriteAnimationID_254() { return &___m_spriteAnimationID_254; }
	inline void set_m_spriteAnimationID_254(int32_t value)
	{
		___m_spriteAnimationID_254 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_255)); }
	inline bool get_m_ignoreActiveState_255() const { return ___m_ignoreActiveState_255; }
	inline bool* get_address_of_m_ignoreActiveState_255() { return &___m_ignoreActiveState_255; }
	inline void set_m_ignoreActiveState_255(bool value)
	{
		___m_ignoreActiveState_255 = value;
	}

	inline static int32_t get_offset_of_k_Power_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_256)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_256() const { return ___k_Power_256; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_256() { return &___k_Power_256; }
	inline void set_k_Power_256(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_256 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_256), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_53;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::onFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___onFontAssetRequest_161;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::onSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___onSpriteAssetRequest_162;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_257;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_258;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_259;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_260;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_261;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_262;

public:
	inline static int32_t get_offset_of_s_colorWhite_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_53() const { return ___s_colorWhite_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_53() { return &___s_colorWhite_53; }
	inline void set_s_colorWhite_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_53 = value;
	}

	inline static int32_t get_offset_of_onFontAssetRequest_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___onFontAssetRequest_161)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_onFontAssetRequest_161() const { return ___onFontAssetRequest_161; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_onFontAssetRequest_161() { return &___onFontAssetRequest_161; }
	inline void set_onFontAssetRequest_161(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___onFontAssetRequest_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFontAssetRequest_161), (void*)value);
	}

	inline static int32_t get_offset_of_onSpriteAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___onSpriteAssetRequest_162)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_onSpriteAssetRequest_162() const { return ___onSpriteAssetRequest_162; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_onSpriteAssetRequest_162() { return &___onSpriteAssetRequest_162; }
	inline void set_onSpriteAssetRequest_162(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___onSpriteAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSpriteAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_257)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_257() const { return ___k_LargePositiveVector2_257; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_257() { return &___k_LargePositiveVector2_257; }
	inline void set_k_LargePositiveVector2_257(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_257 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_258)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_258() const { return ___k_LargeNegativeVector2_258; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_258() { return &___k_LargeNegativeVector2_258; }
	inline void set_k_LargeNegativeVector2_258(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_259)); }
	inline float get_k_LargePositiveFloat_259() const { return ___k_LargePositiveFloat_259; }
	inline float* get_address_of_k_LargePositiveFloat_259() { return &___k_LargePositiveFloat_259; }
	inline void set_k_LargePositiveFloat_259(float value)
	{
		___k_LargePositiveFloat_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_260)); }
	inline float get_k_LargeNegativeFloat_260() const { return ___k_LargeNegativeFloat_260; }
	inline float* get_address_of_k_LargeNegativeFloat_260() { return &___k_LargeNegativeFloat_260; }
	inline void set_k_LargeNegativeFloat_260(float value)
	{
		___k_LargeNegativeFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_261)); }
	inline int32_t get_k_LargePositiveInt_261() const { return ___k_LargePositiveInt_261; }
	inline int32_t* get_address_of_k_LargePositiveInt_261() { return &___k_LargePositiveInt_261; }
	inline void set_k_LargePositiveInt_261(int32_t value)
	{
		___k_LargePositiveInt_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_262)); }
	inline int32_t get_k_LargeNegativeInt_262() const { return ___k_LargeNegativeInt_262; }
	inline int32_t* get_address_of_k_LargeNegativeInt_262() { return &___k_LargeNegativeInt_262; }
	inline void set_k_LargeNegativeInt_262(int32_t value)
	{
		___k_LargeNegativeInt_262 = value;
	}
};


// TMPro.TextMeshPro
struct  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_263;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_264;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_265;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_266;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_267;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_268;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_269;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_270;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_271;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_272;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_273;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_274;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_275;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_276;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_277;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_263() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_263)); }
	inline bool get_m_hasFontAssetChanged_263() const { return ___m_hasFontAssetChanged_263; }
	inline bool* get_address_of_m_hasFontAssetChanged_263() { return &___m_hasFontAssetChanged_263; }
	inline void set_m_hasFontAssetChanged_263(bool value)
	{
		___m_hasFontAssetChanged_263 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_264() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_264)); }
	inline float get_m_previousLossyScaleY_264() const { return ___m_previousLossyScaleY_264; }
	inline float* get_address_of_m_previousLossyScaleY_264() { return &___m_previousLossyScaleY_264; }
	inline void set_m_previousLossyScaleY_264(float value)
	{
		___m_previousLossyScaleY_264 = value;
	}

	inline static int32_t get_offset_of_m_renderer_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_265)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_265() const { return ___m_renderer_265; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_265() { return &___m_renderer_265; }
	inline void set_m_renderer_265(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_265 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_265), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_266)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_266() const { return ___m_meshFilter_266; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_266() { return &___m_meshFilter_266; }
	inline void set_m_meshFilter_266(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_267)); }
	inline bool get_m_isFirstAllocation_267() const { return ___m_isFirstAllocation_267; }
	inline bool* get_address_of_m_isFirstAllocation_267() { return &___m_isFirstAllocation_267; }
	inline void set_m_isFirstAllocation_267(bool value)
	{
		___m_isFirstAllocation_267 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_268)); }
	inline int32_t get_m_max_characters_268() const { return ___m_max_characters_268; }
	inline int32_t* get_address_of_m_max_characters_268() { return &___m_max_characters_268; }
	inline void set_m_max_characters_268(int32_t value)
	{
		___m_max_characters_268 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_269)); }
	inline int32_t get_m_max_numberOfLines_269() const { return ___m_max_numberOfLines_269; }
	inline int32_t* get_address_of_m_max_numberOfLines_269() { return &___m_max_numberOfLines_269; }
	inline void set_m_max_numberOfLines_269(int32_t value)
	{
		___m_max_numberOfLines_269 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_270)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_270() const { return ___m_subTextObjects_270; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_270() { return &___m_subTextObjects_270; }
	inline void set_m_subTextObjects_270(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_270 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_270), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_271)); }
	inline int32_t get_m_maskType_271() const { return ___m_maskType_271; }
	inline int32_t* get_address_of_m_maskType_271() { return &___m_maskType_271; }
	inline void set_m_maskType_271(int32_t value)
	{
		___m_maskType_271 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_272)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_272() const { return ___m_EnvMapMatrix_272; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_272() { return &___m_EnvMapMatrix_272; }
	inline void set_m_EnvMapMatrix_272(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_272 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_273)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_273() const { return ___m_RectTransformCorners_273; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_273() { return &___m_RectTransformCorners_273; }
	inline void set_m_RectTransformCorners_273(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_273 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_273), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_274)); }
	inline bool get_m_isRegisteredForEvents_274() const { return ___m_isRegisteredForEvents_274; }
	inline bool* get_address_of_m_isRegisteredForEvents_274() { return &___m_isRegisteredForEvents_274; }
	inline void set_m_isRegisteredForEvents_274(bool value)
	{
		___m_isRegisteredForEvents_274 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_275)); }
	inline int32_t get__SortingLayerID_275() const { return ____SortingLayerID_275; }
	inline int32_t* get_address_of__SortingLayerID_275() { return &____SortingLayerID_275; }
	inline void set__SortingLayerID_275(int32_t value)
	{
		____SortingLayerID_275 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_276)); }
	inline int32_t get__SortingOrder_276() const { return ____SortingOrder_276; }
	inline int32_t* get_address_of__SortingOrder_276() { return &____SortingOrder_276; }
	inline void set__SortingOrder_276(int32_t value)
	{
		____SortingOrder_276 = value;
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_277)); }
	inline bool get_m_currentAutoSizeMode_277() const { return ___m_currentAutoSizeMode_277; }
	inline bool* get_address_of_m_currentAutoSizeMode_277() { return &___m_currentAutoSizeMode_277; }
	inline void set_m_currentAutoSizeMode_277(bool value)
	{
		___m_currentAutoSizeMode_277 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  m_Items[1];

public:
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  m_Items[1];

public:
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.Examples.VertexJitter_VertexAnim[]
struct VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  m_Items[1];

public:
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* m_Items[1];

public:
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  m_Items[1];

public:
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
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


// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_gshared (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___comparison0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___min0, float ___max1, const RuntimeMethod* method);
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58 (TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6 (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73 (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *, const RuntimeMethod*))List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_gshared)(__this, ___comparison0, method);
}
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_MeshInfo_SortGeometry_m2C2FF0664600CA70E7A920FFF64C1BBD9026FD4D (TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * __this, RuntimeObject* ___sortingOrder0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB (WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m9E43B120A0875D561F640BECB6ED4A4E1821EBB7 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, String_t* ___text0, bool ___syncTextInputBox1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void spawner::Spawn(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spawner_Spawn_mE4EE2BB93372E704085B7AB8BB761ADF1A144E54 (spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ball0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3__ctor_m0038B1054BCC928D35F8C0021ED7D2E1C533E35F (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_IDisposable_Dispose_m5BAD394A0B09B3E0FF19E91521E02C2B3ADD6007 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__3_MoveNext_m2842AF5B12AFC17112D1AE75E46AB1B12776D2A6 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__3_MoveNext_m2842AF5B12AFC17112D1AE75E46AB1B12776D2A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00ba;
	}

IL_0022:
	{
		goto IL_0224;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = L_2->get_m_TextComponent_4();
		NullCheck(L_3);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = L_4->get_m_TextComponent_4();
		NullCheck(L_5);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_6 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_5, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__1_3(L_6);
		// int currentCharacter = 0;
		__this->set_U3CcurrentCharacterU3E5__2_4(0);
		// Color32 c0 = m_TextComponent.color;
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_8 = L_7->get_m_TextComponent_4();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_10 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_9, /*hidden argument*/NULL);
		__this->set_U3Cc0U3E5__4_6(L_10);
		goto IL_022c;
	}

IL_0081:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_11 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__5_7(L_12);
		// if (characterCount == 0)
		int32_t L_13 = __this->get_U3CcharacterCountU3E5__5_7();
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00c6;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ba:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_022c;
	}

IL_00c6:
	{
		// int materialIndex = textInfo.characterInfo[currentCharacter].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_16 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_16);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_17 = L_16->get_characterInfo_11();
		int32_t L_18 = __this->get_U3CcurrentCharacterU3E5__2_4();
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__6_8(L_19);
		// newVertexColors = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_20 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_20);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_21 = L_20->get_meshInfo_16();
		int32_t L_22 = __this->get_U3CmaterialIndexU3E5__6_8();
		NullCheck(L_21);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->get_colors32_11();
		__this->set_U3CnewVertexColorsU3E5__3_5(L_23);
		// int vertexIndex = textInfo.characterInfo[currentCharacter].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_24 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_24);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_25 = L_24->get_characterInfo_11();
		int32_t L_26 = __this->get_U3CcurrentCharacterU3E5__2_4();
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__7_9(L_27);
		// if (textInfo.characterInfo[currentCharacter].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_28 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_28);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_29 = L_28->get_characterInfo_11();
		int32_t L_30 = __this->get_U3CcurrentCharacterU3E5__2_4();
		NullCheck(L_29);
		bool L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->get_isVisible_40();
		V_2 = L_31;
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_01f6;
		}
	}
	{
		// c0 = new Color32((byte)Random.Range(0, 255), (byte)Random.Range(0, 255), (byte)Random.Range(0, 255), 255);
		int32_t L_33 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		int32_t L_34 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		int32_t L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)255), /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_36), (uint8_t)(((int32_t)((uint8_t)L_33))), (uint8_t)(((int32_t)((uint8_t)L_34))), (uint8_t)(((int32_t)((uint8_t)L_35))), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		__this->set_U3Cc0U3E5__4_6(L_36);
		// newVertexColors[vertexIndex + 0] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_37 = __this->get_U3CnewVertexColorsU3E5__3_5();
		int32_t L_38 = __this->get_U3CvertexIndexU3E5__7_9();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_39 = __this->get_U3Cc0U3E5__4_6();
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_39);
		// newVertexColors[vertexIndex + 1] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_40 = __this->get_U3CnewVertexColorsU3E5__3_5();
		int32_t L_41 = __this->get_U3CvertexIndexU3E5__7_9();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_42 = __this->get_U3Cc0U3E5__4_6();
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_42);
		// newVertexColors[vertexIndex + 2] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_43 = __this->get_U3CnewVertexColorsU3E5__3_5();
		int32_t L_44 = __this->get_U3CvertexIndexU3E5__7_9();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_45 = __this->get_U3Cc0U3E5__4_6();
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)2))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_45);
		// newVertexColors[vertexIndex + 3] = c0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_46 = __this->get_U3CnewVertexColorsU3E5__3_5();
		int32_t L_47 = __this->get_U3CvertexIndexU3E5__7_9();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_48 = __this->get_U3Cc0U3E5__4_6();
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)3))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_48);
		// m_TextComponent.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		VertexColorCycler_t37E80E87D8EAD0D7757CDA45BD5D3AA82FD28374 * L_49 = __this->get_U3CU3E4__this_2();
		NullCheck(L_49);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_50 = L_49->get_m_TextComponent_4();
		NullCheck(L_50);
		VirtActionInvoker1< int32_t >::Invoke(106 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_50, ((int32_t)16));
	}

IL_01f6:
	{
		// currentCharacter = (currentCharacter + 1) % characterCount;
		int32_t L_51 = __this->get_U3CcurrentCharacterU3E5__2_4();
		int32_t L_52 = __this->get_U3CcharacterCountU3E5__5_7();
		__this->set_U3CcurrentCharacterU3E5__2_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1))%(int32_t)L_52)));
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_53 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_53, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_53);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0224:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_022c:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0081;
	}
}
// System.Object TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE810D7968957A09C88E61C29DAAEC68E4AF1E51 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m72ABAC50E9E4D972FB44CAFF387F3E23FEC5D932_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.VertexColorCycler_<AnimateVertexColors>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_get_Current_m8DE595A1D01F3A507A356F8BCE020D0851412B52 (U3CAnimateVertexColorsU3Ed__3_tB3AD1CDAF88FD5FB6786CD89058781C6BDF67DAF * __this, const RuntimeMethod* method)
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
// System.Void TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m0222C3457F5ACA497FE3A8EC829DE4AD11A169F8 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m717E79A39A8161ADDA9E62F7CDFB67B8F2D65099 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_m169A75C7E2147372CB933520B670AF77907C1C6B (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__11_MoveNext_m169A75C7E2147372CB933520B670AF77907C1C6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0172;
	}

IL_0022:
	{
		goto IL_06dd;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = L_2->get_m_TextComponent_7();
		NullCheck(L_3);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = L_4->get_m_TextComponent_7();
		NullCheck(L_5);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_6 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_5, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__1_3(L_6);
		// int loopCount = 0;
		__this->set_U3CloopCountU3E5__3_5(0);
		// hasTextChanged = true;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		L_7->set_hasTextChanged_8((bool)1);
		// VertexAnim[] vertexAnim = new VertexAnim[1024];
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_8 = (VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF*)(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF*)SZArrayNew(VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_U3CvertexAnimU3E5__4_6(L_8);
		// for (int i = 0; i < 1024; i++)
		__this->set_U3CiU3E5__6_8(0);
		goto IL_00e2;
	}

IL_0086:
	{
		// vertexAnim[i].angleRange = Random.Range(10f, 25f);
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_9 = __this->get_U3CvertexAnimU3E5__4_6();
		int32_t L_10 = __this->get_U3CiU3E5__6_8();
		NullCheck(L_9);
		float L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((10.0f), (25.0f), /*hidden argument*/NULL);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_angleRange_0(L_11);
		// vertexAnim[i].speed = Random.Range(1f, 3f);
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_12 = __this->get_U3CvertexAnimU3E5__4_6();
		int32_t L_13 = __this->get_U3CiU3E5__6_8();
		NullCheck(L_12);
		float L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (3.0f), /*hidden argument*/NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_speed_2(L_14);
		// for (int i = 0; i < 1024; i++)
		int32_t L_15 = __this->get_U3CiU3E5__6_8();
		V_1 = L_15;
		int32_t L_16 = V_1;
		__this->set_U3CiU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_00e2:
	{
		// for (int i = 0; i < 1024; i++)
		int32_t L_17 = __this->get_U3CiU3E5__6_8();
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0086;
		}
	}
	{
		// TMP_MeshInfo[] cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_19 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_20 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_19, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoU3E5__5_7(L_20);
		goto IL_06e5;
	}

IL_0109:
	{
		// if (hasTextChanged)
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		bool L_22 = L_21->get_hasTextChanged_8();
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0138;
		}
	}
	{
		// cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_24 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_24);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_25 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_24, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoU3E5__5_7(L_25);
		// hasTextChanged = false;
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		L_26->set_hasTextChanged_8((bool)0);
	}

IL_0138:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_27 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__7_9(L_28);
		// if (characterCount == 0)
		int32_t L_29 = __this->get_U3CcharacterCountU3E5__7_9();
		V_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_017e;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0172:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_06e5;
	}

IL_017e:
	{
		// for (int i = 0; i < characterCount; i++)
		__this->set_U3CiU3E5__8_10(0);
		goto IL_05f5;
	}

IL_018a:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_32 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_32);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_33 = L_32->get_characterInfo_11();
		int32_t L_34 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		__this->set_U3CcharInfoU3E5__9_11(L_36);
		// if (!charInfo.isVisible)
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_37 = __this->get_address_of_U3CcharInfoU3E5__9_11();
		bool L_38 = L_37->get_isVisible_40();
		V_5 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_01c0;
		}
	}
	{
		// continue;
		goto IL_05e5;
	}

IL_01c0:
	{
		// VertexAnim vertAnim = vertexAnim[i];
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_40 = __this->get_U3CvertexAnimU3E5__4_6();
		int32_t L_41 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_40);
		int32_t L_42 = L_41;
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		__this->set_U3CvertAnimU3E5__10_12(L_43);
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_44 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_45 = L_44->get_characterInfo_11();
		int32_t L_46 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__11_13(L_47);
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_48 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_49 = L_48->get_characterInfo_11();
		int32_t L_50 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__12_14(L_51);
		// Vector3[] sourceVertices = cachedMeshInfo[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_52 = __this->get_U3CcachedMeshInfoU3E5__5_7();
		int32_t L_53 = __this->get_U3CmaterialIndexU3E5__11_13();
		NullCheck(L_52);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->get_vertices_6();
		__this->set_U3CsourceVerticesU3E5__13_15(L_54);
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_55 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_56 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_59 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_60 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_58, L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_63, (2.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_64, /*hidden argument*/NULL);
		__this->set_U3CcharMidBaslineU3E5__14_16(L_65);
		// Vector3 offset = charMidBasline;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66 = __this->get_U3CcharMidBaslineU3E5__14_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_66, /*hidden argument*/NULL);
		__this->set_U3CoffsetU3E5__15_17(L_67);
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_68 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_68);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_69 = L_68->get_meshInfo_16();
		int32_t L_70 = __this->get_U3CmaterialIndexU3E5__11_13();
		NullCheck(L_69);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->get_vertices_6();
		__this->set_U3CdestinationVerticesU3E5__16_18(L_71);
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_73 = __this->get_U3CvertexIndexU3E5__12_14();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_75 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_79);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_81 = __this->get_U3CvertexIndexU3E5__12_14();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_83 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_85, L_86, /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_87);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_89 = __this->get_U3CvertexIndexU3E5__12_14();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_91 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_93, L_94, /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_95);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_96 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_97 = __this->get_U3CvertexIndexU3E5__12_14();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_98 = __this->get_U3CsourceVerticesU3E5__13_15();
		int32_t L_99 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_101, L_102, /*hidden argument*/NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_103);
		// vertAnim.angle = Mathf.SmoothStep(-vertAnim.angleRange, vertAnim.angleRange, Mathf.PingPong(loopCount / 25f * vertAnim.speed, 1f));
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * L_104 = __this->get_address_of_U3CvertAnimU3E5__10_12();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * L_105 = __this->get_address_of_U3CvertAnimU3E5__10_12();
		float L_106 = L_105->get_angleRange_0();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * L_107 = __this->get_address_of_U3CvertAnimU3E5__10_12();
		float L_108 = L_107->get_angleRange_0();
		int32_t L_109 = __this->get_U3CloopCountU3E5__3_5();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 * L_110 = __this->get_address_of_U3CvertAnimU3E5__10_12();
		float L_111 = L_110->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_112 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_109)))/(float)(25.0f))), (float)L_111)), (1.0f), /*hidden argument*/NULL);
		float L_113 = Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6(((-L_106)), L_108, L_112, /*hidden argument*/NULL);
		L_104->set_angle_1(L_113);
		// Vector3 jitterOffset = new Vector3(Random.Range(-.25f, .25f), Random.Range(-.25f, .25f), 0);
		float L_114 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		float L_115 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_116), L_114, L_115, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CjitterOffsetU3E5__17_19(L_116);
		// matrix = Matrix4x4.TRS(jitterOffset * CurveScale, Quaternion.Euler(0, 0, Random.Range(-5f, 5f) * AngleMultiplier), Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117 = __this->get_U3CjitterOffsetU3E5__17_19();
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_118 = __this->get_U3CU3E4__this_2();
		NullCheck(L_118);
		float L_119 = L_118->get_CurveScale_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_117, L_119, /*hidden argument*/NULL);
		float L_121 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-5.0f), (5.0f), /*hidden argument*/NULL);
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_122 = __this->get_U3CU3E4__this_2();
		NullCheck(L_122);
		float L_123 = L_122->get_AngleMultiplier_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_124 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_121, (float)L_123)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_126 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_120, L_124, L_125, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__2_4(L_126);
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_127 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_128 = __this->get_U3CvertexIndexU3E5__12_14();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_129 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_130 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_131 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_129, L_133, /*hidden argument*/NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_134);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_135 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_136 = __this->get_U3CvertexIndexU3E5__12_14();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_137 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_138 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_139 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_137, L_141, /*hidden argument*/NULL);
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_142);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_143 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_144 = __this->get_U3CvertexIndexU3E5__12_14();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_145 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_146 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_147 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_146);
		int32_t L_148 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_145, L_149, /*hidden argument*/NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_150);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_151 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_152 = __this->get_U3CvertexIndexU3E5__12_14();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_153 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_154 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_155 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_154);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_153, L_157, /*hidden argument*/NULL);
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_158);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_159 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_160 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_159);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_161 = ((L_159)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_160)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_161);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_162, L_163, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_161 = L_164;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_165 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_166 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_165);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_167 = ((L_165)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_167);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_168, L_169, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_167 = L_170;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_171 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_172 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_171);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_173 = ((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_174 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_173);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_174, L_175, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_173 = L_176;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = __this->get_U3CdestinationVerticesU3E5__16_18();
		int32_t L_178 = __this->get_U3CvertexIndexU3E5__12_14();
		NullCheck(L_177);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_179 = ((L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_179);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181 = __this->get_U3CoffsetU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_180, L_181, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_179 = L_182;
		// vertexAnim[i] = vertAnim;
		VertexAnimU5BU5D_t069E9FCD87DE8FF65BE288FDB2834711D933AAFF* L_183 = __this->get_U3CvertexAnimU3E5__4_6();
		int32_t L_184 = __this->get_U3CiU3E5__8_10();
		VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4  L_185 = __this->get_U3CvertAnimU3E5__10_12();
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(L_184), (VertexAnim_t3C1CE8C591FCD7E249D77127BED0B743EAD556F4 )L_185);
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_186 = __this->get_address_of_U3CcharInfoU3E5__9_11();
		il2cpp_codegen_initobj(L_186, sizeof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B ));
		__this->set_U3CsourceVerticesU3E5__13_15((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_187 = __this->get_address_of_U3CcharMidBaslineU3E5__14_16();
		il2cpp_codegen_initobj(L_187, sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_188 = __this->get_address_of_U3CoffsetU3E5__15_17();
		il2cpp_codegen_initobj(L_188, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		__this->set_U3CdestinationVerticesU3E5__16_18((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_189 = __this->get_address_of_U3CjitterOffsetU3E5__17_19();
		il2cpp_codegen_initobj(L_189, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_05e5:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_190 = __this->get_U3CiU3E5__8_10();
		V_1 = L_190;
		int32_t L_191 = V_1;
		__this->set_U3CiU3E5__8_10(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1)));
	}

IL_05f5:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_192 = __this->get_U3CiU3E5__8_10();
		int32_t L_193 = __this->get_U3CcharacterCountU3E5__7_9();
		V_6 = (bool)((((int32_t)L_192) < ((int32_t)L_193))? 1 : 0);
		bool L_194 = V_6;
		if (L_194)
		{
			goto IL_018a;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__18_20(0);
		goto IL_0698;
	}

IL_0618:
	{
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_195 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_195);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_196 = L_195->get_meshInfo_16();
		int32_t L_197 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_196);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_197)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_199 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_199);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_200 = L_199->get_meshInfo_16();
		int32_t L_201 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_200);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_202 = ((L_200)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_201)))->get_vertices_6();
		NullCheck(L_198);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_198, L_202, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexJitter_t4BF9FCCB84221E69D9E3727E32E49710F3B4342A * L_203 = __this->get_U3CU3E4__this_2();
		NullCheck(L_203);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_204 = L_203->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_205 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_205);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_206 = L_205->get_meshInfo_16();
		int32_t L_207 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_206);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_208 = ((L_206)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_207)))->get_mesh_4();
		int32_t L_209 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_204);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(105 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_204, L_208, L_209);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_210 = __this->get_U3CiU3E5__18_20();
		V_1 = L_210;
		int32_t L_211 = V_1;
		__this->set_U3CiU3E5__18_20(((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1)));
	}

IL_0698:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_212 = __this->get_U3CiU3E5__18_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_213 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_213);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_214 = L_213->get_meshInfo_16();
		NullCheck(L_214);
		V_7 = (bool)((((int32_t)L_212) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_214)->max_length))))))? 1 : 0);
		bool L_215 = V_7;
		if (L_215)
		{
			goto IL_0618;
		}
	}
	{
		// loopCount += 1;
		int32_t L_216 = __this->get_U3CloopCountU3E5__3_5();
		__this->set_U3CloopCountU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)1)));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_217 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_217, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_217);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_06dd:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_06e5:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0109;
	}
}
// System.Object TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m920EBA43D59A1A88E27FED92CF0AC0DF90179479 (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m6C045A6DD0B60F1512457448E615877EAB86D75D_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.VertexJitter_<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m017345FE58B497EAFC9D0CB1FB733F76EB3449AF (U3CAnimateVertexColorsU3Ed__11_tB50A33D4FE1F8DD23F6652EA6967FFF7F855C741 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m92612416BEC0EBF5E9849FB603629C0F2F95FEF2 (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m77D966994D4717EAFD8EFE169F3E8A4EE8B05B81 (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_mCEEDE03667D329386BB4AE7B8252B7A9B54F443F (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__11_MoveNext_mCEEDE03667D329386BB4AE7B8252B7A9B54F443F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0176;
	}

IL_0022:
	{
		goto IL_0710;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = L_2->get_m_TextComponent_8();
		NullCheck(L_3);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = L_4->get_m_TextComponent_8();
		NullCheck(L_5);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_6 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_5, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__1_3(L_6);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_7 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CcopyOfVerticesU3E5__3_5(L_7);
		// hasTextChanged = true;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		L_8->set_hasTextChanged_9((bool)1);
		goto IL_0718;
	}

IL_0077:
	{
		// if (hasTextChanged)
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		bool L_10 = L_9->get_hasTextChanged_9();
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_013c;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_12 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		NullCheck(L_12);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_13 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_14 = L_13->get_meshInfo_16();
		NullCheck(L_14);
		V_2 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_16 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_16);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_17 = L_16->get_meshInfo_16();
		NullCheck(L_17);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_18 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))));
		__this->set_U3CcopyOfVerticesU3E5__3_5(L_18);
	}

IL_00be:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__6_8(0);
		goto IL_0114;
	}

IL_00c7:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_19 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_20 = L_19->get_meshInfo_16();
		int32_t L_21 = __this->get_U3CiU3E5__6_8();
		NullCheck(L_20);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->get_vertices_6();
		NullCheck(L_22);
		__this->set_U3ClengthU3E5__7_9((((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_23 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_24 = __this->get_U3CiU3E5__6_8();
		int32_t L_25 = __this->get_U3ClengthU3E5__7_9();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_26);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = __this->get_U3CiU3E5__6_8();
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->set_U3CiU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
	}

IL_0114:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_29 = __this->get_U3CiU3E5__6_8();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_30 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_30);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_31 = L_30->get_meshInfo_16();
		NullCheck(L_31);
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		L_33->set_hasTextChanged_9((bool)0);
	}

IL_013c:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_34 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__4_6(L_35);
		// if (characterCount == 0)
		int32_t L_36 = __this->get_U3CcharacterCountU3E5__4_6();
		V_5 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0182;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_38 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_38, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0176:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_0718;
	}

IL_0182:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_39 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_lineCount_8();
		__this->set_U3ClineCountU3E5__5_7(L_40);
		// for (int i = 0; i < lineCount; i++)
		__this->set_U3CiU3E5__8_10(0);
		goto IL_0647;
	}

IL_019f:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_41 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_41);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_42 = L_41->get_lineInfo_14();
		int32_t L_43 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_firstCharacterIndex_5();
		__this->set_U3CfirstU3E5__9_11(L_44);
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_45 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_45);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_46 = L_45->get_lineInfo_14();
		int32_t L_47 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->get_lastCharacterIndex_7();
		__this->set_U3ClastU3E5__10_12(L_48);
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_49 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_49);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_50 = L_49->get_characterInfo_11();
		int32_t L_51 = __this->get_U3CfirstU3E5__9_11();
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->get_bottomLeft_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_53 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_53);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_54 = L_53->get_characterInfo_11();
		int32_t L_55 = __this->get_U3ClastU3E5__10_12();
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->get_topRight_21();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_52, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_57, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CcenterOfLineU3E5__11_13(L_58);
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f) * RotationMultiplier);
		float L_59 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_60 = __this->get_U3CU3E4__this_2();
		NullCheck(L_60);
		float L_61 = L_60->get_RotationMultiplier_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_59, (float)L_61)), /*hidden argument*/NULL);
		__this->set_U3CrotationU3E5__12_14(L_62);
		// for (int j = first; j <= last; j++)
		int32_t L_63 = __this->get_U3CfirstU3E5__9_11();
		__this->set_U3CjU3E5__13_15(L_63);
		goto IL_0604;
	}

IL_026e:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_64 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_64);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_65 = L_64->get_characterInfo_11();
		int32_t L_66 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_65);
		bool L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->get_isVisible_40();
		V_6 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_6;
		if (!L_68)
		{
			goto IL_0298;
		}
	}
	{
		// continue;
		goto IL_05f4;
	}

IL_0298:
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_69 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_69);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_70 = L_69->get_characterInfo_11();
		int32_t L_71 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__14_16(L_72);
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_73 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_73);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_74 = L_73->get_characterInfo_11();
		int32_t L_75 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_74);
		int32_t L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__15_17(L_76);
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_77 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_77);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_78 = L_77->get_meshInfo_16();
		int32_t L_79 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_78);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->get_vertices_6();
		__this->set_U3CsourceVerticesU3E5__16_18(L_80);
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_81 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_82 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_84 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_86 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_87 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = __this->get_U3CcenterOfLineU3E5__11_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_89, L_90, /*hidden argument*/NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_91);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_92 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_93 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_95 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		int32_t L_96 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_98 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_100, L_101, /*hidden argument*/NULL);
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_102);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_103 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_104 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_109 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_111, L_112, /*hidden argument*/NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_114 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_115 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_117 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_119 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_120 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_122, L_123, /*hidden argument*/NULL);
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_124);
		// float randomScale = Random.Range(0.995f - 0.001f * ScaleMultiplier, 1.005f + 0.001f * ScaleMultiplier);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_125 = __this->get_U3CU3E4__this_2();
		NullCheck(L_125);
		float L_126 = L_125->get_ScaleMultiplier_6();
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_127 = __this->get_U3CU3E4__this_2();
		NullCheck(L_127);
		float L_128 = L_127->get_ScaleMultiplier_6();
		float L_129 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)(0.995000005f), (float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)L_126)))), ((float)il2cpp_codegen_add((float)(1.005f), (float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)L_128)))), /*hidden argument*/NULL);
		__this->set_U3CrandomScaleU3E5__17_19(L_129);
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_131 = __this->get_U3CrotationU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_133 = __this->get_U3CrandomScaleU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_132, L_133, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_135 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_130, L_131, L_134, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__2_4(L_135);
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_136 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_137 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_136);
		int32_t L_138 = L_137;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_139 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_141 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_142 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_143 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_142);
		int32_t L_144 = L_143;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_145 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		int32_t L_146 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_145);
		int32_t L_147 = L_146;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_141, L_148, /*hidden argument*/NULL);
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_149);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_150 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_151 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_150);
		int32_t L_152 = L_151;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_153 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_155 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_156 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_157 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_159 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		int32_t L_160 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_155, L_162, /*hidden argument*/NULL);
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_163);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_164 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_165 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_164);
		int32_t L_166 = L_165;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_167 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		int32_t L_168 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_169 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_170 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_171 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_173 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_177 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_169, L_176, /*hidden argument*/NULL);
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_177);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_178 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_179 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_178);
		int32_t L_180 = L_179;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_181 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_183 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_184 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_185 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_187 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		int32_t L_188 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_191 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_183, L_190, /*hidden argument*/NULL);
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_191);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_192 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_193 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_192);
		int32_t L_194 = L_193;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_195 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		int32_t L_196 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_195);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_197 = ((L_195)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_196)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_197);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_198, L_199, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_197 = L_200;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_201 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_202 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_201);
		int32_t L_203 = L_202;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_204 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_204);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_206 = ((L_204)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_206);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_209 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_207, L_208, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_206 = L_209;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_210 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_211 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_210);
		int32_t L_212 = L_211;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_213 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_213);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_215 = ((L_213)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_214, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_215);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_217 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_218 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_216, L_217, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_215 = L_218;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_219 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_220 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_219);
		int32_t L_221 = L_220;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_222 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_222);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_224 = ((L_222)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_225 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_224);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_226 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_227 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_225, L_226, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_224 = L_227;
		__this->set_U3CsourceVerticesU3E5__16_18((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
	}

IL_05f4:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_228 = __this->get_U3CjU3E5__13_15();
		V_3 = L_228;
		int32_t L_229 = V_3;
		__this->set_U3CjU3E5__13_15(((int32_t)il2cpp_codegen_add((int32_t)L_229, (int32_t)1)));
	}

IL_0604:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_230 = __this->get_U3CjU3E5__13_15();
		int32_t L_231 = __this->get_U3ClastU3E5__10_12();
		V_7 = (bool)((((int32_t)((((int32_t)L_230) > ((int32_t)L_231))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_232 = V_7;
		if (L_232)
		{
			goto IL_026e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_233 = __this->get_address_of_U3CcenterOfLineU3E5__11_13();
		il2cpp_codegen_initobj(L_233, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_234 = __this->get_address_of_U3CrotationU3E5__12_14();
		il2cpp_codegen_initobj(L_234, sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// for (int i = 0; i < lineCount; i++)
		int32_t L_235 = __this->get_U3CiU3E5__8_10();
		V_3 = L_235;
		int32_t L_236 = V_3;
		__this->set_U3CiU3E5__8_10(((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)1)));
	}

IL_0647:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_237 = __this->get_U3CiU3E5__8_10();
		int32_t L_238 = __this->get_U3ClineCountU3E5__5_7();
		V_8 = (bool)((((int32_t)L_237) < ((int32_t)L_238))? 1 : 0);
		bool L_239 = V_8;
		if (L_239)
		{
			goto IL_019f;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__18_20(0);
		goto IL_06d9;
	}

IL_0667:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_240 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_240);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_241 = L_240->get_meshInfo_16();
		int32_t L_242 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_241);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_243 = ((L_241)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_242)))->get_mesh_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_244 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_245 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_244);
		int32_t L_246 = L_245;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_247 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		NullCheck(L_243);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_243, L_247, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeA_t9DED8926E2D8F5E9D457C678C85062CB3B7A923A * L_248 = __this->get_U3CU3E4__this_2();
		NullCheck(L_248);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_249 = L_248->get_m_TextComponent_8();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_250 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_250);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_251 = L_250->get_meshInfo_16();
		int32_t L_252 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_251);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_253 = ((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_252)))->get_mesh_4();
		int32_t L_254 = __this->get_U3CiU3E5__18_20();
		NullCheck(L_249);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(105 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_249, L_253, L_254);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_255 = __this->get_U3CiU3E5__18_20();
		V_3 = L_255;
		int32_t L_256 = V_3;
		__this->set_U3CiU3E5__18_20(((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)1)));
	}

IL_06d9:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_257 = __this->get_U3CiU3E5__18_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_258 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_258);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_259 = L_258->get_meshInfo_16();
		NullCheck(L_259);
		V_9 = (bool)((((int32_t)L_257) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_259)->max_length))))))? 1 : 0);
		bool L_260 = V_9;
		if (L_260)
		{
			goto IL_0667;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_261 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_261, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_261);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0710:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0718:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0077;
	}
}
// System.Object TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCCD3645ACF9B18D760B341C863F853996FA9BCE (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_mB9444B5E58B4E97105C447F547C0F74C51BCFBFA_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.VertexShakeA_<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m5CC464185D5C0251C6206E20AFFA681BA0525A7E (U3CAnimateVertexColorsU3Ed__11_t6453F9CBEC4C77977786367165D55DA585BE7155 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m3E3B1D286DEBED2BC028AD490308568B930C3760 (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m0F9D4B2A6ED0500C2120DBA29932CC279E8908DC (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m0534E436514E663BF024364E524EE5716FF15C8E (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__10_MoveNext_m0534E436514E663BF024364E524EE5716FF15C8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0176;
	}

IL_0022:
	{
		goto IL_09b3;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = L_2->get_m_TextComponent_7();
		NullCheck(L_3);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = L_4->get_m_TextComponent_7();
		NullCheck(L_5);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_6 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_5, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__1_3(L_6);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_7 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CcopyOfVerticesU3E5__3_5(L_7);
		// hasTextChanged = true;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		L_8->set_hasTextChanged_8((bool)1);
		goto IL_09bb;
	}

IL_0077:
	{
		// if (hasTextChanged)
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		bool L_10 = L_9->get_hasTextChanged_8();
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_013c;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_12 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		NullCheck(L_12);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_13 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_14 = L_13->get_meshInfo_16();
		NullCheck(L_14);
		V_2 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_16 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_16);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_17 = L_16->get_meshInfo_16();
		NullCheck(L_17);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_18 = (Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB*)SZArrayNew(Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))));
		__this->set_U3CcopyOfVerticesU3E5__3_5(L_18);
	}

IL_00be:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__6_8(0);
		goto IL_0114;
	}

IL_00c7:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_19 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_20 = L_19->get_meshInfo_16();
		int32_t L_21 = __this->get_U3CiU3E5__6_8();
		NullCheck(L_20);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->get_vertices_6();
		NullCheck(L_22);
		__this->set_U3ClengthU3E5__7_9((((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_23 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_24 = __this->get_U3CiU3E5__6_8();
		int32_t L_25 = __this->get_U3ClengthU3E5__7_9();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_26);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = __this->get_U3CiU3E5__6_8();
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->set_U3CiU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
	}

IL_0114:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_29 = __this->get_U3CiU3E5__6_8();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_30 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_30);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_31 = L_30->get_meshInfo_16();
		NullCheck(L_31);
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		L_33->set_hasTextChanged_8((bool)0);
	}

IL_013c:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_34 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__4_6(L_35);
		// if (characterCount == 0)
		int32_t L_36 = __this->get_U3CcharacterCountU3E5__4_6();
		V_5 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0182;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_38 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_38, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0176:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_09bb;
	}

IL_0182:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_39 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_lineCount_8();
		__this->set_U3ClineCountU3E5__5_7(L_40);
		// for (int i = 0; i < lineCount; i++)
		__this->set_U3CiU3E5__8_10(0);
		goto IL_08ea;
	}

IL_019f:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_41 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_41);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_42 = L_41->get_lineInfo_14();
		int32_t L_43 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_firstCharacterIndex_5();
		__this->set_U3CfirstU3E5__9_11(L_44);
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_45 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_45);
		TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* L_46 = L_45->get_lineInfo_14();
		int32_t L_47 = __this->get_U3CiU3E5__8_10();
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->get_lastCharacterIndex_7();
		__this->set_U3ClastU3E5__10_12(L_48);
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_49 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_49);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_50 = L_49->get_characterInfo_11();
		int32_t L_51 = __this->get_U3CfirstU3E5__9_11();
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->get_bottomLeft_20();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_53 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_53);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_54 = L_53->get_characterInfo_11();
		int32_t L_55 = __this->get_U3ClastU3E5__10_12();
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->get_topRight_21();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_52, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_57, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CcenterOfLineU3E5__11_13(L_58);
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f));
		float L_59 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.25f), (0.25f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_60 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_59, /*hidden argument*/NULL);
		__this->set_U3CrotationU3E5__12_14(L_60);
		// for (int j = first; j <= last; j++)
		int32_t L_61 = __this->get_U3CfirstU3E5__9_11();
		__this->set_U3CjU3E5__13_15(L_61);
		goto IL_08a7;
	}

IL_0262:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_62 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_62);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_63 = L_62->get_characterInfo_11();
		int32_t L_64 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_63);
		bool L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->get_isVisible_40();
		V_6 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_6;
		if (!L_66)
		{
			goto IL_028c;
		}
	}
	{
		// continue;
		goto IL_0897;
	}

IL_028c:
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_67 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_67);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_68 = L_67->get_characterInfo_11();
		int32_t L_69 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__14_16(L_70);
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_71 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_71);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_72 = L_71->get_characterInfo_11();
		int32_t L_73 = __this->get_U3CjU3E5__13_15();
		NullCheck(L_72);
		int32_t L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__15_17(L_74);
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_75 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_75);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_76 = L_75->get_meshInfo_16();
		int32_t L_77 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_76);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->get_vertices_6();
		__this->set_U3CsourceVerticesU3E5__16_18(L_78);
		// Vector3 charCenter = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_79 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_80 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_84 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_82, L_86, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_87, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CcharCenterU3E5__17_19(L_88);
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_89 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_90 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_92 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_94 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_95 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_97, L_98, /*hidden argument*/NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_99);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_100 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_101 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_103 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		int32_t L_104 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_105 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_106 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_108, L_109, /*hidden argument*/NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_110);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_111 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_112 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_111);
		int32_t L_113 = L_112;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_114 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_116 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_117 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_119, L_120, /*hidden argument*/NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_121);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_122 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_123 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_125 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126 = __this->get_U3CvertexIndexU3E5__15_17();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_127 = __this->get_U3CsourceVerticesU3E5__16_18();
		int32_t L_128 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_130, L_131, /*hidden argument*/NULL);
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_132);
		// float randomScale = Random.Range(0.95f, 1.05f);
		float L_133 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.949999988f), (1.04999995f), /*hidden argument*/NULL);
		__this->set_U3CrandomScaleU3E5__18_20(L_133);
		// matrix = Matrix4x4.TRS(Vector3.one, Quaternion.identity, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_135 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_137 = __this->get_U3CrandomScaleU3E5__18_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_136, L_137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_139 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_134, L_135, L_138, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__2_4(L_139);
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_140 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_141 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_143 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		int32_t L_144 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_145 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_146 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_147 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_149 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		int32_t L_150 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_145, L_152, /*hidden argument*/NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_153);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_154 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_155 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_154);
		int32_t L_156 = L_155;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_157 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		int32_t L_158 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_159 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_160 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_161 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_163 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		int32_t L_164 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_163);
		int32_t L_165 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_159, L_166, /*hidden argument*/NULL);
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_167);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_168 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_169 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_171 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_173 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_174 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_175 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_174);
		int32_t L_176 = L_175;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		int32_t L_178 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_173, L_180, /*hidden argument*/NULL);
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_181);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_182 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_183 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_185 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_187 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_188 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_189 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_188);
		int32_t L_190 = L_189;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_191 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		int32_t L_192 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_191);
		int32_t L_193 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_187, L_194, /*hidden argument*/NULL);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_195);
		// copyOfVertices[materialIndex][vertexIndex + 0] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_196 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_197 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_196);
		int32_t L_198 = L_197;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_199 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		int32_t L_200 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_199);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_201 = ((L_199)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_200)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_201);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_202, L_203, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_201 = L_204;
		// copyOfVertices[materialIndex][vertexIndex + 1] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_205 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_206 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_205);
		int32_t L_207 = L_206;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_208 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_208);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_210 = ((L_208)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_211 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_210);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_212 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_213 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_211, L_212, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_210 = L_213;
		// copyOfVertices[materialIndex][vertexIndex + 2] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_214 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_215 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_214);
		int32_t L_216 = L_215;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_217 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		int32_t L_218 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_217);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_219 = ((L_217)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_219);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_221 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_222 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_220, L_221, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_219 = L_222;
		// copyOfVertices[materialIndex][vertexIndex + 3] += charCenter;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_223 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_224 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_223);
		int32_t L_225 = L_224;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_226 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_226);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_228 = ((L_226)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_229 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_228);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230 = __this->get_U3CcharCenterU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_231 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_229, L_230, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_228 = L_231;
		// copyOfVertices[materialIndex][vertexIndex + 0] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_232 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_233 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_232);
		int32_t L_234 = L_233;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_235 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_235);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_238 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_237);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_239 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_240 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_238, L_239, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_237 = L_240;
		// copyOfVertices[materialIndex][vertexIndex + 1] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_241 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_242 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_241);
		int32_t L_243 = L_242;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_244 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_244);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_246 = ((L_244)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_247 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_246);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_248 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_249 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_247, L_248, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_246 = L_249;
		// copyOfVertices[materialIndex][vertexIndex + 2] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_250 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_251 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_250);
		int32_t L_252 = L_251;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_253 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		int32_t L_254 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_253);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_255 = ((L_253)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_254, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_256 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_255);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_257 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_258 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_256, L_257, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_255 = L_258;
		// copyOfVertices[materialIndex][vertexIndex + 3] -= centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_259 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_260 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_259);
		int32_t L_261 = L_260;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_262 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_262);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_264 = ((L_262)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_265 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_264);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_266 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_267 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_265, L_266, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_264 = L_267;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_268 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_269 = __this->get_U3CrotationU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_270 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_271 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_268, L_269, L_270, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__2_4(L_271);
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_272 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_273 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_272);
		int32_t L_274 = L_273;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_275 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		int32_t L_276 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_277 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_278 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_279 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_278);
		int32_t L_280 = L_279;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_281 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int32_t L_282 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_281);
		int32_t L_283 = L_282;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_285 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_277, L_284, /*hidden argument*/NULL);
		NullCheck(L_275);
		(L_275)->SetAt(static_cast<il2cpp_array_size_t>(L_276), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_285);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_286 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_287 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_286);
		int32_t L_288 = L_287;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_289 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		int32_t L_290 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_291 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_292 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_293 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_292);
		int32_t L_294 = L_293;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_295 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		int32_t L_296 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_295);
		int32_t L_297 = ((int32_t)il2cpp_codegen_add((int32_t)L_296, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_299 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_291, L_298, /*hidden argument*/NULL);
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_290, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_299);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_300 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_301 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_300);
		int32_t L_302 = L_301;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_303 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		int32_t L_304 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_305 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_306 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_307 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_306);
		int32_t L_308 = L_307;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_309 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		int32_t L_310 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_309);
		int32_t L_311 = ((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_312 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_313 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_305, L_312, /*hidden argument*/NULL);
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_304, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_313);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_314 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_315 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_314);
		int32_t L_316 = L_315;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_317 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318 = __this->get_U3CvertexIndexU3E5__15_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_319 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_320 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_321 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_320);
		int32_t L_322 = L_321;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_323 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		int32_t L_324 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_323);
		int32_t L_325 = ((int32_t)il2cpp_codegen_add((int32_t)L_324, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_327 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_319, L_326, /*hidden argument*/NULL);
		NullCheck(L_317);
		(L_317)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_318, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_327);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_328 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_329 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_328);
		int32_t L_330 = L_329;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_331 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		int32_t L_332 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_331);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_333 = ((L_331)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_332)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_334 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_333);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_335 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_336 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_334, L_335, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_333 = L_336;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_337 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_338 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_337);
		int32_t L_339 = L_338;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_340 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t L_341 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_340);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_342 = ((L_340)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_341, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_343 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_342);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_344 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_345 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_343, L_344, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_342 = L_345;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_346 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_347 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_346);
		int32_t L_348 = L_347;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_349 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		int32_t L_350 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_349);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_351 = ((L_349)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_350, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_352 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_351);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_353 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_354 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_352, L_353, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_351 = L_354;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_355 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_356 = __this->get_U3CmaterialIndexU3E5__14_16();
		NullCheck(L_355);
		int32_t L_357 = L_356;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_358 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = __this->get_U3CvertexIndexU3E5__15_17();
		NullCheck(L_358);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_360 = ((L_358)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_359, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_360);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_362 = __this->get_U3CcenterOfLineU3E5__11_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_363 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_361, L_362, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_360 = L_363;
		__this->set_U3CsourceVerticesU3E5__16_18((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_364 = __this->get_address_of_U3CcharCenterU3E5__17_19();
		il2cpp_codegen_initobj(L_364, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_0897:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_365 = __this->get_U3CjU3E5__13_15();
		V_3 = L_365;
		int32_t L_366 = V_3;
		__this->set_U3CjU3E5__13_15(((int32_t)il2cpp_codegen_add((int32_t)L_366, (int32_t)1)));
	}

IL_08a7:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_367 = __this->get_U3CjU3E5__13_15();
		int32_t L_368 = __this->get_U3ClastU3E5__10_12();
		V_7 = (bool)((((int32_t)((((int32_t)L_367) > ((int32_t)L_368))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_369 = V_7;
		if (L_369)
		{
			goto IL_0262;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_370 = __this->get_address_of_U3CcenterOfLineU3E5__11_13();
		il2cpp_codegen_initobj(L_370, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_371 = __this->get_address_of_U3CrotationU3E5__12_14();
		il2cpp_codegen_initobj(L_371, sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// for (int i = 0; i < lineCount; i++)
		int32_t L_372 = __this->get_U3CiU3E5__8_10();
		V_3 = L_372;
		int32_t L_373 = V_3;
		__this->set_U3CiU3E5__8_10(((int32_t)il2cpp_codegen_add((int32_t)L_373, (int32_t)1)));
	}

IL_08ea:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_374 = __this->get_U3CiU3E5__8_10();
		int32_t L_375 = __this->get_U3ClineCountU3E5__5_7();
		V_8 = (bool)((((int32_t)L_374) < ((int32_t)L_375))? 1 : 0);
		bool L_376 = V_8;
		if (L_376)
		{
			goto IL_019f;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__19_21(0);
		goto IL_097c;
	}

IL_090a:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_377 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_377);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_378 = L_377->get_meshInfo_16();
		int32_t L_379 = __this->get_U3CiU3E5__19_21();
		NullCheck(L_378);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_380 = ((L_378)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_379)))->get_mesh_4();
		Vector3U5BU5DU5BU5D_tAD34024FBDE3F1F720ECB62B24B914A748C60BCB* L_381 = __this->get_U3CcopyOfVerticesU3E5__3_5();
		int32_t L_382 = __this->get_U3CiU3E5__19_21();
		NullCheck(L_381);
		int32_t L_383 = L_382;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_384 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_383));
		NullCheck(L_380);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_380, L_384, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeB_t348FF1466CEF3BFED37C140B7AEFA2EA90D703C9 * L_385 = __this->get_U3CU3E4__this_2();
		NullCheck(L_385);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_386 = L_385->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_387 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_387);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_388 = L_387->get_meshInfo_16();
		int32_t L_389 = __this->get_U3CiU3E5__19_21();
		NullCheck(L_388);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_390 = ((L_388)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_389)))->get_mesh_4();
		int32_t L_391 = __this->get_U3CiU3E5__19_21();
		NullCheck(L_386);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(105 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_386, L_390, L_391);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_392 = __this->get_U3CiU3E5__19_21();
		V_3 = L_392;
		int32_t L_393 = V_3;
		__this->set_U3CiU3E5__19_21(((int32_t)il2cpp_codegen_add((int32_t)L_393, (int32_t)1)));
	}

IL_097c:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_394 = __this->get_U3CiU3E5__19_21();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_395 = __this->get_U3CtextInfoU3E5__1_3();
		NullCheck(L_395);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_396 = L_395->get_meshInfo_16();
		NullCheck(L_396);
		V_9 = (bool)((((int32_t)L_394) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_396)->max_length))))))? 1 : 0);
		bool L_397 = V_9;
		if (L_397)
		{
			goto IL_090a;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_398 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_398, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_398);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_09b3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_09bb:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0077;
	}
}
// System.Object TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF2A8BAFC0261ACBBE8EEA74DE4B498D30C68AE3D (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5F12D7C6F2523BEB6326FE49AE972116D6157CBB_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.VertexShakeB_<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_mB9C12786011A3B78517AEFAE8D5A78B95A4219AD (U3CAnimateVertexColorsU3Ed__10_t740D0A5D063674119342F33329012F78E8D3DAC6 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.Examples.VertexZoom_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TMPro.Examples.VertexZoom_<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107 (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = __this->get_modifiedCharScale_0();
		int32_t L_1 = ___a0;
		NullCheck(L_0);
		float L_2 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3 = __this->get_modifiedCharScale_0();
		int32_t L_4 = ___b1;
		NullCheck(L_3);
		float L_5 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		int32_t L_6 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m537CF0A5ADF5BBC2DF784BF526E3F32EB528E1B2 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_mF0CD944C393771101D2718A660E1DFF22385819F (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m8340EFEB2B2CF6EA1545CFB6967968CA171FEE66 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__10_MoveNext_m8340EFEB2B2CF6EA1545CFB6967968CA171FEE66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * G_B21_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B21_1 = NULL;
	Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * G_B20_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B20_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0109;
	}

IL_0022:
	{
		goto IL_0895;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_2 = (U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_m4EC5F8042B5AC645EA7D0913E50FD22144DBD348(L_2, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_2);
		// m_TextComponent.ForceMeshUpdate();
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_7();
		NullCheck(L_4);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = L_5->get_m_TextComponent_7();
		NullCheck(L_6);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_7 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_6, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__2_4(L_7);
		// TMP_MeshInfo[] cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_8 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_8);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_9 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_8, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoVertexDataU3E5__4_6(L_9);
		// List<float> modifiedCharScale = new List<float>();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_10 = __this->get_U3CU3E8__1_3();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_11 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_11, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->set_modifiedCharScale_0(L_11);
		// List<int> scaleSortingOrder = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_12, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_U3CscaleSortingOrderU3E5__5_7(L_12);
		// hasTextChanged = true;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_13 = __this->get_U3CU3E4__this_2();
		NullCheck(L_13);
		L_13->set_hasTextChanged_8((bool)1);
		goto IL_089d;
	}

IL_00a2:
	{
		// if (hasTextChanged)
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		bool L_15 = L_14->get_hasTextChanged_8();
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_00d1;
		}
	}
	{
		// cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_17 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_17);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_18 = TMP_TextInfo_CopyMeshInfoVertexData_m76E3357D987643644CE791EBEED4AB16A0ABFA58(L_17, /*hidden argument*/NULL);
		__this->set_U3CcachedMeshInfoVertexDataU3E5__4_6(L_18);
		// hasTextChanged = false;
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_19 = __this->get_U3CU3E4__this_2();
		NullCheck(L_19);
		L_19->set_hasTextChanged_8((bool)0);
	}

IL_00d1:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_20 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__6_8(L_21);
		// if (characterCount == 0)
		int32_t L_22 = __this->get_U3CcharacterCountU3E5__6_8();
		V_2 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_0115;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0109:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_089d;
	}

IL_0115:
	{
		// modifiedCharScale.Clear();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_25 = __this->get_U3CU3E8__1_3();
		NullCheck(L_25);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_26 = L_25->get_modifiedCharScale_0();
		NullCheck(L_26);
		List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D(L_26, /*hidden argument*/List_1_Clear_m30CC5EC96F262C98EE9BFCFC9CF8D09F67E0A23D_RuntimeMethod_var);
		// scaleSortingOrder.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_27 = __this->get_U3CscaleSortingOrderU3E5__5_7();
		NullCheck(L_27);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_27, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// for (int i = 0; i < characterCount; i++)
		__this->set_U3CiU3E5__7_9(0);
		goto IL_06e3;
	}

IL_013e:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_28 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_28);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_29 = L_28->get_characterInfo_11();
		int32_t L_30 = __this->get_U3CiU3E5__7_9();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		__this->set_U3CcharInfoU3E5__8_10(L_32);
		// if (!charInfo.isVisible)
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_33 = __this->get_address_of_U3CcharInfoU3E5__8_10();
		bool L_34 = L_33->get_isVisible_40();
		V_3 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_0172;
		}
	}
	{
		// continue;
		goto IL_06d1;
	}

IL_0172:
	{
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_36 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_36);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_37 = L_36->get_characterInfo_11();
		int32_t L_38 = __this->get_U3CiU3E5__7_9();
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__9_11(L_39);
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_40 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_40);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_41 = L_40->get_characterInfo_11();
		int32_t L_42 = __this->get_U3CiU3E5__7_9();
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__10_12(L_43);
		// Vector3[] sourceVertices = cachedMeshInfoVertexData[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_44 = __this->get_U3CcachedMeshInfoVertexDataU3E5__4_6();
		int32_t L_45 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_44);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_vertices_6();
		__this->set_U3CsourceVerticesU3E5__11_13(L_46);
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_47 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_48 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_52 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_55, (2.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_56, /*hidden argument*/NULL);
		__this->set_U3CcharMidBaslineU3E5__12_14(L_57);
		// Vector3 offset = charMidBasline;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = __this->get_U3CcharMidBaslineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_58, /*hidden argument*/NULL);
		__this->set_U3CoffsetU3E5__13_15(L_59);
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_60 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_60);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_61 = L_60->get_meshInfo_16();
		int32_t L_62 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_61);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->get_vertices_6();
		__this->set_U3CdestinationVerticesU3E5__14_16(L_63);
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_64 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_65 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_67 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_71);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_73 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_75 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_79);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_81 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_83 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_85, L_86, /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_87);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_89 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = __this->get_U3CsourceVerticesU3E5__11_13();
		int32_t L_91 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_93, L_94, /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_95);
		// float randomScale = Random.Range(1f, 1.5f);
		float L_96 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (1.5f), /*hidden argument*/NULL);
		__this->set_U3CrandomScaleU3E5__15_17(L_96);
		// modifiedCharScale.Add(randomScale);
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_97 = __this->get_U3CU3E8__1_3();
		NullCheck(L_97);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_98 = L_97->get_modifiedCharScale_0();
		float L_99 = __this->get_U3CrandomScaleU3E5__15_17();
		NullCheck(L_98);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_98, L_99, /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		// scaleSortingOrder.Add(modifiedCharScale.Count - 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_100 = __this->get_U3CscaleSortingOrderU3E5__5_7();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_101 = __this->get_U3CU3E8__1_3();
		NullCheck(L_101);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_102 = L_101->get_modifiedCharScale_0();
		NullCheck(L_102);
		int32_t L_103 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_102, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		NullCheck(L_100);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_100, ((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, Vector3.one * randomScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_104), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_105 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_107 = __this->get_U3CrandomScaleU3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_106, L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_109 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_104, L_105, L_108, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__3_5(L_109);
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_110 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_111 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_112 = __this->get_address_of_U3CmatrixU3E5__3_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_113 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_114 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_112, L_116, /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_117);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_118 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_119 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_120 = __this->get_address_of_U3CmatrixU3E5__3_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_121 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_122 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_120, L_124, /*hidden argument*/NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_125);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_126 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_127 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_128 = __this->get_address_of_U3CmatrixU3E5__3_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_129 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_130 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_128, L_132, /*hidden argument*/NULL);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_133);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_134 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_135 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_136 = __this->get_address_of_U3CmatrixU3E5__3_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_137 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_138 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_136, L_140, /*hidden argument*/NULL);
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_141);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_142 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_143 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_142);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_144);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_145, L_146, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_144 = L_147;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_148 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_149 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_148);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_150 = ((L_148)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_150);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_151, L_152, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_150 = L_153;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_154 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_155 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_154);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_156 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_156);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_157, L_158, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_156 = L_159;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_160 = __this->get_U3CdestinationVerticesU3E5__14_16();
		int32_t L_161 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_160);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_162 = ((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_162);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164 = __this->get_U3CoffsetU3E5__13_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_163, L_164, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_162 = L_165;
		// Vector2[] sourceUVs0 = cachedMeshInfoVertexData[materialIndex].uvs0;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_166 = __this->get_U3CcachedMeshInfoVertexDataU3E5__4_6();
		int32_t L_167 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_166);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_168 = ((L_166)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_167)))->get_uvs0_9();
		__this->set_U3CsourceUVs0U3E5__16_18(L_168);
		// Vector2[] destinationUVs0 = textInfo.meshInfo[materialIndex].uvs0;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_169 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_169);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_170 = L_169->get_meshInfo_16();
		int32_t L_171 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_170);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_172 = ((L_170)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_171)))->get_uvs0_9();
		__this->set_U3CdestinationUVs0U3E5__17_19(L_172);
		// destinationUVs0[vertexIndex + 0] = sourceUVs0[vertexIndex + 0];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_173 = __this->get_U3CdestinationUVs0U3E5__17_19();
		int32_t L_174 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_175 = __this->get_U3CsourceUVs0U3E5__16_18();
		int32_t L_176 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_175);
		int32_t L_177 = L_176;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_178);
		// destinationUVs0[vertexIndex + 1] = sourceUVs0[vertexIndex + 1];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_179 = __this->get_U3CdestinationUVs0U3E5__17_19();
		int32_t L_180 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_181 = __this->get_U3CsourceUVs0U3E5__16_18();
		int32_t L_182 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_184);
		// destinationUVs0[vertexIndex + 2] = sourceUVs0[vertexIndex + 2];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_185 = __this->get_U3CdestinationUVs0U3E5__17_19();
		int32_t L_186 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_187 = __this->get_U3CsourceUVs0U3E5__16_18();
		int32_t L_188 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)2));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_190);
		// destinationUVs0[vertexIndex + 3] = sourceUVs0[vertexIndex + 3];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_191 = __this->get_U3CdestinationUVs0U3E5__17_19();
		int32_t L_192 = __this->get_U3CvertexIndexU3E5__10_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_193 = __this->get_U3CsourceUVs0U3E5__16_18();
		int32_t L_194 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_196);
		// Color32[] sourceColors32 = cachedMeshInfoVertexData[materialIndex].colors32;
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_197 = __this->get_U3CcachedMeshInfoVertexDataU3E5__4_6();
		int32_t L_198 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_197);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_199 = ((L_197)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_198)))->get_colors32_11();
		__this->set_U3CsourceColors32U3E5__18_20(L_199);
		// Color32[] destinationColors32 = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_200 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_200);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_201 = L_200->get_meshInfo_16();
		int32_t L_202 = __this->get_U3CmaterialIndexU3E5__9_11();
		NullCheck(L_201);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_203 = ((L_201)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_202)))->get_colors32_11();
		__this->set_U3CdestinationColors32U3E5__19_21(L_203);
		// destinationColors32[vertexIndex + 0] = sourceColors32[vertexIndex + 0];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_204 = __this->get_U3CdestinationColors32U3E5__19_21();
		int32_t L_205 = __this->get_U3CvertexIndexU3E5__10_12();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_206 = __this->get_U3CsourceColors32U3E5__18_20();
		int32_t L_207 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_206);
		int32_t L_208 = L_207;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(L_205), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_209);
		// destinationColors32[vertexIndex + 1] = sourceColors32[vertexIndex + 1];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_210 = __this->get_U3CdestinationColors32U3E5__19_21();
		int32_t L_211 = __this->get_U3CvertexIndexU3E5__10_12();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_212 = __this->get_U3CsourceColors32U3E5__18_20();
		int32_t L_213 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_212);
		int32_t L_214 = ((int32_t)il2cpp_codegen_add((int32_t)L_213, (int32_t)1));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_215);
		// destinationColors32[vertexIndex + 2] = sourceColors32[vertexIndex + 2];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_216 = __this->get_U3CdestinationColors32U3E5__19_21();
		int32_t L_217 = __this->get_U3CvertexIndexU3E5__10_12();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_218 = __this->get_U3CsourceColors32U3E5__18_20();
		int32_t L_219 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_218);
		int32_t L_220 = ((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)2));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_221 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)2))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_221);
		// destinationColors32[vertexIndex + 3] = sourceColors32[vertexIndex + 3];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_222 = __this->get_U3CdestinationColors32U3E5__19_21();
		int32_t L_223 = __this->get_U3CvertexIndexU3E5__10_12();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_224 = __this->get_U3CsourceColors32U3E5__18_20();
		int32_t L_225 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_224);
		int32_t L_226 = ((int32_t)il2cpp_codegen_add((int32_t)L_225, (int32_t)3));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)3))), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_227);
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_228 = __this->get_address_of_U3CcharInfoU3E5__8_10();
		il2cpp_codegen_initobj(L_228, sizeof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B ));
		__this->set_U3CsourceVerticesU3E5__11_13((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_229 = __this->get_address_of_U3CcharMidBaslineU3E5__12_14();
		il2cpp_codegen_initobj(L_229, sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_230 = __this->get_address_of_U3CoffsetU3E5__13_15();
		il2cpp_codegen_initobj(L_230, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		__this->set_U3CdestinationVerticesU3E5__14_16((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		__this->set_U3CsourceUVs0U3E5__16_18((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL);
		__this->set_U3CdestinationUVs0U3E5__17_19((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL);
		__this->set_U3CsourceColors32U3E5__18_20((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)NULL);
		__this->set_U3CdestinationColors32U3E5__19_21((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)NULL);
	}

IL_06d1:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_231 = __this->get_U3CiU3E5__7_9();
		V_4 = L_231;
		int32_t L_232 = V_4;
		__this->set_U3CiU3E5__7_9(((int32_t)il2cpp_codegen_add((int32_t)L_232, (int32_t)1)));
	}

IL_06e3:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_233 = __this->get_U3CiU3E5__7_9();
		int32_t L_234 = __this->get_U3CcharacterCountU3E5__6_8();
		V_5 = (bool)((((int32_t)L_233) < ((int32_t)L_234))? 1 : 0);
		bool L_235 = V_5;
		if (L_235)
		{
			goto IL_013e;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->set_U3CiU3E5__20_22(0);
		goto IL_085e;
	}

IL_0706:
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_236 = __this->get_U3CscaleSortingOrderU3E5__5_7();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_237 = __this->get_U3CU3E8__1_3();
		NullCheck(L_237);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_238 = L_237->get_U3CU3E9__0_1();
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_239 = L_238;
		G_B20_0 = L_239;
		G_B20_1 = L_236;
		if (L_239)
		{
			G_B21_0 = L_239;
			G_B21_1 = L_236;
			goto IL_073d;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_240 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass10_0_t1AC05F5499B93AC94E9727B8B0F08D8037AD52A6 * L_241 = __this->get_U3CU3E8__1_3();
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_242 = (Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C *)il2cpp_codegen_object_new(Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73(L_242, L_241, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m959A7E1D6162B5AAF28B953AFB04D7943BCAB107_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mAA110A3F5163760D63E663F9545B370983389F73_RuntimeMethod_var);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_243 = L_242;
		V_6 = L_243;
		NullCheck(L_240);
		L_240->set_U3CU3E9__0_1(L_243);
		Comparison_1_t3430355DCDD0AF453788265DC88E9288D19C4E9C * L_244 = V_6;
		G_B21_0 = L_244;
		G_B21_1 = G_B20_1;
	}

IL_073d:
	{
		NullCheck(G_B21_1);
		List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3(G_B21_1, G_B21_0, /*hidden argument*/List_1_Sort_mA28ABFC1E6C7A17EA71BC9C2DBED9CC3EE8DCDC3_RuntimeMethod_var);
		// textInfo.meshInfo[i].SortGeometry(scaleSortingOrder);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_245 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_245);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_246 = L_245->get_meshInfo_16();
		int32_t L_247 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_246);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_248 = __this->get_U3CscaleSortingOrderU3E5__5_7();
		TMP_MeshInfo_SortGeometry_m2C2FF0664600CA70E7A920FFF64C1BBD9026FD4D((TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 *)((L_246)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_247))), L_248, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_249 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_249);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_250 = L_249->get_meshInfo_16();
		int32_t L_251 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_250);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_252 = ((L_250)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_251)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_253 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_253);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_254 = L_253->get_meshInfo_16();
		int32_t L_255 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_254);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_256 = ((L_254)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_255)))->get_vertices_6();
		NullCheck(L_252);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_252, L_256, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.uv = textInfo.meshInfo[i].uvs0;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_257 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_257);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_258 = L_257->get_meshInfo_16();
		int32_t L_259 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_258);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_260 = ((L_258)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_259)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_261 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_261);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_262 = L_261->get_meshInfo_16();
		int32_t L_263 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_262);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_264 = ((L_262)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_263)))->get_uvs0_9();
		NullCheck(L_260);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_260, L_264, /*hidden argument*/NULL);
		// textInfo.meshInfo[i].mesh.colors32 = textInfo.meshInfo[i].colors32;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_265 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_265);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_266 = L_265->get_meshInfo_16();
		int32_t L_267 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_266);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_268 = ((L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_267)))->get_mesh_4();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_269 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_269);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_270 = L_269->get_meshInfo_16();
		int32_t L_271 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_270);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_272 = ((L_270)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_271)))->get_colors32_11();
		NullCheck(L_268);
		Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91(L_268, L_272, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexZoom_t02E8994D3A9EB41AEEF1544EF8C93009F6153163 * L_273 = __this->get_U3CU3E4__this_2();
		NullCheck(L_273);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_274 = L_273->get_m_TextComponent_7();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_275 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_275);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_276 = L_275->get_meshInfo_16();
		int32_t L_277 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_276);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_278 = ((L_276)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_277)))->get_mesh_4();
		int32_t L_279 = __this->get_U3CiU3E5__20_22();
		NullCheck(L_274);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(105 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_274, L_278, L_279);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_280 = __this->get_U3CiU3E5__20_22();
		V_4 = L_280;
		int32_t L_281 = V_4;
		__this->set_U3CiU3E5__20_22(((int32_t)il2cpp_codegen_add((int32_t)L_281, (int32_t)1)));
	}

IL_085e:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_282 = __this->get_U3CiU3E5__20_22();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_283 = __this->get_U3CtextInfoU3E5__2_4();
		NullCheck(L_283);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_284 = L_283->get_meshInfo_16();
		NullCheck(L_284);
		V_7 = (bool)((((int32_t)L_282) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_284)->max_length))))))? 1 : 0);
		bool L_285 = V_7;
		if (L_285)
		{
			goto IL_0706;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_286 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_286, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_286);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0895:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_089d:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_00a2;
	}
}
// System.Object TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m093E922A5A046910B2A7EE826D804CA3064A7BD9 (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDED63FD52741D58D8D5A3E53415F91B6560F680C_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.VertexZoom_<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m933EBF7C4300C7C1E3EE60E4741110025877CA5F (U3CAnimateVertexColorsU3Ed__10_t0331DD44C492F52D541A0BC9A3FC88FC3D1C4B40 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m9FADE04C27A0034C5A276232FCA187AECDC6BF49 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m5AB0DCF4B3DE6C290487F3DBBC7BAE931130DE60 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample_<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_m9C83C8455FF8ADFBAA8D05958C3048612A96EB84 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWarpTextU3Ed__8_MoveNext_m9C83C8455FF8ADFBAA8D05958C3048612A96EB84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B11_0 = 0;
	U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * G_B21_0 = NULL;
	U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * G_B22_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0126;
	}

IL_0022:
	{
		goto IL_0713;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_VertexCurve_5();
		NullCheck(L_3);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_3, 1, /*hidden argument*/NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_VertexCurve_5();
		NullCheck(L_5);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_5, 1, /*hidden argument*/NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_7 = L_6->get_m_TextComponent_4();
		NullCheck(L_7);
		TMP_Text_set_havePropertiesChanged_mF7E4FC98920C094FD42126A41DCC7601D5F95357(L_7, (bool)1, /*hidden argument*/NULL);
		// CurveScale *= 10;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_8 = __this->get_U3CU3E4__this_2();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_CurveScale_8();
		NullCheck(L_8);
		L_8->set_CurveScale_8(((float)il2cpp_codegen_multiply((float)L_10, (float)(10.0f))));
		// float old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		float L_12 = L_11->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__3_5(L_12);
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_13 = __this->get_U3CU3E4__this_2();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = L_14->get_VertexCurve_5();
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_13, L_15, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__4_6(L_16);
		goto IL_0722;
	}

IL_00b5:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_18 = L_17->get_m_TextComponent_4();
		NullCheck(L_18);
		bool L_19 = TMP_Text_get_havePropertiesChanged_mF777F1F3A620EBF1DB95F83812597F13D49295B2(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		float L_20 = __this->get_U3Cold_CurveScaleU3E5__3_5();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		float L_22 = L_21->get_CurveScale_8();
		if ((!(((float)L_20) == ((float)L_22))))
		{
			goto IL_0110;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get_U3Cold_curveU3E5__4_6();
		NullCheck(L_23);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		float L_25 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = L_26->get_VertexCurve_5();
		NullCheck(L_27);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_28 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		float L_29 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		G_B11_0 = ((((float)L_25) == ((float)L_29))? 1 : 0);
		goto IL_0111;
	}

IL_0110:
	{
		G_B11_0 = 0;
	}

IL_0111:
	{
		V_1 = (bool)G_B11_0;
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0132;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0126:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_0722;
	}

IL_0132:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		float L_32 = L_31->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__3_5(L_32);
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_33 = __this->get_U3CU3E4__this_2();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_34 = __this->get_U3CU3E4__this_2();
		NullCheck(L_34);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = L_34->get_VertexCurve_5();
		NullCheck(L_33);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_36 = WarpTextExample_CopyAnimationCurve_m744026E638662DA48AC81ED21E0589E3E4E05FAB(L_33, L_35, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__4_6(L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_38 = L_37->get_m_TextComponent_4();
		NullCheck(L_38);
		VirtActionInvoker2< bool, bool >::Invoke(104 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_39 = __this->get_U3CU3E4__this_2();
		NullCheck(L_39);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_40 = L_39->get_m_TextComponent_4();
		NullCheck(L_40);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_41 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF(L_40, /*hidden argument*/NULL);
		__this->set_U3CtextInfoU3E5__5_7(L_41);
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_42 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_characterCount_3();
		__this->set_U3CcharacterCountU3E5__6_8(L_43);
		// if (characterCount == 0) continue;
		int32_t L_44 = __this->get_U3CcharacterCountU3E5__6_8();
		V_2 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_2;
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// if (characterCount == 0) continue;
		goto IL_0722;
	}

IL_01ab:
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_46 = __this->get_U3CU3E4__this_2();
		NullCheck(L_46);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_47 = L_46->get_m_TextComponent_4();
		NullCheck(L_47);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_48 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_47, /*hidden argument*/NULL);
		V_3 = L_48;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_50 = L_49.get_x_2();
		__this->set_U3CboundsMinXU3E5__7_9(L_50);
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_52 = L_51->get_m_TextComponent_4();
		NullCheck(L_52);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_53 = TMP_Text_get_bounds_m61214849DFA057D70FDB3510D868B99641B0F1B8(L_52, /*hidden argument*/NULL);
		V_3 = L_53;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		__this->set_U3CboundsMaxXU3E5__8_10(L_55);
		// for (int i = 0; i < characterCount; i++)
		__this->set_U3CiU3E5__9_11(0);
		goto IL_06d2;
	}

IL_01fd:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_56 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_56);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_57 = L_56->get_characterInfo_11();
		int32_t L_58 = __this->get_U3CiU3E5__9_11();
		NullCheck(L_57);
		bool L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->get_isVisible_40();
		V_4 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_0227;
		}
	}
	{
		// continue;
		goto IL_06c0;
	}

IL_0227:
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_61 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_61);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_62 = L_61->get_characterInfo_11();
		int32_t L_63 = __this->get_U3CiU3E5__9_11();
		NullCheck(L_62);
		int32_t L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__10_12(L_64);
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_65 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_65);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_66 = L_65->get_characterInfo_11();
		int32_t L_67 = __this->get_U3CiU3E5__9_11();
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__11_13(L_68);
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_69 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_69);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_70 = L_69->get_meshInfo_16();
		int32_t L_71 = __this->get_U3CmaterialIndexU3E5__11_13();
		NullCheck(L_70);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->get_vertices_6();
		__this->set_U3CverticesU3E5__1_3(L_72);
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_73 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_74 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_73);
		float L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_76 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_77 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_76);
		float L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)2)))))->get_x_2();
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_79 = __this->get_U3CtextInfoU3E5__5_7();
		NullCheck(L_79);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_80 = L_79->get_characterInfo_11();
		int32_t L_81 = __this->get_U3CiU3E5__9_11();
		NullCheck(L_80);
		float L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->get_baseLine_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_83), ((float)((float)((float)il2cpp_codegen_add((float)L_75, (float)L_78))/(float)(2.0f))), L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_83, /*hidden argument*/NULL);
		__this->set_U3CoffsetToMidBaselineU3E5__12_14(L_84);
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_85 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_86 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_87);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_88, L_90, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_87 = L_91;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_92 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_93 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_94 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_96, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_95, L_97, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_94 = L_98;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_100 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_99);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_101 = ((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_101);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_103, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_102, L_104, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_101 = L_105;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_107 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_106);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_108 = ((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_108);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_110, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_109, L_111, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_108 = L_112;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_113 = __this->get_address_of_U3CoffsetToMidBaselineU3E5__12_14();
		float L_114 = L_113->get_x_2();
		float L_115 = __this->get_U3CboundsMinXU3E5__7_9();
		float L_116 = __this->get_U3CboundsMaxXU3E5__8_10();
		float L_117 = __this->get_U3CboundsMinXU3E5__7_9();
		__this->set_U3Cx0U3E5__13_15(((float)((float)((float)il2cpp_codegen_subtract((float)L_114, (float)L_115))/(float)((float)il2cpp_codegen_subtract((float)L_116, (float)L_117)))));
		// float x1 = x0 + 0.0001f;
		float L_118 = __this->get_U3Cx0U3E5__13_15();
		__this->set_U3Cx1U3E5__14_16(((float)il2cpp_codegen_add((float)L_118, (float)(9.99999975E-05f))));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_119 = __this->get_U3CU3E4__this_2();
		NullCheck(L_119);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_120 = L_119->get_VertexCurve_5();
		float L_121 = __this->get_U3Cx0U3E5__13_15();
		NullCheck(L_120);
		float L_122 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_120, L_121, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_123 = __this->get_U3CU3E4__this_2();
		NullCheck(L_123);
		float L_124 = L_123->get_CurveScale_8();
		__this->set_U3Cy0U3E5__15_17(((float)il2cpp_codegen_multiply((float)L_122, (float)L_124)));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_125 = __this->get_U3CU3E4__this_2();
		NullCheck(L_125);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_126 = L_125->get_VertexCurve_5();
		float L_127 = __this->get_U3Cx1U3E5__14_16();
		NullCheck(L_126);
		float L_128 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_126, L_127, /*hidden argument*/NULL);
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_129 = __this->get_U3CU3E4__this_2();
		NullCheck(L_129);
		float L_130 = L_129->get_CurveScale_8();
		__this->set_U3Cy1U3E5__16_18(((float)il2cpp_codegen_multiply((float)L_128, (float)L_130)));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_131), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_U3ChorizontalU3E5__17_19(L_131);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_132 = __this->get_U3Cx1U3E5__14_16();
		float L_133 = __this->get_U3CboundsMaxXU3E5__8_10();
		float L_134 = __this->get_U3CboundsMinXU3E5__7_9();
		float L_135 = __this->get_U3CboundsMinXU3E5__7_9();
		float L_136 = __this->get_U3Cy1U3E5__16_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_137), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_132, (float)((float)il2cpp_codegen_subtract((float)L_133, (float)L_134)))), (float)L_135)), L_136, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_138 = __this->get_address_of_U3CoffsetToMidBaselineU3E5__12_14();
		float L_139 = L_138->get_x_2();
		float L_140 = __this->get_U3Cy0U3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_141), L_139, L_140, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_137, L_141, /*hidden argument*/NULL);
		__this->set_U3CtangentU3E5__18_20(L_142);
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143 = __this->get_U3ChorizontalU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_144 = __this->get_address_of_U3CtangentU3E5__18_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_144, /*hidden argument*/NULL);
		float L_146 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_143, L_145, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_147 = acosf(L_146);
		__this->set_U3CdotU3E5__19_21(((float)il2cpp_codegen_multiply((float)L_147, (float)(57.2957802f))));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148 = __this->get_U3ChorizontalU3E5__17_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149 = __this->get_U3CtangentU3E5__18_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_148, L_149, /*hidden argument*/NULL);
		__this->set_U3CcrossU3E5__20_22(L_150);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_151 = __this->get_address_of_U3CcrossU3E5__20_22();
		float L_152 = L_151->get_z_4();
		G_B20_0 = __this;
		if ((((float)L_152) > ((float)(0.0f))))
		{
			G_B21_0 = __this;
			goto IL_04e8;
		}
	}
	{
		float L_153 = __this->get_U3CdotU3E5__19_21();
		G_B22_0 = ((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_153));
		G_B22_1 = G_B20_0;
		goto IL_04ee;
	}

IL_04e8:
	{
		float L_154 = __this->get_U3CdotU3E5__19_21();
		G_B22_0 = L_154;
		G_B22_1 = G_B21_0;
	}

IL_04ee:
	{
		NullCheck(G_B22_1);
		G_B22_1->set_U3CangleU3E5__21_23(G_B22_0);
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_155 = __this->get_U3Cy0U3E5__15_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156;
		memset((&L_156), 0, sizeof(L_156));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_156), (0.0f), L_155, (0.0f), /*hidden argument*/NULL);
		float L_157 = __this->get_U3CangleU3E5__21_23();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_158 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_157, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_160 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_156, L_158, L_159, /*hidden argument*/NULL);
		__this->set_U3CmatrixU3E5__2_4(L_160);
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_161 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_162 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_163 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_164 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_165 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_164);
		int32_t L_166 = L_165;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_163, L_167, /*hidden argument*/NULL);
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(L_162), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_168);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_169 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_170 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_171 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_172 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_173 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_171, L_175, /*hidden argument*/NULL);
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_176);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_177 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_178 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_179 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_180 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_181 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_184 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_179, L_183, /*hidden argument*/NULL);
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_184);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_185 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_186 = __this->get_U3CvertexIndexU3E5__10_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_187 = __this->get_address_of_U3CmatrixU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_188 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_189 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_188);
		int32_t L_190 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_192 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_187, L_191, /*hidden argument*/NULL);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_192);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_193 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_194 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_193);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_195 = ((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_194)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_196 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_195);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_196, L_197, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_195 = L_198;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_199 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_200 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_199);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_201 = ((L_199)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)1)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_201);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_202, L_203, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_201 = L_204;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_205 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_206 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_205);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_207 = ((L_205)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)2)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_207);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_209 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_208, L_209, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_207 = L_210;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_211 = __this->get_U3CverticesU3E5__1_3();
		int32_t L_212 = __this->get_U3CvertexIndexU3E5__10_12();
		NullCheck(L_211);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_213 = ((L_211)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)3)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_214 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_213);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215 = __this->get_U3CoffsetToMidBaselineU3E5__12_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_214, L_215, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_213 = L_216;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_217 = __this->get_address_of_U3CoffsetToMidBaselineU3E5__12_14();
		il2cpp_codegen_initobj(L_217, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_218 = __this->get_address_of_U3ChorizontalU3E5__17_19();
		il2cpp_codegen_initobj(L_218, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_219 = __this->get_address_of_U3CtangentU3E5__18_20();
		il2cpp_codegen_initobj(L_219, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_220 = __this->get_address_of_U3CcrossU3E5__20_22();
		il2cpp_codegen_initobj(L_220, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_06c0:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_221 = __this->get_U3CiU3E5__9_11();
		V_5 = L_221;
		int32_t L_222 = V_5;
		__this->set_U3CiU3E5__9_11(((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)1)));
	}

IL_06d2:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_223 = __this->get_U3CiU3E5__9_11();
		int32_t L_224 = __this->get_U3CcharacterCountU3E5__6_8();
		V_6 = (bool)((((int32_t)L_223) < ((int32_t)L_224))? 1 : 0);
		bool L_225 = V_6;
		if (L_225)
		{
			goto IL_01fd;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_t9CE7000EFB1B8696E32CC86E87E3D0EDEA3D5A96 * L_226 = __this->get_U3CU3E4__this_2();
		NullCheck(L_226);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_227 = L_226->get_m_TextComponent_4();
		NullCheck(L_227);
		VirtActionInvoker0::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_227);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_228 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_228, (0.0250000004f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_228);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0713:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CtextInfoU3E5__5_7((TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 *)NULL);
	}

IL_0722:
	{
		// while (true)
		V_7 = (bool)1;
		goto IL_00b5;
	}
}
// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D5776AF80C4227401ADD7E13D98F2530CB9E7A1 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4F2FBBE7B375E6FC837736B4275A7B601A01F535_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m01FA935D93D737C9DDD88A051F7DFC393DD7BD25 (U3CWarpTextU3Ed__8_t4846D84CD08AB0A242548B376B06FF86A4830D76 * __this, const RuntimeMethod* method)
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
// System.Void basicItem_<stopXV>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstopXVU3Ed__3__ctor_mDFB36784DC9392EB4C2BFF8921D4385E3C1E0490 (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void basicItem_<stopXV>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstopXVU3Ed__3_System_IDisposable_Dispose_mA80F6229F2505112E5808A2BC3CB2C74D29C5F37 (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean basicItem_<stopXV>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CstopXVU3Ed__3_MoveNext_m383EF5805D2A176650927FD95806E67666F0502E (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CstopXVU3Ed__3_MoveNext_m383EF5805D2A176650927FD95806E67666F0502E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GetComponent<Rigidbody>().velocity = new Vector3 (0f, GetComponent<Rigidbody>().velocity.y * 2, 0f);
		basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_4, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		basicItem_tCAD84F043A55AEB6F7A5C763FA445077EB517BCD * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_6, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), ((float)il2cpp_codegen_multiply((float)L_9, (float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_5, L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object basicItem_<stopXV>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstopXVU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A43EDE09C320F924486983EA2D012EDE58D281C (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void basicItem_<stopXV>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstopXVU3Ed__3_System_Collections_IEnumerator_Reset_m93F793615F2BCB77F2C8C3C136ED8D001F108774 (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CstopXVU3Ed__3_System_Collections_IEnumerator_Reset_m93F793615F2BCB77F2C8C3C136ED8D001F108774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CstopXVU3Ed__3_System_Collections_IEnumerator_Reset_m93F793615F2BCB77F2C8C3C136ED8D001F108774_RuntimeMethod_var);
	}
}
// System.Object basicItem_<stopXV>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstopXVU3Ed__3_System_Collections_IEnumerator_get_Current_mD0CD210182E898E9A25C24635D46A0FC9ADE960C (U3CstopXVU3Ed__3_t06A75BF3C15D7AA65D8C87CB3ECFE528AEB5D772 * __this, const RuntimeMethod* method)
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
// System.Void countDown_<CountDown>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__4__ctor_m97E912EF7CF629238BB73FD460814EC42C54F744 (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void countDown_<CountDown>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__4_System_IDisposable_Dispose_mA0833926BD852BAE0989F0EE81B481AA33E0E2F7 (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean countDown_<CountDown>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountDownU3Ed__4_MoveNext_mF7BE46F661644D2C1705FCE23C83DE243CFF9D1F (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountDownU3Ed__4_MoveNext_mF7BE46F661644D2C1705FCE23C83DE243CFF9D1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0029;
			}
			case 4:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0033;
	}

IL_0023:
	{
		goto IL_0035;
	}

IL_0025:
	{
		goto IL_006d;
	}

IL_0027:
	{
		goto IL_00a4;
	}

IL_0029:
	{
		goto IL_00db;
	}

IL_002e:
	{
		goto IL_0112;
	}

IL_0033:
	{
		return (bool)0;
	}

IL_0035:
	{
		__this->set_U3CU3E1__state_0((-1));
		// text.SetText("3");
		countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_3 = L_2->get_text_4();
		NullCheck(L_3);
		TMP_Text_SetText_m9E43B120A0875D561F640BECB6ED4A4E1821EBB7(L_3, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// text.SetText("2");
		countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_6 = L_5->get_text_4();
		NullCheck(L_6);
		TMP_Text_SetText_m9E43B120A0875D561F640BECB6ED4A4E1821EBB7(L_6, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// text.SetText("1");
		countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_9 = L_8->get_text_4();
		NullCheck(L_9);
		TMP_Text_SetText_m9E43B120A0875D561F640BECB6ED4A4E1821EBB7(L_9, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00db:
	{
		__this->set_U3CU3E1__state_0((-1));
		// text.SetText("Go!");
		countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_12 = L_11->get_text_4();
		NullCheck(L_12);
		TMP_Text_SetText_m9E43B120A0875D561F640BECB6ED4A4E1821EBB7(L_12, _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameObject.SetActive(false);
		countDown_t0B7499098FB0BBD0272D7595657A778A3D9DB977 * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object countDown_<CountDown>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E1C45444CFD50D3A39A1A1BAB5CBB2A8D9B0488 (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void countDown_<CountDown>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__4_System_Collections_IEnumerator_Reset_m31E5D86671F45795E35FDDAD3523299A795F713E (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountDownU3Ed__4_System_Collections_IEnumerator_Reset_m31E5D86671F45795E35FDDAD3523299A795F713E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCountDownU3Ed__4_System_Collections_IEnumerator_Reset_m31E5D86671F45795E35FDDAD3523299A795F713E_RuntimeMethod_var);
	}
}
// System.Object countDown_<CountDown>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownU3Ed__4_System_Collections_IEnumerator_get_Current_m45B275C737C340ACF1A83A639972D582B24D2F51 (U3CCountDownU3Ed__4_t96989EB0A1DB80FF6A6E1E94ED2F3D04CB285E7B * __this, const RuntimeMethod* method)
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
// System.Void paddle_<brickBreak>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbrickBreakU3Ed__21__ctor_m610361646E503CE765631160BCDBDF12B704D72F (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void paddle_<brickBreak>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbrickBreakU3Ed__21_System_IDisposable_Dispose_m97CE6672F411900E83B99C3AB92F0F5689865239 (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean paddle_<brickBreak>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CbrickBreakU3Ed__21_MoveNext_m5199D4642ACE3ED68F955AC41E7D45902D3BB1ED (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CbrickBreakU3Ed__21_MoveNext_m5199D4642ACE3ED68F955AC41E7D45902D3BB1ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		// yield return new WaitForSeconds(10);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isActive = false;
		paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_isActive_17((bool)0);
		// brickWall.transform.gameObject.SetActive(false);
		paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_brickWall_14();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object paddle_<brickBreak>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbrickBreakU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0EB34A6A780F08FB62F9AA6C4840EE90A42109F7 (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void paddle_<brickBreak>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_Reset_m2C531AED5789BE653239F1BC25F96A1380456A1E (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_Reset_m2C531AED5789BE653239F1BC25F96A1380456A1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_Reset_m2C531AED5789BE653239F1BC25F96A1380456A1E_RuntimeMethod_var);
	}
}
// System.Object paddle_<brickBreak>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbrickBreakU3Ed__21_System_Collections_IEnumerator_get_Current_m790C396BA708539F5D3E07CFF50016D96EEF9E62 (U3CbrickBreakU3Ed__21_tAA7FC34C406462209B85B2081B9A6B273482057F * __this, const RuntimeMethod* method)
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
// System.Void paddle_<waitResize>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitResizeU3Ed__20__ctor_mB0D0EA03E9C306CFC20B353148AC7E3F8C7CC3AD (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void paddle_<waitResize>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitResizeU3Ed__20_System_IDisposable_Dispose_mB4C8432C5FC5985CB699CA5306FA23162CBC12E5 (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean paddle_<waitResize>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitResizeU3Ed__20_MoveNext_m18DA28ADAF9967841FE958F3B5EC851AD710B48B (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitResizeU3Ed__20_MoveNext_m18DA28ADAF9967841FE958F3B5EC851AD710B48B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		// yield return new WaitForSeconds(15);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (15.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.localScale -= new Vector3(.465f, 0f, 0f);
		paddle_tA909AD8EF43A3BDEDFEC102DC8D685A8F24D94F4 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.465000004f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object paddle_<waitResize>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitResizeU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC160E5006944E792FE3B125C91EC009A74E19C7 (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void paddle_<waitResize>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_Reset_m8106A24B5B1703F7051A4C1B4DFC9986416C1FBF (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_Reset_m8106A24B5B1703F7051A4C1B4DFC9986416C1FBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_Reset_m8106A24B5B1703F7051A4C1B4DFC9986416C1FBF_RuntimeMethod_var);
	}
}
// System.Object paddle_<waitResize>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitResizeU3Ed__20_System_Collections_IEnumerator_get_Current_m984AC8C7354685E6D79057D7FDD55E317C9F639C (U3CwaitResizeU3Ed__20_tFF9A10E19B54A1EDCE0B0DEE1832567F034649B6 * __this, const RuntimeMethod* method)
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
// System.Void paddle_<waitTen>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitTenU3Ed__19__ctor_m36BC4BBBD6BBDA0E6C2205FDD82B703E928F794D (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void paddle_<waitTen>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitTenU3Ed__19_System_IDisposable_Dispose_m79CB5700E7E6EC40DD86B2737623E976920FF2A0 (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean paddle_<waitTen>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitTenU3Ed__19_MoveNext_mDBB0E844228958903E8A1AC7EE527E493BBE416C (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitTenU3Ed__19_MoveNext_mDBB0E844228958903E8A1AC7EE527E493BBE416C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		// yield return new WaitForSeconds(10);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object paddle_<waitTen>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitTenU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3FF0EB3CA66E35D85026048F7411B776636493F1 (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void paddle_<waitTen>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitTenU3Ed__19_System_Collections_IEnumerator_Reset_m0A5DBA03881B6D4652E621C82021B18F1816800E (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitTenU3Ed__19_System_Collections_IEnumerator_Reset_m0A5DBA03881B6D4652E621C82021B18F1816800E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CwaitTenU3Ed__19_System_Collections_IEnumerator_Reset_m0A5DBA03881B6D4652E621C82021B18F1816800E_RuntimeMethod_var);
	}
}
// System.Object paddle_<waitTen>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitTenU3Ed__19_System_Collections_IEnumerator_get_Current_m16128DC03E62AEDBADC14CA9A7C818F309D9A4F9 (U3CwaitTenU3Ed__19_t70072E744BCCBBF108056AC124ABD8118BD1C75B * __this, const RuntimeMethod* method)
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
// System.Void spawner_<wait>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__12__ctor_m2E594CE372630B430FE4FE9EA3BB714CC1EAEEA2 (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void spawner_<wait>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__12_System_IDisposable_Dispose_mE88EC4A442DC87EE75BE45363574FE44A9629046 (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean spawner_<wait>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitU3Ed__12_MoveNext_m94D420815876FD00EE742CEA43FE1B62B4FE0461 (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitU3Ed__12_MoveNext_m94D420815876FD00EE742CEA43FE1B62B4FE0461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		// yield return new WaitForSeconds(3.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (3.0999999f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Spawn(gravBall);
		spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * L_4 = __this->get_U3CU3E4__this_2();
		spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gravBall_4();
		NullCheck(L_4);
		spawner_Spawn_mE4EE2BB93372E704085B7AB8BB761ADF1A144E54(L_4, L_6, /*hidden argument*/NULL);
		// spawnedBall = false;
		spawner_t094D029C7F1FFA84B1DD0776427946C8DD7D8D7B * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		L_7->set_spawnedBall_10((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object spawner_<wait>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6E643CF46DC94FCCD87D94FD92842EEB900734AE (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void spawner_<wait>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__12_System_Collections_IEnumerator_Reset_m97BEADEDCEF95E831636B63B0C98724960EA0A6B (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitU3Ed__12_System_Collections_IEnumerator_Reset_m97BEADEDCEF95E831636B63B0C98724960EA0A6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CwaitU3Ed__12_System_Collections_IEnumerator_Reset_m97BEADEDCEF95E831636B63B0C98724960EA0A6B_RuntimeMethod_var);
	}
}
// System.Object spawner_<wait>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__12_System_Collections_IEnumerator_get_Current_m2F17A631B0E2253A79C0E0928585334F0331AFEA (U3CwaitU3Ed__12_t9568957DA52F1A1B55789B16F0DBC8535F1F46C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
