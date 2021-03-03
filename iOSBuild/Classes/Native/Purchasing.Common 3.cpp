#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15;
// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3F22DA985E0FE7B1E668E81F7252190BF1AE4BF6 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
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


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.Purchasing.MiniJSON.Json
struct  Json_t41EC6125F8AD4F7F582EDFEDBC24DD378859A016  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// UnityEngine.Purchasing.MiniJson
struct  MiniJson_t2F6DFC9B92071AC4361297BC1FC793BAB99E4317  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions
struct  MiniJsonExtensions_t6BDDA314F06CB3FDF0AFA82FEE35887282D1109C  : public RuntimeObject
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct  Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15  : public RuntimeObject
{
public:
	// System.IO.StringReader UnityEngine.Purchasing.MiniJSON.Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct  Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Purchasing.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
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


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
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
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
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


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
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


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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

// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN
struct  TOKEN_tEF9B6B162F044684FCC02212E281F99025EB7F50 
{
public:
	// System.Int32 UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tEF9B6B162F044684FCC02212E281F99025EB7F50, ___value___2)); }
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

// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Purchasing.UnityPurchasingCallback
struct  UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA  : public MulticastDelegate_t
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mB25F84DD0C80F1149B15C813960BDE937B9DA673 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m566130639F2B1AB1950B06B5944F6218CE386367 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m8D55693F14A78BECE27034F3B302E495A3144F90 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m3601DF8F7BE8300226E94B9A07588C873D9EBA95 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJson_JsonEncode_mADDDA0EBBE9FCB5C24635D1375E000DA12773B0C (RuntimeObject * ___json0, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MiniJson_JsonDecode_mB9E9114168C46FA6527D881F3AAEF7B946A043AF (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m284CF1629768B535A979B59E7BA0F4213AC74DE1 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m0911DCA3DC1E718A8FA2499D9257E78D3D46F550 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mF5FEB35854846930C3A23F073FABDF3729B382EC (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m0A8BC47AB92A92D8E8ADBB851735782875B779AC (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m24BDE6C361DE12003F898ED21ABFD67F507AC0AE (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mC5E0F4511601F4F9A24DB1CE677A9F825820DFA3 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m88A62FB35B1800443EA43928C255CAFB42D5B5D4 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mAD504F684D9CBCD168AF0F2A38ECA13AEA5FA229 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m316D3D11A1277D13C92ABC83A9E280222F988321 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m102A5E094A94E2B5A93E28D8559765C67CD6D04E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m166E89044A73463139836C4F82C3D4246FC38B83 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m4F66C00AECAF4BDD8819DDEAE0F0CB7A5618FB73 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m62801D0436F633067A7C34F13B454BA0FAC88336 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA441AEB1B3F79B0EC5AC38462EB60FCAD396D99F (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mF7465ABD28DD58E760800D112B52934F5FE70788 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m0838AAE01271FA72EEFB466A96944FBDC3C08C46 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
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
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m3601DF8F7BE8300226E94B9A07588C873D9EBA95 (String_t* ___json0, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		String_t* L_0 = ___json0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = NULL;
		goto IL_0017;
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		RuntimeObject * L_3;
		L_3 = Parser_Parse_mB25F84DD0C80F1149B15C813960BDE937B9DA673(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m8D55693F14A78BECE27034F3B302E495A3144F90 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_m566130639F2B1AB1950B06B5944F6218CE386367(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
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
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJson_JsonEncode_mADDDA0EBBE9FCB5C24635D1375E000DA12773B0C (RuntimeObject * ___json0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___json0;
		String_t* L_1;
		L_1 = Json_Serialize_m8D55693F14A78BECE27034F3B302E495A3144F90(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MiniJson_JsonDecode_mB9E9114168C46FA6527D881F3AAEF7B946A043AF (String_t* ___json0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m3601DF8F7BE8300226E94B9A07588C873D9EBA95(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_2 = V_0;
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
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_mC5CBC4375967D335D893DDFBA924C15A7EE4D0AC (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___dic0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = ___dic0;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = L_7;
		goto IL_001f;
	}

IL_001b:
	{
		String_t* L_8 = ___defaultValue2;
		V_1 = L_8;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m567E5C1BCFF9748AC3E3673E8F11ED80D557A76A (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___obj0;
		String_t* L_1;
		L_1 = MiniJson_JsonEncode_mADDDA0EBBE9FCB5C24635D1375E000DA12773B0C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m4F83912F343E6FBEB792B66BECC56DB6C17556DD (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___obj0;
		String_t* L_1;
		L_1 = MiniJson_JsonEncode_mADDDA0EBBE9FCB5C24635D1375E000DA12773B0C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * MiniJsonExtensions_HashtableFromJson_m3B3521AFD15B18FC75CA676A8E55A66B2C949610 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1;
		L_1 = MiniJson_JsonDecode_mB9E9114168C46FA6527D881F3AAEF7B946A043AF(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = V_0;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA (UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___subject0' to native representation
	char* ____subject0_marshaled = NULL;
	____subject0_marshaled = il2cpp_codegen_marshal_string(___subject0);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Marshaling of parameter '___receipt2' to native representation
	char* ____receipt2_marshaled = NULL;
	____receipt2_marshaled = il2cpp_codegen_marshal_string(___receipt2);

	// Marshaling of parameter '___transactionId3' to native representation
	char* ____transactionId3_marshaled = NULL;
	____transactionId3_marshaled = il2cpp_codegen_marshal_string(___transactionId3);

	// Native function invocation
	il2cppPInvokeFunc(____subject0_marshaled, ____payload1_marshaled, ____receipt2_marshaled, ____transactionId3_marshaled);

	// Marshaling cleanup of parameter '___subject0' native representation
	il2cpp_codegen_marshal_free(____subject0_marshaled);
	____subject0_marshaled = NULL;

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

	// Marshaling cleanup of parameter '___receipt2' native representation
	il2cpp_codegen_marshal_free(____receipt2_marshaled);
	____receipt2_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId3' native representation
	il2cpp_codegen_marshal_free(____transactionId3_marshaled);
	____transactionId3_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback__ctor_m6F253D80CB1B0181BF3B62CE631F57526F49CC90 (UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback_Invoke_m1C33B636C157777FB35D5F4C43164D50B8D2A0AD (UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
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
						GenericInterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						GenericVirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityPurchasingCallback_BeginInvoke_m9A5E68A742B7BABAC7E6AF35CE6DA7C28A11B890 (UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___subject0;
	__d_args[1] = ___payload1;
	__d_args[2] = ___receipt2;
	__d_args[3] = ___transactionId3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback_EndInvoke_mFE461C1AB6DA787011B3E1B3481DE34D718915DA (UnityPurchasingCallback_tE98C450765DD461BDE46E9511199DE16D8D890AA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m102A5E094A94E2B5A93E28D8559765C67CD6D04E (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m284CF1629768B535A979B59E7BA0F4213AC74DE1 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mB25F84DD0C80F1149B15C813960BDE937B9DA673 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___jsonString0;
		Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * L_1 = (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 *)il2cpp_codegen_object_new(Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15_il2cpp_TypeInfo_var);
		Parser__ctor_m284CF1629768B535A979B59E7BA0F4213AC74DE1(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_m0911DCA3DC1E718A8FA2499D9257E78D3D46F550(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1D, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		{
			Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001c;
			}
		}

IL_0015:
		{
			Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_001c:
		{
			IL2CPP_END_FINALLY(18)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m4A0E97D1140F16AFDDDA1C626FC1E8066D198D0B (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mC5E0F4511601F4F9A24DB1CE677A9F825820DFA3 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		goto IL_0088;
	}

IL_0015:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF(__this, /*hidden argument*/NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003c;
	}

IL_0030:
	{
		V_4 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
		goto IL_008d;
	}

IL_0035:
	{
		goto IL_0088;
	}

IL_0037:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		V_4 = L_8;
		goto IL_008d;
	}

IL_003c:
	{
		String_t* L_9;
		L_9 = Parser_ParseString_mF5FEB35854846930C3A23F073FABDF3729B382EC(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_1;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		V_4 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
		goto IL_008d;
	}

IL_0053:
	{
		int32_t L_12;
		L_12 = Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
		goto IL_008d;
	}

IL_006b:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_14 = __this->get_json_0();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_14);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = V_0;
		String_t* L_17 = V_1;
		RuntimeObject * L_18;
		L_18 = Parser_ParseValue_m0911DCA3DC1E718A8FA2499D9257E78D3D46F550(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_16, L_17, L_18, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		goto IL_0087;
	}

IL_0087:
	{
	}

IL_0088:
	{
		V_7 = (bool)1;
		goto IL_0015;
	}

IL_008d:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_4;
		return L_19;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m88A62FB35B1800443EA43928C255CAFB42D5B5D4 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_6 = NULL;
	bool V_7 = false;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0058;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_5 = L_4;
		int32_t L_5 = V_5;
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_003a:
	{
		V_6 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
		goto IL_0064;
	}

IL_003f:
	{
		goto IL_0058;
	}

IL_0041:
	{
		V_1 = (bool)0;
		goto IL_0057;
	}

IL_0045:
	{
		int32_t L_9 = V_2;
		RuntimeObject * L_10;
		L_10 = Parser_ParseByToken_m0A8BC47AB92A92D8E8ADBB851735782875B779AC(__this, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = V_0;
		RuntimeObject * L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_11, L_12, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		goto IL_0057;
	}

IL_0057:
	{
	}

IL_0058:
	{
		bool L_13 = V_1;
		V_7 = L_13;
		bool L_14 = V_7;
		if (L_14)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_15 = V_0;
		V_6 = L_15;
		goto IL_0064;
	}

IL_0064:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_16 = V_6;
		return L_16;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m0911DCA3DC1E718A8FA2499D9257E78D3D46F550 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0;
		L_0 = Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m0A8BC47AB92A92D8E8ADBB851735782875B779AC(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_3 = V_1;
		return L_3;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m0A8BC47AB92A92D8E8ADBB851735782875B779AC (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		int32_t L_0 = ___token0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0075;
			}
			case 6:
			{
				goto IL_003b;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_005f;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_0075;
	}

IL_003b:
	{
		String_t* L_3;
		L_3 = Parser_ParseString_mF5FEB35854846930C3A23F073FABDF3729B382EC(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0079;
	}

IL_0044:
	{
		RuntimeObject * L_4;
		L_4 = Parser_ParseNumber_m24BDE6C361DE12003F898ED21ABFD67F507AC0AE(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0079;
	}

IL_004d:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5;
		L_5 = Parser_ParseObject_mC5E0F4511601F4F9A24DB1CE677A9F825820DFA3(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0079;
	}

IL_0056:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6;
		L_6 = Parser_ParseArray_m88A62FB35B1800443EA43928C255CAFB42D5B5D4(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0079;
	}

IL_005f:
	{
		bool L_7 = ((bool)1);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		V_2 = L_8;
		goto IL_0079;
	}

IL_0068:
	{
		bool L_9 = ((bool)0);
		RuntimeObject * L_10 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_9);
		V_2 = L_10;
		goto IL_0079;
	}

IL_0071:
	{
		V_2 = NULL;
		goto IL_0079;
	}

IL_0075:
	{
		V_2 = NULL;
		goto IL_0079;
	}

IL_0079:
	{
		RuntimeObject * L_11 = V_2;
		return L_11;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mF5FEB35854846930C3A23F073FABDF3729B382EC (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_7 = NULL;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0178;
	}

IL_001a:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0182;
	}

IL_0035:
	{
		Il2CppChar L_6;
		L_6 = Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Il2CppChar L_7 = V_1;
		V_5 = L_7;
		Il2CppChar L_8 = V_5;
		V_4 = L_8;
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_016d;
	}

IL_0056:
	{
		V_2 = (bool)0;
		goto IL_0177;
	}

IL_005d:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_11);
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)(-1)))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0177;
	}

IL_0079:
	{
		Il2CppChar L_14;
		L_14 = Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088(__this, /*hidden argument*/NULL);
		V_1 = L_14;
		Il2CppChar L_15 = V_1;
		V_9 = L_15;
		Il2CppChar L_16 = V_9;
		V_8 = L_16;
		Il2CppChar L_17 = V_8;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppChar L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		Il2CppChar L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)47))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_009d;
	}

IL_009d:
	{
		Il2CppChar L_20 = V_8;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_016b;
	}

IL_00a8:
	{
		Il2CppChar L_21 = V_8;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_22 = V_8;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)98))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_00b6;
	}

IL_00b6:
	{
		Il2CppChar L_23 = V_8;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)102))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_016b;
	}

IL_00c1:
	{
		Il2CppChar L_24 = V_8;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)110))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_00c9;
	}

IL_00c9:
	{
		Il2CppChar L_25 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0112;
			}
			case 1:
			{
				goto IL_016b;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_0128;
			}
		}
	}
	{
		goto IL_016b;
	}

IL_00e8:
	{
		StringBuilder_t * L_26 = V_0;
		Il2CppChar L_27 = V_1;
		NullCheck(L_26);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_26, L_27, /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_00f2:
	{
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, 8, /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_00fc:
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_0107:
	{
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_33, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_0112:
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_35, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_011d:
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_37, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_0128:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_39;
		V_10 = 0;
		goto IL_0148;
	}

IL_0135:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_7;
		int32_t L_41 = V_10;
		Il2CppChar L_42;
		L_42 = Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)L_42);
		int32_t L_43 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0148:
	{
		int32_t L_44 = V_10;
		V_11 = (bool)((((int32_t)L_44) < ((int32_t)4))? 1 : 0);
		bool L_45 = V_11;
		if (L_45)
		{
			goto IL_0135;
		}
	}
	{
		StringBuilder_t * L_46 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47 = V_7;
		String_t* L_48;
		L_48 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_48, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_46);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_46, ((int32_t)((uint16_t)L_49)), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_016b:
	{
		goto IL_0177;
	}

IL_016d:
	{
		StringBuilder_t * L_51 = V_0;
		Il2CppChar L_52 = V_1;
		NullCheck(L_51);
		StringBuilder_t * L_53;
		L_53 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_51, L_52, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_0177:
	{
	}

IL_0178:
	{
		bool L_54 = V_2;
		V_12 = L_54;
		bool L_55 = V_12;
		if (L_55)
		{
			goto IL_001a;
		}
	}

IL_0182:
	{
		StringBuilder_t * L_56 = V_0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		V_13 = L_57;
		goto IL_018c;
	}

IL_018c:
	{
		String_t* L_58 = V_13;
		return L_58;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m24BDE6C361DE12003F898ED21ABFD67F507AC0AE (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	int64_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0;
		L_0 = Parser_get_NextWord_mAD504F684D9CBCD168AF0F2A38ECA13AEA5FA229(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_3, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_5, ((int32_t)69), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_9;
		L_9 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_10;
		L_10 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_8, ((int32_t)511), L_9, (int64_t*)(&V_3), /*hidden argument*/NULL);
		int64_t L_11 = V_3;
		int64_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_12);
		V_4 = L_13;
		goto IL_006b;
	}

IL_004e:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_15;
		L_15 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_14, ((int32_t)511), L_15, (double*)(&V_1), /*hidden argument*/NULL);
		double L_17 = V_1;
		double L_18 = L_17;
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		V_4 = L_19;
		goto IL_006b;
	}

IL_006b:
	{
		RuntimeObject * L_20 = V_4;
		return L_20;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m166E89044A73463139836C4F82C3D4246FC38B83 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		goto IL_0026;
	}

IL_0003:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
	}

IL_0026:
	{
		Il2CppChar L_5;
		L_5 = Parser_get_PeekChar_m316D3D11A1277D13C92ABC83A9E280222F988321(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0003;
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m316D3D11A1277D13C92ABC83A9E280222F988321 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mAD504F684D9CBCD168AF0F2A38ECA13AEA5FA229 (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002d;
	}

IL_0009:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m14444AC3C61882844F7B110C5626CAA2578A8088(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003f;
	}

IL_002c:
	{
	}

IL_002d:
	{
		Il2CppChar L_7;
		L_7 = Parser_get_PeekChar_m316D3D11A1277D13C92ABC83A9E280222F988321(__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Parser_IsWordBreak_m102A5E094A94E2B5A93E28D8559765C67CD6D04E(L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0009;
		}
	}

IL_003f:
	{
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_3 = L_11;
		goto IL_0048;
	}

IL_0048:
	{
		String_t* L_12 = V_3;
		return L_12;
	}
}
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m1FB20EF84FF085FA29E1A589FAC3E4D80B0405EF (Parser_tAE48E5C242952B9D192C0C16BE29AED2E830AC15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		Parser_EatWhitespace_m166E89044A73463139836C4F82C3D4246FC38B83(__this, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_1 = 0;
		goto IL_0151;
	}

IL_0022:
	{
		Il2CppChar L_3;
		L_3 = Parser_get_PeekChar_m316D3D11A1277D13C92ABC83A9E280222F988321(__this, /*hidden argument*/NULL);
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00f6;
			}
			case 1:
			{
				goto IL_0102;
			}
			case 2:
			{
				goto IL_0102;
			}
			case 3:
			{
				goto IL_0102;
			}
			case 4:
			{
				goto IL_0102;
			}
			case 5:
			{
				goto IL_0102;
			}
			case 6:
			{
				goto IL_0102;
			}
			case 7:
			{
				goto IL_0102;
			}
			case 8:
			{
				goto IL_0102;
			}
			case 9:
			{
				goto IL_0102;
			}
			case 10:
			{
				goto IL_00e6;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_0102;
			}
			case 13:
			{
				goto IL_0102;
			}
			case 14:
			{
				goto IL_00fe;
			}
			case 15:
			{
				goto IL_00fe;
			}
			case 16:
			{
				goto IL_00fe;
			}
			case 17:
			{
				goto IL_00fe;
			}
			case 18:
			{
				goto IL_00fe;
			}
			case 19:
			{
				goto IL_00fe;
			}
			case 20:
			{
				goto IL_00fe;
			}
			case 21:
			{
				goto IL_00fe;
			}
			case 22:
			{
				goto IL_00fe;
			}
			case 23:
			{
				goto IL_00fe;
			}
			case 24:
			{
				goto IL_00fa;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_009f:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0102;
	}

IL_00a6:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b4:
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)125))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_0102;
	}

IL_00bb:
	{
		V_1 = 1;
		goto IL_0151;
	}

IL_00c2:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		V_1 = 2;
		goto IL_0151;
	}

IL_00d2:
	{
		V_1 = 3;
		goto IL_0151;
	}

IL_00d6:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		V_1 = 4;
		goto IL_0151;
	}

IL_00e6:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_15 = __this->get_json_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_15);
		V_1 = 6;
		goto IL_0151;
	}

IL_00f6:
	{
		V_1 = 7;
		goto IL_0151;
	}

IL_00fa:
	{
		V_1 = 5;
		goto IL_0151;
	}

IL_00fe:
	{
		V_1 = 8;
		goto IL_0151;
	}

IL_0102:
	{
		String_t* L_17;
		L_17 = Parser_get_NextWord_mAD504F684D9CBCD168AF0F2A38ECA13AEA5FA229(__this, /*hidden argument*/NULL);
		V_5 = L_17;
		String_t* L_18 = V_5;
		V_4 = L_18;
		String_t* L_19 = V_4;
		if (!L_19)
		{
			goto IL_014d;
		}
	}
	{
		String_t* L_20 = V_4;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_013e;
		}
	}
	{
		String_t* L_22 = V_4;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_24 = V_4;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0148;
		}
	}
	{
		goto IL_014d;
	}

IL_013e:
	{
		V_1 = ((int32_t)10);
		goto IL_0151;
	}

IL_0143:
	{
		V_1 = ((int32_t)9);
		goto IL_0151;
	}

IL_0148:
	{
		V_1 = ((int32_t)11);
		goto IL_0151;
	}

IL_014d:
	{
		V_1 = 0;
		goto IL_0151;
	}

IL_0151:
	{
		int32_t L_26 = V_1;
		return L_26;
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
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m4F66C00AECAF4BDD8819DDEAE0F0CB7A5618FB73 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m566130639F2B1AB1950B06B5944F6218CE386367 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * L_0 = (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C *)il2cpp_codegen_object_new(Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C_il2cpp_TypeInfo_var);
		Serializer__ctor_m4F66C00AECAF4BDD8819DDEAE0F0CB7A5618FB73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m62801D0436F633067A7C34F13B454BA0FAC88336(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_1 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m62801D0436F633067A7C34F13B454BA0FAC88336 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t * L_2 = __this->get_builder_0();
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0021:
	{
		RuntimeObject * L_4 = ___value0;
		String_t* L_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		V_2 = L_5;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_7 = V_2;
		Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B(__this, L_7, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0041:
	{
		RuntimeObject * L_8 = ___value0;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		StringBuilder_t * L_10 = __this->get_builder_0();
		RuntimeObject * L_11 = ___value0;
		G_B6_0 = L_10;
		if (((*(bool*)((bool*)UnBox(L_11, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_10;
			goto IL_0066;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0066:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0074:
	{
		RuntimeObject * L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_14;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		Serializer_SerializeArray_mA441AEB1B3F79B0EC5AC38462EB60FCAD396D99F(__this, L_16, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0091:
	{
		RuntimeObject * L_17 = ___value0;
		RuntimeObject* L_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_18;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeObject* L_20 = V_1;
		Serializer_SerializeObject_mF7465ABD28DD58E760800D112B52934F5FE70788(__this, L_20, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00ae:
	{
		RuntimeObject * L_21 = ___value0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_21, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00d4;
		}
	}
	{
		RuntimeObject * L_23 = ___value0;
		String_t* L_24;
		L_24 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_23, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B(__this, L_24, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00d4:
	{
		RuntimeObject * L_25 = ___value0;
		Serializer_SerializeOther_m0838AAE01271FA72EEFB466A96944FBDC3C08C46(__this, L_25, /*hidden argument*/NULL);
	}

IL_00de:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mF7465ABD28DD58E760800D112B52934F5FE70788 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0020:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			bool L_7 = V_0;
			V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_9 = __this->get_builder_0();
			NullCheck(L_9);
			StringBuilder_t * L_10;
			L_10 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_9, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0040:
		{
			RuntimeObject * L_11 = V_2;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
			Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B(__this, L_12, /*hidden argument*/NULL);
			StringBuilder_t * L_13 = __this->get_builder_0();
			NullCheck(L_13);
			StringBuilder_t * L_14;
			L_14 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_15 = ___obj0;
			RuntimeObject * L_16 = V_2;
			NullCheck(L_15);
			RuntimeObject * L_17;
			L_17 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_15, L_16);
			Serializer_SerializeValue_m62801D0436F633067A7C34F13B454BA0FAC88336(__this, L_17, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006c:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0020;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_4;
			if (!L_21)
			{
				goto IL_008a;
			}
		}

IL_0082:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(118)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA441AEB1B3F79B0EC5AC38462EB60FCAD396D99F (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001b:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003b:
		{
			RuntimeObject * L_10 = V_2;
			Serializer_SerializeValue_m62801D0436F633067A7C34F13B454BA0FAC88336(__this, L_10, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001b;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_14 = V_4;
			if (!L_14)
			{
				goto IL_0064;
			}
		}

IL_005c:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_16, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	int32_t G_B17_0 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0159;
	}

IL_0020:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		Il2CppChar L_9 = V_3;
		V_6 = L_9;
		Il2CppChar L_10 = V_6;
		V_5 = L_10;
		Il2CppChar L_11 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)8)))
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00ba;
			}
			case 3:
			{
				goto IL_00f6;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_004f:
	{
		Il2CppChar L_12 = V_5;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		Il2CppChar L_13 = V_5;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00f6;
	}

IL_0062:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0078:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_008e:
	{
		StringBuilder_t * L_18 = __this->get_builder_0();
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00a4:
	{
		StringBuilder_t * L_20 = __this->get_builder_0();
		NullCheck(L_20);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00ba:
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00d0:
	{
		StringBuilder_t * L_24 = __this->get_builder_0();
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00e3:
	{
		StringBuilder_t * L_26 = __this->get_builder_0();
		NullCheck(L_26);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00f6:
	{
		Il2CppChar L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		int32_t L_30 = V_4;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)32))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_31 = V_4;
		G_B17_0 = ((((int32_t)((((int32_t)L_31) > ((int32_t)((int32_t)126)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B17_0 = 0;
	}

IL_0110:
	{
		V_7 = (bool)G_B17_0;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t * L_33 = __this->get_builder_0();
		Il2CppChar L_34 = V_3;
		NullCheck(L_33);
		StringBuilder_t * L_35;
		L_35 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_33, L_34, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_0127:
	{
		StringBuilder_t * L_36 = __this->get_builder_0();
		NullCheck(L_36);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_36, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		StringBuilder_t * L_38 = __this->get_builder_0();
		String_t* L_39;
		L_39 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_4), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_38);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, L_39, /*hidden argument*/NULL);
	}

IL_0152:
	{
		goto IL_0154;
	}

IL_0154:
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0159:
	{
		int32_t L_42 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t * L_44 = __this->get_builder_0();
		NullCheck(L_44);
		StringBuilder_t * L_45;
		L_45 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m0838AAE01271FA72EEFB466A96944FBDC3C08C46 (Serializer_t3206FAB478F41DBC6ADA3A06DCA9F9DB8E45C55C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	double V_4 = 0.0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t * L_2 = __this->get_builder_0();
		RuntimeObject * L_3 = ___value0;
		V_1 = ((*(float*)((float*)UnBox(L_3, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, L_5, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_0039:
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_13 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject * L_14 = ___value0;
		G_B11_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B11_0 = 1;
	}

IL_007d:
	{
		V_2 = (bool)G_B11_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		NullCheck(L_16);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_0092:
	{
		RuntimeObject * L_19 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_00a5;
		}
	}
	{
		RuntimeObject * L_20 = ___value0;
		G_B16_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B16_0 = 1;
	}

IL_00a6:
	{
		V_3 = (bool)G_B16_0;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		RuntimeObject * L_23 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_25;
		L_25 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_26;
		L_26 = Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B((double*)(&V_4), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, L_26, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_00d3:
	{
		RuntimeObject * L_28 = ___value0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		Serializer_SerializeString_mFA2BEA11154255DD72A46B0BBC37BF781D477B3B(__this, L_29, /*hidden argument*/NULL);
	}

IL_00e2:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
