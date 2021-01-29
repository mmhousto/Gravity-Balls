#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD;
// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>
struct Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929;
// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,Unity.VectorGraphics.SVGStyleResolver/StyleLayer>
struct Dictionary_2_t5FD2F8D4C1061C3B512B533D7297E1C68F2813C1;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode>
struct Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>
struct Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>,System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>>
struct Func_2_tC27018F6766A58EB7F31AE6D551015E6C7D71017;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>,System.String>
struct Func_2_tD15E3EC94F48B9CF7E8C3D806EAA2015B63F4E69;
// System.Func`2<UnityEngine.Color,UnityEngine.Color32>
struct Func_2_t7496ED55C392AD017C9F9EE0064548C0EC71B480;
// System.Func`2<UnityEngine.Color32,UnityEngine.Color>
struct Func_2_t3C6CDF9BCE821839EC2BD6EC0F36BD7074CECF90;
// System.Func`2<System.Double,System.Single>
struct Func_2_t5D498CF5D09D370993E76244E04509EF6CD0BE6A;
// System.Func`2<System.Int32,System.UInt16>
struct Func_2_tE1B68F244A525FD255229DF3F8B19CCEE81C1CB7;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`2<System.UInt16,System.Int32>
struct Func_2_t7096C463F0A4CAD550F6B27787048967060427B4;
// System.Func`2<UnityEngine.Vector2,Unity.VectorGraphics.External.LibTessDotNet.ContourVertex>
struct Func_2_t982780336F091AD505AF8E00F5700CBFE252933E;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Func_2_tB3D19331301201246DE473D608119BB47D418EB9;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector3>
struct Func_2_t8773E619330600312B6BC5AAEFF1B20ECCD0028B;
// System.Func`2<Unity.VectorGraphics.VectorUtils/Geometry,System.Boolean>
struct Func_2_t3166E7195D236A365C4CFDDCFB9DDB290B6E20E3;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment>
struct IEnumerable_1_t81DC87EEB79E33E6866677E23B5E9C0F7BBE4984;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode>
struct IEnumerable_1_t8A6F60FF69465F4A9A4A18E7A1D20A68D1392B9F;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>
struct IEnumerable_1_t196487AD6C47BD9264C554C195DDB75164AFC91A;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>
struct IEnumerator_1_t6040F74F977121047DB1B2592D5A737F1928C68E;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment>
struct IEnumerator_1_t0679605872A89972BB61270356D3C91E6E407A90;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode>
struct IEnumerator_1_tD76C1ACE2ADED0F383C062DE90C099A4787376EB;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>
struct IEnumerator_1_tFAB75141FC5673AE13267C47B573D1868380F822;
// System.Collections.Generic.IEqualityComparer`1<Unity.VectorGraphics.SceneNode>
struct IEqualityComparer_1_tEC42BBFB7DAEE40A908AC090A3DED03B2917AB85;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Unity.VectorGraphics.BezierPathSegment>
struct IList_1_t0BDC2615569F1F40D1FDD5CEA5427A2BA8B97D06;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.VectorGraphics.SceneNode,System.Single>
struct KeyCollection_t74297910FD5C2A3CBC2A62FBFECFA6F006BBB826;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VectorGraphics.SceneNode>
struct KeyCollection_t35277932A58E7253CB30E834236BB38F0C145EE3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>
struct KeyCollection_tB2C4D61D958503B39FC000CC18B74B5417A25995;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>>
struct List_1_t17ACE235660FBC7F72C1943E98C313E8B16B580E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>
struct List_1_t127D889C069CE5E0F40E410A82C262922D3DC633;
// System.Collections.Generic.List`1<Unity.VectorGraphics.Shape>
struct List_1_t301FDD5FB42C7FB019FEBB8223F81C3AD46520A2;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Unity.VectorGraphics.SVGStyleResolver/StyleLayer>
struct List_1_tC3C8B3ED76C95800FF56CA630DF2CD17A6890A42;
// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>
struct List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F;
// Unity.VectorGraphics.External.LibTessDotNet.Dict`1/Node<Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion>
struct Node_t491F2A56544A2258D8A7416020EEA52141DECB0E;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<System.Object>
struct Pooled_1_t94F78C9AA536E1510FB7BDCDF19E1D25B6DE3699;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge>
struct Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face>
struct Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex>
struct Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D;
// System.Predicate`1<System.Double>
struct Predicate_1_t0E330E9BFAE196FB8D650A01EF09715D5B3C63DC;
// System.Collections.Generic.Stack`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge>
struct Stack_1_t0828E7B0052012D57593E9F5B901ED9215726FB2;
// System.Collections.Generic.Stack`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face>
struct Stack_1_t69E47418973FE3D8D3EB9D541A5A3579922A3B4D;
// System.Collections.Generic.Stack`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex>
struct Stack_1_tCB2212C8A31328B5AAA9D86F74169733CE91053B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.VectorGraphics.SceneNode,System.Single>
struct ValueCollection_t68B8248BB473C980694FEE8D170870AF69607735;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VectorGraphics.SceneNode>
struct ValueCollection_tD3FBD5A33A1CA2D254185823B8A011FC6F57FE75;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>
struct ValueCollection_t75D482459A0E038EFFA44F238225CDFDAFD0B192;
// System.Collections.Generic.Dictionary`2/Entry<Unity.VectorGraphics.SceneNode,System.Single>[]
struct EntryU5BU5D_t0A1F1D8A580CB4F40A2FC548C2C6F5628C19B55A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VectorGraphics.SceneNode>[]
struct EntryU5BU5D_tD2C146386A1717A79FF79C0D571F2BB16A278CB6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>[]
struct EntryU5BU5D_t76F7431C52143E5B172E2B2DEB34BF6D07C1D978;
// Unity.VectorGraphics.BezierPathSegment[]
struct BezierPathSegmentU5BU5D_tB3F97EC1972B9D75F637A4667605352F7DDA010F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.VectorGraphics.GradientStop[]
struct GradientStopU5BU5D_t3CADEF8250EF758D0B64B72AFC4B63439092A068;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Unity.VectorGraphics.SceneNode[]
struct SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// Unity.VectorGraphics.VectorUtils/PackRectItem[]
struct PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.VectorGraphics.GradientFill
struct GradientFill_t5304837475F57AF4B95D24C293819F652B978194;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.VectorGraphics.IFill
struct IFill_tAF479255D20DC4FF9E48E04E706D71C4BA669F87;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Unity.VectorGraphics.SVGFormatException
struct SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365;
// Unity.VectorGraphics.SVGPropertySheet
struct SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B;
// Unity.VectorGraphics.SVGStyleResolver
struct SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300;
// Unity.VectorGraphics.SVGStyleSheet
struct SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Unity.VectorGraphics.Scene
struct Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80;
// Unity.VectorGraphics.SceneNode
struct SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// Unity.VectorGraphics.XmlReaderIterator
struct XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge
struct Edge_t0357426165AA201C0A0C1CB8721F198CB2779807;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face
struct Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C;
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex
struct Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353;
// Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop
struct BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC;
// Unity.VectorGraphics.SVGDocument/ElemHandler
struct ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33;
// Unity.VectorGraphics.SVGDocument/GradientExData
struct GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A;
// Unity.VectorGraphics.SVGDocument/Handlers
struct Handlers_t8CB2C2F16B422B3FC39B22A1EA6C5BA8DF19FD41;
// Unity.VectorGraphics.SVGDocument/LinearGradientExData
struct LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987;
// Unity.VectorGraphics.SVGDocument/RadialGradientExData
struct RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873;
// Unity.VectorGraphics.SVGStyleResolver/<>c
struct U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A;
// Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12
struct U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31;
// Unity.VectorGraphics.SVGStyleResolver/StyleLayer
struct StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370;
// Unity.VectorGraphics.SVGStyleSheet/<>c
struct U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86;
// Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t57046AFE53FF68E3084B3317303CDE9A2F5AD74A;
// Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0EC890E7CE811389B315AAEBD50357016FACCEAE;
// Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0;
// Unity.VectorGraphics.VectorClip/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t0F4A238B2A466EB723E110056F19CD6CB751C436;
// Unity.VectorGraphics.VectorUtils/<>c
struct U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tDBECBD34BF42D57EC229ED5B0CE664C47DADD039;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1
struct U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2
struct U3CU3Ec__DisplayClass36_2_t815E8E84E3D1BF80DF2111E28396FD87EC82DEB2;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F;
// Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99
struct U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B;
// Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106
struct U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764;
// Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101
struct U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA;
// Unity.VectorGraphics.VectorUtils/AtlasEntry
struct AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403;
// Unity.VectorGraphics.VectorUtils/Geometry
struct Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5;
// Unity.VectorGraphics.VectorUtils/JoiningInfo
struct JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D;
// Unity.VectorGraphics.VectorUtils/TextureAtlas
struct TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE;
// Unity.VectorGraphics.XmlReaderIterator/Node
struct Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B;

IL2CPP_EXTERN_C RuntimeClass* BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t55AB9F456547365B35577EDA8C54AEBFBABF1560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t196487AD6C47BD9264C554C195DDB75164AFC91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t81DC87EEB79E33E6866677E23B5E9C0F7BBE4984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8A6F60FF69465F4A9A4A18E7A1D20A68D1392B9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6040F74F977121047DB1B2592D5A737F1928C68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD76C1ACE2ADED0F383C062DE90C099A4787376EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFAB75141FC5673AE13267C47B573D1868380F822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0BDC2615569F1F40D1FDD5CEA5427A2BA8B97D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB85CD8CD950B600E48BFACED9C67029C5A068FF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC2A6B7FB4DEDFA8C4D3CF4F588BE4B302ECB342A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_Add_mEC2A02FA875FFB15648B6382585475602E5E3DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_Contains_m97BC79B6886C9DFB5FDAF3BEB4FB9924F8FC6C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_CopyTo_m855CC50DC62E07CC4857388B5ED29749D3A33178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_GetEnumerator_mB9FF7B7A166A08DA1305BBC2759F520187B07CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_IndexOf_m82DAB61BBE0EF8CF76E0C2BF7A27B2F578B3071E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_Insert_m42D560069B3B65B2AC895CF5939D41BB24CE62FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_RemoveAt_mBE4007A16FDD2008F902C45F428B5658BA71111B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_Remove_m84AB2353E4C8875155890E2BCA983B7DAE409284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_System_Collections_IEnumerable_GetEnumerator_mF6CF48836C890940ED7A19E609761F6A7A61F592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BezierLoop_set_Item_m352FC187D75BCE62B72999776A9D4BF291576431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05509E6A14EDA2A633FCAF1EC44C8D1B384FDD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m06CA87437BA175758244F9F1F821638E4DEE3044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisString_t_mA740D56D06F9F26F5AF625E31B7FE16686B151FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF54419D828E03CFF80CFF6761D841D3462337C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m4E4EC40B9DAE080ED7945F14649A18E0A9F0A5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pooled_1__ctor_m707DB7FD3CE649FE023CD0B8CB80C32042890DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pooled_1__ctor_mC15A83109EAA46AC543A68A9794A00BE7CA04FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pooled_1__ctor_mC43E55EA915A83EB72923407543A86D8E1423DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_mA6E3EFEB7012D88B5DD542983C8D79DED4C70D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_m9952BBA3C9E72A72E613F08035B4BE6EC830AEB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSortedClassesU3Ed__12_System_Collections_IEnumerator_Reset_m684845612B9A10537C1B81EC95A7F96916FCCD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mAD9DB9B9BFA426ADD5C9CF4845CB924E3B18700B_RuntimeMethod_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BezierPathSegmentU5BU5D_tB3F97EC1972B9D75F637A4667605352F7DDA010F;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>
struct  Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0A1F1D8A580CB4F40A2FC548C2C6F5628C19B55A* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t74297910FD5C2A3CBC2A62FBFECFA6F006BBB826 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t68B8248BB473C980694FEE8D170870AF69607735 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___entries_1)); }
	inline EntryU5BU5D_t0A1F1D8A580CB4F40A2FC548C2C6F5628C19B55A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0A1F1D8A580CB4F40A2FC548C2C6F5628C19B55A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0A1F1D8A580CB4F40A2FC548C2C6F5628C19B55A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___keys_7)); }
	inline KeyCollection_t74297910FD5C2A3CBC2A62FBFECFA6F006BBB826 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t74297910FD5C2A3CBC2A62FBFECFA6F006BBB826 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t74297910FD5C2A3CBC2A62FBFECFA6F006BBB826 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ___values_8)); }
	inline ValueCollection_t68B8248BB473C980694FEE8D170870AF69607735 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t68B8248BB473C980694FEE8D170870AF69607735 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t68B8248BB473C980694FEE8D170870AF69607735 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode>
struct  Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD2C146386A1717A79FF79C0D571F2BB16A278CB6* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t35277932A58E7253CB30E834236BB38F0C145EE3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD3FBD5A33A1CA2D254185823B8A011FC6F57FE75 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___entries_1)); }
	inline EntryU5BU5D_tD2C146386A1717A79FF79C0D571F2BB16A278CB6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD2C146386A1717A79FF79C0D571F2BB16A278CB6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD2C146386A1717A79FF79C0D571F2BB16A278CB6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___keys_7)); }
	inline KeyCollection_t35277932A58E7253CB30E834236BB38F0C145EE3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t35277932A58E7253CB30E834236BB38F0C145EE3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t35277932A58E7253CB30E834236BB38F0C145EE3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ___values_8)); }
	inline ValueCollection_tD3FBD5A33A1CA2D254185823B8A011FC6F57FE75 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD3FBD5A33A1CA2D254185823B8A011FC6F57FE75 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD3FBD5A33A1CA2D254185823B8A011FC6F57FE75 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>
struct  Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t76F7431C52143E5B172E2B2DEB34BF6D07C1D978* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB2C4D61D958503B39FC000CC18B74B5417A25995 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t75D482459A0E038EFFA44F238225CDFDAFD0B192 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___entries_1)); }
	inline EntryU5BU5D_t76F7431C52143E5B172E2B2DEB34BF6D07C1D978* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t76F7431C52143E5B172E2B2DEB34BF6D07C1D978** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t76F7431C52143E5B172E2B2DEB34BF6D07C1D978* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___keys_7)); }
	inline KeyCollection_tB2C4D61D958503B39FC000CC18B74B5417A25995 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB2C4D61D958503B39FC000CC18B74B5417A25995 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB2C4D61D958503B39FC000CC18B74B5417A25995 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ___values_8)); }
	inline ValueCollection_t75D482459A0E038EFFA44F238225CDFDAFD0B192 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t75D482459A0E038EFFA44F238225CDFDAFD0B192 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t75D482459A0E038EFFA44F238225CDFDAFD0B192 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>
struct  List_1_t127D889C069CE5E0F40E410A82C262922D3DC633  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633, ____items_1)); }
	inline SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* get__items_1() const { return ____items_1; }
	inline SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t127D889C069CE5E0F40E410A82C262922D3DC633_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633_StaticFields, ____emptyArray_5)); }
	inline SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneNodeU5BU5D_t41816A870EC25E0E6B242444EDE6056384E07D79* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>
struct  List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F, ____items_1)); }
	inline PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* get__items_1() const { return ____items_1; }
	inline PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F_StaticFields, ____emptyArray_5)); }
	inline PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PackRectItemU5BU5D_t6FA949B971C91CD7384D6C18C2EA231C82A10FDA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge>
struct  Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721  : public RuntimeObject
{
public:

public:
};

struct Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<T> Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1::_stack
	Stack_1_t0828E7B0052012D57593E9F5B901ED9215726FB2 * ____stack_0;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721_StaticFields, ____stack_0)); }
	inline Stack_1_t0828E7B0052012D57593E9F5B901ED9215726FB2 * get__stack_0() const { return ____stack_0; }
	inline Stack_1_t0828E7B0052012D57593E9F5B901ED9215726FB2 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_1_t0828E7B0052012D57593E9F5B901ED9215726FB2 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_0), (void*)value);
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face>
struct  Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608  : public RuntimeObject
{
public:

public:
};

struct Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<T> Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1::_stack
	Stack_1_t69E47418973FE3D8D3EB9D541A5A3579922A3B4D * ____stack_0;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608_StaticFields, ____stack_0)); }
	inline Stack_1_t69E47418973FE3D8D3EB9D541A5A3579922A3B4D * get__stack_0() const { return ____stack_0; }
	inline Stack_1_t69E47418973FE3D8D3EB9D541A5A3579922A3B4D ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_1_t69E47418973FE3D8D3EB9D541A5A3579922A3B4D * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_0), (void*)value);
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex>
struct  Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D  : public RuntimeObject
{
public:

public:
};

struct Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<T> Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1::_stack
	Stack_1_tCB2212C8A31328B5AAA9D86F74169733CE91053B * ____stack_0;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D_StaticFields, ____stack_0)); }
	inline Stack_1_tCB2212C8A31328B5AAA9D86F74169733CE91053B * get__stack_0() const { return ____stack_0; }
	inline Stack_1_tCB2212C8A31328B5AAA9D86F74169733CE91053B ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_1_tCB2212C8A31328B5AAA9D86F74169733CE91053B * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.VectorGraphics.SVGStyleResolver
struct  SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.VectorGraphics.SVGStyleResolver/StyleLayer> Unity.VectorGraphics.SVGStyleResolver::layers
	List_1_tC3C8B3ED76C95800FF56CA630DF2CD17A6890A42 * ___layers_0;
	// Unity.VectorGraphics.SVGStyleSheet Unity.VectorGraphics.SVGStyleResolver::globalStyleSheet
	SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * ___globalStyleSheet_1;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,Unity.VectorGraphics.SVGStyleResolver/StyleLayer> Unity.VectorGraphics.SVGStyleResolver::nodeLayers
	Dictionary_2_t5FD2F8D4C1061C3B512B533D7297E1C68F2813C1 * ___nodeLayers_2;

public:
	inline static int32_t get_offset_of_layers_0() { return static_cast<int32_t>(offsetof(SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300, ___layers_0)); }
	inline List_1_tC3C8B3ED76C95800FF56CA630DF2CD17A6890A42 * get_layers_0() const { return ___layers_0; }
	inline List_1_tC3C8B3ED76C95800FF56CA630DF2CD17A6890A42 ** get_address_of_layers_0() { return &___layers_0; }
	inline void set_layers_0(List_1_tC3C8B3ED76C95800FF56CA630DF2CD17A6890A42 * value)
	{
		___layers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layers_0), (void*)value);
	}

	inline static int32_t get_offset_of_globalStyleSheet_1() { return static_cast<int32_t>(offsetof(SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300, ___globalStyleSheet_1)); }
	inline SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * get_globalStyleSheet_1() const { return ___globalStyleSheet_1; }
	inline SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 ** get_address_of_globalStyleSheet_1() { return &___globalStyleSheet_1; }
	inline void set_globalStyleSheet_1(SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * value)
	{
		___globalStyleSheet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalStyleSheet_1), (void*)value);
	}

	inline static int32_t get_offset_of_nodeLayers_2() { return static_cast<int32_t>(offsetof(SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300, ___nodeLayers_2)); }
	inline Dictionary_2_t5FD2F8D4C1061C3B512B533D7297E1C68F2813C1 * get_nodeLayers_2() const { return ___nodeLayers_2; }
	inline Dictionary_2_t5FD2F8D4C1061C3B512B533D7297E1C68F2813C1 ** get_address_of_nodeLayers_2() { return &___nodeLayers_2; }
	inline void set_nodeLayers_2(Dictionary_2_t5FD2F8D4C1061C3B512B533D7297E1C68F2813C1 * value)
	{
		___nodeLayers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeLayers_2), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleSheet
struct  SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>> Unity.VectorGraphics.SVGStyleSheet::m_Selectors
	List_1_t17ACE235660FBC7F72C1943E98C313E8B16B580E * ___m_Selectors_0;

public:
	inline static int32_t get_offset_of_m_Selectors_0() { return static_cast<int32_t>(offsetof(SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934, ___m_Selectors_0)); }
	inline List_1_t17ACE235660FBC7F72C1943E98C313E8B16B580E * get_m_Selectors_0() const { return ___m_Selectors_0; }
	inline List_1_t17ACE235660FBC7F72C1943E98C313E8B16B580E ** get_address_of_m_Selectors_0() { return &___m_Selectors_0; }
	inline void set_m_Selectors_0(List_1_t17ACE235660FBC7F72C1943E98C313E8B16B580E * value)
	{
		___m_Selectors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Selectors_0), (void*)value);
	}
};


// Unity.VectorGraphics.Scene
struct  Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.Scene::<Root>k__BackingField
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CRootU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRootU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80, ___U3CRootU3Ek__BackingField_0)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CRootU3Ek__BackingField_0() const { return ___U3CRootU3Ek__BackingField_0; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CRootU3Ek__BackingField_0() { return &___U3CRootU3Ek__BackingField_0; }
	inline void set_U3CRootU3Ek__BackingField_0(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CRootU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRootU3Ek__BackingField_0), (void*)value);
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

// Unity.VectorGraphics.VectorUtils
struct  VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C  : public RuntimeObject
{
public:

public:
};

struct VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields
{
public:
	// UnityEngine.Material Unity.VectorGraphics.VectorUtils::s_ExpandEdgesMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ExpandEdgesMat_0;
	// System.Single Unity.VectorGraphics.VectorUtils::Epsilon
	float ___Epsilon_1;

public:
	inline static int32_t get_offset_of_s_ExpandEdgesMat_0() { return static_cast<int32_t>(offsetof(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields, ___s_ExpandEdgesMat_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ExpandEdgesMat_0() const { return ___s_ExpandEdgesMat_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ExpandEdgesMat_0() { return &___s_ExpandEdgesMat_0; }
	inline void set_s_ExpandEdgesMat_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ExpandEdgesMat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ExpandEdgesMat_0), (void*)value);
	}

	inline static int32_t get_offset_of_Epsilon_1() { return static_cast<int32_t>(offsetof(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields, ___Epsilon_1)); }
	inline float get_Epsilon_1() const { return ___Epsilon_1; }
	inline float* get_address_of_Epsilon_1() { return &___Epsilon_1; }
	inline void set_Epsilon_1(float value)
	{
		___Epsilon_1 = value;
	}
};


// System.Xml.XmlReader
struct  XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138  : public RuntimeObject
{
public:

public:
};

struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// Unity.VectorGraphics.XmlReaderIterator
struct  XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121  : public RuntimeObject
{
public:
	// System.Xml.XmlReader Unity.VectorGraphics.XmlReaderIterator::reader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_0;
	// System.Boolean Unity.VectorGraphics.XmlReaderIterator::currentElementVisited
	bool ___currentElementVisited_1;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121, ___reader_0)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentElementVisited_1() { return static_cast<int32_t>(offsetof(XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121, ___currentElementVisited_1)); }
	inline bool get_currentElementVisited_1() const { return ___currentElementVisited_1; }
	inline bool* get_address_of_currentElementVisited_1() { return &___currentElementVisited_1; }
	inline void set_currentElementVisited_1(bool value)
	{
		___currentElementVisited_1 = value;
	}
};


// Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop
struct  BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::OpenPath
	RuntimeObject* ___OpenPath_0;

public:
	inline static int32_t get_offset_of_OpenPath_0() { return static_cast<int32_t>(offsetof(BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC, ___OpenPath_0)); }
	inline RuntimeObject* get_OpenPath_0() const { return ___OpenPath_0; }
	inline RuntimeObject** get_address_of_OpenPath_0() { return &___OpenPath_0; }
	inline void set_OpenPath_0(RuntimeObject* value)
	{
		___OpenPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpenPath_0), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleResolver/<>c
struct  U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_StaticFields
{
public:
	// Unity.VectorGraphics.SVGStyleResolver/<>c Unity.VectorGraphics.SVGStyleResolver/<>c::<>9
	U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Unity.VectorGraphics.SVGStyleResolver/<>c::<>9__0_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleSheet/<>c
struct  U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_StaticFields
{
public:
	// Unity.VectorGraphics.SVGStyleSheet/<>c Unity.VectorGraphics.SVGStyleSheet/<>c::<>9
	U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>,System.String> Unity.VectorGraphics.SVGStyleSheet/<>c::<>9__5_0
	Func_2_tD15E3EC94F48B9CF7E8C3D806EAA2015B63F4E69 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_tD15E3EC94F48B9CF7E8C3D806EAA2015B63F4E69 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_tD15E3EC94F48B9CF7E8C3D806EAA2015B63F4E69 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_tD15E3EC94F48B9CF7E8C3D806EAA2015B63F4E69 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t57046AFE53FF68E3084B3317303CDE9A2F5AD74A  : public RuntimeObject
{
public:
	// System.String Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass2_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t57046AFE53FF68E3084B3317303CDE9A2F5AD74A, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t0EC890E7CE811389B315AAEBD50357016FACCEAE  : public RuntimeObject
{
public:
	// System.String Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass3_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t0EC890E7CE811389B315AAEBD50357016FACCEAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion
struct  ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_eUp
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____eUp_0;
	// Unity.VectorGraphics.External.LibTessDotNet.Dict`1/Node<Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion> Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_nodeUp
	Node_t491F2A56544A2258D8A7416020EEA52141DECB0E * ____nodeUp_1;
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;

public:
	inline static int32_t get_offset_of__eUp_0() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____eUp_0)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__eUp_0() const { return ____eUp_0; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__eUp_0() { return &____eUp_0; }
	inline void set__eUp_0(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____eUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eUp_0), (void*)value);
	}

	inline static int32_t get_offset_of__nodeUp_1() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____nodeUp_1)); }
	inline Node_t491F2A56544A2258D8A7416020EEA52141DECB0E * get__nodeUp_1() const { return ____nodeUp_1; }
	inline Node_t491F2A56544A2258D8A7416020EEA52141DECB0E ** get_address_of__nodeUp_1() { return &____nodeUp_1; }
	inline void set__nodeUp_1(Node_t491F2A56544A2258D8A7416020EEA52141DECB0E * value)
	{
		____nodeUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodeUp_1), (void*)value);
	}

	inline static int32_t get_offset_of__windingNumber_2() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____windingNumber_2)); }
	inline int32_t get__windingNumber_2() const { return ____windingNumber_2; }
	inline int32_t* get_address_of__windingNumber_2() { return &____windingNumber_2; }
	inline void set__windingNumber_2(int32_t value)
	{
		____windingNumber_2 = value;
	}

	inline static int32_t get_offset_of__inside_3() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____inside_3)); }
	inline bool get__inside_3() const { return ____inside_3; }
	inline bool* get_address_of__inside_3() { return &____inside_3; }
	inline void set__inside_3(bool value)
	{
		____inside_3 = value;
	}

	inline static int32_t get_offset_of__sentinel_4() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____sentinel_4)); }
	inline bool get__sentinel_4() const { return ____sentinel_4; }
	inline bool* get_address_of__sentinel_4() { return &____sentinel_4; }
	inline void set__sentinel_4(bool value)
	{
		____sentinel_4 = value;
	}

	inline static int32_t get_offset_of__dirty_5() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____dirty_5)); }
	inline bool get__dirty_5() const { return ____dirty_5; }
	inline bool* get_address_of__dirty_5() { return &____dirty_5; }
	inline void set__dirty_5(bool value)
	{
		____dirty_5 = value;
	}

	inline static int32_t get_offset_of__fixUpperEdge_6() { return static_cast<int32_t>(offsetof(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0, ____fixUpperEdge_6)); }
	inline bool get__fixUpperEdge_6() const { return ____fixUpperEdge_6; }
	inline bool* get_address_of__fixUpperEdge_6() { return &____fixUpperEdge_6; }
	inline void set__fixUpperEdge_6(bool value)
	{
		____fixUpperEdge_6 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c
struct  U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields
{
public:
	// Unity.VectorGraphics.VectorUtils/<>c Unity.VectorGraphics.VectorUtils/<>c::<>9
	U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,Unity.VectorGraphics.External.LibTessDotNet.ContourVertex> Unity.VectorGraphics.VectorUtils/<>c::<>9__20_2
	Func_2_t982780336F091AD505AF8E00F5700CBFE252933E * ___U3CU3E9__20_2_1;
	// System.Func`2<System.Int32,System.UInt16> Unity.VectorGraphics.VectorUtils/<>c::<>9__20_0
	Func_2_tE1B68F244A525FD255229DF3F8B19CCEE81C1CB7 * ___U3CU3E9__20_0_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>,System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>> Unity.VectorGraphics.VectorUtils/<>c::<>9__28_0
	Func_2_tC27018F6766A58EB7F31AE6D551015E6C7D71017 * ___U3CU3E9__28_0_3;
	// System.Func`2<UnityEngine.Color,UnityEngine.Color32> Unity.VectorGraphics.VectorUtils/<>c::<>9__33_0
	Func_2_t7496ED55C392AD017C9F9EE0064548C0EC71B480 * ___U3CU3E9__33_0_4;
	// System.Func`2<Unity.VectorGraphics.VectorUtils/Geometry,System.Boolean> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_0
	Func_2_t3166E7195D236A365C4CFDDCFB9DDB290B6E20E3 * ___U3CU3E9__34_0_5;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector3> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_1
	Func_2_t8773E619330600312B6BC5AAEFF1B20ECCD0028B * ___U3CU3E9__34_1_6;
	// System.Func`2<System.UInt16,System.Int32> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_2
	Func_2_t7096C463F0A4CAD550F6B27787048967060427B4 * ___U3CU3E9__34_2_7;
	// System.Func`2<UnityEngine.Color32,UnityEngine.Color> Unity.VectorGraphics.VectorUtils/<>c::<>9__41_1
	Func_2_t3C6CDF9BCE821839EC2BD6EC0F36BD7074CECF90 * ___U3CU3E9__41_1_8;
	// System.Predicate`1<System.Double> Unity.VectorGraphics.VectorUtils/<>c::<>9__112_0
	Predicate_1_t0E330E9BFAE196FB8D650A01EF09715D5B3C63DC * ___U3CU3E9__112_0_9;
	// System.Func`2<System.Double,System.Single> Unity.VectorGraphics.VectorUtils/<>c::<>9__112_1
	Func_2_t5D498CF5D09D370993E76244E04509EF6CD0BE6A * ___U3CU3E9__112_1_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__20_2_1)); }
	inline Func_2_t982780336F091AD505AF8E00F5700CBFE252933E * get_U3CU3E9__20_2_1() const { return ___U3CU3E9__20_2_1; }
	inline Func_2_t982780336F091AD505AF8E00F5700CBFE252933E ** get_address_of_U3CU3E9__20_2_1() { return &___U3CU3E9__20_2_1; }
	inline void set_U3CU3E9__20_2_1(Func_2_t982780336F091AD505AF8E00F5700CBFE252933E * value)
	{
		___U3CU3E9__20_2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_2_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__20_0_2)); }
	inline Func_2_tE1B68F244A525FD255229DF3F8B19CCEE81C1CB7 * get_U3CU3E9__20_0_2() const { return ___U3CU3E9__20_0_2; }
	inline Func_2_tE1B68F244A525FD255229DF3F8B19CCEE81C1CB7 ** get_address_of_U3CU3E9__20_0_2() { return &___U3CU3E9__20_0_2; }
	inline void set_U3CU3E9__20_0_2(Func_2_tE1B68F244A525FD255229DF3F8B19CCEE81C1CB7 * value)
	{
		___U3CU3E9__20_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__28_0_3)); }
	inline Func_2_tC27018F6766A58EB7F31AE6D551015E6C7D71017 * get_U3CU3E9__28_0_3() const { return ___U3CU3E9__28_0_3; }
	inline Func_2_tC27018F6766A58EB7F31AE6D551015E6C7D71017 ** get_address_of_U3CU3E9__28_0_3() { return &___U3CU3E9__28_0_3; }
	inline void set_U3CU3E9__28_0_3(Func_2_tC27018F6766A58EB7F31AE6D551015E6C7D71017 * value)
	{
		___U3CU3E9__28_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__33_0_4)); }
	inline Func_2_t7496ED55C392AD017C9F9EE0064548C0EC71B480 * get_U3CU3E9__33_0_4() const { return ___U3CU3E9__33_0_4; }
	inline Func_2_t7496ED55C392AD017C9F9EE0064548C0EC71B480 ** get_address_of_U3CU3E9__33_0_4() { return &___U3CU3E9__33_0_4; }
	inline void set_U3CU3E9__33_0_4(Func_2_t7496ED55C392AD017C9F9EE0064548C0EC71B480 * value)
	{
		___U3CU3E9__33_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__34_0_5)); }
	inline Func_2_t3166E7195D236A365C4CFDDCFB9DDB290B6E20E3 * get_U3CU3E9__34_0_5() const { return ___U3CU3E9__34_0_5; }
	inline Func_2_t3166E7195D236A365C4CFDDCFB9DDB290B6E20E3 ** get_address_of_U3CU3E9__34_0_5() { return &___U3CU3E9__34_0_5; }
	inline void set_U3CU3E9__34_0_5(Func_2_t3166E7195D236A365C4CFDDCFB9DDB290B6E20E3 * value)
	{
		___U3CU3E9__34_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__34_1_6)); }
	inline Func_2_t8773E619330600312B6BC5AAEFF1B20ECCD0028B * get_U3CU3E9__34_1_6() const { return ___U3CU3E9__34_1_6; }
	inline Func_2_t8773E619330600312B6BC5AAEFF1B20ECCD0028B ** get_address_of_U3CU3E9__34_1_6() { return &___U3CU3E9__34_1_6; }
	inline void set_U3CU3E9__34_1_6(Func_2_t8773E619330600312B6BC5AAEFF1B20ECCD0028B * value)
	{
		___U3CU3E9__34_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_2_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__34_2_7)); }
	inline Func_2_t7096C463F0A4CAD550F6B27787048967060427B4 * get_U3CU3E9__34_2_7() const { return ___U3CU3E9__34_2_7; }
	inline Func_2_t7096C463F0A4CAD550F6B27787048967060427B4 ** get_address_of_U3CU3E9__34_2_7() { return &___U3CU3E9__34_2_7; }
	inline void set_U3CU3E9__34_2_7(Func_2_t7096C463F0A4CAD550F6B27787048967060427B4 * value)
	{
		___U3CU3E9__34_2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__41_1_8)); }
	inline Func_2_t3C6CDF9BCE821839EC2BD6EC0F36BD7074CECF90 * get_U3CU3E9__41_1_8() const { return ___U3CU3E9__41_1_8; }
	inline Func_2_t3C6CDF9BCE821839EC2BD6EC0F36BD7074CECF90 ** get_address_of_U3CU3E9__41_1_8() { return &___U3CU3E9__41_1_8; }
	inline void set_U3CU3E9__41_1_8(Func_2_t3C6CDF9BCE821839EC2BD6EC0F36BD7074CECF90 * value)
	{
		___U3CU3E9__41_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__112_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__112_0_9)); }
	inline Predicate_1_t0E330E9BFAE196FB8D650A01EF09715D5B3C63DC * get_U3CU3E9__112_0_9() const { return ___U3CU3E9__112_0_9; }
	inline Predicate_1_t0E330E9BFAE196FB8D650A01EF09715D5B3C63DC ** get_address_of_U3CU3E9__112_0_9() { return &___U3CU3E9__112_0_9; }
	inline void set_U3CU3E9__112_0_9(Predicate_1_t0E330E9BFAE196FB8D650A01EF09715D5B3C63DC * value)
	{
		___U3CU3E9__112_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__112_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__112_1_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields, ___U3CU3E9__112_1_10)); }
	inline Func_2_t5D498CF5D09D370993E76244E04509EF6CD0BE6A * get_U3CU3E9__112_1_10() const { return ___U3CU3E9__112_1_10; }
	inline Func_2_t5D498CF5D09D370993E76244E04509EF6CD0BE6A ** get_address_of_U3CU3E9__112_1_10() { return &___U3CU3E9__112_1_10; }
	inline void set_U3CU3E9__112_1_10(Func_2_t5D498CF5D09D370993E76244E04509EF6CD0BE6A * value)
	{
		___U3CU3E9__112_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__112_1_10), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D  : public RuntimeObject
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0::pixelsPerUnit
	float ___pixelsPerUnit_0;

public:
	inline static int32_t get_offset_of_pixelsPerUnit_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D, ___pixelsPerUnit_0)); }
	inline float get_pixelsPerUnit_0() const { return ___pixelsPerUnit_0; }
	inline float* get_address_of_pixelsPerUnit_0() { return &___pixelsPerUnit_0; }
	inline void set_pixelsPerUnit_0(float value)
	{
		___pixelsPerUnit_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1
struct  U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/Geometry Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::geom
	Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * ___geom_0;
	// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_geom_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73, ___geom_0)); }
	inline Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * get_geom_0() const { return ___geom_0; }
	inline Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 ** get_address_of_geom_0() { return &___geom_0; }
	inline void set_geom_0(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * value)
	{
		___geom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geom_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2
struct  U3CU3Ec__DisplayClass36_2_t815E8E84E3D1BF80DF2111E28396FD87EC82DEB2  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::vertexCount
	int32_t ___vertexCount_0;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_2_t815E8E84E3D1BF80DF2111E28396FD87EC82DEB2, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/TextureAtlas
struct  TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D Unity.VectorGraphics.VectorUtils/TextureAtlas::<Texture>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CTextureU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem> Unity.VectorGraphics.VectorUtils/TextureAtlas::<Entries>k__BackingField
	List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * ___U3CEntriesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE, ___U3CTextureU3Ek__BackingField_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CTextureU3Ek__BackingField_0() const { return ___U3CTextureU3Ek__BackingField_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CTextureU3Ek__BackingField_0() { return &___U3CTextureU3Ek__BackingField_0; }
	inline void set_U3CTextureU3Ek__BackingField_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CTextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextureU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntriesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE, ___U3CEntriesU3Ek__BackingField_1)); }
	inline List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * get_U3CEntriesU3Ek__BackingField_1() const { return ___U3CEntriesU3Ek__BackingField_1; }
	inline List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F ** get_address_of_U3CEntriesU3Ek__BackingField_1() { return &___U3CEntriesU3Ek__BackingField_1; }
	inline void set_U3CEntriesU3Ek__BackingField_1(List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * value)
	{
		___U3CEntriesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntriesU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.VectorGraphics.XmlReaderIterator/Node
struct  Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B  : public RuntimeObject
{
public:
	// System.Xml.XmlReader Unity.VectorGraphics.XmlReaderIterator/Node::reader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_0;
	// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::depth
	int32_t ___depth_1;
	// System.String Unity.VectorGraphics.XmlReaderIterator/Node::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B, ___reader_0)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B, ___depth_1)); }
	inline int32_t get_depth_1() const { return ___depth_1; }
	inline int32_t* get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(int32_t value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>
struct  Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7, ___list_0)); }
	inline List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * get_list_0() const { return ___list_0; }
	inline List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7, ___current_3)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_current_3() const { return ___current_3; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>
struct  KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655, ___key_0)); }
	inline RuntimeObject* get_key_0() const { return ___key_0; }
	inline RuntimeObject** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655, ___value_1)); }
	inline AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * get_value_1() const { return ___value_1; }
	inline AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>
struct  KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965, ___value_1)); }
	inline SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * get_value_1() const { return ___value_1; }
	inline SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// Unity.VectorGraphics.Matrix2D
struct  Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A 
{
public:
	// System.Single Unity.VectorGraphics.Matrix2D::m00
	float ___m00_0;
	// System.Single Unity.VectorGraphics.Matrix2D::m10
	float ___m10_1;
	// System.Single Unity.VectorGraphics.Matrix2D::m01
	float ___m01_2;
	// System.Single Unity.VectorGraphics.Matrix2D::m11
	float ___m11_3;
	// System.Single Unity.VectorGraphics.Matrix2D::m02
	float ___m02_4;
	// System.Single Unity.VectorGraphics.Matrix2D::m12
	float ___m12_5;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m01_2() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m01_2)); }
	inline float get_m01_2() const { return ___m01_2; }
	inline float* get_address_of_m01_2() { return &___m01_2; }
	inline void set_m01_2(float value)
	{
		___m01_2 = value;
	}

	inline static int32_t get_offset_of_m11_3() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m11_3)); }
	inline float get_m11_3() const { return ___m11_3; }
	inline float* get_address_of_m11_3() { return &___m11_3; }
	inline void set_m11_3(float value)
	{
		___m11_3 = value;
	}

	inline static int32_t get_offset_of_m02_4() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m02_4)); }
	inline float get_m02_4() const { return ___m02_4; }
	inline float* get_address_of_m02_4() { return &___m02_4; }
	inline void set_m02_4(float value)
	{
		___m02_4 = value;
	}

	inline static int32_t get_offset_of_m12_5() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A, ___m12_5)); }
	inline float get_m12_5() const { return ___m12_5; }
	inline float* get_address_of_m12_5() { return &___m12_5; }
	inline void set_m12_5(float value)
	{
		___m12_5 = value;
	}
};

struct Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_StaticFields
{
public:
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::zeroMatrix
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___zeroMatrix_6;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::identityMatrix
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___identityMatrix_7;

public:
	inline static int32_t get_offset_of_zeroMatrix_6() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_StaticFields, ___zeroMatrix_6)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_zeroMatrix_6() const { return ___zeroMatrix_6; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_zeroMatrix_6() { return &___zeroMatrix_6; }
	inline void set_zeroMatrix_6(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___zeroMatrix_6 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_7() { return static_cast<int32_t>(offsetof(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_StaticFields, ___identityMatrix_7)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_identityMatrix_7() const { return ___identityMatrix_7; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_identityMatrix_7() { return &___identityMatrix_7; }
	inline void set_identityMatrix_7(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___identityMatrix_7 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.PQHandle
struct  PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95 
{
public:
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95, ____handle_1)); }
	inline int32_t get__handle_1() const { return ____handle_1; }
	inline int32_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(int32_t value)
	{
		____handle_1 = value;
	}
};

struct PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95_StaticFields
{
public:
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95_StaticFields, ___Invalid_0)); }
	inline int32_t get_Invalid_0() const { return ___Invalid_0; }
	inline int32_t* get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(int32_t value)
	{
		___Invalid_0 = value;
	}
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


// Unity.VectorGraphics.SVGPropertySheet
struct  SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B  : public Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5
{
public:

public:
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.Vec3
struct  Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53 
{
public:
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_StaticFields
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.Vec3 Unity.VectorGraphics.External.LibTessDotNet.Vec3::Zero
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_StaticFields, ___Zero_0)); }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  value)
	{
		___Zero_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_t90AF8CFBBCF4D38BDBA529CEFB18E8A1D2C7E87F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t90AF8CFBBCF4D38BDBA529CEFB18E8A1D2C7E87F__padding[12];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D24
struct  __StaticArrayInitTypeSizeU3D24_t9950573B798B75B3DBCF64FF93A7C945DB8DC2DB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t9950573B798B75B3DBCF64FF93A7C945DB8DC2DB__padding[24];
	};

public:
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
struct  EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA 
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair::_e
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____e_0;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair::_eSym
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____eSym_1;

public:
	inline static int32_t get_offset_of__e_0() { return static_cast<int32_t>(offsetof(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA, ____e_0)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__e_0() const { return ____e_0; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__e_0() { return &____e_0; }
	inline void set__e_0(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____e_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____e_0), (void*)value);
	}

	inline static int32_t get_offset_of__eSym_1() { return static_cast<int32_t>(offsetof(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA, ____eSym_1)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__eSym_1() const { return ____eSym_1; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__eSym_1() { return &____eSym_1; }
	inline void set__eSym_1(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____eSym_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eSym_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_pinvoke
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____e_0;
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____eSym_1;
};
// Native definition for COM marshalling of Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_com
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____e_0;
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____eSym_1;
};

// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face
struct  Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C  : public Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_prev
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * ____prev_1;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_next
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * ____next_2;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_anEdge
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____anEdge_3;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_trail
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * ____trail_4;
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_n
	int32_t ____n_5;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_marked
	bool ____marked_6;
	// System.Boolean Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::_inside
	bool ____inside_7;

public:
	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____prev_1)); }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * get__prev_1() const { return ____prev_1; }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____next_2)); }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * get__next_2() const { return ____next_2; }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__anEdge_3() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____anEdge_3)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__anEdge_3() const { return ____anEdge_3; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__anEdge_3() { return &____anEdge_3; }
	inline void set__anEdge_3(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____anEdge_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anEdge_3), (void*)value);
	}

	inline static int32_t get_offset_of__trail_4() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____trail_4)); }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * get__trail_4() const { return ____trail_4; }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C ** get_address_of__trail_4() { return &____trail_4; }
	inline void set__trail_4(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * value)
	{
		____trail_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trail_4), (void*)value);
	}

	inline static int32_t get_offset_of__n_5() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____n_5)); }
	inline int32_t get__n_5() const { return ____n_5; }
	inline int32_t* get_address_of__n_5() { return &____n_5; }
	inline void set__n_5(int32_t value)
	{
		____n_5 = value;
	}

	inline static int32_t get_offset_of__marked_6() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____marked_6)); }
	inline bool get__marked_6() const { return ____marked_6; }
	inline bool* get_address_of__marked_6() { return &____marked_6; }
	inline void set__marked_6(bool value)
	{
		____marked_6 = value;
	}

	inline static int32_t get_offset_of__inside_7() { return static_cast<int32_t>(offsetof(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C, ____inside_7)); }
	inline bool get__inside_7() const { return ____inside_7; }
	inline bool* get_address_of__inside_7() { return &____inside_7; }
	inline void set__inside_7(bool value)
	{
		____inside_7 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/ClipData
struct  ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8 
{
public:
	// System.Boolean Unity.VectorGraphics.SVGDocument/ClipData::WorldRelative
	bool ___WorldRelative_0;

public:
	inline static int32_t get_offset_of_WorldRelative_0() { return static_cast<int32_t>(offsetof(ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8, ___WorldRelative_0)); }
	inline bool get_WorldRelative_0() const { return ___WorldRelative_0; }
	inline bool* get_address_of_WorldRelative_0() { return &___WorldRelative_0; }
	inline void set_WorldRelative_0(bool value)
	{
		___WorldRelative_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/ClipData
struct ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_pinvoke
{
	int32_t ___WorldRelative_0;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/ClipData
struct ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_com
{
	int32_t ___WorldRelative_0;
};

// Unity.VectorGraphics.SVGDocument/Handlers
struct  Handlers_t8CB2C2F16B422B3FC39B22A1EA6C5BA8DF19FD41  : public Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48
{
public:

public:
};


// Unity.VectorGraphics.SVGDocument/HierarchyUpdate
struct  HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7 
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/HierarchyUpdate::Parent
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/HierarchyUpdate::NewNode
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___NewNode_1;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/HierarchyUpdate::ReplaceNode
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___ReplaceNode_2;

public:
	inline static int32_t get_offset_of_Parent_0() { return static_cast<int32_t>(offsetof(HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7, ___Parent_0)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_Parent_0() const { return ___Parent_0; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_Parent_0() { return &___Parent_0; }
	inline void set_Parent_0(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___Parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_NewNode_1() { return static_cast<int32_t>(offsetof(HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7, ___NewNode_1)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_NewNode_1() const { return ___NewNode_1; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_NewNode_1() { return &___NewNode_1; }
	inline void set_NewNode_1(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___NewNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_ReplaceNode_2() { return static_cast<int32_t>(offsetof(HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7, ___ReplaceNode_2)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_ReplaceNode_2() const { return ___ReplaceNode_2; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_ReplaceNode_2() { return &___ReplaceNode_2; }
	inline void set_ReplaceNode_2(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___ReplaceNode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReplaceNode_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/HierarchyUpdate
struct HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_pinvoke
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___NewNode_1;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___ReplaceNode_2;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/HierarchyUpdate
struct HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_com
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___NewNode_1;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___ReplaceNode_2;
};

// Unity.VectorGraphics.SVGDocument/MaskData
struct  MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D 
{
public:
	// System.Boolean Unity.VectorGraphics.SVGDocument/MaskData::WorldRelative
	bool ___WorldRelative_0;
	// System.Boolean Unity.VectorGraphics.SVGDocument/MaskData::ContentWorldRelative
	bool ___ContentWorldRelative_1;

public:
	inline static int32_t get_offset_of_WorldRelative_0() { return static_cast<int32_t>(offsetof(MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D, ___WorldRelative_0)); }
	inline bool get_WorldRelative_0() const { return ___WorldRelative_0; }
	inline bool* get_address_of_WorldRelative_0() { return &___WorldRelative_0; }
	inline void set_WorldRelative_0(bool value)
	{
		___WorldRelative_0 = value;
	}

	inline static int32_t get_offset_of_ContentWorldRelative_1() { return static_cast<int32_t>(offsetof(MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D, ___ContentWorldRelative_1)); }
	inline bool get_ContentWorldRelative_1() const { return ___ContentWorldRelative_1; }
	inline bool* get_address_of_ContentWorldRelative_1() { return &___ContentWorldRelative_1; }
	inline void set_ContentWorldRelative_1(bool value)
	{
		___ContentWorldRelative_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/MaskData
struct MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_pinvoke
{
	int32_t ___WorldRelative_0;
	int32_t ___ContentWorldRelative_1;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/MaskData
struct MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_com
{
	int32_t ___WorldRelative_0;
	int32_t ___ContentWorldRelative_1;
};

// Unity.VectorGraphics.SVGDocument/NodeWithParent
struct  NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843 
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/NodeWithParent::node
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/NodeWithParent::parent
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___parent_1;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843, ___node_0)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_node_0() const { return ___node_0; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843, ___parent_1)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_parent_1() const { return ___parent_1; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/NodeWithParent
struct NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_pinvoke
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___parent_1;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/NodeWithParent
struct NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_com
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___parent_1;
};

// Unity.VectorGraphics.SVGDocument/PostponedStopData
struct  PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7 
{
public:
	// Unity.VectorGraphics.GradientFill Unity.VectorGraphics.SVGDocument/PostponedStopData::fill
	GradientFill_t5304837475F57AF4B95D24C293819F652B978194 * ___fill_0;

public:
	inline static int32_t get_offset_of_fill_0() { return static_cast<int32_t>(offsetof(PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7, ___fill_0)); }
	inline GradientFill_t5304837475F57AF4B95D24C293819F652B978194 * get_fill_0() const { return ___fill_0; }
	inline GradientFill_t5304837475F57AF4B95D24C293819F652B978194 ** get_address_of_fill_0() { return &___fill_0; }
	inline void set_fill_0(GradientFill_t5304837475F57AF4B95D24C293819F652B978194 * value)
	{
		___fill_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fill_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/PostponedStopData
struct PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_pinvoke
{
	GradientFill_t5304837475F57AF4B95D24C293819F652B978194 * ___fill_0;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/PostponedStopData
struct PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_com
{
	GradientFill_t5304837475F57AF4B95D24C293819F652B978194 * ___fill_0;
};

// Unity.VectorGraphics.SVGStyleResolver/NodeData
struct  NodeData_t569A6238B35F792FD876F00885A3B913A38207A3 
{
public:
	// Unity.VectorGraphics.XmlReaderIterator/Node Unity.VectorGraphics.SVGStyleResolver/NodeData::node
	Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node_0;
	// System.String Unity.VectorGraphics.SVGStyleResolver/NodeData::name
	String_t* ___name_1;
	// System.Collections.Generic.List`1<System.String> Unity.VectorGraphics.SVGStyleResolver/NodeData::classes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___classes_2;
	// System.String Unity.VectorGraphics.SVGStyleResolver/NodeData::id
	String_t* ___id_3;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3, ___node_0)); }
	inline Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * get_node_0() const { return ___node_0; }
	inline Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_classes_2() { return static_cast<int32_t>(offsetof(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3, ___classes_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_classes_2() const { return ___classes_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_classes_2() { return &___classes_2; }
	inline void set_classes_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___classes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___classes_2), (void*)value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGStyleResolver/NodeData
struct NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_pinvoke
{
	Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node_0;
	char* ___name_1;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___classes_2;
	char* ___id_3;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGStyleResolver/NodeData
struct NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_com
{
	Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node_0;
	Il2CppChar* ___name_1;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___classes_2;
	Il2CppChar* ___id_3;
};

// Unity.VectorGraphics.VectorUtils/RawTexture
struct  RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0 
{
public:
	// UnityEngine.Color32[] Unity.VectorGraphics.VectorUtils/RawTexture::Rgba
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___Rgba_0;
	// System.Int32 Unity.VectorGraphics.VectorUtils/RawTexture::Width
	int32_t ___Width_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/RawTexture::Height
	int32_t ___Height_2;

public:
	inline static int32_t get_offset_of_Rgba_0() { return static_cast<int32_t>(offsetof(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0, ___Rgba_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_Rgba_0() const { return ___Rgba_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_Rgba_0() { return &___Rgba_0; }
	inline void set_Rgba_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___Rgba_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rgba_0), (void*)value);
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/RawTexture
struct RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_pinvoke
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___Rgba_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/RawTexture
struct RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_com
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___Rgba_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
};

// Unity.VectorGraphics.VectorUtils/TessellationOptions
struct  TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED 
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxCordDev
	float ___m_MaxCordDev_0;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxCordDevSq
	float ___m_MaxCordDevSq_1;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxTanAngleDev
	float ___m_MaxTanAngleDev_2;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxTanAngleDevCosine
	float ___m_MaxTanAngleDevCosine_3;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_StepSize
	float ___m_StepSize_4;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::<StepDistance>k__BackingField
	float ___U3CStepDistanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_MaxCordDev_0() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___m_MaxCordDev_0)); }
	inline float get_m_MaxCordDev_0() const { return ___m_MaxCordDev_0; }
	inline float* get_address_of_m_MaxCordDev_0() { return &___m_MaxCordDev_0; }
	inline void set_m_MaxCordDev_0(float value)
	{
		___m_MaxCordDev_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxCordDevSq_1() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___m_MaxCordDevSq_1)); }
	inline float get_m_MaxCordDevSq_1() const { return ___m_MaxCordDevSq_1; }
	inline float* get_address_of_m_MaxCordDevSq_1() { return &___m_MaxCordDevSq_1; }
	inline void set_m_MaxCordDevSq_1(float value)
	{
		___m_MaxCordDevSq_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxTanAngleDev_2() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___m_MaxTanAngleDev_2)); }
	inline float get_m_MaxTanAngleDev_2() const { return ___m_MaxTanAngleDev_2; }
	inline float* get_address_of_m_MaxTanAngleDev_2() { return &___m_MaxTanAngleDev_2; }
	inline void set_m_MaxTanAngleDev_2(float value)
	{
		___m_MaxTanAngleDev_2 = value;
	}

	inline static int32_t get_offset_of_m_MaxTanAngleDevCosine_3() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___m_MaxTanAngleDevCosine_3)); }
	inline float get_m_MaxTanAngleDevCosine_3() const { return ___m_MaxTanAngleDevCosine_3; }
	inline float* get_address_of_m_MaxTanAngleDevCosine_3() { return &___m_MaxTanAngleDevCosine_3; }
	inline void set_m_MaxTanAngleDevCosine_3(float value)
	{
		___m_MaxTanAngleDevCosine_3 = value;
	}

	inline static int32_t get_offset_of_m_StepSize_4() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___m_StepSize_4)); }
	inline float get_m_StepSize_4() const { return ___m_StepSize_4; }
	inline float* get_address_of_m_StepSize_4() { return &___m_StepSize_4; }
	inline void set_m_StepSize_4(float value)
	{
		___m_StepSize_4 = value;
	}

	inline static int32_t get_offset_of_U3CStepDistanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED, ___U3CStepDistanceU3Ek__BackingField_5)); }
	inline float get_U3CStepDistanceU3Ek__BackingField_5() const { return ___U3CStepDistanceU3Ek__BackingField_5; }
	inline float* get_address_of_U3CStepDistanceU3Ek__BackingField_5() { return &___U3CStepDistanceU3Ek__BackingField_5; }
	inline void set_U3CStepDistanceU3Ek__BackingField_5(float value)
	{
		___U3CStepDistanceU3Ek__BackingField_5 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>
struct  KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63, ___key_0)); }
	inline RuntimeObject* get_key_0() const { return ___key_0; }
	inline RuntimeObject** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63, ___value_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_value_1() const { return ___value_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>
struct  KeyValuePair_2_t12B290056733E8546E74FACAD93918C19888516E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12B290056733E8546E74FACAD93918C19888516E, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12B290056733E8546E74FACAD93918C19888516E, ___value_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_value_1() const { return ___value_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___value_1 = value;
	}
};


// Unity.VectorGraphics.AddressMode
struct  AddressMode_tD50CCFBBDD1A7A5AD68EA70F08FF81E732292006 
{
public:
	// System.Int32 Unity.VectorGraphics.AddressMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressMode_tD50CCFBBDD1A7A5AD68EA70F08FF81E732292006, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.BezierPathSegment
struct  BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P0
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P0_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P1_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P2_2;

public:
	inline static int32_t get_offset_of_P0_0() { return static_cast<int32_t>(offsetof(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32, ___P0_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P0_0() const { return ___P0_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P0_0() { return &___P0_0; }
	inline void set_P0_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P0_0 = value;
	}

	inline static int32_t get_offset_of_P1_1() { return static_cast<int32_t>(offsetof(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32, ___P1_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P1_1() const { return ___P1_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P1_1() { return &___P1_1; }
	inline void set_P1_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P1_1 = value;
	}

	inline static int32_t get_offset_of_P2_2() { return static_cast<int32_t>(offsetof(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32, ___P2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P2_2() const { return ___P2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P2_2() { return &___P2_2; }
	inline void set_P2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P2_2 = value;
	}
};


// Unity.VectorGraphics.BezierSegment
struct  BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P0
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P0_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P1_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P2_2;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P3
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___P3_3;

public:
	inline static int32_t get_offset_of_P0_0() { return static_cast<int32_t>(offsetof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8, ___P0_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P0_0() const { return ___P0_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P0_0() { return &___P0_0; }
	inline void set_P0_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P0_0 = value;
	}

	inline static int32_t get_offset_of_P1_1() { return static_cast<int32_t>(offsetof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8, ___P1_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P1_1() const { return ___P1_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P1_1() { return &___P1_1; }
	inline void set_P1_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P1_1 = value;
	}

	inline static int32_t get_offset_of_P2_2() { return static_cast<int32_t>(offsetof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8, ___P2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P2_2() const { return ___P2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P2_2() { return &___P2_2; }
	inline void set_P2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P2_2 = value;
	}

	inline static int32_t get_offset_of_P3_3() { return static_cast<int32_t>(offsetof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8, ___P3_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_P3_3() const { return ___P3_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_P3_3() { return &___P3_3; }
	inline void set_P3_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___P3_3 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct  ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1 
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.Vec3 Unity.VectorGraphics.External.LibTessDotNet.ContourVertex::Position
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  ___Position_0;
	// System.Object Unity.VectorGraphics.External.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1, ___Position_0)); }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  get_Position_0() const { return ___Position_0; }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1_marshaled_pinvoke
{
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1_marshaled_com
{
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  ___Position_0;
	Il2CppIUnknown* ___Data_1;
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

// Unity.VectorGraphics.FillMode
struct  FillMode_tB523230FDEC86B0F5843A0EC9010FE33B84017ED 
{
public:
	// System.Int32 Unity.VectorGraphics.FillMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMode_tB523230FDEC86B0F5843A0EC9010FE33B84017ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.GradientFillType
struct  GradientFillType_t890F7833320EB31658E63428DCFD4DB4F49DADA6 
{
public:
	// System.Int32 Unity.VectorGraphics.GradientFillType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GradientFillType_t890F7833320EB31658E63428DCFD4DB4F49DADA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Unity.VectorGraphics.SceneNode
struct  SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SceneNode::<Children>k__BackingField
	List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * ___U3CChildrenU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.VectorGraphics.Shape> Unity.VectorGraphics.SceneNode::<Shapes>k__BackingField
	List_1_t301FDD5FB42C7FB019FEBB8223F81C3AD46520A2 * ___U3CShapesU3Ek__BackingField_1;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SceneNode::m_Transform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___m_Transform_2;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SceneNode::<Clipper>k__BackingField
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CClipperU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CChildrenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483, ___U3CChildrenU3Ek__BackingField_0)); }
	inline List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * get_U3CChildrenU3Ek__BackingField_0() const { return ___U3CChildrenU3Ek__BackingField_0; }
	inline List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 ** get_address_of_U3CChildrenU3Ek__BackingField_0() { return &___U3CChildrenU3Ek__BackingField_0; }
	inline void set_U3CChildrenU3Ek__BackingField_0(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * value)
	{
		___U3CChildrenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChildrenU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShapesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483, ___U3CShapesU3Ek__BackingField_1)); }
	inline List_1_t301FDD5FB42C7FB019FEBB8223F81C3AD46520A2 * get_U3CShapesU3Ek__BackingField_1() const { return ___U3CShapesU3Ek__BackingField_1; }
	inline List_1_t301FDD5FB42C7FB019FEBB8223F81C3AD46520A2 ** get_address_of_U3CShapesU3Ek__BackingField_1() { return &___U3CShapesU3Ek__BackingField_1; }
	inline void set_U3CShapesU3Ek__BackingField_1(List_1_t301FDD5FB42C7FB019FEBB8223F81C3AD46520A2 * value)
	{
		___U3CShapesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShapesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483, ___m_Transform_2)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_U3CClipperU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483, ___U3CClipperU3Ek__BackingField_3)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CClipperU3Ek__BackingField_3() const { return ___U3CClipperU3Ek__BackingField_3; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CClipperU3Ek__BackingField_3() { return &___U3CClipperU3Ek__BackingField_3; }
	inline void set_U3CClipperU3Ek__BackingField_3(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CClipperU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClipperU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.VectorGraphics.ViewportOptions
struct  ViewportOptions_t903846FFFABCD392229C0E4EB7330570BEEEECE6 
{
public:
	// System.Int32 Unity.VectorGraphics.ViewportOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewportOptions_t903846FFFABCD392229C0E4EB7330570BEEEECE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.WindingRule
struct  WindingRule_t29963B1632FF45DAF8E64090AC15DD530ABECC35 
{
public:
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.WindingRule::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindingRule_t29963B1632FF45DAF8E64090AC15DD530ABECC35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlNodeType
struct  XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.External.ClipperLib.Clipper/NodeType
struct  NodeType_t75D87B753B17439B9CA38E7A9A200C02546F5E25 
{
public:
	// System.Int32 Unity.VectorGraphics.External.ClipperLib.Clipper/NodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NodeType_t75D87B753B17439B9CA38E7A9A200C02546F5E25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge
struct  Edge_t0357426165AA201C0A0C1CB8721F198CB2779807  : public Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_pair
	EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  ____pair_1;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_next
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____next_2;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_Sym
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____Sym_3;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_Onext
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____Onext_4;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_Lnext
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____Lnext_5;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_Org
	Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * ____Org_6;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_Lface
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * ____Lface_7;
	// Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_activeRegion
	ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 * ____activeRegion_8;
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::_winding
	int32_t ____winding_9;

public:
	inline static int32_t get_offset_of__pair_1() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____pair_1)); }
	inline EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  get__pair_1() const { return ____pair_1; }
	inline EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * get_address_of__pair_1() { return &____pair_1; }
	inline void set__pair_1(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  value)
	{
		____pair_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____pair_1))->____e_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____pair_1))->____eSym_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____next_2)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__next_2() const { return ____next_2; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__Sym_3() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____Sym_3)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__Sym_3() const { return ____Sym_3; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__Sym_3() { return &____Sym_3; }
	inline void set__Sym_3(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____Sym_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Sym_3), (void*)value);
	}

	inline static int32_t get_offset_of__Onext_4() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____Onext_4)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__Onext_4() const { return ____Onext_4; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__Onext_4() { return &____Onext_4; }
	inline void set__Onext_4(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____Onext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Onext_4), (void*)value);
	}

	inline static int32_t get_offset_of__Lnext_5() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____Lnext_5)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__Lnext_5() const { return ____Lnext_5; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__Lnext_5() { return &____Lnext_5; }
	inline void set__Lnext_5(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____Lnext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Lnext_5), (void*)value);
	}

	inline static int32_t get_offset_of__Org_6() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____Org_6)); }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * get__Org_6() const { return ____Org_6; }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 ** get_address_of__Org_6() { return &____Org_6; }
	inline void set__Org_6(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * value)
	{
		____Org_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Org_6), (void*)value);
	}

	inline static int32_t get_offset_of__Lface_7() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____Lface_7)); }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * get__Lface_7() const { return ____Lface_7; }
	inline Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C ** get_address_of__Lface_7() { return &____Lface_7; }
	inline void set__Lface_7(Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * value)
	{
		____Lface_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Lface_7), (void*)value);
	}

	inline static int32_t get_offset_of__activeRegion_8() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____activeRegion_8)); }
	inline ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 * get__activeRegion_8() const { return ____activeRegion_8; }
	inline ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 ** get_address_of__activeRegion_8() { return &____activeRegion_8; }
	inline void set__activeRegion_8(ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 * value)
	{
		____activeRegion_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRegion_8), (void*)value);
	}

	inline static int32_t get_offset_of__winding_9() { return static_cast<int32_t>(offsetof(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807, ____winding_9)); }
	inline int32_t get__winding_9() const { return ____winding_9; }
	inline int32_t* get_address_of__winding_9() { return &____winding_9; }
	inline void set__winding_9(int32_t value)
	{
		____winding_9 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex
struct  Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353  : public Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_prev
	Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * ____prev_1;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_next
	Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * ____next_2;
	// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_anEdge
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ____anEdge_3;
	// Unity.VectorGraphics.External.LibTessDotNet.Vec3 Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_coords
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  ____coords_4;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_s
	float ____s_5;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_t
	float ____t_6;
	// Unity.VectorGraphics.External.LibTessDotNet.PQHandle Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_pqHandle
	PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95  ____pqHandle_7;
	// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_n
	int32_t ____n_8;
	// System.Object Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::_data
	RuntimeObject * ____data_9;

public:
	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____prev_1)); }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * get__prev_1() const { return ____prev_1; }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____next_2)); }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * get__next_2() const { return ____next_2; }
	inline Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__anEdge_3() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____anEdge_3)); }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * get__anEdge_3() const { return ____anEdge_3; }
	inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** get_address_of__anEdge_3() { return &____anEdge_3; }
	inline void set__anEdge_3(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * value)
	{
		____anEdge_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anEdge_3), (void*)value);
	}

	inline static int32_t get_offset_of__coords_4() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____coords_4)); }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  get__coords_4() const { return ____coords_4; }
	inline Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53 * get_address_of__coords_4() { return &____coords_4; }
	inline void set__coords_4(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  value)
	{
		____coords_4 = value;
	}

	inline static int32_t get_offset_of__s_5() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____s_5)); }
	inline float get__s_5() const { return ____s_5; }
	inline float* get_address_of__s_5() { return &____s_5; }
	inline void set__s_5(float value)
	{
		____s_5 = value;
	}

	inline static int32_t get_offset_of__t_6() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____t_6)); }
	inline float get__t_6() const { return ____t_6; }
	inline float* get_address_of__t_6() { return &____t_6; }
	inline void set__t_6(float value)
	{
		____t_6 = value;
	}

	inline static int32_t get_offset_of__pqHandle_7() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____pqHandle_7)); }
	inline PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95  get__pqHandle_7() const { return ____pqHandle_7; }
	inline PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95 * get_address_of__pqHandle_7() { return &____pqHandle_7; }
	inline void set__pqHandle_7(PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95  value)
	{
		____pqHandle_7 = value;
	}

	inline static int32_t get_offset_of__n_8() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____n_8)); }
	inline int32_t get__n_8() const { return ____n_8; }
	inline int32_t* get_address_of__n_8() { return &____n_8; }
	inline void set__n_8(int32_t value)
	{
		____n_8 = value;
	}

	inline static int32_t get_offset_of__data_9() { return static_cast<int32_t>(offsetof(Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353, ____data_9)); }
	inline RuntimeObject * get__data_9() const { return ____data_9; }
	inline RuntimeObject ** get_address_of__data_9() { return &____data_9; }
	inline void set__data_9(RuntimeObject * value)
	{
		____data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_9), (void*)value);
	}
};


// Unity.VectorGraphics.PathDistanceForwardIterator/Result
struct  Result_tC02A31679DF6397C4F709F6A5BDBFDC11600818C 
{
public:
	// System.Int32 Unity.VectorGraphics.PathDistanceForwardIterator/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_tC02A31679DF6397C4F709F6A5BDBFDC11600818C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGAttribParser/AttribPath
struct  AttribPath_t046F7028E934BB40B41B9FF911E044C305F185D2 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGAttribParser/AttribPath::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttribPath_t046F7028E934BB40B41B9FF911E044C305F185D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGAttribParser/AttribStroke
struct  AttribStroke_t2A3C5FAB1E9F47AB1C74B4684AA83C808CE766B4 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGAttribParser/AttribStroke::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttribStroke_t2A3C5FAB1E9F47AB1C74B4684AA83C808CE766B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGAttribParser/AttribTransform
struct  AttribTransform_t814EC2A10863ACEEBE2E1FA9BF4FD3A351D0CD2B 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGAttribParser/AttribTransform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttribTransform_t814EC2A10863ACEEBE2E1FA9BF4FD3A351D0CD2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/DimType
struct  DimType_t3EDB6E2D10014014A131CB18E39429EBBE02551F 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGDocument/DimType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DimType_t3EDB6E2D10014014A131CB18E39429EBBE02551F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/GradientExData
struct  GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A  : public RuntimeObject
{
public:
	// System.Boolean Unity.VectorGraphics.SVGDocument/GradientExData::WorldRelative
	bool ___WorldRelative_0;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SVGDocument/GradientExData::FillTransform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___FillTransform_1;

public:
	inline static int32_t get_offset_of_WorldRelative_0() { return static_cast<int32_t>(offsetof(GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A, ___WorldRelative_0)); }
	inline bool get_WorldRelative_0() const { return ___WorldRelative_0; }
	inline bool* get_address_of_WorldRelative_0() { return &___WorldRelative_0; }
	inline void set_WorldRelative_0(bool value)
	{
		___WorldRelative_0 = value;
	}

	inline static int32_t get_offset_of_FillTransform_1() { return static_cast<int32_t>(offsetof(GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A, ___FillTransform_1)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_FillTransform_1() const { return ___FillTransform_1; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_FillTransform_1() { return &___FillTransform_1; }
	inline void set_FillTransform_1(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___FillTransform_1 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/NodeGlobalSceneState
struct  NodeGlobalSceneState_tC3463470D5391B625EF5D6E46690BF1F1044C6A3 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.SVGDocument/NodeGlobalSceneState::ContainerSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ContainerSize_0;

public:
	inline static int32_t get_offset_of_ContainerSize_0() { return static_cast<int32_t>(offsetof(NodeGlobalSceneState_tC3463470D5391B625EF5D6E46690BF1F1044C6A3, ___ContainerSize_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ContainerSize_0() const { return ___ContainerSize_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ContainerSize_0() { return &___ContainerSize_0; }
	inline void set_ContainerSize_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ContainerSize_0 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/NodeReferenceData
struct  NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE 
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SVGDocument/NodeReferenceData::node
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	// UnityEngine.Rect Unity.VectorGraphics.SVGDocument/NodeReferenceData::viewport
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_1;
	// System.String Unity.VectorGraphics.SVGDocument/NodeReferenceData::id
	String_t* ___id_2;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE, ___node_0)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_node_0() const { return ___node_0; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_0), (void*)value);
	}

	inline static int32_t get_offset_of_viewport_1() { return static_cast<int32_t>(offsetof(NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE, ___viewport_1)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewport_1() const { return ___viewport_1; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewport_1() { return &___viewport_1; }
	inline void set_viewport_1(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewport_1 = value;
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/NodeReferenceData
struct NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_pinvoke
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_1;
	char* ___id_2;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/NodeReferenceData
struct NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_com
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___node_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_1;
	Il2CppChar* ___id_2;
};

// Unity.VectorGraphics.SVGDocument/PatternData
struct  PatternData_t189C13268A3E743365534543CBBF50771961F81E 
{
public:
	// System.Boolean Unity.VectorGraphics.SVGDocument/PatternData::WorldRelative
	bool ___WorldRelative_0;
	// System.Boolean Unity.VectorGraphics.SVGDocument/PatternData::ContentWorldRelative
	bool ___ContentWorldRelative_1;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SVGDocument/PatternData::PatternTransform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___PatternTransform_2;

public:
	inline static int32_t get_offset_of_WorldRelative_0() { return static_cast<int32_t>(offsetof(PatternData_t189C13268A3E743365534543CBBF50771961F81E, ___WorldRelative_0)); }
	inline bool get_WorldRelative_0() const { return ___WorldRelative_0; }
	inline bool* get_address_of_WorldRelative_0() { return &___WorldRelative_0; }
	inline void set_WorldRelative_0(bool value)
	{
		___WorldRelative_0 = value;
	}

	inline static int32_t get_offset_of_ContentWorldRelative_1() { return static_cast<int32_t>(offsetof(PatternData_t189C13268A3E743365534543CBBF50771961F81E, ___ContentWorldRelative_1)); }
	inline bool get_ContentWorldRelative_1() const { return ___ContentWorldRelative_1; }
	inline bool* get_address_of_ContentWorldRelative_1() { return &___ContentWorldRelative_1; }
	inline void set_ContentWorldRelative_1(bool value)
	{
		___ContentWorldRelative_1 = value;
	}

	inline static int32_t get_offset_of_PatternTransform_2() { return static_cast<int32_t>(offsetof(PatternData_t189C13268A3E743365534543CBBF50771961F81E, ___PatternTransform_2)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_PatternTransform_2() const { return ___PatternTransform_2; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_PatternTransform_2() { return &___PatternTransform_2; }
	inline void set_PatternTransform_2(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___PatternTransform_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/PatternData
struct PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_pinvoke
{
	int32_t ___WorldRelative_0;
	int32_t ___ContentWorldRelative_1;
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___PatternTransform_2;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/PatternData
struct PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_com
{
	int32_t ___WorldRelative_0;
	int32_t ___ContentWorldRelative_1;
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___PatternTransform_2;
};

// Unity.VectorGraphics.SVGDocument/ViewBoxAlign
struct  ViewBoxAlign_t1954AF9A35B649BDC4A09EA5F01020C07B6F3567 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGDocument/ViewBoxAlign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewBoxAlign_t1954AF9A35B649BDC4A09EA5F01020C07B6F3567, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGDocument/ViewBoxAspectRatio
struct  ViewBoxAspectRatio_t34719FF8C1CCB13F3E9084D66C3D241162045505 
{
public:
	// System.Int32 Unity.VectorGraphics.SVGDocument/ViewBoxAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewBoxAspectRatio_t34719FF8C1CCB13F3E9084D66C3D241162045505, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.SVGParser/SceneInfo
struct  SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 
{
public:
	// Unity.VectorGraphics.Scene Unity.VectorGraphics.SVGParser/SceneInfo::<Scene>k__BackingField
	Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___U3CSceneU3Ek__BackingField_0;
	// UnityEngine.Rect Unity.VectorGraphics.SVGParser/SceneInfo::<SceneViewport>k__BackingField
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CSceneViewportU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.SVGParser/SceneInfo::<NodeOpacity>k__BackingField
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___U3CNodeOpacityU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SVGParser/SceneInfo::<NodeIDs>k__BackingField
	Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___U3CNodeIDsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSceneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069, ___U3CSceneU3Ek__BackingField_0)); }
	inline Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * get_U3CSceneU3Ek__BackingField_0() const { return ___U3CSceneU3Ek__BackingField_0; }
	inline Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 ** get_address_of_U3CSceneU3Ek__BackingField_0() { return &___U3CSceneU3Ek__BackingField_0; }
	inline void set_U3CSceneU3Ek__BackingField_0(Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * value)
	{
		___U3CSceneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSceneU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneViewportU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069, ___U3CSceneViewportU3Ek__BackingField_1)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CSceneViewportU3Ek__BackingField_1() const { return ___U3CSceneViewportU3Ek__BackingField_1; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CSceneViewportU3Ek__BackingField_1() { return &___U3CSceneViewportU3Ek__BackingField_1; }
	inline void set_U3CSceneViewportU3Ek__BackingField_1(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CSceneViewportU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNodeOpacityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069, ___U3CNodeOpacityU3Ek__BackingField_2)); }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * get_U3CNodeOpacityU3Ek__BackingField_2() const { return ___U3CNodeOpacityU3Ek__BackingField_2; }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 ** get_address_of_U3CNodeOpacityU3Ek__BackingField_2() { return &___U3CNodeOpacityU3Ek__BackingField_2; }
	inline void set_U3CNodeOpacityU3Ek__BackingField_2(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * value)
	{
		___U3CNodeOpacityU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNodeOpacityU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeIDsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069, ___U3CNodeIDsU3Ek__BackingField_3)); }
	inline Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * get_U3CNodeIDsU3Ek__BackingField_3() const { return ___U3CNodeIDsU3Ek__BackingField_3; }
	inline Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 ** get_address_of_U3CNodeIDsU3Ek__BackingField_3() { return &___U3CNodeIDsU3Ek__BackingField_3; }
	inline void set_U3CNodeIDsU3Ek__BackingField_3(Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * value)
	{
		___U3CNodeIDsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNodeIDsU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGParser/SceneInfo
struct SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_pinvoke
{
	Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___U3CSceneU3Ek__BackingField_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CSceneViewportU3Ek__BackingField_1;
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___U3CNodeOpacityU3Ek__BackingField_2;
	Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___U3CNodeIDsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGParser/SceneInfo
struct SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_com
{
	Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___U3CSceneU3Ek__BackingField_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CSceneViewportU3Ek__BackingField_1;
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___U3CNodeOpacityU3Ek__BackingField_2;
	Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___U3CNodeIDsU3Ek__BackingField_3;
};

// Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12
struct  U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.List`1<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::classes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___classes_3;
	// System.Collections.Generic.List`1<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>3__classes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CU3E3__classes_4;
	// Unity.VectorGraphics.SVGStyleResolver Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>4__this
	SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * ___U3CU3E4__this_5;
	// System.Collections.Generic.List`1/Enumerator<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>s__1
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3Es__1_6;
	// System.String Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<klass>5__2
	String_t* ___U3CklassU3E5__2_7;
	// System.Collections.Generic.IEnumerator`1<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>s__3
	RuntimeObject* ___U3CU3Es__3_8;
	// System.String Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<sel>5__4
	String_t* ___U3CselU3E5__4_9;
	// System.String Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<klass>5__5
	String_t* ___U3CklassU3E5__5_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_classes_3() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___classes_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_classes_3() const { return ___classes_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_classes_3() { return &___classes_3; }
	inline void set_classes_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___classes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___classes_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__classes_4() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3E3__classes_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CU3E3__classes_4() const { return ___U3CU3E3__classes_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CU3E3__classes_4() { return &___U3CU3E3__classes_4; }
	inline void set_U3CU3E3__classes_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CU3E3__classes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__classes_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3E4__this_5)); }
	inline SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3Es__1_6)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_6))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CklassU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CklassU3E5__2_7)); }
	inline String_t* get_U3CklassU3E5__2_7() const { return ___U3CklassU3E5__2_7; }
	inline String_t** get_address_of_U3CklassU3E5__2_7() { return &___U3CklassU3E5__2_7; }
	inline void set_U3CklassU3E5__2_7(String_t* value)
	{
		___U3CklassU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CklassU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_8() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CU3Es__3_8)); }
	inline RuntimeObject* get_U3CU3Es__3_8() const { return ___U3CU3Es__3_8; }
	inline RuntimeObject** get_address_of_U3CU3Es__3_8() { return &___U3CU3Es__3_8; }
	inline void set_U3CU3Es__3_8(RuntimeObject* value)
	{
		___U3CU3Es__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CselU3E5__4_9() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CselU3E5__4_9)); }
	inline String_t* get_U3CselU3E5__4_9() const { return ___U3CselU3E5__4_9; }
	inline String_t** get_address_of_U3CselU3E5__4_9() { return &___U3CselU3E5__4_9; }
	inline void set_U3CselU3E5__4_9(String_t* value)
	{
		___U3CselU3E5__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselU3E5__4_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CklassU3E5__5_10() { return static_cast<int32_t>(offsetof(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31, ___U3CklassU3E5__5_10)); }
	inline String_t* get_U3CklassU3E5__5_10() const { return ___U3CklassU3E5__5_10; }
	inline String_t** get_address_of_U3CklassU3E5__5_10() { return &___U3CklassU3E5__5_10; }
	inline void set_U3CklassU3E5__5_10(String_t* value)
	{
		___U3CklassU3E5__5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CklassU3E5__5_10), (void*)value);
	}
};


// Unity.VectorGraphics.SVGStyleResolver/StyleLayer
struct  StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.SVGStyleSheet Unity.VectorGraphics.SVGStyleResolver/StyleLayer::styleSheet
	SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * ___styleSheet_0;
	// Unity.VectorGraphics.SVGPropertySheet Unity.VectorGraphics.SVGStyleResolver/StyleLayer::attributeSheet
	SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * ___attributeSheet_1;
	// Unity.VectorGraphics.SVGStyleResolver/NodeData Unity.VectorGraphics.SVGStyleResolver/StyleLayer::nodeData
	NodeData_t569A6238B35F792FD876F00885A3B913A38207A3  ___nodeData_2;

public:
	inline static int32_t get_offset_of_styleSheet_0() { return static_cast<int32_t>(offsetof(StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370, ___styleSheet_0)); }
	inline SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * get_styleSheet_0() const { return ___styleSheet_0; }
	inline SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 ** get_address_of_styleSheet_0() { return &___styleSheet_0; }
	inline void set_styleSheet_0(SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * value)
	{
		___styleSheet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleSheet_0), (void*)value);
	}

	inline static int32_t get_offset_of_attributeSheet_1() { return static_cast<int32_t>(offsetof(StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370, ___attributeSheet_1)); }
	inline SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * get_attributeSheet_1() const { return ___attributeSheet_1; }
	inline SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B ** get_address_of_attributeSheet_1() { return &___attributeSheet_1; }
	inline void set_attributeSheet_1(SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * value)
	{
		___attributeSheet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeSheet_1), (void*)value);
	}

	inline static int32_t get_offset_of_nodeData_2() { return static_cast<int32_t>(offsetof(StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370, ___nodeData_2)); }
	inline NodeData_t569A6238B35F792FD876F00885A3B913A38207A3  get_nodeData_2() const { return ___nodeData_2; }
	inline NodeData_t569A6238B35F792FD876F00885A3B913A38207A3 * get_address_of_nodeData_2() { return &___nodeData_2; }
	inline void set_nodeData_2(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3  value)
	{
		___nodeData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeData_2))->___node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeData_2))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeData_2))->___classes_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeData_2))->___id_3), (void*)NULL);
		#endif
	}
};


// Unity.VectorGraphics.VectorClip/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t0F4A238B2A466EB723E110056F19CD6CB751C436  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorClip/<>c__DisplayClass7_0::invMatrix
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___invMatrix_0;

public:
	inline static int32_t get_offset_of_invMatrix_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t0F4A238B2A466EB723E110056F19CD6CB751C436, ___invMatrix_0)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_invMatrix_0() const { return ___invMatrix_0; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_invMatrix_0() { return &___invMatrix_0; }
	inline void set_invMatrix_0(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___invMatrix_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0
struct  U3CU3Ec__DisplayClass20_0_tDBECBD34BF42D57EC229ED5B0CE664C47DADD039  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::invMat
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___invMat_0;

public:
	inline static int32_t get_offset_of_invMat_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tDBECBD34BF42D57EC229ED5B0CE664C47DADD039, ___invMat_0)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_invMat_0() const { return ___invMat_0; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_invMat_0() { return &___invMat_0; }
	inline void set_invMat_0(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___invMat_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0
struct  U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F  : public RuntimeObject
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::pixelsToUnits
	float ___pixelsToUnits_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_1;
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::spriteWidth
	float ___spriteWidth_2;
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::spriteHeight
	float ___spriteHeight_3;

public:
	inline static int32_t get_offset_of_pixelsToUnits_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F, ___pixelsToUnits_0)); }
	inline float get_pixelsToUnits_0() const { return ___pixelsToUnits_0; }
	inline float* get_address_of_pixelsToUnits_0() { return &___pixelsToUnits_0; }
	inline void set_pixelsToUnits_0(float value)
	{
		___pixelsToUnits_0 = value;
	}

	inline static int32_t get_offset_of_pivot_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F, ___pivot_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_1() const { return ___pivot_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_1() { return &___pivot_1; }
	inline void set_pivot_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_1 = value;
	}

	inline static int32_t get_offset_of_spriteWidth_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F, ___spriteWidth_2)); }
	inline float get_spriteWidth_2() const { return ___spriteWidth_2; }
	inline float* get_address_of_spriteWidth_2() { return &___spriteWidth_2; }
	inline void set_spriteWidth_2(float value)
	{
		___spriteWidth_2 = value;
	}

	inline static int32_t get_offset_of_spriteHeight_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F, ___spriteHeight_3)); }
	inline float get_spriteHeight_3() const { return ___spriteHeight_3; }
	inline float* get_address_of_spriteHeight_3() { return &___spriteHeight_3; }
	inline void set_spriteHeight_3(float value)
	{
		___spriteHeight_3 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99
struct  U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>2__current
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::root
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___root_3;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>3__root
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CU3E3__root_4;
	// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>s__1
	Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  ___U3CU3Es__1_5;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<c>5__2
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CcU3E5__2_6;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>s__3
	RuntimeObject* ___U3CU3Es__3_7;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<n>5__4
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CnU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3E2__current_1)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___root_3)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_root_3() const { return ___root_3; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3E3__root_4)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_5() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3Es__1_5)); }
	inline Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  get_U3CU3Es__1_5() const { return ___U3CU3Es__1_5; }
	inline Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * get_address_of_U3CU3Es__1_5() { return &___U3CU3Es__1_5; }
	inline void set_U3CU3Es__1_5(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  value)
	{
		___U3CU3Es__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_5))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CcU3E5__2_6)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CcU3E5__2_6() const { return ___U3CcU3E5__2_6; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CcU3E5__2_6() { return &___U3CcU3E5__2_6; }
	inline void set_U3CcU3E5__2_6(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CcU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_7() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CU3Es__3_7)); }
	inline RuntimeObject* get_U3CU3Es__3_7() const { return ___U3CU3Es__3_7; }
	inline RuntimeObject** get_address_of_U3CU3Es__3_7() { return &___U3CU3Es__3_7; }
	inline void set_U3CU3Es__3_7(RuntimeObject* value)
	{
		___U3CU3Es__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B, ___U3CnU3E5__4_8)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CnU3E5__4_8() const { return ___U3CnU3E5__4_8; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CnU3E5__4_8() { return &___U3CnU3E5__4_8; }
	inline void set_U3CnU3E5__4_8(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CnU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__4_8), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/Alignment
struct  Alignment_t4D77AC5327CEF471346F1CDF1360D40E338F647A 
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/Alignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Alignment_t4D77AC5327CEF471346F1CDF1360D40E338F647A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/Geometry
struct  Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5  : public RuntimeObject
{
public:
	// UnityEngine.Vector2[] Unity.VectorGraphics.VectorUtils/Geometry::Vertices
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___Vertices_0;
	// UnityEngine.Vector2[] Unity.VectorGraphics.VectorUtils/Geometry::UVs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___UVs_1;
	// System.UInt16[] Unity.VectorGraphics.VectorUtils/Geometry::Indices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___Indices_2;
	// UnityEngine.Color Unity.VectorGraphics.VectorUtils/Geometry::Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_3;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/Geometry::WorldTransform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___WorldTransform_4;
	// Unity.VectorGraphics.IFill Unity.VectorGraphics.VectorUtils/Geometry::Fill
	RuntimeObject* ___Fill_5;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/Geometry::FillTransform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___FillTransform_6;
	// UnityEngine.Rect Unity.VectorGraphics.VectorUtils/Geometry::UnclippedBounds
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___UnclippedBounds_7;
	// System.Int32 Unity.VectorGraphics.VectorUtils/Geometry::SettingIndex
	int32_t ___SettingIndex_8;

public:
	inline static int32_t get_offset_of_Vertices_0() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___Vertices_0)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_Vertices_0() const { return ___Vertices_0; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_Vertices_0() { return &___Vertices_0; }
	inline void set_Vertices_0(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___Vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_UVs_1() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___UVs_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_UVs_1() const { return ___UVs_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_UVs_1() { return &___UVs_1; }
	inline void set_UVs_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___UVs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UVs_1), (void*)value);
	}

	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___Indices_2)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_Indices_2() const { return ___Indices_2; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Color_3() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___Color_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Color_3() const { return ___Color_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Color_3() { return &___Color_3; }
	inline void set_Color_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Color_3 = value;
	}

	inline static int32_t get_offset_of_WorldTransform_4() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___WorldTransform_4)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_WorldTransform_4() const { return ___WorldTransform_4; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_WorldTransform_4() { return &___WorldTransform_4; }
	inline void set_WorldTransform_4(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___WorldTransform_4 = value;
	}

	inline static int32_t get_offset_of_Fill_5() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___Fill_5)); }
	inline RuntimeObject* get_Fill_5() const { return ___Fill_5; }
	inline RuntimeObject** get_address_of_Fill_5() { return &___Fill_5; }
	inline void set_Fill_5(RuntimeObject* value)
	{
		___Fill_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fill_5), (void*)value);
	}

	inline static int32_t get_offset_of_FillTransform_6() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___FillTransform_6)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_FillTransform_6() const { return ___FillTransform_6; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_FillTransform_6() { return &___FillTransform_6; }
	inline void set_FillTransform_6(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___FillTransform_6 = value;
	}

	inline static int32_t get_offset_of_UnclippedBounds_7() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___UnclippedBounds_7)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_UnclippedBounds_7() const { return ___UnclippedBounds_7; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_UnclippedBounds_7() { return &___UnclippedBounds_7; }
	inline void set_UnclippedBounds_7(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___UnclippedBounds_7 = value;
	}

	inline static int32_t get_offset_of_SettingIndex_8() { return static_cast<int32_t>(offsetof(Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5, ___SettingIndex_8)); }
	inline int32_t get_SettingIndex_8() const { return ___SettingIndex_8; }
	inline int32_t* get_address_of_SettingIndex_8() { return &___SettingIndex_8; }
	inline void set_SettingIndex_8(int32_t value)
	{
		___SettingIndex_8 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/JoiningInfo
struct  JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::JoinPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___JoinPos_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::TanAtEnd
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___TanAtEnd_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::TanAtStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___TanAtStart_2;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NormAtEnd
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NormAtEnd_3;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NormAtStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NormAtStart_4;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___PosThicknessStart_5;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NegThicknessStart_6;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessEnd
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___PosThicknessEnd_7;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessEnd
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NegThicknessEnd_8;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessClosingPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___PosThicknessClosingPoint_9;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessClosingPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NegThicknessClosingPoint_10;
	// System.Boolean Unity.VectorGraphics.VectorUtils/JoiningInfo::RoundPosThickness
	bool ___RoundPosThickness_11;
	// System.Boolean Unity.VectorGraphics.VectorUtils/JoiningInfo::SimpleJoin
	bool ___SimpleJoin_12;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerVertex
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___InnerCornerVertex_13;
	// System.Single Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerDistToEnd
	float ___InnerCornerDistToEnd_14;
	// System.Single Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerDistFromStart
	float ___InnerCornerDistFromStart_15;

public:
	inline static int32_t get_offset_of_JoinPos_0() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___JoinPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_JoinPos_0() const { return ___JoinPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_JoinPos_0() { return &___JoinPos_0; }
	inline void set_JoinPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___JoinPos_0 = value;
	}

	inline static int32_t get_offset_of_TanAtEnd_1() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___TanAtEnd_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_TanAtEnd_1() const { return ___TanAtEnd_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_TanAtEnd_1() { return &___TanAtEnd_1; }
	inline void set_TanAtEnd_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___TanAtEnd_1 = value;
	}

	inline static int32_t get_offset_of_TanAtStart_2() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___TanAtStart_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_TanAtStart_2() const { return ___TanAtStart_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_TanAtStart_2() { return &___TanAtStart_2; }
	inline void set_TanAtStart_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___TanAtStart_2 = value;
	}

	inline static int32_t get_offset_of_NormAtEnd_3() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___NormAtEnd_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NormAtEnd_3() const { return ___NormAtEnd_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NormAtEnd_3() { return &___NormAtEnd_3; }
	inline void set_NormAtEnd_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NormAtEnd_3 = value;
	}

	inline static int32_t get_offset_of_NormAtStart_4() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___NormAtStart_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NormAtStart_4() const { return ___NormAtStart_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NormAtStart_4() { return &___NormAtStart_4; }
	inline void set_NormAtStart_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NormAtStart_4 = value;
	}

	inline static int32_t get_offset_of_PosThicknessStart_5() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___PosThicknessStart_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_PosThicknessStart_5() const { return ___PosThicknessStart_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_PosThicknessStart_5() { return &___PosThicknessStart_5; }
	inline void set_PosThicknessStart_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___PosThicknessStart_5 = value;
	}

	inline static int32_t get_offset_of_NegThicknessStart_6() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___NegThicknessStart_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NegThicknessStart_6() const { return ___NegThicknessStart_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NegThicknessStart_6() { return &___NegThicknessStart_6; }
	inline void set_NegThicknessStart_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NegThicknessStart_6 = value;
	}

	inline static int32_t get_offset_of_PosThicknessEnd_7() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___PosThicknessEnd_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_PosThicknessEnd_7() const { return ___PosThicknessEnd_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_PosThicknessEnd_7() { return &___PosThicknessEnd_7; }
	inline void set_PosThicknessEnd_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___PosThicknessEnd_7 = value;
	}

	inline static int32_t get_offset_of_NegThicknessEnd_8() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___NegThicknessEnd_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NegThicknessEnd_8() const { return ___NegThicknessEnd_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NegThicknessEnd_8() { return &___NegThicknessEnd_8; }
	inline void set_NegThicknessEnd_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NegThicknessEnd_8 = value;
	}

	inline static int32_t get_offset_of_PosThicknessClosingPoint_9() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___PosThicknessClosingPoint_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_PosThicknessClosingPoint_9() const { return ___PosThicknessClosingPoint_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_PosThicknessClosingPoint_9() { return &___PosThicknessClosingPoint_9; }
	inline void set_PosThicknessClosingPoint_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___PosThicknessClosingPoint_9 = value;
	}

	inline static int32_t get_offset_of_NegThicknessClosingPoint_10() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___NegThicknessClosingPoint_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NegThicknessClosingPoint_10() const { return ___NegThicknessClosingPoint_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NegThicknessClosingPoint_10() { return &___NegThicknessClosingPoint_10; }
	inline void set_NegThicknessClosingPoint_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NegThicknessClosingPoint_10 = value;
	}

	inline static int32_t get_offset_of_RoundPosThickness_11() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___RoundPosThickness_11)); }
	inline bool get_RoundPosThickness_11() const { return ___RoundPosThickness_11; }
	inline bool* get_address_of_RoundPosThickness_11() { return &___RoundPosThickness_11; }
	inline void set_RoundPosThickness_11(bool value)
	{
		___RoundPosThickness_11 = value;
	}

	inline static int32_t get_offset_of_SimpleJoin_12() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___SimpleJoin_12)); }
	inline bool get_SimpleJoin_12() const { return ___SimpleJoin_12; }
	inline bool* get_address_of_SimpleJoin_12() { return &___SimpleJoin_12; }
	inline void set_SimpleJoin_12(bool value)
	{
		___SimpleJoin_12 = value;
	}

	inline static int32_t get_offset_of_InnerCornerVertex_13() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___InnerCornerVertex_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_InnerCornerVertex_13() const { return ___InnerCornerVertex_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_InnerCornerVertex_13() { return &___InnerCornerVertex_13; }
	inline void set_InnerCornerVertex_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___InnerCornerVertex_13 = value;
	}

	inline static int32_t get_offset_of_InnerCornerDistToEnd_14() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___InnerCornerDistToEnd_14)); }
	inline float get_InnerCornerDistToEnd_14() const { return ___InnerCornerDistToEnd_14; }
	inline float* get_address_of_InnerCornerDistToEnd_14() { return &___InnerCornerDistToEnd_14; }
	inline void set_InnerCornerDistToEnd_14(float value)
	{
		___InnerCornerDistToEnd_14 = value;
	}

	inline static int32_t get_offset_of_InnerCornerDistFromStart_15() { return static_cast<int32_t>(offsetof(JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D, ___InnerCornerDistFromStart_15)); }
	inline float get_InnerCornerDistFromStart_15() const { return ___InnerCornerDistFromStart_15; }
	inline float* get_address_of_InnerCornerDistFromStart_15() { return &___InnerCornerDistFromStart_15; }
	inline void set_InnerCornerDistFromStart_15(float value)
	{
		___InnerCornerDistFromStart_15 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/PackRectItem
struct  PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/PackRectItem::Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/PackRectItem::Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Size_1;
	// System.Boolean Unity.VectorGraphics.VectorUtils/PackRectItem::Rotated
	bool ___Rotated_2;
	// Unity.VectorGraphics.IFill Unity.VectorGraphics.VectorUtils/PackRectItem::Fill
	RuntimeObject* ___Fill_3;
	// System.Int32 Unity.VectorGraphics.VectorUtils/PackRectItem::SettingIndex
	int32_t ___SettingIndex_4;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9, ___Position_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Position_0() const { return ___Position_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Size_1() { return static_cast<int32_t>(offsetof(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9, ___Size_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Size_1() const { return ___Size_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Size_1() { return &___Size_1; }
	inline void set_Size_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Size_1 = value;
	}

	inline static int32_t get_offset_of_Rotated_2() { return static_cast<int32_t>(offsetof(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9, ___Rotated_2)); }
	inline bool get_Rotated_2() const { return ___Rotated_2; }
	inline bool* get_address_of_Rotated_2() { return &___Rotated_2; }
	inline void set_Rotated_2(bool value)
	{
		___Rotated_2 = value;
	}

	inline static int32_t get_offset_of_Fill_3() { return static_cast<int32_t>(offsetof(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9, ___Fill_3)); }
	inline RuntimeObject* get_Fill_3() const { return ___Fill_3; }
	inline RuntimeObject** get_address_of_Fill_3() { return &___Fill_3; }
	inline void set_Fill_3(RuntimeObject* value)
	{
		___Fill_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fill_3), (void*)value);
	}

	inline static int32_t get_offset_of_SettingIndex_4() { return static_cast<int32_t>(offsetof(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9, ___SettingIndex_4)); }
	inline int32_t get_SettingIndex_4() const { return ___SettingIndex_4; }
	inline int32_t* get_address_of_SettingIndex_4() { return &___SettingIndex_4; }
	inline void set_SettingIndex_4(int32_t value)
	{
		___SettingIndex_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/PackRectItem
struct PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Size_1;
	int32_t ___Rotated_2;
	RuntimeObject* ___Fill_3;
	int32_t ___SettingIndex_4;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/PackRectItem
struct PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Size_1;
	int32_t ___Rotated_2;
	RuntimeObject* ___Fill_3;
	int32_t ___SettingIndex_4;
};

// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct  SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::Node
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Node_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::Parent
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_1;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::WorldTransform
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___WorldTransform_2;
	// System.Single Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::WorldOpacity
	float ___WorldOpacity_3;

public:
	inline static int32_t get_offset_of_Node_0() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55, ___Node_0)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_Node_0() const { return ___Node_0; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_Node_0() { return &___Node_0; }
	inline void set_Node_0(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___Node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Node_0), (void*)value);
	}

	inline static int32_t get_offset_of_Parent_1() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55, ___Parent_1)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_Parent_1() const { return ___Parent_1; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_Parent_1() { return &___Parent_1; }
	inline void set_Parent_1(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___Parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_WorldTransform_2() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55, ___WorldTransform_2)); }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  get_WorldTransform_2() const { return ___WorldTransform_2; }
	inline Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * get_address_of_WorldTransform_2() { return &___WorldTransform_2; }
	inline void set_WorldTransform_2(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  value)
	{
		___WorldTransform_2 = value;
	}

	inline static int32_t get_offset_of_WorldOpacity_3() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55, ___WorldOpacity_3)); }
	inline float get_WorldOpacity_3() const { return ___WorldOpacity_3; }
	inline float* get_address_of_WorldOpacity_3() { return &___WorldOpacity_3; }
	inline void set_WorldOpacity_3(float value)
	{
		___WorldOpacity_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_pinvoke
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Node_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_1;
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___WorldTransform_2;
	float ___WorldOpacity_3;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_com
{
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Node_0;
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___Parent_1;
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___WorldTransform_2;
	float ___WorldOpacity_3;
};

// Unity.VectorGraphics.VectorUtils/WindingDir
struct  WindingDir_tA3103012C0061C05F4EE57FDC5FF6D912F667424 
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/WindingDir::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindingDir_tA3103012C0061C05F4EE57FDC5FF6D912F667424, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.GradientFill
struct  GradientFill_t5304837475F57AF4B95D24C293819F652B978194  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.GradientFillType Unity.VectorGraphics.GradientFill::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// Unity.VectorGraphics.GradientStop[] Unity.VectorGraphics.GradientFill::<Stops>k__BackingField
	GradientStopU5BU5D_t3CADEF8250EF758D0B64B72AFC4B63439092A068* ___U3CStopsU3Ek__BackingField_1;
	// Unity.VectorGraphics.FillMode Unity.VectorGraphics.GradientFill::<Mode>k__BackingField
	int32_t ___U3CModeU3Ek__BackingField_2;
	// System.Single Unity.VectorGraphics.GradientFill::m_Opacity
	float ___m_Opacity_3;
	// Unity.VectorGraphics.AddressMode Unity.VectorGraphics.GradientFill::<Addressing>k__BackingField
	int32_t ___U3CAddressingU3Ek__BackingField_4;
	// UnityEngine.Vector2 Unity.VectorGraphics.GradientFill::<RadialFocus>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CRadialFocusU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___U3CTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStopsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___U3CStopsU3Ek__BackingField_1)); }
	inline GradientStopU5BU5D_t3CADEF8250EF758D0B64B72AFC4B63439092A068* get_U3CStopsU3Ek__BackingField_1() const { return ___U3CStopsU3Ek__BackingField_1; }
	inline GradientStopU5BU5D_t3CADEF8250EF758D0B64B72AFC4B63439092A068** get_address_of_U3CStopsU3Ek__BackingField_1() { return &___U3CStopsU3Ek__BackingField_1; }
	inline void set_U3CStopsU3Ek__BackingField_1(GradientStopU5BU5D_t3CADEF8250EF758D0B64B72AFC4B63439092A068* value)
	{
		___U3CStopsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStopsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___U3CModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CModeU3Ek__BackingField_2() const { return ___U3CModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CModeU3Ek__BackingField_2() { return &___U3CModeU3Ek__BackingField_2; }
	inline void set_U3CModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CModeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_Opacity_3() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___m_Opacity_3)); }
	inline float get_m_Opacity_3() const { return ___m_Opacity_3; }
	inline float* get_address_of_m_Opacity_3() { return &___m_Opacity_3; }
	inline void set_m_Opacity_3(float value)
	{
		___m_Opacity_3 = value;
	}

	inline static int32_t get_offset_of_U3CAddressingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___U3CAddressingU3Ek__BackingField_4)); }
	inline int32_t get_U3CAddressingU3Ek__BackingField_4() const { return ___U3CAddressingU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAddressingU3Ek__BackingField_4() { return &___U3CAddressingU3Ek__BackingField_4; }
	inline void set_U3CAddressingU3Ek__BackingField_4(int32_t value)
	{
		___U3CAddressingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRadialFocusU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GradientFill_t5304837475F57AF4B95D24C293819F652B978194, ___U3CRadialFocusU3Ek__BackingField_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CRadialFocusU3Ek__BackingField_5() const { return ___U3CRadialFocusU3Ek__BackingField_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CRadialFocusU3Ek__BackingField_5() { return &___U3CRadialFocusU3Ek__BackingField_5; }
	inline void set_U3CRadialFocusU3Ek__BackingField_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CRadialFocusU3Ek__BackingField_5 = value;
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

// Unity.VectorGraphics.SVGFormatException
struct  SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365  : public Exception_t
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// Unity.VectorGraphics.SVGDocument/LinearGradientExData
struct  LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987  : public GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A
{
public:
	// System.String Unity.VectorGraphics.SVGDocument/LinearGradientExData::X1
	String_t* ___X1_2;
	// System.String Unity.VectorGraphics.SVGDocument/LinearGradientExData::Y1
	String_t* ___Y1_3;
	// System.String Unity.VectorGraphics.SVGDocument/LinearGradientExData::X2
	String_t* ___X2_4;
	// System.String Unity.VectorGraphics.SVGDocument/LinearGradientExData::Y2
	String_t* ___Y2_5;

public:
	inline static int32_t get_offset_of_X1_2() { return static_cast<int32_t>(offsetof(LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987, ___X1_2)); }
	inline String_t* get_X1_2() const { return ___X1_2; }
	inline String_t** get_address_of_X1_2() { return &___X1_2; }
	inline void set_X1_2(String_t* value)
	{
		___X1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X1_2), (void*)value);
	}

	inline static int32_t get_offset_of_Y1_3() { return static_cast<int32_t>(offsetof(LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987, ___Y1_3)); }
	inline String_t* get_Y1_3() const { return ___Y1_3; }
	inline String_t** get_address_of_Y1_3() { return &___Y1_3; }
	inline void set_Y1_3(String_t* value)
	{
		___Y1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Y1_3), (void*)value);
	}

	inline static int32_t get_offset_of_X2_4() { return static_cast<int32_t>(offsetof(LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987, ___X2_4)); }
	inline String_t* get_X2_4() const { return ___X2_4; }
	inline String_t** get_address_of_X2_4() { return &___X2_4; }
	inline void set_X2_4(String_t* value)
	{
		___X2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X2_4), (void*)value);
	}

	inline static int32_t get_offset_of_Y2_5() { return static_cast<int32_t>(offsetof(LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987, ___Y2_5)); }
	inline String_t* get_Y2_5() const { return ___Y2_5; }
	inline String_t** get_address_of_Y2_5() { return &___Y2_5; }
	inline void set_Y2_5(String_t* value)
	{
		___Y2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Y2_5), (void*)value);
	}
};


// Unity.VectorGraphics.SVGDocument/RadialGradientExData
struct  RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873  : public GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A
{
public:
	// System.Boolean Unity.VectorGraphics.SVGDocument/RadialGradientExData::Parsed
	bool ___Parsed_2;
	// System.String Unity.VectorGraphics.SVGDocument/RadialGradientExData::Cx
	String_t* ___Cx_3;
	// System.String Unity.VectorGraphics.SVGDocument/RadialGradientExData::Cy
	String_t* ___Cy_4;
	// System.String Unity.VectorGraphics.SVGDocument/RadialGradientExData::Fx
	String_t* ___Fx_5;
	// System.String Unity.VectorGraphics.SVGDocument/RadialGradientExData::Fy
	String_t* ___Fy_6;
	// System.String Unity.VectorGraphics.SVGDocument/RadialGradientExData::R
	String_t* ___R_7;

public:
	inline static int32_t get_offset_of_Parsed_2() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___Parsed_2)); }
	inline bool get_Parsed_2() const { return ___Parsed_2; }
	inline bool* get_address_of_Parsed_2() { return &___Parsed_2; }
	inline void set_Parsed_2(bool value)
	{
		___Parsed_2 = value;
	}

	inline static int32_t get_offset_of_Cx_3() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___Cx_3)); }
	inline String_t* get_Cx_3() const { return ___Cx_3; }
	inline String_t** get_address_of_Cx_3() { return &___Cx_3; }
	inline void set_Cx_3(String_t* value)
	{
		___Cx_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cx_3), (void*)value);
	}

	inline static int32_t get_offset_of_Cy_4() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___Cy_4)); }
	inline String_t* get_Cy_4() const { return ___Cy_4; }
	inline String_t** get_address_of_Cy_4() { return &___Cy_4; }
	inline void set_Cy_4(String_t* value)
	{
		___Cy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cy_4), (void*)value);
	}

	inline static int32_t get_offset_of_Fx_5() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___Fx_5)); }
	inline String_t* get_Fx_5() const { return ___Fx_5; }
	inline String_t** get_address_of_Fx_5() { return &___Fx_5; }
	inline void set_Fx_5(String_t* value)
	{
		___Fx_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fx_5), (void*)value);
	}

	inline static int32_t get_offset_of_Fy_6() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___Fy_6)); }
	inline String_t* get_Fy_6() const { return ___Fy_6; }
	inline String_t** get_address_of_Fy_6() { return &___Fy_6; }
	inline void set_Fy_6(String_t* value)
	{
		___Fy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fy_6), (void*)value);
	}

	inline static int32_t get_offset_of_R_7() { return static_cast<int32_t>(offsetof(RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873, ___R_7)); }
	inline String_t* get_R_7() const { return ___R_7; }
	inline String_t** get_address_of_R_7() { return &___R_7; }
	inline void set_R_7(String_t* value)
	{
		___R_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___R_7), (void*)value);
	}
};


// Unity.VectorGraphics.SVGDocument/ViewBoxInfo
struct  ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA 
{
public:
	// UnityEngine.Rect Unity.VectorGraphics.SVGDocument/ViewBoxInfo::ViewBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___ViewBox_0;
	// Unity.VectorGraphics.SVGDocument/ViewBoxAspectRatio Unity.VectorGraphics.SVGDocument/ViewBoxInfo::AspectRatio
	int32_t ___AspectRatio_1;
	// Unity.VectorGraphics.SVGDocument/ViewBoxAlign Unity.VectorGraphics.SVGDocument/ViewBoxInfo::AlignX
	int32_t ___AlignX_2;
	// Unity.VectorGraphics.SVGDocument/ViewBoxAlign Unity.VectorGraphics.SVGDocument/ViewBoxInfo::AlignY
	int32_t ___AlignY_3;
	// System.Boolean Unity.VectorGraphics.SVGDocument/ViewBoxInfo::IsEmpty
	bool ___IsEmpty_4;

public:
	inline static int32_t get_offset_of_ViewBox_0() { return static_cast<int32_t>(offsetof(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA, ___ViewBox_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_ViewBox_0() const { return ___ViewBox_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_ViewBox_0() { return &___ViewBox_0; }
	inline void set_ViewBox_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___ViewBox_0 = value;
	}

	inline static int32_t get_offset_of_AspectRatio_1() { return static_cast<int32_t>(offsetof(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA, ___AspectRatio_1)); }
	inline int32_t get_AspectRatio_1() const { return ___AspectRatio_1; }
	inline int32_t* get_address_of_AspectRatio_1() { return &___AspectRatio_1; }
	inline void set_AspectRatio_1(int32_t value)
	{
		___AspectRatio_1 = value;
	}

	inline static int32_t get_offset_of_AlignX_2() { return static_cast<int32_t>(offsetof(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA, ___AlignX_2)); }
	inline int32_t get_AlignX_2() const { return ___AlignX_2; }
	inline int32_t* get_address_of_AlignX_2() { return &___AlignX_2; }
	inline void set_AlignX_2(int32_t value)
	{
		___AlignX_2 = value;
	}

	inline static int32_t get_offset_of_AlignY_3() { return static_cast<int32_t>(offsetof(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA, ___AlignY_3)); }
	inline int32_t get_AlignY_3() const { return ___AlignY_3; }
	inline int32_t* get_address_of_AlignY_3() { return &___AlignY_3; }
	inline void set_AlignY_3(int32_t value)
	{
		___AlignY_3 = value;
	}

	inline static int32_t get_offset_of_IsEmpty_4() { return static_cast<int32_t>(offsetof(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA, ___IsEmpty_4)); }
	inline bool get_IsEmpty_4() const { return ___IsEmpty_4; }
	inline bool* get_address_of_IsEmpty_4() { return &___IsEmpty_4; }
	inline void set_IsEmpty_4(bool value)
	{
		___IsEmpty_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.SVGDocument/ViewBoxInfo
struct ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_pinvoke
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___ViewBox_0;
	int32_t ___AspectRatio_1;
	int32_t ___AlignX_2;
	int32_t ___AlignY_3;
	int32_t ___IsEmpty_4;
};
// Native definition for COM marshalling of Unity.VectorGraphics.SVGDocument/ViewBoxInfo
struct ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_com
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___ViewBox_0;
	int32_t ___AspectRatio_1;
	int32_t ___AlignX_2;
	int32_t ___AlignY_3;
	int32_t ___IsEmpty_4;
};

// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::nodeInfo
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___nodeInfo_0;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::<>9__0
	Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_nodeInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E, ___nodeInfo_0)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_nodeInfo_0() const { return ___nodeInfo_0; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_nodeInfo_0() { return &___nodeInfo_0; }
	inline void set_nodeInfo_0(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___nodeInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeInfo_0))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeInfo_0))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E, ___U3CU3E9__0_1)); }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106
struct  U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.BezierSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>2__current
	BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::segments
	RuntimeObject* ___segments_3;
	// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>3__segments
	RuntimeObject* ___U3CU3E3__segments_4;
	// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::closed
	bool ___closed_5;
	// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>3__closed
	bool ___U3CU3E3__closed_6;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<e>5__1
	RuntimeObject* ___U3CeU3E5__1_7;
	// Unity.VectorGraphics.BezierPathSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<s1>5__2
	BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___U3Cs1U3E5__2_8;
	// Unity.VectorGraphics.BezierPathSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<s2>5__3
	BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___U3Cs2U3E5__3_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CU3E2__current_1)); }
	inline BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_segments_3() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___segments_3)); }
	inline RuntimeObject* get_segments_3() const { return ___segments_3; }
	inline RuntimeObject** get_address_of_segments_3() { return &___segments_3; }
	inline void set_segments_3(RuntimeObject* value)
	{
		___segments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___segments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__segments_4() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CU3E3__segments_4)); }
	inline RuntimeObject* get_U3CU3E3__segments_4() const { return ___U3CU3E3__segments_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__segments_4() { return &___U3CU3E3__segments_4; }
	inline void set_U3CU3E3__segments_4(RuntimeObject* value)
	{
		___U3CU3E3__segments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__segments_4), (void*)value);
	}

	inline static int32_t get_offset_of_closed_5() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___closed_5)); }
	inline bool get_closed_5() const { return ___closed_5; }
	inline bool* get_address_of_closed_5() { return &___closed_5; }
	inline void set_closed_5(bool value)
	{
		___closed_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__closed_6() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CU3E3__closed_6)); }
	inline bool get_U3CU3E3__closed_6() const { return ___U3CU3E3__closed_6; }
	inline bool* get_address_of_U3CU3E3__closed_6() { return &___U3CU3E3__closed_6; }
	inline void set_U3CU3E3__closed_6(bool value)
	{
		___U3CU3E3__closed_6 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3CeU3E5__1_7)); }
	inline RuntimeObject* get_U3CeU3E5__1_7() const { return ___U3CeU3E5__1_7; }
	inline RuntimeObject** get_address_of_U3CeU3E5__1_7() { return &___U3CeU3E5__1_7; }
	inline void set_U3CeU3E5__1_7(RuntimeObject* value)
	{
		___U3CeU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cs1U3E5__2_8() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3Cs1U3E5__2_8)); }
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  get_U3Cs1U3E5__2_8() const { return ___U3Cs1U3E5__2_8; }
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * get_address_of_U3Cs1U3E5__2_8() { return &___U3Cs1U3E5__2_8; }
	inline void set_U3Cs1U3E5__2_8(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  value)
	{
		___U3Cs1U3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3Cs2U3E5__3_9() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764, ___U3Cs2U3E5__3_9)); }
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  get_U3Cs2U3E5__3_9() const { return ___U3Cs2U3E5__3_9; }
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * get_address_of_U3Cs2U3E5__3_9() { return &___U3Cs2U3E5__3_9; }
	inline void set_U3Cs2U3E5__3_9(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  value)
	{
		___U3Cs2U3E5__3_9 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101
struct  U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>2__current
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::child
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___child_3;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__child
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CU3E3__child_4;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::nodeOpacities
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___nodeOpacities_5;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__nodeOpacities
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___U3CU3E3__nodeOpacities_6;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::parent
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___parent_7;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__parent
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___U3CU3E3__parent_8;
	// System.Single Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<childOpacity>5__1
	float ___U3CchildOpacityU3E5__1_9;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<childWorldTransform>5__2
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___U3CchildWorldTransformU3E5__2_10;
	// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>s__3
	Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  ___U3CU3Es__3_11;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<c>5__4
	SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___U3CcU3E5__4_12;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>s__5
	RuntimeObject* ___U3CU3Es__5_13;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<n>5__6
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___U3CnU3E5__6_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3E2__current_1)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_child_3() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___child_3)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_child_3() const { return ___child_3; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_child_3() { return &___child_3; }
	inline void set_child_3(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___child_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__child_4() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3E3__child_4)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CU3E3__child_4() const { return ___U3CU3E3__child_4; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CU3E3__child_4() { return &___U3CU3E3__child_4; }
	inline void set_U3CU3E3__child_4(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CU3E3__child_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__child_4), (void*)value);
	}

	inline static int32_t get_offset_of_nodeOpacities_5() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___nodeOpacities_5)); }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * get_nodeOpacities_5() const { return ___nodeOpacities_5; }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 ** get_address_of_nodeOpacities_5() { return &___nodeOpacities_5; }
	inline void set_nodeOpacities_5(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * value)
	{
		___nodeOpacities_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeOpacities_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__nodeOpacities_6() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3E3__nodeOpacities_6)); }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * get_U3CU3E3__nodeOpacities_6() const { return ___U3CU3E3__nodeOpacities_6; }
	inline Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 ** get_address_of_U3CU3E3__nodeOpacities_6() { return &___U3CU3E3__nodeOpacities_6; }
	inline void set_U3CU3E3__nodeOpacities_6(Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * value)
	{
		___U3CU3E3__nodeOpacities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__nodeOpacities_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___parent_7)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_parent_7() const { return ___parent_7; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___parent_7))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___parent_7))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E3__parent_8() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3E3__parent_8)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_U3CU3E3__parent_8() const { return ___U3CU3E3__parent_8; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_U3CU3E3__parent_8() { return &___U3CU3E3__parent_8; }
	inline void set_U3CU3E3__parent_8(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___U3CU3E3__parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__parent_8))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__parent_8))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CchildOpacityU3E5__1_9() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CchildOpacityU3E5__1_9)); }
	inline float get_U3CchildOpacityU3E5__1_9() const { return ___U3CchildOpacityU3E5__1_9; }
	inline float* get_address_of_U3CchildOpacityU3E5__1_9() { return &___U3CchildOpacityU3E5__1_9; }
	inline void set_U3CchildOpacityU3E5__1_9(float value)
	{
		___U3CchildOpacityU3E5__1_9 = value;
	}

	inline static int32_t get_offset_of_U3CchildWorldTransformU3E5__2_10() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CchildWorldTransformU3E5__2_10)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_U3CchildWorldTransformU3E5__2_10() const { return ___U3CchildWorldTransformU3E5__2_10; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_U3CchildWorldTransformU3E5__2_10() { return &___U3CchildWorldTransformU3E5__2_10; }
	inline void set_U3CchildWorldTransformU3E5__2_10(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___U3CchildWorldTransformU3E5__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CchildWorldTransformU3E5__2_10))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CchildWorldTransformU3E5__2_10))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__3_11() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3Es__3_11)); }
	inline Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  get_U3CU3Es__3_11() const { return ___U3CU3Es__3_11; }
	inline Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * get_address_of_U3CU3Es__3_11() { return &___U3CU3Es__3_11; }
	inline void set_U3CU3Es__3_11(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  value)
	{
		___U3CU3Es__3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__3_11))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__3_11))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcU3E5__4_12() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CcU3E5__4_12)); }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * get_U3CcU3E5__4_12() const { return ___U3CcU3E5__4_12; }
	inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 ** get_address_of_U3CcU3E5__4_12() { return &___U3CcU3E5__4_12; }
	inline void set_U3CcU3E5__4_12(SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * value)
	{
		___U3CcU3E5__4_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__4_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__5_13() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CU3Es__5_13)); }
	inline RuntimeObject* get_U3CU3Es__5_13() const { return ___U3CU3Es__5_13; }
	inline RuntimeObject** get_address_of_U3CU3Es__5_13() { return &___U3CU3Es__5_13; }
	inline void set_U3CU3Es__5_13(RuntimeObject* value)
	{
		___U3CU3Es__5_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__5_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__6_14() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA, ___U3CnU3E5__6_14)); }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  get_U3CnU3E5__6_14() const { return ___U3CnU3E5__6_14; }
	inline SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * get_address_of_U3CnU3E5__6_14() { return &___U3CnU3E5__6_14; }
	inline void set_U3CnU3E5__6_14(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  value)
	{
		___U3CnU3E5__6_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnU3E5__6_14))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnU3E5__6_14))->___Parent_1), (void*)NULL);
		#endif
	}
};


// Unity.VectorGraphics.VectorUtils/AtlasEntry
struct  AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/RawTexture Unity.VectorGraphics.VectorUtils/AtlasEntry::Texture
	RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0  ___Texture_0;
	// Unity.VectorGraphics.VectorUtils/PackRectItem Unity.VectorGraphics.VectorUtils/AtlasEntry::AtlasLocation
	PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9  ___AtlasLocation_1;

public:
	inline static int32_t get_offset_of_Texture_0() { return static_cast<int32_t>(offsetof(AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403, ___Texture_0)); }
	inline RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0  get_Texture_0() const { return ___Texture_0; }
	inline RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0 * get_address_of_Texture_0() { return &___Texture_0; }
	inline void set_Texture_0(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0  value)
	{
		___Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Texture_0))->___Rgba_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_AtlasLocation_1() { return static_cast<int32_t>(offsetof(AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403, ___AtlasLocation_1)); }
	inline PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9  get_AtlasLocation_1() const { return ___AtlasLocation_1; }
	inline PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9 * get_address_of_AtlasLocation_1() { return &___AtlasLocation_1; }
	inline void set_AtlasLocation_1(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9  value)
	{
		___AtlasLocation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AtlasLocation_1))->___Fill_3), (void*)NULL);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// Unity.VectorGraphics.SVGDocument/ElemHandler
struct  ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.VectorGraphics.BezierPathSegment[]
struct BezierPathSegmentU5BU5D_tB3F97EC1972B9D75F637A4667605352F7DDA010F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  m_Items[1];

public:
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pooled_1__ctor_m1AD03AD378AFA11A8060634AA217AE76683835C7_gshared (Pooled_1_t94F78C9AA536E1510FB7BDCDF19E1D25B6DE3699 * __this, const RuntimeMethod* method);
// T Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pooled_1_Create_m7B7423A3A4CDE8030E6088B66BE7D02319D9407A_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_m68958F01A82CACAAC93F99216A03F10646CFAE4A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0C3333711EE4C2E075CFF308BBE4E769584C43BD_gshared (KeyValuePair_2_t12B290056733E8546E74FACAD93918C19888516E * __this, RuntimeObject * ___key0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<Unity.VectorGraphics.BezierPathSegment>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA8F86083D0D527F9EB97FE53A5EA88B1A0CB01A9_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, float* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.XmlReaderIterator/Node::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m193A5BB876B35C159BD812D653BE2DA2868A0844 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method);
// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Depth_m4691EA190CB8DDFFD8F0000A36B3DB2D3F6DEF09 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, const RuntimeMethod* method);
// Unity.VectorGraphics.XmlReaderIterator/Node Unity.VectorGraphics.XmlReaderIterator::VisitCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * XmlReaderIterator_VisitCurrent_m0DC83A0835096DF7DAA5A9D10EC8CC3E70396D8D (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.XmlReaderIterator::SkipCurrentChildTree(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator_SkipCurrentChildTree_mA053EA61E28488982303F83A871E1405A5B4AF47 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node0, const RuntimeMethod* method);
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToNextChild(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToNextChild_m99AC4E6BBD37A7E92E68A937F4BD064CD1925E71 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Rprev_m0EA8AD5267729842CDEBE683C93BDEB1D4BAD4DA (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method);
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Oprev_mF3D1095C1C0D4155B63B059A1A775E2F9A03E05F (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m6B6CEB60C9DC82DE0DC812A89F4E7265E5FFF597 (EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge>::.ctor()
inline void Pooled_1__ctor_mC15A83109EAA46AC543A68A9794A00BE7CA04FB0 (Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721 * __this, const RuntimeMethod* method)
{
	((  void (*) (Pooled_1_t0ECD6DF3B5867295F5673B575722B07BEA058721 *, const RuntimeMethod*))Pooled_1__ctor_m1AD03AD378AFA11A8060634AA217AE76683835C7_gshared)(__this, method);
}
// T Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge>::Create()
inline Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236 (const RuntimeMethod* method)
{
	return ((  Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * (*) (const RuntimeMethod*))Pooled_1_Create_m7B7423A3A4CDE8030E6088B66BE7D02319D9407A_gshared)(method);
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face>::.ctor()
inline void Pooled_1__ctor_m707DB7FD3CE649FE023CD0B8CB80C32042890DD3 (Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608 * __this, const RuntimeMethod* method)
{
	((  void (*) (Pooled_1_tC6ABC44F106363C43F97170B715F1F1779876608 *, const RuntimeMethod*))Pooled_1__ctor_m1AD03AD378AFA11A8060634AA217AE76683835C7_gshared)(__this, method);
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Pooled`1<Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex>::.ctor()
inline void Pooled_1__ctor_mC43E55EA915A83EB72923407543A86D8E1423DEF (Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D * __this, const RuntimeMethod* method)
{
	((  void (*) (Pooled_1_t77C1B878285DAD83CCEE7007A3C987FF43538D4D *, const RuntimeMethod*))Pooled_1__ctor_m1AD03AD378AFA11A8060634AA217AE76683835C7_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SVGDocument/ElemHandler>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m06CA87437BA175758244F9F1F821638E4DEE3044 (Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE97A7BA7573A246BFD4BB8C97A38E6A35F844C48 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.VectorGraphics.SVGDocument/GradientExData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientExData__ctor_m8BC70C77897D42D0BC693BE1ABD8FABDEE01300C (GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGParser/SceneInfo::.ctor(Unity.VectorGraphics.Scene,UnityEngine.Rect,System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>,System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo__ctor_mF608F1173244286A8BC3421F22F9D4870FC5281A (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___scene0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___sceneViewport1, Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___nodeOpacities2, Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___nodeIDs3, const RuntimeMethod* method);
// Unity.VectorGraphics.Scene Unity.VectorGraphics.SVGParser/SceneInfo::get_Scene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * SceneInfo_get_Scene_m1D2A4FBDAF65ED700B36E8CFF691954B2F9B2035_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method);
// UnityEngine.Rect Unity.VectorGraphics.SVGParser/SceneInfo::get_SceneViewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  SceneInfo_get_SceneViewport_mA2BC970E909BAF2CBB3F802F715775C34969A03C_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.SVGParser/SceneInfo::get_NodeOpacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * SceneInfo_get_NodeOpacity_m152503CE57E275C60CBCD8447AAC9EDFEF3C60B1_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SVGParser/SceneInfo::get_NodeIDs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * SceneInfo_get_NodeIDs_m0FAA59B46F4CF3D2E20D665350812B44F1458C55_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGStyleResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94A0D46969B0A668B47F11288DC639EA1CE2215A (U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_U3CU3Em__Finally1_mF37F6888E7AA69B7100292DD91412FD3C87AB4F9 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_U3CU3Em__Finally2_m64B2350BCBC122119DF96383E50B6C457D021B8E (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Unity.VectorGraphics.SVGStyleSheet::get_selectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SVGStyleSheet_get_selectors_mCE7F79D7E6315C16287DCE284810BEF72D988E7E (SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisString_t_mA740D56D06F9F26F5AF625E31B7FE16686B151FE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_m68958F01A82CACAAC93F99216A03F10646CFAE4A_gshared)(___source0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_System_IDisposable_Dispose_mE54783E223759CFDBD1487B07E241B941274E0D3 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12__ctor_m6E3A0A61E18D6FF73CBB9156F3693E459A578068 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSortedClassesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5FC8B5A1E27D488FA7E1EBCA5D6FD0E19C8AC98E (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGStyleSheet/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F1832A10DBFDDE1CC51036D7DF411B59E450CDB (U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_inline (KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.VectorGraphics.Matrix2D::op_Multiply(Unity.VectorGraphics.Matrix2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Matrix2D_op_Multiply_m96C24A08E3E4A306A4FCBF3EBF6AC8317B46AF92 (Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector1, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB500E829C77A4FBDA7735DA19F1AD439202629E (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m4E4EC40B9DAE080ED7945F14649A18E0A9F0A5D3_inline (KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>::get_Value()
inline AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_inline (KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 * __this, const RuntimeMethod* method)
{
	return ((  AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * (*) (KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mF54419D828E03CFF80CFF6761D841D3462337C0C (KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63 * __this, RuntimeObject* ___key0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63 *, RuntimeObject*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))KeyValuePair_2__ctor_m0C3333711EE4C2E075CFF308BBE4E769584C43BD_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.VectorGraphics.Matrix2D::MultiplyPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Matrix2D_MultiplyPoint_mF2A5687EBBCAB8B0682DA72983323897591215F9 (Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_mFDF3FACBB349AF711C3E66BA3546A9D1DD91466F (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_m87FAF159DE57B1F35ED4CE846E6C15C50F85E047 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SceneNode::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline (SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>::GetEnumerator()
inline Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A (List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  (*) (List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::get_Current()
inline SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_inline (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * __this, const RuntimeMethod* method)
{
	return ((  SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * (*) (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils::SceneNodes(Unity.VectorGraphics.SceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VectorUtils_SceneNodes_mB74AA5FD101DC321E99C8F48F71062F280797235 (SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___root0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::MoveNext()
inline bool Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436 (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m321D358D4E5F1EA488BC245C11E4272FFEAF74E1 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::Dispose()
inline void Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2 (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99__ctor_mF792BB7B993A5F5BFBB29220758DD680E29B2930 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.SceneNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_m822DF7752E1FBEA1F6F8339DC5207A01350799E6 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<Unity.VectorGraphics.BezierPathSegment>(System.Collections.Generic.IEnumerable`1<!!0>)
inline BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504_gshared)(___source0, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106__ctor_m2B11E7059A9F99D3AAE6D9E312E6FC99FEB4F145 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.BezierSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_m83D47A56E0852CB9A598AA43E2890F0F32A8ECD8 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_m1052EA806B9D6DC4B1700323770FD91B28A67A3D (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_mDFE0C28545CA38C0F595E330328E3E6366B5C43D (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m05509E6A14EDA2A633FCAF1EC44C8D1B384FDD6A (Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * __this, SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___key0, float* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 *, SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 *, float*, const RuntimeMethod*))Dictionary_2_TryGetValue_mA8F86083D0D527F9EB97FE53A5EA88B1A0CB01A9_gshared)(__this, ___key0, ___value1, method);
}
// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SceneNode::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  SceneNode_get_Transform_mE9DCDA7C06270EC2B31A79C23372647F6D444278 (SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * __this, const RuntimeMethod* method);
// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::op_Multiply(Unity.VectorGraphics.Matrix2D,Unity.VectorGraphics.Matrix2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  Matrix2D_op_Multiply_mEAE60DC5F2CC3707315A48949CD5840E691C73ED (Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___lhs0, Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils::WorldTransformedSceneNodes(Unity.VectorGraphics.SceneNode,System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>,Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VectorUtils_WorldTransformedSceneNodes_m3E7307A4D7D0CD5ECDC1AA0F037DE4CB0E727A67 (SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * ___child0, Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___nodeOpacities1, SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  ___parent2, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_m3DDADB7CA06AF1E885046E1AD1BF7839158028B8 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101__ctor_mEB0DD4116137BFE4C2932B37B7921B9E410D381F (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m79C7CB915C99C9DF7B89C384C5A18A7947ACE6D6 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_StepDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_m0F4DDE68718CEDC76140D2D9240D900344A98607_inline (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_StepDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m98F13325F81482D5062E22382E2BF735396EC638_inline (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviation_m89CD1C3DED3F0A400E6EBA834700F3B4F1530BD7 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxCordDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxCordDeviation_mE8EBE44FBE2B25C902CBD204056DE29D825843E1 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviationSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviationSquared_mA3DF07C8A7EE7D5007996DA4735D6DE83C71B95A (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviation_m8EEA3A19FF9B07B28BD0CCE9FA7351AC328B8A41 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxTanAngleDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxTanAngleDeviation_mAFD8C0B7382CC21CB8BCE3425D442A5E326EAF06 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviationCosine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviationCosine_m445975E51CF2B97382F9F86BCC744017AA4C3A53 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_SamplingStepSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_SamplingStepSize_mE6E0ABE5A95A632946FDC16AB70CE95929A7E32B (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_SamplingStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_SamplingStepSize_mB06AB77FAC57FD1C9790DDF390F9D976D17501AE (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGPropertySheet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SVGPropertySheet__ctor_m8108349D50AE8652836D5F3CCDFF17C793D7DE18 (SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.VectorGraphics.SVGFormatException::.ctor(System.Xml.XmlReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SVGFormatException__ctor_m70CF4F1055844D66EAC2D0987F959FC5D35E3826 (SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, String_t* ___message1, const RuntimeMethod* method);
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Item_m933F1BCB78B5D69876215C4EEEC99930FFD6E743 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, String_t* ___attrib0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Unity.VectorGraphics.XmlReaderIterator::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator__ctor_m098FA04A2AB442439B3FFA3E50372F8D1131320A (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	{
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		return;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToRoot_m8A2FAF47769FA181861BBEFEC99487FB483AF2D0 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, String_t* ___tagName0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool GoToRoot(string tagName) { return reader.ReadToFollowing(tagName) && reader.Depth == 0; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___tagName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_3 = __this->get_reader_0();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// public bool GoToRoot(string tagName) { return reader.ReadToFollowing(tagName) && reader.Depth == 0; }
		bool L_5 = V_0;
		return L_5;
	}
}
// Unity.VectorGraphics.XmlReaderIterator/Node Unity.VectorGraphics.XmlReaderIterator::VisitCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * XmlReaderIterator_VisitCurrent_m0DC83A0835096DF7DAA5A9D10EC8CC3E70396D8D (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * V_0 = NULL;
	{
		// public Node VisitCurrent() { currentElementVisited = true; return new Node(reader); }
		__this->set_currentElementVisited_1((bool)1);
		// public Node VisitCurrent() { currentElementVisited = true; return new Node(reader); }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_1 = (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B *)il2cpp_codegen_object_new(Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B_il2cpp_TypeInfo_var);
		Node__ctor_m193A5BB876B35C159BD812D653BE2DA2868A0844(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// public Node VisitCurrent() { currentElementVisited = true; return new Node(reader); }
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_IsEmptyElement_m95A7DCE42246B032265722548412C97DEA691A37 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsEmptyElement() { return reader.IsEmptyElement; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsEmptyElement() { return reader.IsEmptyElement; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToNextChild(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToNextChild_m99AC4E6BBD37A7E92E68A937F4BD064CD1925E71 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!currentElementVisited)
		bool L_0 = __this->get_currentElementVisited_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// return reader.Depth == node.Depth + 1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_2 = __this->get_reader_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_2);
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_4 = ___node0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Node_get_Depth_m4691EA190CB8DDFFD8F0000A36B3DB2D3F6DEF09(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))))? 1 : 0);
		goto IL_009d;
	}

IL_0026:
	{
		// reader.Read();
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_6);
		goto IL_0040;
	}

IL_0034:
	{
		// reader.Read();
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_8 = __this->get_reader_0();
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
	}

IL_0040:
	{
		// while ((reader.NodeType != XmlNodeType.None) && (reader.NodeType != XmlNodeType.Element))
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_10 = __this->get_reader_0();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_10);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_12 = __this->get_reader_0();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_12);
		G_B7_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		V_2 = (bool)G_B7_0;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0034;
		}
	}
	{
		// if (reader.NodeType != XmlNodeType.Element)
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_15 = __this->get_reader_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_15);
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_009d;
	}

IL_007e:
	{
		// currentElementVisited = false;
		__this->set_currentElementVisited_1((bool)0);
		// return reader.Depth == node.Depth + 1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_18 = __this->get_reader_0();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_18);
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_20 = ___node0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Node_get_Depth_m4691EA190CB8DDFFD8F0000A36B3DB2D3F6DEF09(L_20, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1))))? 1 : 0);
		goto IL_009d;
	}

IL_009d:
	{
		// }
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Void Unity.VectorGraphics.XmlReaderIterator::SkipCurrentChildTree(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator_SkipCurrentChildTree_mA053EA61E28488982303F83A871E1405A5B4AF47 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * ___node0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		goto IL_0010;
	}

IL_0003:
	{
		// SkipCurrentChildTree(VisitCurrent());
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_0;
		L_0 = XmlReaderIterator_VisitCurrent_m0DC83A0835096DF7DAA5A9D10EC8CC3E70396D8D(__this, /*hidden argument*/NULL);
		XmlReaderIterator_SkipCurrentChildTree_mA053EA61E28488982303F83A871E1405A5B4AF47(__this, L_0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		// while (GoToNextChild(node))
		Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * L_1 = ___node0;
		bool L_2;
		L_2 = XmlReaderIterator_GoToNextChild_m99AC4E6BBD37A7E92E68A937F4BD064CD1925E71(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator::ReadTextWithinElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderIterator_ReadTextWithinElement_m1EAD8301743F342F5BF1F3A782776BDA69190A78 (XmlReaderIterator_tD5CAA29A2E89F7194F24C504D78E7D39D3128121 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (reader.IsEmptyElement)
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_005c;
	}

IL_0018:
	{
		// var text = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0032;
	}

IL_0020:
	{
		// text += reader.Value;
		String_t* L_3 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_4 = __this->get_reader_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0032:
	{
		// while (reader.Read() && reader.NodeType != XmlNodeType.EndElement)
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_7 = __this->get_reader_0();
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_7);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_9 = __this->get_reader_0();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B7_0 = 0;
	}

IL_0054:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		// return text;
		String_t* L_12 = V_0;
		V_2 = L_12;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
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
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * Edge_get__Rface_m930808F60E6806452C35C8663AE9BCB2F8FC1D9E (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * V_0 = NULL;
	{
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		NullCheck(L_0);
		Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * L_1 = L_0->get__Lface_7();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Rface(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_mAD11AA836987D73E8B36F63BF356C8921A185367 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * ___value0, const RuntimeMethod* method)
{
	{
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Lface_7(L_1);
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * Edge_get__Dst_mFFC0FBC5D8C95512228848EF0176C0711593A953 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * V_0 = NULL;
	{
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		NullCheck(L_0);
		Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * L_1 = L_0->get__Org_6();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Dst(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFF65143C3EAFBD8B70B0B4B8FEB41211D5FD7A3D (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Org_6(L_1);
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Oprev_mF3D1095C1C0D4155B63B059A1A775E2F9A03E05F (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Lnext_5();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Oprev(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m3C611CEFD4007DF1B8782D039147F7207C33079F (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Lnext_5(L_1);
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Lprev_mD5D423DC01EFAD55D47CB5CE02BF5C7430A462F7 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Onext_4();
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Sym_3();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Lprev(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_m01EF893785E395B9D9008C55C349B1D92A298D22 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Onext_4();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Sym_3(L_1);
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Dprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Dprev_m05168F0EEF655E720A9F0B03BCE0348A5693E607 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Lnext_5();
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Sym_3();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Dprev(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_mFA8C3C582C34BACF009BE18977669D9002B9E155 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Lnext_5();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Sym_3(L_1);
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Rprev_m0EA8AD5267729842CDEBE683C93BDEB1D4BAD4DA (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Onext_4();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Rprev(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_mEE0747D3ABB8CFB0BE8300B4D9EE9BE0B083AC29 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__Sym_3();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Onext_4(L_1);
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Dnext_mCBD22B90DB45155575D3D1B03418415AE3EECD80 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0;
		L_0 = Edge_get__Rprev_m0EA8AD5267729842CDEBE683C93BDEB1D4BAD4DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Sym_3();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Dnext(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_m29A934617D0187735C689933B33A7E260172B636 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0;
		L_0 = Edge_get__Rprev_m0EA8AD5267729842CDEBE683C93BDEB1D4BAD4DA(__this, /*hidden argument*/NULL);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Sym_3(L_1);
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::get__Rnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * Edge_get__Rnext_m891B0804B158A4DC189BBA9C543C2A4B9B7438B4 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0;
		L_0 = Edge_get__Oprev_mF3D1095C1C0D4155B63B059A1A775E2F9A03E05F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = L_0->get__Sym_3();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::set__Rnext(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_mBB30C3BB64AC5A1E0D15BD7EBF456DF02F8E5DFC (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0;
		L_0 = Edge_get__Oprev_mF3D1095C1C0D4155B63B059A1A775E2F9A03E05F(__this, /*hidden argument*/NULL);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Sym_3(L_1);
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		return;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::EnsureFirst(Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_mB98FE5365AD801CC1F6063831350926D1525A9B3 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** ___e0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (e == e._pair._eSym)
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** L_0 = ___e0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = *((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 **)L_0);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** L_2 = ___e0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_3 = *((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 **)L_2);
		NullCheck(L_3);
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * L_4 = L_3->get_address_of__pair_1();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_5 = L_4->get__eSym_1();
		V_0 = (bool)((((RuntimeObject*)(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)L_1) == ((RuntimeObject*)(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// e = e._Sym;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** L_7 = ___e0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 ** L_8 = ___e0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_9 = *((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 **)L_8);
		NullCheck(L_9);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_10 = L_9->get__Sym_3();
		*((RuntimeObject **)L_7) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_10);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m8C597DB86741470AE25AD5FEC45977D489E91DE0 (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// _pair.Reset();
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * L_0 = __this->get_address_of__pair_1();
		EdgePair_Reset_m6B6CEB60C9DC82DE0DC812A89F4E7265E5FFF597((EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA *)L_0, /*hidden argument*/NULL);
		// _next = _Sym = _Onext = _Lnext = null;
		V_0 = (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL;
		__this->set__Lnext_5((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_1 = V_0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = L_1;
		V_0 = L_2;
		__this->set__Onext_4(L_2);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_3 = V_0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_4 = L_3;
		V_0 = L_4;
		__this->set__Sym_3(L_4);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_5 = V_0;
		__this->set__next_2(L_5);
		// _Org = null;
		__this->set__Org_6((Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 *)NULL);
		// _Lface = null;
		__this->set__Lface_7((Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C *)NULL);
		// _activeRegion = null;
		__this->set__activeRegion_8((ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 *)NULL);
		// _winding = 0;
		__this->set__winding_9(0);
		// }
		return;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Edge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m91B879157A63F7C410F89E05D09ABEA5134813BB (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pooled_1__ctor_mC15A83109EAA46AC543A68A9794A00BE7CA04FB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pooled_1__ctor_mC15A83109EAA46AC543A68A9794A00BE7CA04FB0(__this, /*hidden argument*/Pooled_1__ctor_mC15A83109EAA46AC543A68A9794A00BE7CA04FB0_RuntimeMethod_var);
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
// Conversion methods for marshalling of: Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_pinvoke(const EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA& unmarshaled, EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_pinvoke& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_pinvoke_back(const EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_pinvoke& marshaled, EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_pinvoke_cleanup(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_com(const EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA& unmarshaled, EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_com& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_com_back(const EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_com& marshaled, EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshal_com_cleanup(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA_marshaled_com& marshaled)
{
}
// Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  EdgePair_Create_mDB2019AC009A4BC1128F748467C4506E4DE28D87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var pair = new MeshUtils.EdgePair();
		il2cpp_codegen_initobj((&V_0), sizeof(EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA ));
		// pair._e = MeshUtils.Edge.Create();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0;
		L_0 = Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236(/*hidden argument*/Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236_RuntimeMethod_var);
		(&V_0)->set__e_0(L_0);
		// pair._e._pair = pair;
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_1 = V_0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = L_1.get__e_0();
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_3 = V_0;
		NullCheck(L_2);
		L_2->set__pair_1(L_3);
		// pair._eSym = MeshUtils.Edge.Create();
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_4;
		L_4 = Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236(/*hidden argument*/Pooled_1_Create_m7B79B4A8118EAC4FC866F6281D0E6877ADF77236_RuntimeMethod_var);
		(&V_0)->set__eSym_1(L_4);
		// pair._eSym._pair = pair;
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_5 = V_0;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_6 = L_5.get__eSym_1();
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_7 = V_0;
		NullCheck(L_6);
		L_6->set__pair_1(L_7);
		// return pair;
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_8 = V_0;
		V_1 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA  L_9 = V_1;
		return L_9;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/EdgePair::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m6B6CEB60C9DC82DE0DC812A89F4E7265E5FFF597 (EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * __this, const RuntimeMethod* method)
{
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_0 = NULL;
	{
		// _e = _eSym = null;
		V_0 = (Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL;
		__this->set__eSym_1((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = V_0;
		__this->set__e_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_m6B6CEB60C9DC82DE0DC812A89F4E7265E5FFF597_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA * _thisAdjusted = reinterpret_cast<EdgePair_t24D6BA14A1ED0381D5530B329AF25EE6DE6450EA *>(__this + _offset);
	EdgePair_Reset_m6B6CEB60C9DC82DE0DC812A89F4E7265E5FFF597(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m598CCEA1E97C88F57E890F1024B62630EBD9AB26 (Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// int n = 0;
		V_0 = 0;
		// var eCur = _anEdge;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_0 = __this->get__anEdge_3();
		V_1 = L_0;
	}

IL_000a:
	{
		// n++;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// eCur = eCur._Lnext;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_2 = V_1;
		NullCheck(L_2);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_3 = L_2->get__Lnext_5();
		V_1 = L_3;
		// } while (eCur != _anEdge);
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_4 = V_1;
		Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 * L_5 = __this->get__anEdge_3();
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)L_4) == ((RuntimeObject*)(Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		// return n;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_mCE7B6042C71D754257FF6A080609F8DA152A33A1 (Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * __this, const RuntimeMethod* method)
{
	Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * V_0 = NULL;
	{
		// _prev = _next = null;
		V_0 = (Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C *)NULL;
		__this->set__next_2((Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C *)NULL);
		Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * L_0 = V_0;
		__this->set__prev_1(L_0);
		// _anEdge = null;
		__this->set__anEdge_3((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL);
		// _trail = null;
		__this->set__trail_4((Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C *)NULL);
		// _n = 0;
		__this->set__n_5(0);
		// _marked = false;
		__this->set__marked_6((bool)0);
		// _inside = false;
		__this->set__inside_7((bool)0);
		// }
		return;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_m396DD1B1A8D406AFFB3FE89B5FE0BD1D5326694C (Face_tD6F699F00B82CCC1DF666DAA5AAE54AD6B98A32C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pooled_1__ctor_m707DB7FD3CE649FE023CD0B8CB80C32042890DD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pooled_1__ctor_m707DB7FD3CE649FE023CD0B8CB80C32042890DD3(__this, /*hidden argument*/Pooled_1__ctor_m707DB7FD3CE649FE023CD0B8CB80C32042890DD3_RuntimeMethod_var);
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
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_m840B6A8AE9397DEAC43A98FB7AC60D6257CC92A5 (Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * V_0 = NULL;
	{
		// _prev = _next = null;
		V_0 = (Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 *)NULL;
		__this->set__next_2((Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 *)NULL);
		Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * L_0 = V_0;
		__this->set__prev_1(L_0);
		// _anEdge = null;
		__this->set__anEdge_3((Edge_t0357426165AA201C0A0C1CB8721F198CB2779807 *)NULL);
		// _coords = Vec3.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_il2cpp_TypeInfo_var);
		Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  L_1 = ((Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set__coords_4(L_1);
		// _s = 0;
		__this->set__s_5((0.0f));
		// _t = 0;
		__this->set__t_6((0.0f));
		// _pqHandle = new PQHandle();
		PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95 * L_2 = __this->get_address_of__pqHandle_7();
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t77DBFF7C67293591730267806D81C72C19FB3E95 ));
		// _n = 0;
		__this->set__n_8(0);
		// _data = null;
		__this->set__data_9(NULL);
		// }
		return;
	}
}
// System.Void Unity.VectorGraphics.External.LibTessDotNet.MeshUtils/Vertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m02600974C06986EF37EFC0B3B3526B42E52770DD (Vertex_tDF3C5B9A0BE17A9401996C87CC48767197D44353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pooled_1__ctor_mC43E55EA915A83EB72923407543A86D8E1423DEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pooled_1__ctor_mC43E55EA915A83EB72923407543A86D8E1423DEF(__this, /*hidden argument*/Pooled_1__ctor_mC43E55EA915A83EB72923407543A86D8E1423DEF_RuntimeMethod_var);
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
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::.ctor(System.Collections.Generic.IList`1<Unity.VectorGraphics.BezierPathSegment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop__ctor_m7B8AE800C339C679937C661D797D3DD96081A818 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, RuntimeObject* ___openPath0, const RuntimeMethod* method)
{
	{
		// public BezierLoop(IList<BezierPathSegment> openPath)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.OpenPath = openPath;
		RuntimeObject* L_0 = ___openPath0;
		__this->set_OpenPath_0(L_0);
		// }
		return;
	}
}
// Unity.VectorGraphics.BezierPathSegment Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  BezierLoop_get_Item_m81C65A76BE5F5C361BB09F3207E15565BB81AC79 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t55AB9F456547365B35577EDA8C54AEBFBABF1560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0BDC2615569F1F40D1FDD5CEA5427A2BA8B97D06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (index == OpenPath.Count)
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = __this->get_OpenPath_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.VectorGraphics.BezierPathSegment>::get_Count() */, ICollection_1_t55AB9F456547365B35577EDA8C54AEBFBABF1560_il2cpp_TypeInfo_var, L_1);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return OpenPath[0];
		RuntimeObject* L_4 = __this->get_OpenPath_0();
		NullCheck(L_4);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_5;
		L_5 = InterfaceFuncInvoker1< BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Unity.VectorGraphics.BezierPathSegment>::get_Item(System.Int32) */, IList_1_t0BDC2615569F1F40D1FDD5CEA5427A2BA8B97D06_il2cpp_TypeInfo_var, L_4, 0);
		V_1 = L_5;
		goto IL_0031;
	}

IL_0022:
	{
		// return OpenPath[index];
		RuntimeObject* L_6 = __this->get_OpenPath_0();
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_8;
		L_8 = InterfaceFuncInvoker1< BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Unity.VectorGraphics.BezierPathSegment>::get_Item(System.Int32) */, IList_1_t0BDC2615569F1F40D1FDD5CEA5427A2BA8B97D06_il2cpp_TypeInfo_var, L_6, L_7);
		V_1 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_9 = V_1;
		return L_9;
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::set_Item(System.Int32,Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_set_Item_m352FC187D75BCE62B72999776A9D4BF291576431 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, int32_t ___index0, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___value1, const RuntimeMethod* method)
{
	{
		// set { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_set_Item_m352FC187D75BCE62B72999776A9D4BF291576431_RuntimeMethod_var)));
	}
}
// System.Int32 Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierLoop_get_Count_m105BAA7F4E845D73DD4E6CDA7DBCCF0518DA893E (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t55AB9F456547365B35577EDA8C54AEBFBABF1560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public int Count { get { return OpenPath.Count + 1; } }
		RuntimeObject* L_0 = __this->get_OpenPath_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.VectorGraphics.BezierPathSegment>::get_Count() */, ICollection_1_t55AB9F456547365B35577EDA8C54AEBFBABF1560_il2cpp_TypeInfo_var, L_0);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_0011;
	}

IL_0011:
	{
		// public int Count { get { return OpenPath.Count + 1; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierLoop_get_IsReadOnly_mA8E6107E60EF72F7F47D454076E0C8126B4AD246 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsReadOnly { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public bool IsReadOnly { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::Add(Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_Add_mEC2A02FA875FFB15648B6382585475602E5E3DAD (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___item0, const RuntimeMethod* method)
{
	{
		// public void Add(BezierPathSegment item) { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_Add_mEC2A02FA875FFB15648B6382585475602E5E3DAD_RuntimeMethod_var)));
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_Clear_mCCE82B68C73776F6CC538E39A7013B78B471E3A2 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, const RuntimeMethod* method)
{
	{
		// public void Clear() {}
		return;
	}
}
// System.Boolean Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::Contains(Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierLoop_Contains_m97BC79B6886C9DFB5FDAF3BEB4FB9924F8FC6C99 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___item0, const RuntimeMethod* method)
{
	{
		// public bool Contains(BezierPathSegment item) { throw new NotImplementedException(); }
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_Contains_m97BC79B6886C9DFB5FDAF3BEB4FB9924F8FC6C99_RuntimeMethod_var)));
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::CopyTo(Unity.VectorGraphics.BezierPathSegment[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_CopyTo_m855CC50DC62E07CC4857388B5ED29749D3A33178 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, BezierPathSegmentU5BU5D_tB3F97EC1972B9D75F637A4667605352F7DDA010F* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// public void CopyTo(BezierPathSegment[] array, int arrayIndex) { throw new NotImplementedException(); }
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_CopyTo_m855CC50DC62E07CC4857388B5ED29749D3A33178_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BezierLoop_GetEnumerator_mB9FF7B7A166A08DA1305BBC2759F520187B07CD1 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, const RuntimeMethod* method)
{
	{
		// public IEnumerator<BezierPathSegment> GetEnumerator() { throw new NotImplementedException(); }
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_GetEnumerator_mB9FF7B7A166A08DA1305BBC2759F520187B07CD1_RuntimeMethod_var)));
	}
}
// System.Int32 Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::IndexOf(Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierLoop_IndexOf_m82DAB61BBE0EF8CF76E0C2BF7A27B2F578B3071E (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___item0, const RuntimeMethod* method)
{
	{
		// public int IndexOf(BezierPathSegment item) { throw new NotImplementedException(); }
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_IndexOf_m82DAB61BBE0EF8CF76E0C2BF7A27B2F578B3071E_RuntimeMethod_var)));
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::Insert(System.Int32,Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_Insert_m42D560069B3B65B2AC895CF5939D41BB24CE62FC (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, int32_t ___index0, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___item1, const RuntimeMethod* method)
{
	{
		// public void Insert(int index, BezierPathSegment item) { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_Insert_m42D560069B3B65B2AC895CF5939D41BB24CE62FC_RuntimeMethod_var)));
	}
}
// System.Boolean Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::Remove(Unity.VectorGraphics.BezierPathSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierLoop_Remove_m84AB2353E4C8875155890E2BCA983B7DAE409284 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  ___item0, const RuntimeMethod* method)
{
	{
		// public bool Remove(BezierPathSegment item) { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_Remove_m84AB2353E4C8875155890E2BCA983B7DAE409284_RuntimeMethod_var)));
	}
}
// System.Void Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierLoop_RemoveAt_mBE4007A16FDD2008F902C45F428B5658BA71111B (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// public void RemoveAt(int index) { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_RemoveAt_mBE4007A16FDD2008F902C45F428B5658BA71111B_RuntimeMethod_var)));
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.PathDistanceForwardIterator/BezierLoop::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BezierLoop_System_Collections_IEnumerable_GetEnumerator_mF6CF48836C890940ED7A19E609761F6A7A61F592 (BezierLoop_tDFF670CF0E51EAD9F2870604A1FF7D71957ECEAC * __this, const RuntimeMethod* method)
{
	{
		// IEnumerator IEnumerable.GetEnumerator() { throw new NotImplementedException(); }
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BezierLoop_System_Collections_IEnumerable_GetEnumerator_mF6CF48836C890940ED7A19E609761F6A7A61F592_RuntimeMethod_var)));
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/ClipData
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_pinvoke(const ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8& unmarshaled, ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_pinvoke& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
}
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_pinvoke_back(const ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_pinvoke& marshaled, ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/ClipData
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_pinvoke_cleanup(ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/ClipData
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_com(const ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8& unmarshaled, ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_com& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
}
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_com_back(const ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_com& marshaled, ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/ClipData
IL2CPP_EXTERN_C void ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshal_com_cleanup(ClipData_t713984DC97268B66D40C03D105B28B700FB2EBD8_marshaled_com& marshaled)
{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 (ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Unity.VectorGraphics.SVGDocument/ElemHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemHandler__ctor_m99E76051B9C83F78B447AD89B85A7374B41753C4 (ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.VectorGraphics.SVGDocument/ElemHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemHandler_Invoke_m54F6CF5B38A695D201A85C956DBE13F4FEA15021 (ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 * __this, const RuntimeMethod* method)
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
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
// System.IAsyncResult Unity.VectorGraphics.SVGDocument/ElemHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ElemHandler_BeginInvoke_m2E3B0FFE47C9F53F07C2A5B436598D383CFA740C (ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Unity.VectorGraphics.SVGDocument/ElemHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemHandler_EndInvoke_m2AE2E75412325DF23FD44C8853AD754CC54C3D85 (ElemHandler_tD4C814ABCD22C28B2501CDED7D4C4FF2BF49CE33 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.SVGDocument/GradientExData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientExData__ctor_m8BC70C77897D42D0BC693BE1ABD8FABDEE01300C (GradientExData_tC654667FF5503F9AF2B13FCC25DAA28BB314144A * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.SVGDocument/Handlers::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handlers__ctor_mC1BD24DD181F2E26B2AA038BD79BA20D129329C8 (Handlers_t8CB2C2F16B422B3FC39B22A1EA6C5BA8DF19FD41 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m06CA87437BA175758244F9F1F821638E4DEE3044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Handlers(int capacity) : base(capacity) {}
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m06CA87437BA175758244F9F1F821638E4DEE3044(__this, L_0, /*hidden argument*/Dictionary_2__ctor_m06CA87437BA175758244F9F1F821638E4DEE3044_RuntimeMethod_var);
		// public Handlers(int capacity) : base(capacity) {}
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/HierarchyUpdate
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_pinvoke(const HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7& unmarshaled, HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Parent' of type 'HierarchyUpdate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Parent_0Exception, NULL);
}
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_pinvoke_back(const HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_pinvoke& marshaled, HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7& unmarshaled)
{
	Exception_t* ___Parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Parent' of type 'HierarchyUpdate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Parent_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/HierarchyUpdate
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_pinvoke_cleanup(HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/HierarchyUpdate
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_com(const HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7& unmarshaled, HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_com& marshaled)
{
	Exception_t* ___Parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Parent' of type 'HierarchyUpdate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Parent_0Exception, NULL);
}
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_com_back(const HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_com& marshaled, HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7& unmarshaled)
{
	Exception_t* ___Parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Parent' of type 'HierarchyUpdate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Parent_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/HierarchyUpdate
IL2CPP_EXTERN_C void HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshal_com_cleanup(HierarchyUpdate_tF2E586BBA8B4ED396B6843D5A56E683E9AE12FA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.SVGDocument/LinearGradientExData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearGradientExData__ctor_m6DF267660D5E1713C9236E99836924954F103BF7 (LinearGradientExData_tB83D9039FE0D156F7F4C464A0F6B17ECDE7EC987 * __this, const RuntimeMethod* method)
{
	{
		GradientExData__ctor_m8BC70C77897D42D0BC693BE1ABD8FABDEE01300C(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/MaskData
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_pinvoke(const MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D& unmarshaled, MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_pinvoke& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
	marshaled.___ContentWorldRelative_1 = static_cast<int32_t>(unmarshaled.get_ContentWorldRelative_1());
}
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_pinvoke_back(const MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_pinvoke& marshaled, MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
	bool unmarshaled_ContentWorldRelative_temp_1 = false;
	unmarshaled_ContentWorldRelative_temp_1 = static_cast<bool>(marshaled.___ContentWorldRelative_1);
	unmarshaled.set_ContentWorldRelative_1(unmarshaled_ContentWorldRelative_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/MaskData
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_pinvoke_cleanup(MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/MaskData
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_com(const MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D& unmarshaled, MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_com& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
	marshaled.___ContentWorldRelative_1 = static_cast<int32_t>(unmarshaled.get_ContentWorldRelative_1());
}
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_com_back(const MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_com& marshaled, MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
	bool unmarshaled_ContentWorldRelative_temp_1 = false;
	unmarshaled_ContentWorldRelative_temp_1 = static_cast<bool>(marshaled.___ContentWorldRelative_1);
	unmarshaled.set_ContentWorldRelative_1(unmarshaled_ContentWorldRelative_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/MaskData
IL2CPP_EXTERN_C void MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshal_com_cleanup(MaskData_t013EC50D9AC80B15E15A6E60DCCD0ECC9DF3789D_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/NodeReferenceData
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_pinvoke(const NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE& unmarshaled, NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeReferenceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_pinvoke_back(const NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_pinvoke& marshaled, NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeReferenceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/NodeReferenceData
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_pinvoke_cleanup(NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/NodeReferenceData
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_com(const NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE& unmarshaled, NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_com& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeReferenceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_com_back(const NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_com& marshaled, NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeReferenceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/NodeReferenceData
IL2CPP_EXTERN_C void NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshal_com_cleanup(NodeReferenceData_t65ACC46E951CFA1AF9872AA55540BB87A6B232CE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/NodeWithParent
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_pinvoke(const NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843& unmarshaled, NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_pinvoke& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeWithParent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_pinvoke_back(const NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_pinvoke& marshaled, NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeWithParent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/NodeWithParent
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_pinvoke_cleanup(NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/NodeWithParent
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_com(const NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843& unmarshaled, NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_com& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeWithParent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_com_back(const NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_com& marshaled, NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeWithParent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/NodeWithParent
IL2CPP_EXTERN_C void NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshal_com_cleanup(NodeWithParent_t49A63E2700109084242CA1690FBCDE7BECA73843_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/PatternData
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_pinvoke(const PatternData_t189C13268A3E743365534543CBBF50771961F81E& unmarshaled, PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_pinvoke& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
	marshaled.___ContentWorldRelative_1 = static_cast<int32_t>(unmarshaled.get_ContentWorldRelative_1());
	marshaled.___PatternTransform_2 = unmarshaled.get_PatternTransform_2();
}
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_pinvoke_back(const PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_pinvoke& marshaled, PatternData_t189C13268A3E743365534543CBBF50771961F81E& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
	bool unmarshaled_ContentWorldRelative_temp_1 = false;
	unmarshaled_ContentWorldRelative_temp_1 = static_cast<bool>(marshaled.___ContentWorldRelative_1);
	unmarshaled.set_ContentWorldRelative_1(unmarshaled_ContentWorldRelative_temp_1);
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  unmarshaled_PatternTransform_temp_2;
	memset((&unmarshaled_PatternTransform_temp_2), 0, sizeof(unmarshaled_PatternTransform_temp_2));
	unmarshaled_PatternTransform_temp_2 = marshaled.___PatternTransform_2;
	unmarshaled.set_PatternTransform_2(unmarshaled_PatternTransform_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/PatternData
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_pinvoke_cleanup(PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/PatternData
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_com(const PatternData_t189C13268A3E743365534543CBBF50771961F81E& unmarshaled, PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_com& marshaled)
{
	marshaled.___WorldRelative_0 = static_cast<int32_t>(unmarshaled.get_WorldRelative_0());
	marshaled.___ContentWorldRelative_1 = static_cast<int32_t>(unmarshaled.get_ContentWorldRelative_1());
	marshaled.___PatternTransform_2 = unmarshaled.get_PatternTransform_2();
}
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_com_back(const PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_com& marshaled, PatternData_t189C13268A3E743365534543CBBF50771961F81E& unmarshaled)
{
	bool unmarshaled_WorldRelative_temp_0 = false;
	unmarshaled_WorldRelative_temp_0 = static_cast<bool>(marshaled.___WorldRelative_0);
	unmarshaled.set_WorldRelative_0(unmarshaled_WorldRelative_temp_0);
	bool unmarshaled_ContentWorldRelative_temp_1 = false;
	unmarshaled_ContentWorldRelative_temp_1 = static_cast<bool>(marshaled.___ContentWorldRelative_1);
	unmarshaled.set_ContentWorldRelative_1(unmarshaled_ContentWorldRelative_temp_1);
	Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  unmarshaled_PatternTransform_temp_2;
	memset((&unmarshaled_PatternTransform_temp_2), 0, sizeof(unmarshaled_PatternTransform_temp_2));
	unmarshaled_PatternTransform_temp_2 = marshaled.___PatternTransform_2;
	unmarshaled.set_PatternTransform_2(unmarshaled_PatternTransform_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/PatternData
IL2CPP_EXTERN_C void PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshal_com_cleanup(PatternData_t189C13268A3E743365534543CBBF50771961F81E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/PostponedStopData
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_pinvoke(const PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7& unmarshaled, PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___fill_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fill' of type 'PostponedStopData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fill_0Exception, NULL);
}
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_pinvoke_back(const PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_pinvoke& marshaled, PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7& unmarshaled)
{
	Exception_t* ___fill_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fill' of type 'PostponedStopData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fill_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/PostponedStopData
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_pinvoke_cleanup(PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/PostponedStopData
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_com(const PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7& unmarshaled, PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_com& marshaled)
{
	Exception_t* ___fill_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fill' of type 'PostponedStopData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fill_0Exception, NULL);
}
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_com_back(const PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_com& marshaled, PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7& unmarshaled)
{
	Exception_t* ___fill_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fill' of type 'PostponedStopData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fill_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/PostponedStopData
IL2CPP_EXTERN_C void PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshal_com_cleanup(PostponedStopData_t3D2E181D86D89E68698A29129F45ADAF26EF1AB7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.SVGDocument/RadialGradientExData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialGradientExData__ctor_m302939BB011DAD5ACC7E38C26E718D1C754809C9 (RadialGradientExData_tBD55ADD65DA169FBB35B9B5A08080D2B79E1F873 * __this, const RuntimeMethod* method)
{
	{
		GradientExData__ctor_m8BC70C77897D42D0BC693BE1ABD8FABDEE01300C(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/ViewBoxInfo
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_pinvoke(const ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA& unmarshaled, ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_pinvoke& marshaled)
{
	marshaled.___ViewBox_0 = unmarshaled.get_ViewBox_0();
	marshaled.___AspectRatio_1 = unmarshaled.get_AspectRatio_1();
	marshaled.___AlignX_2 = unmarshaled.get_AlignX_2();
	marshaled.___AlignY_3 = unmarshaled.get_AlignY_3();
	marshaled.___IsEmpty_4 = static_cast<int32_t>(unmarshaled.get_IsEmpty_4());
}
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_pinvoke_back(const ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_pinvoke& marshaled, ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA& unmarshaled)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  unmarshaled_ViewBox_temp_0;
	memset((&unmarshaled_ViewBox_temp_0), 0, sizeof(unmarshaled_ViewBox_temp_0));
	unmarshaled_ViewBox_temp_0 = marshaled.___ViewBox_0;
	unmarshaled.set_ViewBox_0(unmarshaled_ViewBox_temp_0);
	int32_t unmarshaled_AspectRatio_temp_1 = 0;
	unmarshaled_AspectRatio_temp_1 = marshaled.___AspectRatio_1;
	unmarshaled.set_AspectRatio_1(unmarshaled_AspectRatio_temp_1);
	int32_t unmarshaled_AlignX_temp_2 = 0;
	unmarshaled_AlignX_temp_2 = marshaled.___AlignX_2;
	unmarshaled.set_AlignX_2(unmarshaled_AlignX_temp_2);
	int32_t unmarshaled_AlignY_temp_3 = 0;
	unmarshaled_AlignY_temp_3 = marshaled.___AlignY_3;
	unmarshaled.set_AlignY_3(unmarshaled_AlignY_temp_3);
	bool unmarshaled_IsEmpty_temp_4 = false;
	unmarshaled_IsEmpty_temp_4 = static_cast<bool>(marshaled.___IsEmpty_4);
	unmarshaled.set_IsEmpty_4(unmarshaled_IsEmpty_temp_4);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/ViewBoxInfo
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_pinvoke_cleanup(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGDocument/ViewBoxInfo
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_com(const ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA& unmarshaled, ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_com& marshaled)
{
	marshaled.___ViewBox_0 = unmarshaled.get_ViewBox_0();
	marshaled.___AspectRatio_1 = unmarshaled.get_AspectRatio_1();
	marshaled.___AlignX_2 = unmarshaled.get_AlignX_2();
	marshaled.___AlignY_3 = unmarshaled.get_AlignY_3();
	marshaled.___IsEmpty_4 = static_cast<int32_t>(unmarshaled.get_IsEmpty_4());
}
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_com_back(const ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_com& marshaled, ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA& unmarshaled)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  unmarshaled_ViewBox_temp_0;
	memset((&unmarshaled_ViewBox_temp_0), 0, sizeof(unmarshaled_ViewBox_temp_0));
	unmarshaled_ViewBox_temp_0 = marshaled.___ViewBox_0;
	unmarshaled.set_ViewBox_0(unmarshaled_ViewBox_temp_0);
	int32_t unmarshaled_AspectRatio_temp_1 = 0;
	unmarshaled_AspectRatio_temp_1 = marshaled.___AspectRatio_1;
	unmarshaled.set_AspectRatio_1(unmarshaled_AspectRatio_temp_1);
	int32_t unmarshaled_AlignX_temp_2 = 0;
	unmarshaled_AlignX_temp_2 = marshaled.___AlignX_2;
	unmarshaled.set_AlignX_2(unmarshaled_AlignX_temp_2);
	int32_t unmarshaled_AlignY_temp_3 = 0;
	unmarshaled_AlignY_temp_3 = marshaled.___AlignY_3;
	unmarshaled.set_AlignY_3(unmarshaled_AlignY_temp_3);
	bool unmarshaled_IsEmpty_temp_4 = false;
	unmarshaled_IsEmpty_temp_4 = static_cast<bool>(marshaled.___IsEmpty_4);
	unmarshaled.set_IsEmpty_4(unmarshaled_IsEmpty_temp_4);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGDocument/ViewBoxInfo
IL2CPP_EXTERN_C void ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshal_com_cleanup(ViewBoxInfo_t675EC2132586138E127A2E7C994ACA16721D5BFA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGParser/SceneInfo
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_pinvoke(const SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069& unmarshaled, SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CSceneU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Scene>k__BackingField' of type 'SceneInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CSceneU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_pinvoke_back(const SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_pinvoke& marshaled, SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069& unmarshaled)
{
	Exception_t* ___U3CSceneU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Scene>k__BackingField' of type 'SceneInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CSceneU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGParser/SceneInfo
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_pinvoke_cleanup(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGParser/SceneInfo
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_com(const SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069& unmarshaled, SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_com& marshaled)
{
	Exception_t* ___U3CSceneU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Scene>k__BackingField' of type 'SceneInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CSceneU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_com_back(const SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_com& marshaled, SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069& unmarshaled)
{
	Exception_t* ___U3CSceneU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Scene>k__BackingField' of type 'SceneInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CSceneU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGParser/SceneInfo
IL2CPP_EXTERN_C void SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshal_com_cleanup(SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069_marshaled_com& marshaled)
{
}
// System.Void Unity.VectorGraphics.SVGParser/SceneInfo::.ctor(Unity.VectorGraphics.Scene,UnityEngine.Rect,System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>,System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo__ctor_mF608F1173244286A8BC3421F22F9D4870FC5281A (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___scene0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___sceneViewport1, Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___nodeOpacities2, Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___nodeIDs3, const RuntimeMethod* method)
{
	{
		// Scene = scene;
		Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * L_0 = ___scene0;
		__this->set_U3CSceneU3Ek__BackingField_0(L_0);
		// SceneViewport = sceneViewport;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = ___sceneViewport1;
		__this->set_U3CSceneViewportU3Ek__BackingField_1(L_1);
		// NodeOpacity = nodeOpacities;
		Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_2 = ___nodeOpacities2;
		__this->set_U3CNodeOpacityU3Ek__BackingField_2(L_2);
		// NodeIDs = nodeIDs;
		Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * L_3 = ___nodeIDs3;
		__this->set_U3CNodeIDsU3Ek__BackingField_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneInfo__ctor_mF608F1173244286A8BC3421F22F9D4870FC5281A_AdjustorThunk (RuntimeObject * __this, Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * ___scene0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___sceneViewport1, Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * ___nodeOpacities2, Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * ___nodeIDs3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * _thisAdjusted = reinterpret_cast<SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 *>(__this + _offset);
	SceneInfo__ctor_mF608F1173244286A8BC3421F22F9D4870FC5281A(_thisAdjusted, ___scene0, ___sceneViewport1, ___nodeOpacities2, ___nodeIDs3, method);
}
// Unity.VectorGraphics.Scene Unity.VectorGraphics.SVGParser/SceneInfo::get_Scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * SceneInfo_get_Scene_m1D2A4FBDAF65ED700B36E8CFF691954B2F9B2035 (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Scene Scene { get; }
		Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * L_0 = __this->get_U3CSceneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * SceneInfo_get_Scene_m1D2A4FBDAF65ED700B36E8CFF691954B2F9B2035_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * _thisAdjusted = reinterpret_cast<SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 *>(__this + _offset);
	Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * _returnValue;
	_returnValue = SceneInfo_get_Scene_m1D2A4FBDAF65ED700B36E8CFF691954B2F9B2035_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rect Unity.VectorGraphics.SVGParser/SceneInfo::get_SceneViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  SceneInfo_get_SceneViewport_mA2BC970E909BAF2CBB3F802F715775C34969A03C (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Rect SceneViewport { get; }
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_U3CSceneViewportU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  SceneInfo_get_SceneViewport_mA2BC970E909BAF2CBB3F802F715775C34969A03C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * _thisAdjusted = reinterpret_cast<SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 *>(__this + _offset);
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  _returnValue;
	_returnValue = SceneInfo_get_SceneViewport_mA2BC970E909BAF2CBB3F802F715775C34969A03C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.SVGParser/SceneInfo::get_NodeOpacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * SceneInfo_get_NodeOpacity_m152503CE57E275C60CBCD8447AAC9EDFEF3C60B1 (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<SceneNode, float> NodeOpacity { get; }
		Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_0 = __this->get_U3CNodeOpacityU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * SceneInfo_get_NodeOpacity_m152503CE57E275C60CBCD8447AAC9EDFEF3C60B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * _thisAdjusted = reinterpret_cast<SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 *>(__this + _offset);
	Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * _returnValue;
	_returnValue = SceneInfo_get_NodeOpacity_m152503CE57E275C60CBCD8447AAC9EDFEF3C60B1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SVGParser/SceneInfo::get_NodeIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * SceneInfo_get_NodeIDs_m0FAA59B46F4CF3D2E20D665350812B44F1458C55 (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, SceneNode> NodeIDs { get; }
		Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * L_0 = __this->get_U3CNodeIDsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * SceneInfo_get_NodeIDs_m0FAA59B46F4CF3D2E20D665350812B44F1458C55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * _thisAdjusted = reinterpret_cast<SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 *>(__this + _offset);
	Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * _returnValue;
	_returnValue = SceneInfo_get_NodeIDs_m0FAA59B46F4CF3D2E20D665350812B44F1458C55_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.SVGStyleResolver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7165E19B711CB84D390EFBD48D8BCEB7FE44CB3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * L_0 = (U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A *)il2cpp_codegen_object_new(U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m94A0D46969B0A668B47F11288DC639EA1CE2215A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94A0D46969B0A668B47F11288DC639EA1CE2215A (U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.VectorGraphics.SVGStyleResolver/<>c::<PushNode>b__0_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CPushNodeU3Eb__0_0_m1312CBBA0C132EB10977B1FFC05C766951ABF835 (U3CU3Ec_tF5C18488856FF15100447D70803429DB72EF5A3A * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// nodeData.classes = node["class"].Split(' ').Select(x => x.Trim()).ToList();
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12__ctor_m6E3A0A61E18D6FF73CBB9156F3693E459A578068 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_System_IDisposable_Dispose_mE54783E223759CFDBD1487B07E241B941274E0D3 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_0046;
			}
			case 4:
			{
				goto IL_0046;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_002e:
	{
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x38, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		U3CSortedClassesU3Ed__12_U3CU3Em__Finally1_mF37F6888E7AA69B7100292DD91412FD3C87AB4F9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		goto IL_0046;
	}

IL_003a:
	{
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x44, FINALLY_003d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		U3CSortedClassesU3Ed__12_U3CU3Em__Finally2_m64B2350BCBC122119DF96383E50B6C457D021B8E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		goto IL_0046;
	}

IL_0046:
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSortedClassesU3Ed__12_MoveNext_mB80F4B95C29098D5923A646A5C9471E7A639AA5C (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisString_t_mA740D56D06F9F26F5AF625E31B7FE16686B151FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
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
					goto IL_001f;
				}
			}
		}

IL_0019:
		{
			goto IL_0024;
		}

IL_001b:
		{
			goto IL_002b;
		}

IL_001d:
		{
			goto IL_0097;
		}

IL_001f:
		{
			goto IL_0160;
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_01a1;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (globalStyleSheet.selectors.Count() == 0)
			SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * L_2 = __this->get_U3CU3E4__this_5();
			NullCheck(L_2);
			SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * L_3 = L_2->get_globalStyleSheet_1();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = SVGStyleSheet_get_selectors_mCE7F79D7E6315C16287DCE284810BEF72D988E7E(L_3, /*hidden argument*/NULL);
			int32_t L_5;
			L_5 = Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D(L_4, /*hidden argument*/Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_00c7;
			}
		}

IL_004f:
		{
			// foreach (var klass in classes)
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = __this->get_classes_3();
			NullCheck(L_7);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_8;
			L_8 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_7, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			__this->set_U3CU3Es__1_6(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a6;
		}

IL_006c:
		{
			// foreach (var klass in classes)
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_9 = __this->get_address_of_U3CU3Es__1_6();
			String_t* L_10;
			L_10 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_9, /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			__this->set_U3CklassU3E5__2_7(L_10);
			// yield return klass;
			String_t* L_11 = __this->get_U3CklassU3E5__2_7();
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01a1;
		}

IL_0097:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			__this->set_U3CklassU3E5__2_7((String_t*)NULL);
		}

IL_00a6:
		{
			// foreach (var klass in classes)
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_12 = __this->get_address_of_U3CU3Es__1_6();
			bool L_13;
			L_13 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_12, /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_006c;
			}
		}

IL_00b3:
		{
			U3CSortedClassesU3Ed__12_U3CU3Em__Finally1_mF37F6888E7AA69B7100292DD91412FD3C87AB4F9(__this, /*hidden argument*/NULL);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_14 = __this->get_address_of_U3CU3Es__1_6();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B ));
		}

IL_00c7:
		{
			// foreach (var sel in globalStyleSheet.selectors.Reverse())
			SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * L_15 = __this->get_U3CU3E4__this_5();
			NullCheck(L_15);
			SVGStyleSheet_t19A47D292455EFE1299F4BBA0CBE02F3CBCC8934 * L_16 = L_15->get_globalStyleSheet_1();
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = SVGStyleSheet_get_selectors_mCE7F79D7E6315C16287DCE284810BEF72D988E7E(L_16, /*hidden argument*/NULL);
			RuntimeObject* L_18;
			L_18 = Enumerable_Reverse_TisString_t_mA740D56D06F9F26F5AF625E31B7FE16686B151FE(L_17, /*hidden argument*/Enumerable_Reverse_TisString_t_mA740D56D06F9F26F5AF625E31B7FE16686B151FE_RuntimeMethod_var);
			NullCheck(L_18);
			RuntimeObject* L_19;
			L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_18);
			__this->set_U3CU3Es__3_8(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0177;
		}

IL_00f5:
		{
			// foreach (var sel in globalStyleSheet.selectors.Reverse())
			RuntimeObject* L_20 = __this->get_U3CU3Es__3_8();
			NullCheck(L_20);
			String_t* L_21;
			L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_20);
			__this->set_U3CselU3E5__4_9(L_21);
			// if (sel[0] != '.')
			String_t* L_22 = __this->get_U3CselU3E5__4_9();
			NullCheck(L_22);
			Il2CppChar L_23;
			L_23 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, 0, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_24 = V_3;
			if (!L_24)
			{
				goto IL_0120;
			}
		}

IL_011e:
		{
			// continue;
			goto IL_0177;
		}

IL_0120:
		{
			// var klass = sel.Substring(1);
			String_t* L_25 = __this->get_U3CselU3E5__4_9();
			NullCheck(L_25);
			String_t* L_26;
			L_26 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_25, 1, /*hidden argument*/NULL);
			__this->set_U3CklassU3E5__5_10(L_26);
			// if (classes.Contains(klass))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_27 = __this->get_classes_3();
			String_t* L_28 = __this->get_U3CklassU3E5__5_10();
			NullCheck(L_27);
			bool L_29;
			L_29 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_27, L_28, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			V_4 = L_29;
			bool L_30 = V_4;
			if (!L_30)
			{
				goto IL_0168;
			}
		}

IL_0149:
		{
			// yield return klass;
			String_t* L_31 = __this->get_U3CklassU3E5__5_10();
			__this->set_U3CU3E2__current_1(L_31);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01a1;
		}

IL_0160:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0168:
		{
			__this->set_U3CklassU3E5__5_10((String_t*)NULL);
			__this->set_U3CselU3E5__4_9((String_t*)NULL);
		}

IL_0177:
		{
			// foreach (var sel in globalStyleSheet.selectors.Reverse())
			RuntimeObject* L_32 = __this->get_U3CU3Es__3_8();
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_00f5;
			}
		}

IL_0187:
		{
			U3CSortedClassesU3Ed__12_U3CU3Em__Finally2_m64B2350BCBC122119DF96383E50B6C457D021B8E(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__3_8((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_01a1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0199;
	}

FAULT_0199:
	{ // begin fault (depth: 1)
		U3CSortedClassesU3Ed__12_System_IDisposable_Dispose_mE54783E223759CFDBD1487B07E241B941274E0D3(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(409)
	} // end fault
	IL2CPP_CLEANUP(409)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a1:
	{
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_U3CU3Em__Finally1_mF37F6888E7AA69B7100292DD91412FD3C87AB4F9 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_0 = __this->get_address_of_U3CU3Es__1_6();
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_0, /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_U3CU3Em__Finally2_m64B2350BCBC122119DF96383E50B6C457D021B8E (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3Es__3_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__3_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.String Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CSortedClassesU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mF85D08D8A8E15C8A2274F2822EF4E6281118C617 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortedClassesU3Ed__12_System_Collections_IEnumerator_Reset_m684845612B9A10537C1B81EC95A7F96916FCCD64 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSortedClassesU3Ed__12_System_Collections_IEnumerator_Reset_m684845612B9A10537C1B81EC95A7F96916FCCD64_RuntimeMethod_var)));
	}
}
// System.Object Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSortedClassesU3Ed__12_System_Collections_IEnumerator_get_Current_m68FAAC947484B39C0EFC30DA4E490AE395C9E4B1 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSortedClassesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5FC8B5A1E27D488FA7E1EBCA5D6FD0E19C8AC98E (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * L_3 = (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 *)il2cpp_codegen_object_new(U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31_il2cpp_TypeInfo_var);
		U3CSortedClassesU3Ed__12__ctor_m6E3A0A61E18D6FF73CBB9156F3693E459A578068(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * L_4 = V_0;
		SVGStyleResolver_tCC996E115B81A630E7077033F22F167C129EA300 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * L_6 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = __this->get_U3CU3E3__classes_4();
		NullCheck(L_6);
		L_6->set_classes_3(L_7);
		U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.SVGStyleResolver/<SortedClasses>d__12::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSortedClassesU3Ed__12_System_Collections_IEnumerable_GetEnumerator_m0CAF3D9B1E836AA8C5C10FDE876E31D74CA76918 (U3CSortedClassesU3Ed__12_t2F6DE7A288A97A2B3FB95495FF926E8A50458D31 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSortedClassesU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m5FC8B5A1E27D488FA7E1EBCA5D6FD0E19C8AC98E(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGStyleResolver/NodeData
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_pinvoke(const NodeData_t569A6238B35F792FD876F00885A3B913A38207A3& unmarshaled, NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_pinvoke_back(const NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_pinvoke& marshaled, NodeData_t569A6238B35F792FD876F00885A3B913A38207A3& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGStyleResolver/NodeData
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_pinvoke_cleanup(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.SVGStyleResolver/NodeData
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_com(const NodeData_t569A6238B35F792FD876F00885A3B913A38207A3& unmarshaled, NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_com& marshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_com_back(const NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_com& marshaled, NodeData_t569A6238B35F792FD876F00885A3B913A38207A3& unmarshaled)
{
	Exception_t* ___node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.SVGStyleResolver/NodeData
IL2CPP_EXTERN_C void NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshal_com_cleanup(NodeData_t569A6238B35F792FD876F00885A3B913A38207A3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.SVGStyleResolver/StyleLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleLayer__ctor_mE3B91CB1BCF9FC07C9A6F40DECFAF0BFD52BEFDA (StyleLayer_tEC75B77DA75756B00BD5E2255F98F8A9800F1370 * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.SVGStyleSheet/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m89FACE990F03D1596DEB98FD304636861B185168 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * L_0 = (U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 *)il2cpp_codegen_object_new(U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1F1832A10DBFDDE1CC51036D7DF411B59E450CDB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.SVGStyleSheet/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F1832A10DBFDDE1CC51036D7DF411B59E450CDB (U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.VectorGraphics.SVGStyleSheet/<>c::<get_selectors>b__5_0(System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_selectorsU3Eb__5_0_mAD0553D78079BC85757703118CF4F8166D565403 (U3CU3Ec_tE0A5BADD3B8F29C480D2B64B447AF70C47F72F86 * __this, KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Selectors.Select(x => x.Key); }
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_inline((KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
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
// System.Void Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m154E32412CE6A55A0471E7418AD7A6706057AE14 (U3CU3Ec__DisplayClass2_0_t57046AFE53FF68E3084B3317303CDE9A2F5AD74A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass2_0::<get_Item>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3Cget_ItemU3Eb__0_m4EAC71165B5F99F65519EBC2F5CE43E6F51ABB92 (U3CU3Ec__DisplayClass2_0_t57046AFE53FF68E3084B3317303CDE9A2F5AD74A * __this, KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int i = m_Selectors.FindIndex(x => x.Key == key);
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_inline((KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
		String_t* L_1 = __this->get_key_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF806561821523E03F0AD6C45C14CCC63FB8A2422 (U3CU3Ec__DisplayClass3_0_t0EC890E7CE811389B315AAEBD50357016FACCEAE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.VectorGraphics.SVGStyleSheet/<>c__DisplayClass3_0::<set_Item>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Unity.VectorGraphics.SVGPropertySheet>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3Cset_ItemU3Eb__0_m7D281EBCDB5E25A7617524E23E7618D411FCFC8E (U3CU3Ec__DisplayClass3_0_t0EC890E7CE811389B315AAEBD50357016FACCEAE * __this, KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int i = m_Selectors.FindIndex(x => x.Key == key);
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_inline((KeyValuePair_2_tAB987D0AF57EAF5DDD32456FD74BC8C3980A7965 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mC315535F890B239007A466DC96E8C03C94264B4C_RuntimeMethod_var);
		String_t* L_1 = __this->get_key_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Unity.VectorGraphics.External.LibTessDotNet.Tess/ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m1A63A95E5E01262B12E26442223FE3A2BA42E600 (ActiveRegion_t85B64E553613A972A3BA4220127D8D65F90983D0 * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.VectorClip/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mD27EAA9270EBE4854C33DF8E5B6745192D43980B (U3CU3Ec__DisplayClass7_0_t0F4A238B2A466EB723E110056F19CD6CB751C436 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorClip/<>c__DisplayClass7_0::<BuildGeometryFromClipPaths>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass7_0_U3CBuildGeometryFromClipPathsU3Eb__0_m43D252B607A6EE75BDA1993899F35B1FD2D69F03 (U3CU3Ec__DisplayClass7_0_t0F4A238B2A466EB723E110056F19CD6CB751C436 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// outVerts.AddRange(vertices.Select(v => invMatrix * v));
		Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_0 = __this->get_invMatrix_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Matrix2D_op_Multiply_m96C24A08E3E4A306A4FCBF3EBF6AC8317B46AF92(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m724DA5D8A88B5D00D17FF28A36FA1028D2453555 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * L_0 = (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B *)il2cpp_codegen_object_new(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFB500E829C77A4FBDA7735DA19F1AD439202629E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB500E829C77A4FBDA7735DA19F1AD439202629E (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.ContourVertex Unity.VectorGraphics.VectorUtils/<>c::<TessellateShapeLibTess>b__20_2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  U3CU3Ec_U3CTessellateShapeLibTessU3Eb__20_2_m12A6F4F8B7BC9FA84EA128F14C40E1822716BF09 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// tess.AddContour(contour.Select(v => new ContourVertex() { Position = new Vec3() { X = v.x, Y = v.y } }).ToArray(), ContourOrientation.Original);
		il2cpp_codegen_initobj((&V_0), sizeof(ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		(&V_1)->set_X_1(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		(&V_1)->set_Y_2(L_3);
		Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  L_4 = V_1;
		(&V_0)->set_Position_0(L_4);
		ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  L_5 = V_0;
		return L_5;
	}
}
// System.UInt16 Unity.VectorGraphics.VectorUtils/<>c::<TessellateShapeLibTess>b__20_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t U3CU3Ec_U3CTessellateShapeLibTessU3Eb__20_0_mC8505FF0F4CEF3E7E96AA9E99F2EFE91E3CA30FB (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// var indices = tess.Elements.Select(i => (UInt16)i);
		int32_t L_0 = ___i0;
		return (uint16_t)((int32_t)((uint16_t)L_0));
	}
}
// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2> Unity.VectorGraphics.VectorUtils/<>c::<GenerateAtlas>b__28_0(System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63  U3CU3Ec_U3CGenerateAtlasU3Eb__28_0_mA4AFF7EBE2C868114EFC41233CC5A669D7D628BF (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF54419D828E03CFF80CFF6761D841D3462337C0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m4E4EC40B9DAE080ED7945F14649A18E0A9F0A5D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var rectsToPack = fills.Select(x => new KeyValuePair<IFill, Vector2>(x.Key, new Vector2(x.Value.Texture.Width, x.Value.Texture.Height))).ToList();
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m4E4EC40B9DAE080ED7945F14649A18E0A9F0A5D3_inline((KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m4E4EC40B9DAE080ED7945F14649A18E0A9F0A5D3_RuntimeMethod_var);
		AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * L_1;
		L_1 = KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_inline((KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_RuntimeMethod_var);
		NullCheck(L_1);
		RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0 * L_2 = L_1->get_address_of_Texture_0();
		int32_t L_3 = L_2->get_Width_1();
		AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * L_4;
		L_4 = KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_inline((KeyValuePair_2_t56C774B388DDBD03F4787783B49B7FB6248BA655 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_m1DBB6E4F9F358CB753A1807A6B474A5717C3670D_RuntimeMethod_var);
		NullCheck(L_4);
		RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0 * L_5 = L_4->get_address_of_Texture_0();
		int32_t L_6 = L_5->get_Height_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)((float)L_3)), ((float)((float)L_6)), /*hidden argument*/NULL);
		KeyValuePair_2_tDDB11A8C6095582281973140C7B84B0692640F63  L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mF54419D828E03CFF80CFF6761D841D3462337C0C((&L_8), L_0, L_7, /*hidden argument*/KeyValuePair_2__ctor_mF54419D828E03CFF80CFF6761D841D3462337C0C_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Color32 Unity.VectorGraphics.VectorUtils/<>c::<BuildSprite>b__33_0(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  U3CU3Ec_U3CBuildSpriteU3Eb__33_0_m09F6055D7A018077886A361074ACE0F2A0B4722C (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method)
{
	{
		// var colors32 = colors.Select(c => (Color32)c);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___c0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1;
		L_1 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_0(Unity.VectorGraphics.VectorUtils/Geometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFillMeshU3Eb__34_0_mEA94A23B28D0DF341775DF9CE04A9AB84A9AA6C4 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * ___g0, const RuntimeMethod* method)
{
	{
		// bool hasUVs = (geoms.FirstOrDefault(g => g.UVs != null)) != null;
		Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * L_0 = ___g0;
		NullCheck(L_0);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = L_0->get_UVs_1();
		return (bool)((!(((RuntimeObject*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// UnityEngine.Vector3 Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CFillMeshU3Eb__34_1_m7882A6508ABB98BD4ED4C1A209C9FA7E231DDDC9 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// mesh.SetVertices(vertices.Select(v => (Vector3)v).ToList());
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_2(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFillMeshU3Eb__34_2_m832E8337AD6B127A6F70E696F1163CE1992E99C3 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, uint16_t ___i0, const RuntimeMethod* method)
{
	{
		// mesh.SetTriangles(indices.Select(i => (int)i).ToArray(), 0);
		uint16_t L_0 = ___i0;
		return L_0;
	}
}
// UnityEngine.Color Unity.VectorGraphics.VectorUtils/<>c::<RenderSprite>b__41_1(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec_U3CRenderSpriteU3Eb__41_1_m975CCFAEB22EA903C35B096D76A6C25CE554D7A7 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method)
{
	{
		// colors = sprite.GetVertexAttribute<Color32>(VertexAttribute.Color).Select(c => (Color)c).ToArray();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0 = ___c0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<>c::<CubicRoots>b__112_0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCubicRootsU3Eb__112_0_m088C036A0CC27522E211E08521C20FAA0D345D3B (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// t.RemoveAll(x => Math.Abs(x + 1.0) < (double)Epsilon);
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = fabs(((double)il2cpp_codegen_add((double)L_0, (double)(1.0))));
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		float L_2 = ((VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var))->get_Epsilon_1();
		return (bool)((((double)L_1) < ((double)((double)((double)L_2))))? 1 : 0);
	}
}
// System.Single Unity.VectorGraphics.VectorUtils/<>c::<CubicRoots>b__112_1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCubicRootsU3Eb__112_1_m794CB3B01AA9B4BAC29416122E0BC538C0E19ED4 (U3CU3Ec_t1D70C94AD413578E3157945252CB81799CA31A8B * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return t.Select(x => (float)x).ToArray();
		double L_0 = ___x0;
		return ((float)((float)L_0));
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mD08B0C9F4C229BA812B0739A606A9C93CEA89245 (U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::<TraceNodeHierarchyShapes>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass17_0_U3CTraceNodeHierarchyShapesU3Eb__0_mE5A79C89CC4D362F1E3022FADE6B00C90381E338 (U3CU3Ec__DisplayClass17_0_tD794102FD2CF1E9EC2288A507A87B8A307CC7D3E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shapes.Add(tracedShape.Select(v => nodeInfo.WorldTransform * v).ToArray());
		SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * L_0 = __this->get_address_of_nodeInfo_0();
		Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_1 = L_0->get_WorldTransform_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Matrix2D_op_Multiply_m96C24A08E3E4A306A4FCBF3EBF6AC8317B46AF92(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mAC85BECCD3062597B117B9D3920BE54BC5625812 (U3CU3Ec__DisplayClass20_0_tDBECBD34BF42D57EC229ED5B0CE664C47DADD039 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::<TessellateShapeLibTess>b__1(Unity.VectorGraphics.External.LibTessDotNet.ContourVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass20_0_U3CTessellateShapeLibTessU3Eb__1_m5C1F575526E4BE13B90BD688F1A55149487256B7 (U3CU3Ec__DisplayClass20_0_tDBECBD34BF42D57EC229ED5B0CE664C47DADD039 * __this, ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  ___v0, const RuntimeMethod* method)
{
	{
		// var vertices = tess.Vertices.Select(v => invMat.MultiplyPoint(new Vector2(v.Position.X, v.Position.Y)));
		Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A * L_0 = __this->get_address_of_invMat_0();
		ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  L_1 = ___v0;
		Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  L_2 = L_1.get_Position_0();
		float L_3 = L_2.get_X_1();
		ContourVertex_t9D0043C242E0327A117589B07DD2AD78CBAD2DB1  L_4 = ___v0;
		Vec3_t56B1D30373A4DEF9AD4A5D8EFF877EA448110D53  L_5 = L_4.get_Position_0();
		float L_6 = L_5.get_Y_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), L_3, L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Matrix2D_MultiplyPoint_mF2A5687EBBCAB8B0682DA72983323897591215F9((Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A *)L_0, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m0FBB1B9E5CBEE5883730E0810F6742A6B094CE16 (U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_1__ctor_m1B5542AAC494F4FDC4D359E813B8BF08BF7E9F3C (U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::<FillVertexChannels>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass36_1_U3CFillVertexChannelsU3Eb__1_m235D7524D3D43E9395890ACD2159925D813E3895 (U3CU3Ec__DisplayClass36_1_tE3D576F65E484313130DDCA9EFA660E4CA25DD73 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertices.AddRange(geom.Vertices.Select(x => (geom.WorldTransform * x) / pixelsPerUnit));
		Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * L_0 = __this->get_geom_0();
		NullCheck(L_0);
		Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_1 = L_0->get_WorldTransform_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Matrix2D_op_Multiply_m96C24A08E3E4A306A4FCBF3EBF6AC8317B46AF92(L_1, L_2, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass36_0_t4C3AA37AB0521143738D334ACD35C2C1743D538D * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		float L_5 = L_4->get_pixelsPerUnit_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_3, L_5, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_2__ctor_m6520F11394B48AF2345120E70E5EAEEDE7683592 (U3CU3Ec__DisplayClass36_2_t815E8E84E3D1BF80DF2111E28396FD87EC82DEB2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::<FillVertexChannels>b__0(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t U3CU3Ec__DisplayClass36_2_U3CFillVertexChannelsU3Eb__0_mBFBD8A0BE092E1EA03C4DBC146CCB8499D679D87 (U3CU3Ec__DisplayClass36_2_t815E8E84E3D1BF80DF2111E28396FD87EC82DEB2 * __this, uint16_t ___x0, const RuntimeMethod* method)
{
	{
		// indices.AddRange(geom.Indices.Select(x => (UInt16)(x + vertexCount)));
		uint16_t L_0 = ___x0;
		int32_t L_1 = __this->get_vertexCount_0();
		return (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))));
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_m46E083C48EC31D237BD8039E5FE48ABDB46D3E67 (U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::<RenderSprite>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass41_0_U3CRenderSpriteU3Eb__0_m900568DE4FC99EC8ACCFB3293FA5BFD8B2AB8025 (U3CU3Ec__DisplayClass41_0_t6336D1E4FF27F6F067C396E958015B21FA266B5F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// new Vector2((v.x * pixelsToUnits + pivot.x)/spriteWidth,
		//             (v.y * pixelsToUnits + pivot.y)/spriteHeight)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get_pixelsToUnits_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_pivot_1();
		float L_4 = L_3->get_x_0();
		float L_5 = __this->get_spriteWidth_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___v0;
		float L_7 = L_6.get_y_1();
		float L_8 = __this->get_pixelsToUnits_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_pivot_1();
		float L_10 = L_9->get_y_1();
		float L_11 = __this->get_spriteHeight_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_4))/(float)L_5)), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_10))/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
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
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99__ctor_mF792BB7B993A5F5BFBB29220758DD680E29B2930 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m321D358D4E5F1EA488BC245C11E4272FFEAF74E1 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_003b;
	}

IL_0016:
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			goto IL_001e;
		}

IL_001e:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_0024;
			}
		}

IL_0022:
		{
			goto IL_0030;
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0027;
		}

FINALLY_0027:
		{ // begin finally (depth: 2)
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_mFDF3FACBB349AF711C3E66BA3546A9D1DD91466F(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(39)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(39)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2E, IL_002e)
		}

IL_002e:
		{
			goto IL_0030;
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_m87FAF159DE57B1F35ED4CE846E6C15C50F85E047(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		goto IL_003b;
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSceneNodesU3Ed__99_MoveNext_mB5C06035FF1C1DCCC9D92ACDFD00CAA87B9E7FA0 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8A6F60FF69465F4A9A4A18E7A1D20A68D1392B9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD76C1ACE2ADED0F383C062DE90C099A4787376EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
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
					goto IL_001f;
				}
			}
		}

IL_0019:
		{
			goto IL_0024;
		}

IL_001b:
		{
			goto IL_002b;
		}

IL_001d:
		{
			goto IL_004d;
		}

IL_001f:
		{
			goto IL_00e9;
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_014b;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return root;
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_2 = __this->get_root_3();
			__this->set_U3CU3E2__current_1(L_2);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_014b;
		}

IL_004d:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (root.Children != null)
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_3 = __this->get_root_3();
			NullCheck(L_3);
			List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * L_4;
			L_4 = SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline(L_3, /*hidden argument*/NULL);
			V_2 = (bool)((!(((RuntimeObject*)(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_013f;
			}
		}

IL_0069:
		{
			// foreach (var c in root.Children)
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_6 = __this->get_root_3();
			NullCheck(L_6);
			List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * L_7;
			L_7 = SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  L_8;
			L_8 = List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A(L_7, /*hidden argument*/List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A_RuntimeMethod_var);
			__this->set_U3CU3Es__1_5(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_011b;
		}

IL_008e:
		{
			// foreach (var c in root.Children)
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_9 = __this->get_address_of_U3CU3Es__1_5();
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_10;
			L_10 = Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_inline((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_9, /*hidden argument*/Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_RuntimeMethod_var);
			__this->set_U3CcU3E5__2_6(L_10);
			// foreach (var n in SceneNodes(c))
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_11 = __this->get_U3CcU3E5__2_6();
			IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
			RuntimeObject* L_12;
			L_12 = VectorUtils_SceneNodes_mB74AA5FD101DC321E99C8F48F71062F280797235(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode>::GetEnumerator() */, IEnumerable_1_t8A6F60FF69465F4A9A4A18E7A1D20A68D1392B9F_il2cpp_TypeInfo_var, L_12);
			__this->set_U3CU3Es__3_7(L_13);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00f8;
		}

IL_00c1:
		{
			// foreach (var n in SceneNodes(c))
			RuntimeObject* L_14 = __this->get_U3CU3Es__3_7();
			NullCheck(L_14);
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_15;
			L_15 = InterfaceFuncInvoker0< SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode>::get_Current() */, IEnumerator_1_tD76C1ACE2ADED0F383C062DE90C099A4787376EB_il2cpp_TypeInfo_var, L_14);
			__this->set_U3CnU3E5__4_8(L_15);
			// yield return n;
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_16 = __this->get_U3CnU3E5__4_8();
			__this->set_U3CU3E2__current_1(L_16);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_014b;
		}

IL_00e9:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			__this->set_U3CnU3E5__4_8((SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 *)NULL);
		}

IL_00f8:
		{
			// foreach (var n in SceneNodes(c))
			RuntimeObject* L_17 = __this->get_U3CU3Es__3_7();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_00c1;
			}
		}

IL_0105:
		{
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_mFDF3FACBB349AF711C3E66BA3546A9D1DD91466F(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__3_7((RuntimeObject*)NULL);
			__this->set_U3CcU3E5__2_6((SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 *)NULL);
		}

IL_011b:
		{
			// foreach (var c in root.Children)
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_19 = __this->get_address_of_U3CU3Es__1_5();
			bool L_20;
			L_20 = Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_19, /*hidden argument*/Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_008e;
			}
		}

IL_012b:
		{
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_m87FAF159DE57B1F35ED4CE846E6C15C50F85E047(__this, /*hidden argument*/NULL);
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_21 = __this->get_address_of_U3CU3Es__1_5();
			il2cpp_codegen_initobj(L_21, sizeof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 ));
		}

IL_013f:
		{
			// }
			V_0 = (bool)0;
			goto IL_014b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0143;
	}

FAULT_0143:
	{ // begin fault (depth: 1)
		U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m321D358D4E5F1EA488BC245C11E4272FFEAF74E1(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(323)
	} // end fault
	IL2CPP_CLEANUP(323)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014b:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_m87FAF159DE57B1F35ED4CE846E6C15C50F85E047 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_0 = __this->get_address_of_U3CU3Es__1_5();
		Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_0, /*hidden argument*/Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_mFDF3FACBB349AF711C3E66BA3546A9D1DD91466F (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3Es__3_7();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__3_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001c:
	{
		return;
	}
}
// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.SceneNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_SceneNodeU3E_get_Current_mCB4FF8B359C7C21C800D9491370D18478D7208AE (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	{
		SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_mA6E3EFEB7012D88B5DD542983C8D79DED4C70D9D (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_mA6E3EFEB7012D88B5DD542983C8D79DED4C70D9D_RuntimeMethod_var)));
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_get_Current_m3ACF90CD50745C3FBE3EFF6955E99AC9444739C4 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	{
		SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.SceneNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_m822DF7752E1FBEA1F6F8339DC5207A01350799E6 (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * L_3 = (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B *)il2cpp_codegen_object_new(U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B_il2cpp_TypeInfo_var);
		U3CSceneNodesU3Ed__99__ctor_mF792BB7B993A5F5BFBB29220758DD680E29B2930(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * L_4 = V_0;
		SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_IEnumerable_GetEnumerator_m3F5297092FC2916C312220C996C4ACF3A86EBE5F (U3CSceneNodesU3Ed__99_t629D79AB160A7CEE115744EA6A66F9AD93D4819B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_m822DF7752E1FBEA1F6F8339DC5207A01350799E6(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106__ctor_m2B11E7059A9F99D3AAE6D9E312E6FC99FEB4F145 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106_System_IDisposable_Dispose_mF7DBBAD68B2A1E19198403F10BD4139DA6E374A0 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSegmentsInPathU3Ed__106_MoveNext_m094EED641E222FF17EFD1905FE96B157AABFB2E4 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t81DC87EEB79E33E6866677E23B5E9C0F7BBE4984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6040F74F977121047DB1B2592D5A737F1928C68E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
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
		goto IL_00ed;
	}

IL_0022:
	{
		goto IL_0192;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var e = segments.GetEnumerator();
		RuntimeObject* L_2 = __this->get_segments_3();
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment>::GetEnumerator() */, IEnumerable_1_t81DC87EEB79E33E6866677E23B5E9C0F7BBE4984_il2cpp_TypeInfo_var, L_2);
		__this->set_U3CeU3E5__1_7(L_3);
		// if (!e.MoveNext())
		RuntimeObject* L_4 = __this->get_U3CeU3E5__1_7();
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0056:
	{
		// var s1 = e.Current;
		RuntimeObject* L_7 = __this->get_U3CeU3E5__1_7();
		NullCheck(L_7);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_8;
		L_8 = InterfaceFuncInvoker0< BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>::get_Current() */, IEnumerator_1_t6040F74F977121047DB1B2592D5A737F1928C68E_il2cpp_TypeInfo_var, L_7);
		__this->set_U3Cs1U3E5__2_8(L_8);
		// if (!e.MoveNext())
		RuntimeObject* L_9 = __this->get_U3CeU3E5__1_7();
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_007b:
	{
		// var s2 = e.Current;
		RuntimeObject* L_12 = __this->get_U3CeU3E5__1_7();
		NullCheck(L_12);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_13;
		L_13 = InterfaceFuncInvoker0< BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>::get_Current() */, IEnumerator_1_t6040F74F977121047DB1B2592D5A737F1928C68E_il2cpp_TypeInfo_var, L_12);
		__this->set_U3Cs2U3E5__3_9(L_13);
		// yield return new BezierSegment { P0 = s1.P0, P1 = s1.P1, P2 = s1.P2, P3 = s2.P0 };
		il2cpp_codegen_initobj((&V_3), sizeof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8 ));
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_14 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14->get_P0_0();
		(&V_3)->set_P0_0(L_15);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_16 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = L_16->get_P1_1();
		(&V_3)->set_P1_1(L_17);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_18 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = L_18->get_P2_2();
		(&V_3)->set_P2_2(L_19);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_20 = __this->get_address_of_U3Cs2U3E5__3_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = L_20->get_P0_0();
		(&V_3)->set_P3_3(L_21);
		BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  L_22 = V_3;
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ed:
	{
		__this->set_U3CU3E1__state_0((-1));
		// s1 = s2;
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_23 = __this->get_U3Cs2U3E5__3_9();
		__this->set_U3Cs1U3E5__2_8(L_23);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_24 = __this->get_address_of_U3Cs2U3E5__3_9();
		il2cpp_codegen_initobj(L_24, sizeof(BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 ));
		// while (e.MoveNext());
		RuntimeObject* L_25 = __this->get_U3CeU3E5__1_7();
		NullCheck(L_25);
		bool L_26;
		L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
		V_4 = L_26;
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_007b;
		}
	}
	{
		// if (closed)
		bool L_28 = __this->get_closed_5();
		V_5 = L_28;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0199;
		}
	}
	{
		// yield return new BezierSegment { P0 = s1.P0, P1 = s1.P1, P2 = s1.P2, P3 = segments.First().P0 };
		il2cpp_codegen_initobj((&V_3), sizeof(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8 ));
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_30 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = L_30->get_P0_0();
		(&V_3)->set_P0_0(L_31);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_32 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = L_32->get_P1_1();
		(&V_3)->set_P1_1(L_33);
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32 * L_34 = __this->get_address_of_U3Cs1U3E5__2_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = L_34->get_P2_2();
		(&V_3)->set_P2_2(L_35);
		RuntimeObject* L_36 = __this->get_segments_3();
		BezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32  L_37;
		L_37 = Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504(L_36, /*hidden argument*/Enumerable_First_TisBezierPathSegment_tA8EB09655F59218CD6F7F6307BEC47BE6FD53E32_m90B21EB92EE90349F49307B24B38C79EEFCF3504_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = L_37.get_P0_0();
		(&V_3)->set_P3_3(L_38);
		BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  L_39 = V_3;
		__this->set_U3CU3E2__current_1(L_39);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0192:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0199:
	{
		// }
		return (bool)0;
	}
}
// Unity.VectorGraphics.BezierSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.BezierSegment>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_BezierSegmentU3E_get_Current_m02E6F1109E946127EC7F52E7C0B5CDEFE932D5D8 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	{
		BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_m9952BBA3C9E72A72E613F08035B4BE6EC830AEB0 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_m9952BBA3C9E72A72E613F08035B4BE6EC830AEB0_RuntimeMethod_var)));
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_get_Current_m1B9C7EDB26447A89BA2C2E5C89CAB3927C1722DD (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  L_0 = __this->get_U3CU3E2__current_1();
		BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8  L_1 = L_0;
		RuntimeObject * L_2 = Box(BezierSegment_t398CE7229B3AD5B8A8487BB670356DF22E14D4A8_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.BezierSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_m83D47A56E0852CB9A598AA43E2890F0F32A8ECD8 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * L_3 = (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 *)il2cpp_codegen_object_new(U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764_il2cpp_TypeInfo_var);
		U3CSegmentsInPathU3Ed__106__ctor_m2B11E7059A9F99D3AAE6D9E312E6FC99FEB4F145(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__segments_4();
		NullCheck(L_4);
		L_4->set_segments_3(L_5);
		U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__closed_6();
		NullCheck(L_6);
		L_6->set_closed_5(L_7);
		U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerable_GetEnumerator_m9D4D774B2F23A6754001CF4E093401C74A34E0C4 (U3CSegmentsInPathU3Ed__106_t5E4244CA113911B35ABE53234DE6A3980E521764 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_m83D47A56E0852CB9A598AA43E2890F0F32A8ECD8(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101__ctor_mEB0DD4116137BFE4C2932B37B7921B9E410D381F (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_m3DDADB7CA06AF1E885046E1AD1BF7839158028B8 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_003b;
	}

IL_0016:
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			goto IL_001e;
		}

IL_001e:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_0024;
			}
		}

IL_0022:
		{
			goto IL_0030;
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0027;
		}

FINALLY_0027:
		{ // begin finally (depth: 2)
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_m1052EA806B9D6DC4B1700323770FD91B28A67A3D(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(39)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(39)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2E, IL_002e)
		}

IL_002e:
		{
			goto IL_0030;
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_mDFE0C28545CA38C0F595E330328E3E6366B5C43D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		goto IL_003b;
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWorldTransformedSceneNodesU3Ed__101_MoveNext_m4CEAC2F6E471D827AD2717E629B021E950E7BAC8 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m05509E6A14EDA2A633FCAF1EC44C8D1B384FDD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t196487AD6C47BD9264C554C195DDB75164AFC91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tFAB75141FC5673AE13267C47B573D1868380F822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B9_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
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

IL_0019:
		{
			goto IL_0027;
		}

IL_001b:
		{
			goto IL_002e;
		}

IL_001d:
		{
			goto IL_00f8;
		}

IL_0022:
		{
			goto IL_01a2;
		}

IL_0027:
		{
			V_0 = (bool)0;
			goto IL_0209;
		}

IL_002e:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var childOpacity = 1.0f;
			__this->set_U3CchildOpacityU3E5__1_9((1.0f));
			// if (nodeOpacities == null || !nodeOpacities.TryGetValue(child, out childOpacity))
			Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_2 = __this->get_nodeOpacities_5();
			if (!L_2)
			{
				goto IL_0065;
			}
		}

IL_0049:
		{
			Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_3 = __this->get_nodeOpacities_5();
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_4 = __this->get_child_3();
			float* L_5 = __this->get_address_of_U3CchildOpacityU3E5__1_9();
			NullCheck(L_3);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_m05509E6A14EDA2A633FCAF1EC44C8D1B384FDD6A(L_3, L_4, (float*)L_5, /*hidden argument*/Dictionary_2_TryGetValue_m05509E6A14EDA2A633FCAF1EC44C8D1B384FDD6A_RuntimeMethod_var);
			G_B9_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			goto IL_0066;
		}

IL_0065:
		{
			G_B9_0 = 1;
		}

IL_0066:
		{
			V_2 = (bool)G_B9_0;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0075;
			}
		}

IL_006a:
		{
			// childOpacity = 1.0f;
			__this->set_U3CchildOpacityU3E5__1_9((1.0f));
		}

IL_0075:
		{
			// var childWorldTransform = new SceneNodeWorldTransform()
			// {
			//     Node = child,
			//     WorldTransform = parent.WorldTransform * child.Transform,
			//     WorldOpacity = parent.WorldOpacity * childOpacity,
			//     Parent = parent.Node
			// };
			il2cpp_codegen_initobj((&V_3), sizeof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 ));
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_8 = __this->get_child_3();
			(&V_3)->set_Node_0(L_8);
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * L_9 = __this->get_address_of_parent_7();
			Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_10 = L_9->get_WorldTransform_2();
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_11 = __this->get_child_3();
			NullCheck(L_11);
			Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_12;
			L_12 = SceneNode_get_Transform_mE9DCDA7C06270EC2B31A79C23372647F6D444278(L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A_il2cpp_TypeInfo_var);
			Matrix2D_t9FEB0A1987E5343B24844F15F61CD8DAEF38058A  L_13;
			L_13 = Matrix2D_op_Multiply_mEAE60DC5F2CC3707315A48949CD5840E691C73ED(L_10, L_12, /*hidden argument*/NULL);
			(&V_3)->set_WorldTransform_2(L_13);
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * L_14 = __this->get_address_of_parent_7();
			float L_15 = L_14->get_WorldOpacity_3();
			float L_16 = __this->get_U3CchildOpacityU3E5__1_9();
			(&V_3)->set_WorldOpacity_3(((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)));
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * L_17 = __this->get_address_of_parent_7();
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_18 = L_17->get_Node_0();
			(&V_3)->set_Parent_1(L_18);
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_19 = V_3;
			__this->set_U3CchildWorldTransformU3E5__2_10(L_19);
			// yield return childWorldTransform;
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_20 = __this->get_U3CchildWorldTransformU3E5__2_10();
			__this->set_U3CU3E2__current_1(L_20);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0209;
		}

IL_00f8:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (child.Children != null)
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_21 = __this->get_child_3();
			NullCheck(L_21);
			List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * L_22;
			L_22 = SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline(L_21, /*hidden argument*/NULL);
			V_4 = (bool)((!(((RuntimeObject*)(List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 *)L_22) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_23 = V_4;
			if (!L_23)
			{
				goto IL_01fd;
			}
		}

IL_0116:
		{
			// foreach (var c in child.Children)
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_24 = __this->get_child_3();
			NullCheck(L_24);
			List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * L_25;
			L_25 = SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7  L_26;
			L_26 = List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A(L_25, /*hidden argument*/List_1_GetEnumerator_mE922CD5F7399302B8E44CCCED9E26F5811CD002A_RuntimeMethod_var);
			__this->set_U3CU3Es__3_11(L_26);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_01d9;
		}

IL_013b:
		{
			// foreach (var c in child.Children)
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_27 = __this->get_address_of_U3CU3Es__3_11();
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_28;
			L_28 = Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_inline((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_27, /*hidden argument*/Enumerator_get_Current_mB80CB968BAF572B3C3AF8F828562A977D66CBF31_RuntimeMethod_var);
			__this->set_U3CcU3E5__4_12(L_28);
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_29 = __this->get_U3CcU3E5__4_12();
			Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_30 = __this->get_nodeOpacities_5();
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_31 = __this->get_U3CchildWorldTransformU3E5__2_10();
			IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
			RuntimeObject* L_32;
			L_32 = VectorUtils_WorldTransformedSceneNodes_m3E7307A4D7D0CD5ECDC1AA0F037DE4CB0E727A67(L_29, L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			RuntimeObject* L_33;
			L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>::GetEnumerator() */, IEnumerable_1_t196487AD6C47BD9264C554C195DDB75164AFC91A_il2cpp_TypeInfo_var, L_32);
			__this->set_U3CU3Es__5_13(L_33);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_01b6;
		}

IL_017a:
		{
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			RuntimeObject* L_34 = __this->get_U3CU3Es__5_13();
			NullCheck(L_34);
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_35;
			L_35 = InterfaceFuncInvoker0< SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>::get_Current() */, IEnumerator_1_tFAB75141FC5673AE13267C47B573D1868380F822_il2cpp_TypeInfo_var, L_34);
			__this->set_U3CnU3E5__6_14(L_35);
			// yield return n;
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_36 = __this->get_U3CnU3E5__6_14();
			__this->set_U3CU3E2__current_1(L_36);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0209;
		}

IL_01a2:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 * L_37 = __this->get_address_of_U3CnU3E5__6_14();
			il2cpp_codegen_initobj(L_37, sizeof(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55 ));
		}

IL_01b6:
		{
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			RuntimeObject* L_38 = __this->get_U3CU3Es__5_13();
			NullCheck(L_38);
			bool L_39;
			L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_017a;
			}
		}

IL_01c3:
		{
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_m1052EA806B9D6DC4B1700323770FD91B28A67A3D(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__5_13((RuntimeObject*)NULL);
			__this->set_U3CcU3E5__4_12((SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 *)NULL);
		}

IL_01d9:
		{
			// foreach (var c in child.Children)
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_40 = __this->get_address_of_U3CU3Es__3_11();
			bool L_41;
			L_41 = Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_40, /*hidden argument*/Enumerator_MoveNext_m481B41CB46E3F9003D8115473AF93B8529702436_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_013b;
			}
		}

IL_01e9:
		{
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_mDFE0C28545CA38C0F595E330328E3E6366B5C43D(__this, /*hidden argument*/NULL);
			Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_42 = __this->get_address_of_U3CU3Es__3_11();
			il2cpp_codegen_initobj(L_42, sizeof(Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 ));
		}

IL_01fd:
		{
			// }
			V_0 = (bool)0;
			goto IL_0209;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0201;
	}

FAULT_0201:
	{ // begin fault (depth: 1)
		U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_m3DDADB7CA06AF1E885046E1AD1BF7839158028B8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(513)
	} // end fault
	IL2CPP_CLEANUP(513)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0209:
	{
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_mDFE0C28545CA38C0F595E330328E3E6366B5C43D (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 * L_0 = __this->get_address_of_U3CU3Es__3_11();
		Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2((Enumerator_tC8838EA5B9131E4F55FB7555FE4E86FCC52D69F7 *)L_0, /*hidden argument*/Enumerator_Dispose_mACA8CC4BDE976A837F9650F7A999F0DB922073E2_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_m1052EA806B9D6DC4B1700323770FD91B28A67A3D (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3Es__5_13();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__5_13();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001c:
	{
		return;
	}
}
// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_get_Current_m158B8C3B1D598948E52B827BBBCAB3E39F0793D6 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	{
		SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mAD9DB9B9BFA426ADD5C9CF4845CB924E3B18700B (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mAD9DB9B9BFA426ADD5C9CF4845CB924E3B18700B_RuntimeMethod_var)));
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_get_Current_mA9AF559EB26EFC422320AEB8C5495F415749E065 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_0 = __this->get_U3CU3E2__current_1();
		SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_1 = L_0;
		RuntimeObject * L_2 = Box(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m79C7CB915C99C9DF7B89C384C5A18A7947ACE6D6 (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * L_3 = (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA *)il2cpp_codegen_object_new(U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA_il2cpp_TypeInfo_var);
		U3CWorldTransformedSceneNodesU3Ed__101__ctor_mEB0DD4116137BFE4C2932B37B7921B9E410D381F(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * L_4 = V_0;
		SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * L_5 = __this->get_U3CU3E3__child_4();
		NullCheck(L_4);
		L_4->set_child_3(L_5);
		U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * L_6 = V_0;
		Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_7 = __this->get_U3CU3E3__nodeOpacities_6();
		NullCheck(L_6);
		L_6->set_nodeOpacities_5(L_7);
		U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * L_8 = V_0;
		SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55  L_9 = __this->get_U3CU3E3__parent_8();
		NullCheck(L_8);
		L_8->set_parent_7(L_9);
		U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerable_GetEnumerator_m7B3A9D27C073311E66FCDCB5FA3BC44A2DDD200C (U3CWorldTransformedSceneNodesU3Ed__101_t4C945BFD262D944DF7D8806BFC20D8628F639DAA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m79C7CB915C99C9DF7B89C384C5A18A7947ACE6D6(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/AtlasEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasEntry__ctor_mCA0EBE948EF8B6A08E5E05484D12A60CE448B161 (AtlasEntry_t0FA28B511DFADD48E4D85B19C273DAA71F3E9403 * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.VectorUtils/Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_mA292C579C373B1698E581D52474FFFCD390C0935 (Geometry_t5D4101B21AB4BDE0BF29E01741A716DE1F2C94C5 * __this, const RuntimeMethod* method)
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
// System.Void Unity.VectorGraphics.VectorUtils/JoiningInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoiningInfo__ctor_m6A8B797E710995976612484C4861C88EC1FB3049 (JoiningInfo_t796DC11294578E73D8598E7659A6BF077066FA3D * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_pinvoke(const PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9& unmarshaled, PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_pinvoke_back(const PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_pinvoke& marshaled, PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9& unmarshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_pinvoke_cleanup(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_com(const PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9& unmarshaled, PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_com& marshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_com_back(const PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_com& marshaled, PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9& unmarshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshal_com_cleanup(PackRectItem_t1829F379A4935ED851158935D4C906D84542CCE9_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_pinvoke(const RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0& unmarshaled, RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_Rgba_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Rgba_Length = (unmarshaled.get_Rgba_0())->max_length;
		marshaled.___Rgba_0 = il2cpp_codegen_marshal_allocate_array<Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D >(_unmarshaled_Rgba_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Rgba_Length); i++)
		{
			(marshaled.___Rgba_0)[i] = (unmarshaled.get_Rgba_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Rgba_0 = NULL;
	}
	marshaled.___Width_1 = unmarshaled.get_Width_1();
	marshaled.___Height_2 = unmarshaled.get_Height_2();
}
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_pinvoke_back(const RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_pinvoke& marshaled, RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Rgba_0 != NULL)
	{
		if (unmarshaled.get_Rgba_0() == NULL)
		{
			unmarshaled.set_Rgba_0(reinterpret_cast<Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*>((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Rgba_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Rgba_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Rgba_0)[i]);
		}
	}
	int32_t unmarshaled_Width_temp_1 = 0;
	unmarshaled_Width_temp_1 = marshaled.___Width_1;
	unmarshaled.set_Width_1(unmarshaled_Width_temp_1);
	int32_t unmarshaled_Height_temp_2 = 0;
	unmarshaled_Height_temp_2 = marshaled.___Height_2;
	unmarshaled.set_Height_2(unmarshaled_Height_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_pinvoke_cleanup(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Rgba_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Rgba_0);
		marshaled.___Rgba_0 = NULL;
	}
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_com(const RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0& unmarshaled, RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_com& marshaled)
{
	if (unmarshaled.get_Rgba_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Rgba_Length = (unmarshaled.get_Rgba_0())->max_length;
		marshaled.___Rgba_0 = il2cpp_codegen_marshal_allocate_array<Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D >(_unmarshaled_Rgba_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Rgba_Length); i++)
		{
			(marshaled.___Rgba_0)[i] = (unmarshaled.get_Rgba_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Rgba_0 = NULL;
	}
	marshaled.___Width_1 = unmarshaled.get_Width_1();
	marshaled.___Height_2 = unmarshaled.get_Height_2();
}
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_com_back(const RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_com& marshaled, RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Rgba_0 != NULL)
	{
		if (unmarshaled.get_Rgba_0() == NULL)
		{
			unmarshaled.set_Rgba_0(reinterpret_cast<Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*>((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Rgba_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Rgba_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Rgba_0)[i]);
		}
	}
	int32_t unmarshaled_Width_temp_1 = 0;
	unmarshaled_Width_temp_1 = marshaled.___Width_1;
	unmarshaled.set_Width_1(unmarshaled_Width_temp_1);
	int32_t unmarshaled_Height_temp_2 = 0;
	unmarshaled_Height_temp_2 = marshaled.___Height_2;
	unmarshaled.set_Height_2(unmarshaled_Height_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshal_com_cleanup(RawTexture_t7B867559CA645A9238712D3E12901B82BE0E23E0_marshaled_com& marshaled)
{
	if (marshaled.___Rgba_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Rgba_0);
		marshaled.___Rgba_0 = NULL;
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
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_pinvoke(const SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55& unmarshaled, SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_pinvoke_back(const SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_pinvoke& marshaled, SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_pinvoke_cleanup(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_com(const SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55& unmarshaled, SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_com& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_com_back(const SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_com& marshaled, SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshal_com_cleanup(SceneNodeWorldTransform_tE93E3660978B36A56581F353F4783D130FF65D55_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_StepDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_m0F4DDE68718CEDC76140D2D9240D900344A98607 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } 
		float L_0 = __this->get_U3CStepDistanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_StepDistance_m0F4DDE68718CEDC76140D2D9240D900344A98607_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_StepDistance_m0F4DDE68718CEDC76140D2D9240D900344A98607_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_StepDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m98F13325F81482D5062E22382E2BF735396EC638 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } 
		float L_0 = ___value0;
		__this->set_U3CStepDistanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_StepDistance_m98F13325F81482D5062E22382E2BF735396EC638_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	TessellationOptions_set_StepDistance_m98F13325F81482D5062E22382E2BF735396EC638_inline(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviation_m89CD1C3DED3F0A400E6EBA834700F3B4F1530BD7 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_MaxCordDev; }
		float L_0 = __this->get_m_MaxCordDev_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MaxCordDev; }
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxCordDeviation_m89CD1C3DED3F0A400E6EBA834700F3B4F1530BD7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_MaxCordDeviation_m89CD1C3DED3F0A400E6EBA834700F3B4F1530BD7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxCordDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxCordDeviation_mE8EBE44FBE2B25C902CBD204056DE29D825843E1 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method)
{
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * G_B2_0 = NULL;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * G_B3_1 = NULL;
	{
		// m_MaxCordDev = Mathf.Max(value, 0.0f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.0f), /*hidden argument*/NULL);
		__this->set_m_MaxCordDev_0(L_1);
		// m_MaxCordDevSq = (m_MaxCordDev == float.MaxValue) ? float.MaxValue : m_MaxCordDev * m_MaxCordDev;
		float L_2 = __this->get_m_MaxCordDev_0();
		G_B1_0 = __this;
		if ((((float)L_2) == ((float)((std::numeric_limits<float>::max)()))))
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		float L_3 = __this->get_m_MaxCordDev_0();
		float L_4 = __this->get_m_MaxCordDev_0();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = ((std::numeric_limits<float>::max)());
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		G_B3_1->set_m_MaxCordDevSq_1(G_B3_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_MaxCordDeviation_mE8EBE44FBE2B25C902CBD204056DE29D825843E1_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	TessellationOptions_set_MaxCordDeviation_mE8EBE44FBE2B25C902CBD204056DE29D825843E1(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviationSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviationSquared_mA3DF07C8A7EE7D5007996DA4735D6DE83C71B95A (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// internal float MaxCordDeviationSquared { get { return m_MaxCordDevSq; } }
		float L_0 = __this->get_m_MaxCordDevSq_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// internal float MaxCordDeviationSquared { get { return m_MaxCordDevSq; } }
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxCordDeviationSquared_mA3DF07C8A7EE7D5007996DA4735D6DE83C71B95A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_MaxCordDeviationSquared_mA3DF07C8A7EE7D5007996DA4735D6DE83C71B95A(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviation_m8EEA3A19FF9B07B28BD0CCE9FA7351AC328B8A41 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_MaxTanAngleDev; }
		float L_0 = __this->get_m_MaxTanAngleDev_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MaxTanAngleDev; }
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxTanAngleDeviation_m8EEA3A19FF9B07B28BD0CCE9FA7351AC328B8A41_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_MaxTanAngleDeviation_m8EEA3A19FF9B07B28BD0CCE9FA7351AC328B8A41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxTanAngleDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxTanAngleDeviation_mAFD8C0B7382CC21CB8BCE3425D442A5E326EAF06 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MaxTanAngleDev = Mathf.Clamp(value, VectorUtils.Epsilon, Mathf.PI * 0.5f);
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		float L_1 = ((VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var))->get_Epsilon_1();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (1.57079637f), /*hidden argument*/NULL);
		__this->set_m_MaxTanAngleDev_2(L_2);
		// m_MaxTanAngleDevCosine = Mathf.Cos(m_MaxTanAngleDev);
		float L_3 = __this->get_m_MaxTanAngleDev_2();
		float L_4;
		L_4 = cosf(L_3);
		__this->set_m_MaxTanAngleDevCosine_3(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_MaxTanAngleDeviation_mAFD8C0B7382CC21CB8BCE3425D442A5E326EAF06_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	TessellationOptions_set_MaxTanAngleDeviation_mAFD8C0B7382CC21CB8BCE3425D442A5E326EAF06(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviationCosine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviationCosine_m445975E51CF2B97382F9F86BCC744017AA4C3A53 (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// internal float MaxTanAngleDeviationCosine { get { return m_MaxTanAngleDevCosine; } } 
		float L_0 = __this->get_m_MaxTanAngleDevCosine_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// internal float MaxTanAngleDeviationCosine { get { return m_MaxTanAngleDevCosine; } } 
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxTanAngleDeviationCosine_m445975E51CF2B97382F9F86BCC744017AA4C3A53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_MaxTanAngleDeviationCosine_m445975E51CF2B97382F9F86BCC744017AA4C3A53(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_SamplingStepSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_SamplingStepSize_mE6E0ABE5A95A632946FDC16AB70CE95929A7E32B (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_StepSize; }
		float L_0 = __this->get_m_StepSize_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_StepSize; }
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_SamplingStepSize_mE6E0ABE5A95A632946FDC16AB70CE95929A7E32B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	float _returnValue;
	_returnValue = TessellationOptions_get_SamplingStepSize_mE6E0ABE5A95A632946FDC16AB70CE95929A7E32B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_SamplingStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_SamplingStepSize_mB06AB77FAC57FD1C9790DDF390F9D976D17501AE (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_StepSize = Mathf.Clamp(value, Epsilon, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var);
		float L_1 = ((VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tEEECBACCC106F6EA408140F81B76ECAD4CBCBE2C_il2cpp_TypeInfo_var))->get_Epsilon_1();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		__this->set_m_StepSize_4(L_2);
		// set { m_StepSize = Mathf.Clamp(value, Epsilon, 1.0f); }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_SamplingStepSize_mB06AB77FAC57FD1C9790DDF390F9D976D17501AE_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * _thisAdjusted = reinterpret_cast<TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED *>(__this + _offset);
	TessellationOptions_set_SamplingStepSize_mB06AB77FAC57FD1C9790DDF390F9D976D17501AE(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D Unity.VectorGraphics.VectorUtils/TextureAtlas::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureAtlas_get_Texture_m7E786BC658B70D000A78A51BE4B45651F8E582B1 (TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE * __this, const RuntimeMethod* method)
{
	{
		// public Texture2D Texture { get; set; }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_U3CTextureU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::set_Texture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas_set_Texture_m1F96A0AF7F9EE1C7F5EE61EFA0A72F48BE48F8B3 (TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method)
{
	{
		// public Texture2D Texture { get; set; }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___value0;
		__this->set_U3CTextureU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem> Unity.VectorGraphics.VectorUtils/TextureAtlas::get_Entries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * TextureAtlas_get_Entries_m654CE29474AF07B03F4D63AAA8C57645F9FB82FB (TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE * __this, const RuntimeMethod* method)
{
	{
		// public List<PackRectItem> Entries { get; set; }
		List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * L_0 = __this->get_U3CEntriesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::set_Entries(System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas_set_Entries_m197571539D091CD1BF65315970EAC531390BB3D0 (TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE * __this, List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * ___value0, const RuntimeMethod* method)
{
	{
		// public List<PackRectItem> Entries { get; set; }
		List_1_t4FBAD6CAB22A40E43D0DBC5FAF84767F6DFBD61F * L_0 = ___value0;
		__this->set_U3CEntriesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas__ctor_m8EF86BEAB8F41CC0F2CA43B28748A98AABD79129 (TextureAtlas_tBECEA665BB55FBAFD3190FD6B08D238D228B79CE * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.XmlReaderIterator/Node::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m193A5BB876B35C159BD812D653BE2DA2868A0844 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	{
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_1 = ___reader0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_1);
		__this->set_name_2(L_2);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_3 = ___reader0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_3);
		__this->set_depth_1(L_4);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		return;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Name_mBC85F210FBC0E4EA726478AFCB757CFC01EC1B5F (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->get_name_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Name { get { return name; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Item_m933F1BCB78B5D69876215C4EEEC99930FFD6E743 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, String_t* ___attrib0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string this[string attrib] { get { return reader.GetAttribute(attrib); } }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___attrib0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// public string this[string attrib] { get { return reader.GetAttribute(attrib); } }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Unity.VectorGraphics.SVGPropertySheet Unity.VectorGraphics.XmlReaderIterator/Node::GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * Node_GetAttributes_mF89B5F0D17E43531B602A3A50464927510ABCBBD (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * V_3 = NULL;
	{
		// var atts = new SVGPropertySheet();
		SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * L_0 = (SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B *)il2cpp_codegen_object_new(SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B_il2cpp_TypeInfo_var);
		SVGPropertySheet__ctor_m8108349D50AE8652836D5F3CCDFF17C793D7DE18(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < reader.AttributeCount; ++i)
		V_1 = 0;
		goto IL_003b;
	}

IL_000b:
	{
		// reader.MoveToAttribute(i);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_1 = __this->get_reader_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(20 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_1, L_2);
		// atts[reader.Name] = reader.Value;
		SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * L_3 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_4 = __this->get_reader_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_4);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_6);
		NullCheck(L_3);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_3, L_5, L_7, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// for (int i = 0; i < reader.AttributeCount; ++i)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < reader.AttributeCount; ++i)
		int32_t L_9 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_10 = __this->get_reader_0();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000b;
		}
	}
	{
		// reader.MoveToElement();
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_13 = __this->get_reader_0();
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_13);
		// return atts;
		SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * L_15 = V_0;
		V_3 = L_15;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		SVGPropertySheet_tC76086212C7B060A34F88070DED90D172ACC977B * L_16 = V_3;
		return L_16;
	}
}
// Unity.VectorGraphics.SVGFormatException Unity.VectorGraphics.XmlReaderIterator/Node::GetException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * Node_GetException_m8CC60D6A24F59257F74D68F5AC201A2C78A67C64 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * V_0 = NULL;
	{
		// public SVGFormatException GetException(string message) { return new SVGFormatException(reader, message); }
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___message0;
		SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * L_2 = (SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 *)il2cpp_codegen_object_new(SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365_il2cpp_TypeInfo_var);
		SVGFormatException__ctor_m70CF4F1055844D66EAC2D0987F959FC5D35E3826(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// public SVGFormatException GetException(string message) { return new SVGFormatException(reader, message); }
		SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * L_3 = V_0;
		return L_3;
	}
}
// Unity.VectorGraphics.SVGFormatException Unity.VectorGraphics.XmlReaderIterator/Node::GetUnsupportedAttribValException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * Node_GetUnsupportedAttribValException_m041E6F90029B838CD9830B68B87C12397195DB90 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, String_t* ___attrib0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85CD8CD950B600E48BFACED9C67029C5A068FF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2A6B7FB4DEDFA8C4D3CF4F588BE4B302ECB342A);
		s_Il2CppMethodInitialized = true;
	}
	SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * V_0 = NULL;
	{
		// return new SVGFormatException(reader, "Value '" + this[attrib] + "' is invalid for attribute '" + attrib + "'");
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralC2A6B7FB4DEDFA8C4D3CF4F588BE4B302ECB342A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC2A6B7FB4DEDFA8C4D3CF4F588BE4B302ECB342A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		String_t* L_4 = ___attrib0;
		String_t* L_5;
		L_5 = Node_get_Item_m933F1BCB78B5D69876215C4EEEC99930FFD6E743(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB85CD8CD950B600E48BFACED9C67029C5A068FF5);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB85CD8CD950B600E48BFACED9C67029C5A068FF5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___attrib0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * L_11 = (SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 *)il2cpp_codegen_object_new(SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365_il2cpp_TypeInfo_var);
		SVGFormatException__ctor_m70CF4F1055844D66EAC2D0987F959FC5D35E3826(L_11, L_0, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		SVGFormatException_tA10BA8170077125FEE54956E64590669D3297365 * L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Depth_m4691EA190CB8DDFFD8F0000A36B3DB2D3F6DEF09 (Node_t22B79CD13BA1A7FD5BAA2EFA142D2A943B39E53B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int Depth { get { return depth; } }
		int32_t L_0 = __this->get_depth_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int Depth { get { return depth; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * SceneInfo_get_Scene_m1D2A4FBDAF65ED700B36E8CFF691954B2F9B2035_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Scene Scene { get; }
		Scene_tA0C357E44D552F39271241DAB7888CDC0569AE80 * L_0 = __this->get_U3CSceneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  SceneInfo_get_SceneViewport_mA2BC970E909BAF2CBB3F802F715775C34969A03C_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Rect SceneViewport { get; }
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_U3CSceneViewportU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * SceneInfo_get_NodeOpacity_m152503CE57E275C60CBCD8447AAC9EDFEF3C60B1_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<SceneNode, float> NodeOpacity { get; }
		Dictionary_2_tF94EC9DCD3C81A850266CE2B7C2E6EB945145929 * L_0 = __this->get_U3CNodeOpacityU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * SceneInfo_get_NodeIDs_m0FAA59B46F4CF3D2E20D665350812B44F1458C55_inline (SceneInfo_t65711CC9E5D58D47FE72517C63596CD8F1F18069 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, SceneNode> NodeIDs { get; }
		Dictionary_2_tCD5E792E484F2750A8BCDEE387CB92BBF9E1CFB8 * L_0 = __this->get_U3CNodeIDsU3Ek__BackingField_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * SceneNode_get_Children_m4F9D0D98F452C811DDC19489628D68B9E78AB223_inline (SceneNode_tFBF2A051305780F683E0CF463F5808F2A1C46483 * __this, const RuntimeMethod* method)
{
	{
		// public List<SceneNode> Children { get; set; }
		List_1_t127D889C069CE5E0F40E410A82C262922D3DC633 * L_0 = __this->get_U3CChildrenU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_m0F4DDE68718CEDC76140D2D9240D900344A98607_inline (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } 
		float L_0 = __this->get_U3CStepDistanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m98F13325F81482D5062E22382E2BF735396EC638_inline (TessellationOptions_t7852AAB372DBE924B1709FB7C794213F740D3CED * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } 
		float L_0 = ___value0;
		__this->set_U3CStepDistanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
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
