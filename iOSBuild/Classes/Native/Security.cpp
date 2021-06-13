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
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Purchasing.Security.SignerInfo[]
struct SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Purchasing.Security.X509Cert[]
struct X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863;
// UnityEngine.Purchasing.Security.AppleReceipt
struct AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849;
// UnityEngine.Purchasing.Security.AppleReceiptParser
struct AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// LipingShare.LCLib.Asn1Processor.Asn1Node
struct Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22;
// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// UnityEngine.Purchasing.Security.DistinguishedName
struct DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// UnityEngine.Purchasing.Security.IAPSecurityException
struct IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46;
// UnityEngine.Purchasing.Security.InvalidRSAData
struct InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940;
// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A;
// UnityEngine.Purchasing.Security.InvalidX509Data
struct InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// LipingShare.LCLib.Asn1Processor.Oid
struct Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8;
// UnityEngine.Purchasing.Security.PKCS7
struct PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7;
// UnityEngine.Purchasing.Security.RSAKey
struct RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// LipingShare.LCLib.Asn1Processor.RelativeOid
struct RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Purchasing.Security.SignerInfo
struct SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Purchasing.Security.X509Cert
struct X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E4C7E6115783DAF7E8E371EDC9AE581528EA78;
IL2CPP_EXTERN_C String_t* _stringLiteral0524144B9F212F40BEC2750DD0C06E4159777384;
IL2CPP_EXTERN_C String_t* _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC347CF826668C4F33A1CD7ADF5419BAAE73FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786;
IL2CPP_EXTERN_C String_t* _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB;
IL2CPP_EXTERN_C String_t* _stringLiteral16DEBA0A49D8FDF8FFD3E681909ACA71D8132580;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA2E7519891D1B744F973A073D6CE50874854C6;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7F604AA53E605CA5A4D06ADF4F5C4B6FCBD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039;
IL2CPP_EXTERN_C String_t* _stringLiteral3C71631187881B6DAB198AF4B06C779471926174;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral44D231DAD9D02BE301A8CF4FBCABD5DE1FDCFF54;
IL2CPP_EXTERN_C String_t* _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral481CFA1B155F22067D8FEA989EB269E873B62B4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4BAFCB89E7C61DD51CF32D48E1F883426E74C000;
IL2CPP_EXTERN_C String_t* _stringLiteral52D13D434A39B045A12B8CCE2D63CFFAFE1972CF;
IL2CPP_EXTERN_C String_t* _stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249;
IL2CPP_EXTERN_C String_t* _stringLiteral61F9A6943D78A4154F6821755AA9A1C4A3E80717;
IL2CPP_EXTERN_C String_t* _stringLiteral67E6D858EA0BE7F6F1158A0A3EA4E4946B21A283;
IL2CPP_EXTERN_C String_t* _stringLiteral68E810E310A6E1368AC66300136C585E142E80BF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381;
IL2CPP_EXTERN_C String_t* _stringLiteral79C59A0C4D87BBB64A0C537CC6FCEBF8DE14A269;
IL2CPP_EXTERN_C String_t* _stringLiteral859BD87B9776D9CE86B7C752B95409950D61EB08;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral9787EA65D34ACB2E800972522D1FB9E8D86E0511;
IL2CPP_EXTERN_C String_t* _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBE6269D7D5D08B76852D89B90B601BAD02D7DD;
IL2CPP_EXTERN_C String_t* _stringLiteralAC35AB7561A701D96BD51BC1F1EE072F2F9718C0;
IL2CPP_EXTERN_C String_t* _stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6;
IL2CPP_EXTERN_C String_t* _stringLiteralADF3402AEC14A5C5A7E1E8A624F7B7F4D2123EA0;
IL2CPP_EXTERN_C String_t* _stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A7D2EEB1F22F7D3B5BE89D41486AAF0411C31A;
IL2CPP_EXTERN_C String_t* _stringLiteralB562730CA6FCD749B7C84DE73BEBD292D954C70E;
IL2CPP_EXTERN_C String_t* _stringLiteralB89111EC34842EC45C03B81F4BDFBC7724B6905F;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DA3B4CA745F231A5F6D027DDCEE9158AC52CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF403E6FC90C56524FFEE246E1374665DF60C2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C83DB7DD412566438B355E6504DBB01A12F5E4;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDD70ED42B3745921307A6AF5729CDF0C49B732;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA206F53009B4409A8E1620933737D0F4D7E1B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCF2AF9005B6B2A5DCC73C4E00CBE3F19D96687B4;
IL2CPP_EXTERN_C String_t* _stringLiteralCF61206F351943EEC77681D8FE9F32833CBE6444;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3FA34132F5B79C1EC6AD3AAAC2C6A5B7F29E34;
IL2CPP_EXTERN_C String_t* _stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832;
IL2CPP_EXTERN_C String_t* _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A854E69EA27FE94B3DD30F3C8F92D6E6560149;
IL2CPP_EXTERN_C String_t* _stringLiteralE91195DA6E39E9A4D6BB7DBF2BF8A45CF0FB0A42;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6;
IL2CPP_EXTERN_C String_t* _stringLiteralF172F77C7E45F5898E6A62C11097CBEE26EBF4E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF69C981860A19A82ADD9552E5DDAFA32BFD3D7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7906DC491A0486A30D111F231D1624CA5B94C94;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ParseReceipt_mF8B94955145DBB4FA399CBA4BE74AC5C837A0364_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m464ADF67588E5A98A411631B69FFB99EDAE6C319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBF3A735E1128AAACD6B1E0E53FA16FB84F7822A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE3668B748F02A29C1CD1EAD16C499E0C534EB1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m22A8DBEE794FE49378B1900DBB7821BE4D8696E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m506B23691AC022F69F44F691F4CF2593D308FA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m79C7E36D3C92330A95B40B22BD99F0C8DA674DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDD67060197434058092AA0B2734859820F001D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Oid_Decode_m7C4DF55042765D96A273656A11A361130548CBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAKey_ParseNode_m3D32E36AFC8A70764B5459021CBB904CEB99ECA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelativeOid_Decode_m7817692B71C86D7A64ABC89420D16297266F1791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7D3E4838D5F643E9EC9B36B39BB9EA82AE8DCB36 
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


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct  List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863, ____items_1)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* get__items_1() const { return ____items_1; }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863_StaticFields, ____emptyArray_5)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct  List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F, ____items_1)); }
	inline SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* get__items_1() const { return ____items_1; }
	inline SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F_StaticFields, ____emptyArray_5)); }
	inline SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SignerInfoU5BU5D_tE8A7CA3BBA56B47E1ECFF97CB3262C456105F003* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct  List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9, ____items_1)); }
	inline X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* get__items_1() const { return ____items_1; }
	inline X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9_StaticFields, ____emptyArray_5)); }
	inline X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(X509CertU5BU5D_t18DC0FFED49E5C71F276241CDC4A5FFABF6F912D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.AppleReceiptParser
struct  AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858  : public RuntimeObject
{
public:

public:
};

struct AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.Security.AppleReceiptParser::_mostRecentReceiptData
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ____mostRecentReceiptData_0;

public:
	inline static int32_t get_offset_of__mostRecentReceiptData_0() { return static_cast<int32_t>(offsetof(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields, ____mostRecentReceiptData_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get__mostRecentReceiptData_0() const { return ____mostRecentReceiptData_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of__mostRecentReceiptData_0() { return &____mostRecentReceiptData_0; }
	inline void set__mostRecentReceiptData_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		____mostRecentReceiptData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mostRecentReceiptData_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Node
struct  Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22  : public RuntimeObject
{
public:
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::tag
	uint8_t ___tag_0;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataOffset
	int64_t ___dataOffset_1;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataLength
	int64_t ___dataLength_2;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::lengthFieldBytes
	int64_t ___lengthFieldBytes_3;
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_4;
	// System.Collections.ArrayList LipingShare.LCLib.Asn1Processor.Asn1Node::childNodeList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___childNodeList_5;
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::unusedBits
	uint8_t ___unusedBits_6;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::deepness
	int64_t ___deepness_7;
	// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::path
	String_t* ___path_8;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::parentNode
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___parentNode_9;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::requireRecalculatePar
	bool ___requireRecalculatePar_10;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::isIndefiniteLength
	bool ___isIndefiniteLength_11;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::parseEncapsulatedData
	bool ___parseEncapsulatedData_12;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___tag_0)); }
	inline uint8_t get_tag_0() const { return ___tag_0; }
	inline uint8_t* get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(uint8_t value)
	{
		___tag_0 = value;
	}

	inline static int32_t get_offset_of_dataOffset_1() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___dataOffset_1)); }
	inline int64_t get_dataOffset_1() const { return ___dataOffset_1; }
	inline int64_t* get_address_of_dataOffset_1() { return &___dataOffset_1; }
	inline void set_dataOffset_1(int64_t value)
	{
		___dataOffset_1 = value;
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___dataLength_2)); }
	inline int64_t get_dataLength_2() const { return ___dataLength_2; }
	inline int64_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int64_t value)
	{
		___dataLength_2 = value;
	}

	inline static int32_t get_offset_of_lengthFieldBytes_3() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___lengthFieldBytes_3)); }
	inline int64_t get_lengthFieldBytes_3() const { return ___lengthFieldBytes_3; }
	inline int64_t* get_address_of_lengthFieldBytes_3() { return &___lengthFieldBytes_3; }
	inline void set_lengthFieldBytes_3(int64_t value)
	{
		___lengthFieldBytes_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___data_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_childNodeList_5() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___childNodeList_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_childNodeList_5() const { return ___childNodeList_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_childNodeList_5() { return &___childNodeList_5; }
	inline void set_childNodeList_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___childNodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childNodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_unusedBits_6() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___unusedBits_6)); }
	inline uint8_t get_unusedBits_6() const { return ___unusedBits_6; }
	inline uint8_t* get_address_of_unusedBits_6() { return &___unusedBits_6; }
	inline void set_unusedBits_6(uint8_t value)
	{
		___unusedBits_6 = value;
	}

	inline static int32_t get_offset_of_deepness_7() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___deepness_7)); }
	inline int64_t get_deepness_7() const { return ___deepness_7; }
	inline int64_t* get_address_of_deepness_7() { return &___deepness_7; }
	inline void set_deepness_7(int64_t value)
	{
		___deepness_7 = value;
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___path_8)); }
	inline String_t* get_path_8() const { return ___path_8; }
	inline String_t** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(String_t* value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_8), (void*)value);
	}

	inline static int32_t get_offset_of_parentNode_9() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___parentNode_9)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_parentNode_9() const { return ___parentNode_9; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_parentNode_9() { return &___parentNode_9; }
	inline void set_parentNode_9(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___parentNode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_9), (void*)value);
	}

	inline static int32_t get_offset_of_requireRecalculatePar_10() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___requireRecalculatePar_10)); }
	inline bool get_requireRecalculatePar_10() const { return ___requireRecalculatePar_10; }
	inline bool* get_address_of_requireRecalculatePar_10() { return &___requireRecalculatePar_10; }
	inline void set_requireRecalculatePar_10(bool value)
	{
		___requireRecalculatePar_10 = value;
	}

	inline static int32_t get_offset_of_isIndefiniteLength_11() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___isIndefiniteLength_11)); }
	inline bool get_isIndefiniteLength_11() const { return ___isIndefiniteLength_11; }
	inline bool* get_address_of_isIndefiniteLength_11() { return &___isIndefiniteLength_11; }
	inline void set_isIndefiniteLength_11(bool value)
	{
		___isIndefiniteLength_11 = value;
	}

	inline static int32_t get_offset_of_parseEncapsulatedData_12() { return static_cast<int32_t>(offsetof(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22, ___parseEncapsulatedData_12)); }
	inline bool get_parseEncapsulatedData_12() const { return ___parseEncapsulatedData_12; }
	inline bool* get_address_of_parseEncapsulatedData_12() { return &___parseEncapsulatedData_12; }
	inline void set_parseEncapsulatedData_12(bool value)
	{
		___parseEncapsulatedData_12 = value;
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct  Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE  : public RuntimeObject
{
public:
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Parser::rawData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawData_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::rootNode
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___rootNode_1;

public:
	inline static int32_t get_offset_of_rawData_0() { return static_cast<int32_t>(offsetof(Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE, ___rawData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawData_0() const { return ___rawData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawData_0() { return &___rawData_0; }
	inline void set_rawData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_0), (void*)value);
	}

	inline static int32_t get_offset_of_rootNode_1() { return static_cast<int32_t>(offsetof(Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE, ___rootNode_1)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_rootNode_1() const { return ___rootNode_1; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_rootNode_1() { return &___rootNode_1; }
	inline void set_rootNode_1(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___rootNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootNode_1), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Util
struct  Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E  : public RuntimeObject
{
public:

public:
};

struct Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_StaticFields
{
public:
	// System.Char[] LipingShare.LCLib.Asn1Processor.Asn1Util::hexDigits
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hexDigits_0;

public:
	inline static int32_t get_offset_of_hexDigits_0() { return static_cast<int32_t>(offsetof(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_StaticFields, ___hexDigits_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hexDigits_0() const { return ___hexDigits_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hexDigits_0() { return &___hexDigits_0; }
	inline void set_hexDigits_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hexDigits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexDigits_0), (void*)value);
	}
};


// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.Purchasing.Security.DistinguishedName
struct  DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Country>k__BackingField
	String_t* ___U3CCountryU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Organization>k__BackingField
	String_t* ___U3COrganizationU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<OrganizationalUnit>k__BackingField
	String_t* ___U3COrganizationalUnitU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Dnq>k__BackingField
	String_t* ___U3CDnqU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<State>k__BackingField
	String_t* ___U3CStateU3Ek__BackingField_4;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<CommonName>k__BackingField
	String_t* ___U3CCommonNameU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CCountryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3CCountryU3Ek__BackingField_0)); }
	inline String_t* get_U3CCountryU3Ek__BackingField_0() const { return ___U3CCountryU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCountryU3Ek__BackingField_0() { return &___U3CCountryU3Ek__BackingField_0; }
	inline void set_U3CCountryU3Ek__BackingField_0(String_t* value)
	{
		___U3CCountryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCountryU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3COrganizationU3Ek__BackingField_1)); }
	inline String_t* get_U3COrganizationU3Ek__BackingField_1() const { return ___U3COrganizationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3COrganizationU3Ek__BackingField_1() { return &___U3COrganizationU3Ek__BackingField_1; }
	inline void set_U3COrganizationU3Ek__BackingField_1(String_t* value)
	{
		___U3COrganizationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationalUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3COrganizationalUnitU3Ek__BackingField_2)); }
	inline String_t* get_U3COrganizationalUnitU3Ek__BackingField_2() const { return ___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3COrganizationalUnitU3Ek__BackingField_2() { return &___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline void set_U3COrganizationalUnitU3Ek__BackingField_2(String_t* value)
	{
		___U3COrganizationalUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationalUnitU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDnqU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3CDnqU3Ek__BackingField_3)); }
	inline String_t* get_U3CDnqU3Ek__BackingField_3() const { return ___U3CDnqU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDnqU3Ek__BackingField_3() { return &___U3CDnqU3Ek__BackingField_3; }
	inline void set_U3CDnqU3Ek__BackingField_3(String_t* value)
	{
		___U3CDnqU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDnqU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3CStateU3Ek__BackingField_4)); }
	inline String_t* get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(String_t* value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommonNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3CCommonNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CCommonNameU3Ek__BackingField_5() const { return ___U3CCommonNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCommonNameU3Ek__BackingField_5() { return &___U3CCommonNameU3Ek__BackingField_5; }
	inline void set_U3CCommonNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CCommonNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommonNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159, ___U3CSerialNumberU3Ek__BackingField_6)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_6() const { return ___U3CSerialNumberU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_6() { return &___U3CSerialNumberU3Ek__BackingField_6; }
	inline void set_U3CSerialNumberU3Ek__BackingField_6(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_6), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
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

// LipingShare.LCLib.Asn1Processor.Oid
struct  Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8  : public RuntimeObject
{
public:

public:
};

struct Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields
{
public:
	// System.Collections.Specialized.StringDictionary LipingShare.LCLib.Asn1Processor.Oid::oidDictionary
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___oidDictionary_0;

public:
	inline static int32_t get_offset_of_oidDictionary_0() { return static_cast<int32_t>(offsetof(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields, ___oidDictionary_0)); }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * get_oidDictionary_0() const { return ___oidDictionary_0; }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 ** get_address_of_oidDictionary_0() { return &___oidDictionary_0; }
	inline void set_oidDictionary_0(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * value)
	{
		___oidDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oidDictionary_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.PKCS7
struct  PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5  : public RuntimeObject
{
public:
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::root
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___root_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::<data>k__BackingField
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___U3CdataU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::<sinfos>k__BackingField
	List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * ___U3CsinfosU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::<certChain>k__BackingField
	List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * ___U3CcertChainU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.PKCS7::validStructure
	bool ___validStructure_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5, ___root_0)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_root_0() const { return ___root_0; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5, ___U3CdataU3Ek__BackingField_1)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_U3CdataU3Ek__BackingField_1() const { return ___U3CdataU3Ek__BackingField_1; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_U3CdataU3Ek__BackingField_1() { return &___U3CdataU3Ek__BackingField_1; }
	inline void set_U3CdataU3Ek__BackingField_1(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___U3CdataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsinfosU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5, ___U3CsinfosU3Ek__BackingField_2)); }
	inline List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * get_U3CsinfosU3Ek__BackingField_2() const { return ___U3CsinfosU3Ek__BackingField_2; }
	inline List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F ** get_address_of_U3CsinfosU3Ek__BackingField_2() { return &___U3CsinfosU3Ek__BackingField_2; }
	inline void set_U3CsinfosU3Ek__BackingField_2(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * value)
	{
		___U3CsinfosU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsinfosU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcertChainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5, ___U3CcertChainU3Ek__BackingField_3)); }
	inline List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * get_U3CcertChainU3Ek__BackingField_3() const { return ___U3CcertChainU3Ek__BackingField_3; }
	inline List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 ** get_address_of_U3CcertChainU3Ek__BackingField_3() { return &___U3CcertChainU3Ek__BackingField_3; }
	inline void set_U3CcertChainU3Ek__BackingField_3(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * value)
	{
		___U3CcertChainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcertChainU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_validStructure_4() { return static_cast<int32_t>(offsetof(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5, ___validStructure_4)); }
	inline bool get_validStructure_4() const { return ___validStructure_4; }
	inline bool* get_address_of_validStructure_4() { return &___validStructure_4; }
	inline void set_validStructure_4(bool value)
	{
		___validStructure_4 = value;
	}
};


// UnityEngine.Purchasing.Security.RSAKey
struct  RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::<rsa>k__BackingField
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___U3CrsaU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CrsaU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64, ___U3CrsaU3Ek__BackingField_0)); }
	inline RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * get_U3CrsaU3Ek__BackingField_0() const { return ___U3CrsaU3Ek__BackingField_0; }
	inline RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 ** get_address_of_U3CrsaU3Ek__BackingField_0() { return &___U3CrsaU3Ek__BackingField_0; }
	inline void set_U3CrsaU3Ek__BackingField_0(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * value)
	{
		___U3CrsaU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrsaU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.SignerInfo
struct  SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.SignerInfo::<IssuerSerialNumber>k__BackingField
	String_t* ___U3CIssuerSerialNumberU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.SignerInfo::<EncryptedDigest>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CEncryptedDigestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11, ___U3CVersionU3Ek__BackingField_0)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11, ___U3CIssuerSerialNumberU3Ek__BackingField_1)); }
	inline String_t* get_U3CIssuerSerialNumberU3Ek__BackingField_1() const { return ___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return &___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline void set_U3CIssuerSerialNumberU3Ek__BackingField_1(String_t* value)
	{
		___U3CIssuerSerialNumberU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerSerialNumberU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEncryptedDigestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11, ___U3CEncryptedDigestU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CEncryptedDigestU3Ek__BackingField_2() const { return ___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CEncryptedDigestU3Ek__BackingField_2() { return &___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline void set_U3CEncryptedDigestU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CEncryptedDigestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEncryptedDigestU3Ek__BackingField_2), (void*)value);
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


// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79, ___contents_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contents_0), (void*)value);
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


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Security.Cryptography.RSA
struct  RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// LipingShare.LCLib.Asn1Processor.RelativeOid
struct  RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677  : public Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8
{
public:

public:
};


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4__padding[32];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_t33B16CD5C0C7260B04153AA38DE869418BB88DE4  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct  AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleReceipt
struct  AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<bundleID>k__BackingField
	String_t* ___U3CbundleIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<appVersion>k__BackingField
	String_t* ___U3CappVersionU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<opaque>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CopaqueU3Ek__BackingField_2;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<hash>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3ChashU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<originalApplicationVersion>k__BackingField
	String_t* ___U3CoriginalApplicationVersionU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::<receiptCreationDate>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CreceiptCreationDateU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[] UnityEngine.Purchasing.Security.AppleReceipt::inAppPurchaseReceipts
	AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* ___inAppPurchaseReceipts_6;

public:
	inline static int32_t get_offset_of_U3CbundleIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3CbundleIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CbundleIDU3Ek__BackingField_0() const { return ___U3CbundleIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CbundleIDU3Ek__BackingField_0() { return &___U3CbundleIDU3Ek__BackingField_0; }
	inline void set_U3CbundleIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CbundleIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbundleIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3CappVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CappVersionU3Ek__BackingField_1() const { return ___U3CappVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CappVersionU3Ek__BackingField_1() { return &___U3CappVersionU3Ek__BackingField_1; }
	inline void set_U3CappVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CappVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopaqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3CopaqueU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CopaqueU3Ek__BackingField_2() const { return ___U3CopaqueU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CopaqueU3Ek__BackingField_2() { return &___U3CopaqueU3Ek__BackingField_2; }
	inline void set_U3CopaqueU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CopaqueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopaqueU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChashU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3ChashU3Ek__BackingField_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3ChashU3Ek__BackingField_3() const { return ___U3ChashU3Ek__BackingField_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3ChashU3Ek__BackingField_3() { return &___U3ChashU3Ek__BackingField_3; }
	inline void set_U3ChashU3Ek__BackingField_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3ChashU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChashU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3CoriginalApplicationVersionU3Ek__BackingField_4)); }
	inline String_t* get_U3CoriginalApplicationVersionU3Ek__BackingField_4() const { return ___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return &___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline void set_U3CoriginalApplicationVersionU3Ek__BackingField_4(String_t* value)
	{
		___U3CoriginalApplicationVersionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalApplicationVersionU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___U3CreceiptCreationDateU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CreceiptCreationDateU3Ek__BackingField_5() const { return ___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return &___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline void set_U3CreceiptCreationDateU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CreceiptCreationDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_inAppPurchaseReceipts_6() { return static_cast<int32_t>(offsetof(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849, ___inAppPurchaseReceipts_6)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* get_inAppPurchaseReceipts_6() const { return ___inAppPurchaseReceipts_6; }
	inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA** get_address_of_inAppPurchaseReceipts_6() { return &___inAppPurchaseReceipts_6; }
	inline void set_inAppPurchaseReceipts_6(AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* value)
	{
		___inAppPurchaseReceipts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inAppPurchaseReceipts_6), (void*)value);
	}
};


// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Purchasing.Security.X509Cert
struct  X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.X509Cert::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_0;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidAfter>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CValidAfterU3Ek__BackingField_1;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidBefore>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CValidBeforeU3Ek__BackingField_2;
	// UnityEngine.Purchasing.Security.RSAKey UnityEngine.Purchasing.Security.X509Cert::<PubKey>k__BackingField
	RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * ___U3CPubKeyU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.X509Cert::<SelfSigned>k__BackingField
	bool ___U3CSelfSignedU3Ek__BackingField_4;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Subject>k__BackingField
	DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___U3CSubjectU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Issuer>k__BackingField
	DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___U3CIssuerU3Ek__BackingField_6;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::TbsCertificate
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___TbsCertificate_7;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::<Signature>k__BackingField
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___U3CSignatureU3Ek__BackingField_8;
	// System.Byte[] UnityEngine.Purchasing.Security.X509Cert::rawTBSCertificate
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawTBSCertificate_9;

public:
	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CSerialNumberU3Ek__BackingField_0)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_0() const { return ___U3CSerialNumberU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_0() { return &___U3CSerialNumberU3Ek__BackingField_0; }
	inline void set_U3CSerialNumberU3Ek__BackingField_0(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidAfterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CValidAfterU3Ek__BackingField_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CValidAfterU3Ek__BackingField_1() const { return ___U3CValidAfterU3Ek__BackingField_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CValidAfterU3Ek__BackingField_1() { return &___U3CValidAfterU3Ek__BackingField_1; }
	inline void set_U3CValidAfterU3Ek__BackingField_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CValidAfterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CValidBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CValidBeforeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CValidBeforeU3Ek__BackingField_2() const { return ___U3CValidBeforeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CValidBeforeU3Ek__BackingField_2() { return &___U3CValidBeforeU3Ek__BackingField_2; }
	inline void set_U3CValidBeforeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CValidBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPubKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CPubKeyU3Ek__BackingField_3)); }
	inline RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * get_U3CPubKeyU3Ek__BackingField_3() const { return ___U3CPubKeyU3Ek__BackingField_3; }
	inline RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 ** get_address_of_U3CPubKeyU3Ek__BackingField_3() { return &___U3CPubKeyU3Ek__BackingField_3; }
	inline void set_U3CPubKeyU3Ek__BackingField_3(RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * value)
	{
		___U3CPubKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPubKeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSelfSignedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CSelfSignedU3Ek__BackingField_4)); }
	inline bool get_U3CSelfSignedU3Ek__BackingField_4() const { return ___U3CSelfSignedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSelfSignedU3Ek__BackingField_4() { return &___U3CSelfSignedU3Ek__BackingField_4; }
	inline void set_U3CSelfSignedU3Ek__BackingField_4(bool value)
	{
		___U3CSelfSignedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSubjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CSubjectU3Ek__BackingField_5)); }
	inline DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * get_U3CSubjectU3Ek__BackingField_5() const { return ___U3CSubjectU3Ek__BackingField_5; }
	inline DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 ** get_address_of_U3CSubjectU3Ek__BackingField_5() { return &___U3CSubjectU3Ek__BackingField_5; }
	inline void set_U3CSubjectU3Ek__BackingField_5(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * value)
	{
		___U3CSubjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubjectU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIssuerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CIssuerU3Ek__BackingField_6)); }
	inline DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * get_U3CIssuerU3Ek__BackingField_6() const { return ___U3CIssuerU3Ek__BackingField_6; }
	inline DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 ** get_address_of_U3CIssuerU3Ek__BackingField_6() { return &___U3CIssuerU3Ek__BackingField_6; }
	inline void set_U3CIssuerU3Ek__BackingField_6(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * value)
	{
		___U3CIssuerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_TbsCertificate_7() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___TbsCertificate_7)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_TbsCertificate_7() const { return ___TbsCertificate_7; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_TbsCertificate_7() { return &___TbsCertificate_7; }
	inline void set_TbsCertificate_7(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___TbsCertificate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TbsCertificate_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___U3CSignatureU3Ek__BackingField_8)); }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * get_U3CSignatureU3Ek__BackingField_8() const { return ___U3CSignatureU3Ek__BackingField_8; }
	inline Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 ** get_address_of_U3CSignatureU3Ek__BackingField_8() { return &___U3CSignatureU3Ek__BackingField_8; }
	inline void set_U3CSignatureU3Ek__BackingField_8(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * value)
	{
		___U3CSignatureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignatureU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_rawTBSCertificate_9() { return static_cast<int32_t>(offsetof(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C, ___rawTBSCertificate_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawTBSCertificate_9() const { return ___rawTBSCertificate_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawTBSCertificate_9() { return &___rawTBSCertificate_9; }
	inline void set_rawTBSCertificate_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawTBSCertificate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawTBSCertificate_9), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.IAPSecurityException
struct  IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4  : public Exception_t
{
public:

public:
};


// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_7;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_8;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_9;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_10;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_11;

public:
	inline static int32_t get_offset_of_store_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_6)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_6() const { return ___store_6; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_6() { return &___store_6; }
	inline void set_store_6(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_6), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_7)); }
	inline bool get_persistKey_7() const { return ___persistKey_7; }
	inline bool* get_address_of_persistKey_7() { return &___persistKey_7; }
	inline void set_persistKey_7(bool value)
	{
		___persistKey_7 = value;
	}

	inline static int32_t get_offset_of_persisted_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_8)); }
	inline bool get_persisted_8() const { return ___persisted_8; }
	inline bool* get_address_of_persisted_8() { return &___persisted_8; }
	inline void set_persisted_8(bool value)
	{
		___persisted_8 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_9)); }
	inline bool get_privateKeyExportable_9() const { return ___privateKeyExportable_9; }
	inline bool* get_address_of_privateKeyExportable_9() { return &___privateKeyExportable_9; }
	inline void set_privateKeyExportable_9(bool value)
	{
		___privateKeyExportable_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}

	inline static int32_t get_offset_of_rsa_11() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_11)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_11() const { return ___rsa_11; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_11() { return &___rsa_11; }
	inline void set_rsa_11(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_11), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct  InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46  : public IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidRSAData
struct  InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940  : public IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct  InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A  : public IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidX509Data
struct  InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821  : public IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4
{
public:

public:
};


// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct  UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6  : public IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * m_Items[1];

public:
	inline AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * AppleReceiptParser_Parse_m05494531B6D60B6AEFD6D2AFBE68BD07701D9D8A (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** ___receipt1, const RuntimeMethod* method);
// System.Globalization.CultureInfo UnityEngine.Purchasing.Security.AppleReceiptParser::PushInvariantCultureOnThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * AppleReceiptParser_PushInvariantCultureOnThread_m03DF6F31EB14F6D8F56DD260EB8B9F8BE2BC1A44 (const RuntimeMethod* method);
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
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
inline bool AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E_gshared)(___a0, ___b1, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m82D7944674CA81797E10CDE60C05FAF1D281794E (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235 (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Parser_get_RootNode_m9CAC415D72588F591B0D1BDFA2B69A8EAF3B931D (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_m779839B5A14960404DCB3AA6245E4A015C9ADC18 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * PKCS7_get_data_m1871D8A0427E6A93D72B81A3085E4FBF00ED2AD1_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * AppleReceiptParser_ParseReceipt_mF8B94955145DBB4FA399CBA4BE74AC5C837A0364 (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::PopCultureOffThread(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser_PopCultureOffThread_mBDE67E39910BCF56CE82D25672542BA99AABF049 (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___originalCulture0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * Thread_get_CurrentCulture_m08B216EA7CE554F98EB601108206C01A54CAAC5F (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_CurrentCulture(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_CurrentCulture_mB3E49ED9AA150FD1CB3DE40BA436819A5E181127 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___value0, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920 (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_m35C6C984CF3B231F12063FE6FEC52305A9F58866 (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::.ctor()
inline void List_1__ctor_mDD67060197434058092AA0B2734859820F001D3D (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m92F780FEDC1939BF19603D619B8C56A9957B973F_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m54E1B6B1799B3791724207C341E192861ADE2C8A_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m398EE497790C9EA9009B6AAF7E7EC0A239083D26_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mA3DC67A717037D17667BC36397392AE674EB5A3C_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989 (String_t* ___s0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m85B1F80B0DFDD26FAC95F91B45A41F2D101F284E_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * AppleReceiptParser_ParseInAppReceipt_m73AFA47025BCF0F2ED680EBFB1459732DFE5C26C (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___inApp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::Add(!0)
inline void List_1_Add_mE3668B748F02A29C1CD1EAD16C499E0C534EB1F9 (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * __this, AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 *, AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_mECD30F9F5ABBB91C95AE72B1583530B721C0D28B_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::ToArray()
inline AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* List_1_ToArray_m22A8DBEE794FE49378B1900DBB7821BE4D8696E0 (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * __this, const RuntimeMethod* method)
{
	return ((  AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* (*) (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_mF05C6F69BDE94196F25F05A0E9C52223CFDC5928 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m6D5C6567ADF9D1362653F5767E5F18194473D7C4_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m4FFD5BE2D157679AC18ECEED6E05CC6AA7DA361B_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m52670129F56664AF2849DD9DC82A4FB03C83BA65_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mC8718D156C1D0791C30D4019B8BAC3316952CD3E_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m11974FBFA2F4B63E263D94A5A5A4861442606782_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m6E6FF9B588168E7EC786D17612AC20F56BA1ABC5_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m59741BB14025DD1E9F49BCDDF400A279F648542E_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m23C7B503E096DEFFAC0C5A4275543052021DD911_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mDBDB45F498F407FC70626F371FF0CE71434FA288_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m408B34CE16162532C4CDBD3B330DC938C492B273_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m31C57E76238A788E71FCFB6EE3DC61957FC47B7B_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_m87882E03A4ECB219EDB56ADC79A54DD86C597B29 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_mD2B01EF824FA33094E4BDD9E974A3B75BF1D69AB (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m0D0D92949284C608272605271D38D4798D31414E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m7C5105D9E70877C9333E47E266E267E8D4DF52B3 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_mBF6DA8B05A39BAE226A74FF310E134EEBDE12D63 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_mA23F98F90CE85ECCA835E4457D1C26BD5D9CA226 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mD8FC4811667B0371D35479DFF62AFA1D2DE2DBE6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, uint64_t ___length1, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_mD2EB3A823C0481B210345E8D12EF21BA6925F580 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_mFE4640DD1FDA287E21B75486B9ED34E01766920C (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_mE327C31021466482DF804EF977A88278D5C6D537 (uint8_t ___tag0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m95C0637D5EF5B0E687D52382B924FA6ECE4A0D11 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, String_t* ___inOidStr0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_m725CE5A8AB2B67DF5BEF5CDB5D4FA319F3FA6BF8 (RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_mEB03ED94E460D1238DEE12EB0AEFF696034346A0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_mF6092831329057DD6FD37A399D3C5008FF706308 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m0C0666B7796F3CD8A529B586634D6BFC6940D390 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m352802BE8330D7BA52DEFC9AED8C00EA05627C77 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m32FEC6DA0CC4745E4891C1D87DC04CEA9FD922B1 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m7A926B8287F017141590F9A881A1894B2BD86B1B (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_m4310CDE0CC72881555E11EEC5B645E123E6DD4F9 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m2AF86096D3AACD8F06AD60F3175DB35BF7EF54C5 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m22350DE526EC75EC41E2FAD343927210503EED8E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m28BEEC5A546F010053DD22F77362CE8370A4E4F6 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m3927B51635F3EFF4DDBC20182D1C84470898A216 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m8CCACCA1C75A09906C36CAA5A02E6DC96C34BA88 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m5E75D356335934F1228A521EF4D6C3E92B863A40 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m49234F1BD24E3387A68D654F011BA7C6E44665CE (int32_t ___lineLen0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m0B0ADD5DBA9E77F52ED4B468C12FA103B83D8AE0 (uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_mAB921EDEC3BF5F48DADC823D7FFA627D368C2D24 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA4179D7D8427648F6CDD1215F7B4D899993E3BF9 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m9FA247108B60F4E1344E450B404169BDF28DEF9A_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_mF539876E869E9FF1E736B375188336ADC7624827_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mB2F3A100B70517C5319AA791CEB21D257A94BCED_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mCB697202E58D8821DB2860256803719455691943_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m057BE65B3101DEE2EF66E9FF5BDD1A741EA7EA32_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m1F728A29C29A5E667D6E7E0346CCFA7A30404AE0_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m88AA839A5572D82295F4B085CFC18671419F27FF_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m15EED9600F75A719439938F17830B1637D858ECA_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m3A1FB4CCE37EB42CB96E64C3A86E4537C6CB82AC_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC (IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_mEA16941AB5C9CDBEE3B0572E3FA74DD1CC0C8637 (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_mFE83E8F74E068BD14B269BCC31AD0D865A1C21DC (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, uint64_t* ___v1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_mEBF365F501F5181D92752832D2D5CF6B989D6018 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, bool ___pureHexMode0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_data_m6E89804BC54099F4B4D610C3745FB575B71DEAB1_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::.ctor()
inline void List_1__ctor_m506B23691AC022F69F44F691F4CF2593D308FA03 (List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_certChain_m572E90BA5DDD0371EB9A395A51F6FD821F00399A_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * PKCS7_get_certChain_m6FF845BEEC289B22B182A97BB6F68D8E8BED7DA3_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_m15452EAB21FFCB79867DC723367D95B6C60B0B72 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::Add(!0)
inline void List_1_Add_m464ADF67588E5A98A411631B69FFB99EDAE6C319 (List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * __this, X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 *, X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::.ctor()
inline void List_1__ctor_m79C7E36D3C92330A95B40B22BD99F0C8DA674DEF (List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m2D912B83FED611E6C4779654B9DA90949A07CB41_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * PKCS7_get_sinfos_m748935C5A47DDC30D072BBC1DF53FDBD05D2AB72_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277 (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::Add(!0)
inline void List_1_Add_mBF3A735E1128AAACD6B1E0E53FA16FB84F7822A9 (List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * __this, SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F *, SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * RSAKey_ParseNode_m3D32E36AFC8A70764B5459021CBB904CEB99ECA0 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m7EF83991458B68DF4745BE44C93C427424345767_inline (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80 (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_mF5F723766157ED7CC93AADED83EBC632EDD2BEA7 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_mAFB378FB3FD0C4B6F7C85CB337BC162EFABDCEAD (InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m06D8B2388B5016ACC8741A06FC4DB52304C8315B_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m038EAD01447C25AC08735C9CD6300BA740C63BB0_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_mF22EE4649673DF0CAEC115147F2EFC17E3FD7BEA (UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m43A5682BFEE69E6AFA4E2773485DD8869080E902_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD3575212D55E351A8022490EDDB2FECA4847EFA1_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___root0, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m72CD93035CAD2EBEAB6CF94405932D343602CF79 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m13E238AB16C2758CB6CD07F4A3D93CFE3D395F61_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB1CFF279F72029B4FD5A1DEF7E2ED21ECF13F34E_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Subject_mBE649EC34353D754C78934304934D52126B6318C_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_m2EB2BDD79EAC3E5D2121CF9C9E0EDF1B22D70C43_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m3E5FBCC92677120AA5F339F785F65DCAF0CA949F_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Subject_m9701D01645E40CBA76206871A54F10516788B18B_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Issuer_m72B64D194C52EB2B53A22C2B1A91449A3C2F2561_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m52D16D76413F2962A013DE7692027A94B0F1B723 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___n20, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_m27531D603830C730306B7CC35D0C0D0A5E96BE6D_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_mFD34C71175C0BCF3013FC257FF8D4B14C37486C9 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_m7A9971797143DCCF4B18979AB900874BA654BD86_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mE21877BFCE23ADED6FA05C8B1A7C19A76679838F_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_mA5E2F9963D2B7B6D7BF5C1DA106195BED3280863 (InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA4179D7D8427648F6CDD1215F7B4D899993E3BF9 (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
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
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m6D5C6567ADF9D1362653F5767E5F18194473D7C4 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_mD366EDB6DECD6B7FDBC2E2087F98331D6E3F238C (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m4FFD5BE2D157679AC18ECEED6E05CC6AA7DA361B (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_transactionID_mD1002134ADC173A34BFBAD7FBBA46DC119D44C36 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m52670129F56664AF2849DD9DC82A4FB03C83BA65 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mC8718D156C1D0791C30D4019B8BAC3316952CD3E (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_purchaseDate_mC22FFE4988F46B92B2CF5B852780F16B5BBB6CE2 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m11974FBFA2F4B63E263D94A5A5A4861442606782 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m6E6FF9B588168E7EC786D17612AC20F56BA1ABC5 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_mACFC51931D9645A49A5CBAB24667E170341B23C7 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m59741BB14025DD1E9F49BCDDF400A279F648542E (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleInAppPurchaseReceipt_get_cancellationDate_mC55F70493F3B069CB37AF05A097F8232581E4FC9 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m23C7B503E096DEFFAC0C5A4275543052021DD911 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m0FBF18D2C714B5BF56B2D90BD4936A3915374A4C (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m408B34CE16162532C4CDBD3B330DC938C492B273 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m6358EE606CA6496AC1EDAD9A4E4099DC87B485F6 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mDBDB45F498F407FC70626F371FF0CE71434FA288 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m15F316591C359527E0755F2B859075758DF1FD7A (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m31C57E76238A788E71FCFB6EE3DC61957FC47B7B (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_mF05C6F69BDE94196F25F05A0E9C52223CFDC5928 (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m92F780FEDC1939BF19603D619B8C56A9957B973F (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m54E1B6B1799B3791724207C341E192861ADE2C8A (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m398EE497790C9EA9009B6AAF7E7EC0A239083D26 (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mA3DC67A717037D17667BC36397392AE674EB5A3C (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_mECD30F9F5ABBB91C95AE72B1583530B721C0D28B (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m85B1F80B0DFDD26FAC95F91B45A41F2D101F284E (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_m35C6C984CF3B231F12063FE6FEC52305A9F58866 (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, const RuntimeMethod* method)
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
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * AppleReceiptParser_Parse_m9E41042460D690C3A2259CAE305C3DE7019824D8 (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, const RuntimeMethod* method)
{
	PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * V_0 = NULL;
	AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___receiptData0;
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_1;
		L_1 = AppleReceiptParser_Parse_m05494531B6D60B6AEFD6D2AFBE68BD07701D9D8A(__this, L_0, (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * AppleReceiptParser_Parse_m05494531B6D60B6AEFD6D2AFBE68BD07701D9D8A (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiptData0, PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** ___receipt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * V_0 = NULL;
	bool V_1 = false;
	AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * V_2 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_3 = NULL;
	Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * V_4 = NULL;
	AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = AppleReceiptParser_PushInvariantCultureOnThread_m03DF6F31EB14F6D8F56DD260EB8B9F8BE2BC1A44(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_1);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_1, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0057;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_3);
			bool L_4;
			L_4 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_3, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0057;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_5);
			bool L_6;
			L_6 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_5, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0057;
			}
		}

IL_003b:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___receiptData0;
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_8);
			RuntimeObject * L_9;
			L_9 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_8, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			bool L_10;
			L_10 = AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E(L_7, ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_9, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)), /*hidden argument*/AppleReceiptParser_ArrayEquals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41568A7D409B512DA799057E4C455A8938AF3C4E_RuntimeMethod_var);
			G_B6_0 = ((int32_t)(L_10));
			goto IL_0058;
		}

IL_0057:
		{
			G_B6_0 = 0;
		}

IL_0058:
		{
			V_1 = (bool)G_B6_0;
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_008d;
			}
		}

IL_005c:
		{
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** L_12 = ___receipt1;
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_13);
			RuntimeObject * L_14;
			L_14 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_13, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			*((RuntimeObject **)L_12) = (RuntimeObject *)((PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 *)CastclassClass((RuntimeObject*)L_14, PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)((PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 *)CastclassClass((RuntimeObject*)L_14, PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5_il2cpp_TypeInfo_var)));
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			NullCheck(L_15);
			RuntimeObject * L_16;
			L_16 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_15, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			V_2 = ((AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 *)CastclassClass((RuntimeObject*)L_16, AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x111, FINALLY_0107);
		}

IL_008d:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___receiptData0;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_18 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_18, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
		}

IL_0094:
		try
		{ // begin try (depth: 2)
			Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * L_19 = (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE *)il2cpp_codegen_object_new(Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE_il2cpp_TypeInfo_var);
			Asn1Parser__ctor_m82D7944674CA81797E10CDE60C05FAF1D281794E(L_19, /*hidden argument*/NULL);
			V_4 = L_19;
			Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * L_20 = V_4;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = V_3;
			NullCheck(L_20);
			Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235(L_20, L_21, /*hidden argument*/NULL);
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** L_22 = ___receipt1;
			Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * L_23 = V_4;
			NullCheck(L_23);
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24;
			L_24 = Asn1Parser_get_RootNode_m9CAC415D72588F591B0D1BDFA2B69A8EAF3B931D(L_23, /*hidden argument*/NULL);
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * L_25 = (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 *)il2cpp_codegen_object_new(PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5_il2cpp_TypeInfo_var);
			PKCS7__ctor_m779839B5A14960404DCB3AA6245E4A015C9ADC18(L_25, L_24, /*hidden argument*/NULL);
			*((RuntimeObject **)L_22) = (RuntimeObject *)L_25;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)L_25);
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** L_26 = ___receipt1;
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * L_27 = *((PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 **)L_26);
			NullCheck(L_27);
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_28;
			L_28 = PKCS7_get_data_m1871D8A0427E6A93D72B81A3085E4FBF00ED2AD1_inline(L_27, /*hidden argument*/NULL);
			AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_29;
			L_29 = AppleReceiptParser_ParseReceipt_mF8B94955145DBB4FA399CBA4BE74AC5C837A0364(__this, L_28, /*hidden argument*/NULL);
			V_5 = L_29;
			IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_30 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_31 = V_5;
			NullCheck(L_30);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_30, _stringLiteral08D691F3DDE80A0F3B3AFC79770EEC67F64A0234, L_31, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_32 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 ** L_33 = ___receipt1;
			PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * L_34 = *((PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 **)L_33);
			NullCheck(L_32);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_32, _stringLiteral6BB0A873A6D6124ACF9D6FEAEB6204BC0FFE7381, L_34, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_35 = ((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___receiptData0;
			NullCheck(L_35);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_35, _stringLiteral0B6E49D70DC463E44307A8A539250C8090D10786, (RuntimeObject *)(RuntimeObject *)L_36, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
			AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_37 = V_5;
			V_2 = L_37;
			IL2CPP_LEAVE(0x111, FINALLY_00fc);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fc;
		}

FINALLY_00fc:
		{ // begin finally (depth: 2)
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_38 = V_3;
				if (!L_38)
				{
					goto IL_0106;
				}
			}

IL_00ff:
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_39 = V_3;
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
			}

IL_0106:
			{
				IL2CPP_END_FINALLY(252)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(252)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x111, FINALLY_0107);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		AppleReceiptParser_PopCultureOffThread_mBDE67E39910BCF56CE82D25672542BA99AABF049(L_40, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(263)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x111, IL_0111)
	}

IL_0111:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_41 = V_2;
		return L_41;
	}
}
// System.Globalization.CultureInfo UnityEngine.Purchasing.Security.AppleReceiptParser::PushInvariantCultureOnThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * AppleReceiptParser_PushInvariantCultureOnThread_m03DF6F31EB14F6D8F56DD260EB8B9F8BE2BC1A44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * V_0 = NULL;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * V_1 = NULL;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = Thread_get_CurrentCulture_m08B216EA7CE554F98EB601108206C01A54CAAC5F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3;
		L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_2);
		Thread_set_CurrentCulture_mB3E49ED9AA150FD1CB3DE40BA436819A5E181127(L_2, L_3, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::PopCultureOffThread(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser_PopCultureOffThread_mBDE67E39910BCF56CE82D25672542BA99AABF049 (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___originalCulture0, const RuntimeMethod* method)
{
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1 = ___originalCulture0;
		NullCheck(L_0);
		Thread_set_CurrentCulture_mB3E49ED9AA150FD1CB3DE40BA436819A5E181127(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * AppleReceiptParser_ParseReceipt_mF8B94955145DBB4FA399CBA4BE74AC5C837A0364 (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE3668B748F02A29C1CD1EAD16C499E0C534EB1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m22A8DBEE794FE49378B1900DBB7821BE4D8696E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDD67060197434058092AA0B2734859820F001D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * V_1 = NULL;
	List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_8 = NULL;
	String_t* V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * V_14 = NULL;
	int32_t G_B3_0 = 0;
	int64_t G_B10_0 = 0;
	int64_t G_B9_0 = 0;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = ___data0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_2) == ((int64_t)((int64_t)((int64_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_4 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppleReceiptParser_ParseReceipt_mF8B94955145DBB4FA399CBA4BE74AC5C837A0364_RuntimeMethod_var)));
	}

IL_001f:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5 = ___data0;
		NullCheck(L_5);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6;
		L_6 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_7 = (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 *)il2cpp_codegen_object_new(AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849_il2cpp_TypeInfo_var);
		AppleReceipt__ctor_m35C6C984CF3B231F12063FE6FEC52305A9F58866(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * L_8 = (List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 *)il2cpp_codegen_object_new(List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863_il2cpp_TypeInfo_var);
		List_1__ctor_mDD67060197434058092AA0B2734859820F001D3D(L_8, /*hidden argument*/List_1__ctor_mDD67060197434058092AA0B2734859820F001D3D_RuntimeMethod_var);
		V_2 = L_8;
		V_4 = 0;
		goto IL_01ae;
	}

IL_003b:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_9 = V_0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11;
		L_11 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12 = V_5;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_12, /*hidden argument*/NULL);
		V_6 = (bool)((((int64_t)L_13) == ((int64_t)((int64_t)((int64_t)3))))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_01a7;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15 = V_5;
		NullCheck(L_15);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_16;
		L_16 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_18;
		L_18 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19 = V_5;
		NullCheck(L_19);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20;
		L_20 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_19, 2, /*hidden argument*/NULL);
		V_8 = L_20;
		int64_t L_21 = V_7;
		V_11 = L_21;
		int64_t L_22 = V_11;
		V_10 = L_22;
		int64_t L_23 = V_10;
		if ((((int64_t)L_23) > ((int64_t)((int64_t)((int64_t)((int32_t)12))))))
		{
			goto IL_00bc;
		}
	}
	{
		int64_t L_24 = V_10;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_24, (int64_t)((int64_t)((int64_t)2))));
		G_B9_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)((int64_t)((int64_t)3))))))
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
	}
	{
		goto IL_00ad;
	}

IL_0095:
	{
		switch (((int32_t)((uint32_t)G_B10_0)))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_012d;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int64_t L_26 = V_10;
		if ((((int64_t)L_26) == ((int64_t)((int64_t)((int64_t)((int32_t)12))))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_01a6;
	}

IL_00bc:
	{
		int64_t L_27 = V_10;
		if ((((int64_t)L_27) == ((int64_t)((int64_t)((int64_t)((int32_t)17))))))
		{
			goto IL_016f;
		}
	}
	{
		goto IL_00c8;
	}

IL_00c8:
	{
		int64_t L_28 = V_10;
		if ((((int64_t)L_28) == ((int64_t)((int64_t)((int64_t)((int32_t)19))))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_01a6;
	}

IL_00d7:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_29 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
		L_30 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_31 = V_8;
		NullCheck(L_31);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_32;
		L_32 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_34;
		L_34 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_30, L_33);
		NullCheck(L_29);
		AppleReceipt_set_bundleID_m92F780FEDC1939BF19603D619B8C56A9957B973F_inline(L_29, L_34, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_00fa:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_35 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_36;
		L_36 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_37 = V_8;
		NullCheck(L_37);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_38;
		L_38 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_37, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39;
		L_39 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_40;
		L_40 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_36, L_39);
		NullCheck(L_35);
		AppleReceipt_set_appVersion_m54E1B6B1799B3791724207C341E192861ADE2C8A_inline(L_35, L_40, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_011d:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_41 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_42 = V_8;
		NullCheck(L_42);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43;
		L_43 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		AppleReceipt_set_opaque_m398EE497790C9EA9009B6AAF7E7EC0A239083D26_inline(L_41, L_43, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_012d:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_44 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_45 = V_8;
		NullCheck(L_45);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
		L_46 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		AppleReceipt_set_hash_mA3DC67A717037D17667BC36397392AE674EB5A3C_inline(L_44, L_46, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_013d:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_47;
		L_47 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_48 = V_8;
		NullCheck(L_48);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_49;
		L_49 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_48, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50;
		L_50 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_51;
		L_51 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_47, L_50);
		V_9 = L_51;
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_52 = V_1;
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_54;
		L_54 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_55;
		L_55 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_12), /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleReceipt_set_receiptCreationDate_m85B1F80B0DFDD26FAC95F91B45A41F2D101F284E_inline(L_52, L_55, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_016f:
	{
		List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * L_56 = V_2;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_57 = V_8;
		NullCheck(L_57);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_58;
		L_58 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_57, 0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_59;
		L_59 = AppleReceiptParser_ParseInAppReceipt_m73AFA47025BCF0F2ED680EBFB1459732DFE5C26C(__this, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_mE3668B748F02A29C1CD1EAD16C499E0C534EB1F9(L_56, L_59, /*hidden argument*/List_1_Add_mE3668B748F02A29C1CD1EAD16C499E0C534EB1F9_RuntimeMethod_var);
		goto IL_01a6;
	}

IL_0186:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_60 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_61;
		L_61 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_62 = V_8;
		NullCheck(L_62);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_63;
		L_63 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_62, 0, /*hidden argument*/NULL);
		NullCheck(L_63);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64;
		L_64 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_65;
		L_65 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_61, L_64);
		NullCheck(L_60);
		AppleReceipt_set_originalApplicationVersion_mECD30F9F5ABBB91C95AE72B1583530B721C0D28B_inline(L_60, L_65, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01ae:
	{
		int32_t L_67 = V_4;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_68 = V_0;
		NullCheck(L_68);
		int64_t L_69;
		L_69 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_68, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)((int64_t)((int64_t)L_67))) < ((int64_t)L_69))? 1 : 0);
		bool L_70 = V_13;
		if (L_70)
		{
			goto IL_003b;
		}
	}
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_71 = V_1;
		List_1_tCD270B5C1BEE264E2F304456A4F92C5B1CB10863 * L_72 = V_2;
		NullCheck(L_72);
		AppleInAppPurchaseReceiptU5BU5D_t49E819CD2524D527BA88C7ADDAC7B876B10323FA* L_73;
		L_73 = List_1_ToArray_m22A8DBEE794FE49378B1900DBB7821BE4D8696E0(L_72, /*hidden argument*/List_1_ToArray_m22A8DBEE794FE49378B1900DBB7821BE4D8696E0_RuntimeMethod_var);
		NullCheck(L_71);
		L_71->set_inAppPurchaseReceipts_6(L_73);
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_74 = V_1;
		V_14 = L_74;
		goto IL_01d3;
	}

IL_01d3:
	{
		AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * L_75 = V_14;
		return L_75;
	}
}
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * AppleReceiptParser_ParseInAppReceipt_m73AFA47025BCF0F2ED680EBFB1459732DFE5C26C (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___inApp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_5 = NULL;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * V_9 = NULL;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_0 = (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 *)il2cpp_codegen_object_new(AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863_il2cpp_TypeInfo_var);
		AppleInAppPurchaseReceipt__ctor_mF05C6F69BDE94196F25F05A0E9C52223CFDC5928(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01e0;
	}

IL_000e:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = ___inApp0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3;
		L_3 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = V_2;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_5) == ((int64_t)((int64_t)((int64_t)3))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_01db;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = V_2;
		NullCheck(L_7);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_8;
		L_8 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11 = V_2;
		NullCheck(L_11);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12;
		L_12 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_11, 2, /*hidden argument*/NULL);
		V_5 = L_12;
		int64_t L_13 = V_4;
		V_7 = L_13;
		int64_t L_14 = V_7;
		V_6 = L_14;
		int64_t L_15 = V_6;
		int64_t L_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_15, (int64_t)((int64_t)((int64_t)((int32_t)1701)))));
		G_B3_0 = L_16;
		if ((!(((uint64_t)L_16) > ((uint64_t)((int64_t)((int64_t)((int32_t)18)))))))
		{
			G_B4_0 = L_16;
			goto IL_0062;
		}
	}
	{
		goto IL_01d8;
	}

IL_0062:
	{
		switch (((int32_t)((uint32_t)G_B4_0)))
		{
			case 0:
			{
				goto IL_00b9;
			}
			case 1:
			{
				goto IL_00d8;
			}
			case 2:
			{
				goto IL_00fb;
			}
			case 3:
			{
				goto IL_0141;
			}
			case 4:
			{
				goto IL_011e;
			}
			case 5:
			{
				goto IL_0154;
			}
			case 6:
			{
				goto IL_0184;
			}
			case 7:
			{
				goto IL_0164;
			}
			case 8:
			{
				goto IL_01d8;
			}
			case 9:
			{
				goto IL_01d8;
			}
			case 10:
			{
				goto IL_01d8;
			}
			case 11:
			{
				goto IL_0174;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01d8;
			}
			case 14:
			{
				goto IL_01d8;
			}
			case 15:
			{
				goto IL_01d8;
			}
			case 16:
			{
				goto IL_01d8;
			}
			case 17:
			{
				goto IL_01d8;
			}
			case 18:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_01d8;
	}

IL_00b9:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_17 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_18 = V_5;
		NullCheck(L_18);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19;
		L_19 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
		L_20 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_21;
		L_21 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		AppleInAppPurchaseReceipt_set_quantity_m6D5C6567ADF9D1362653F5767E5F18194473D7C4_inline(L_17, ((int32_t)((int32_t)L_21)), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00d8:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_22 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_23;
		L_23 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24 = V_5;
		NullCheck(L_24);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_25;
		L_25 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_27;
		L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_26);
		NullCheck(L_22);
		AppleInAppPurchaseReceipt_set_productID_m4FFD5BE2D157679AC18ECEED6E05CC6AA7DA361B_inline(L_22, L_27, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00fb:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_28 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_29;
		L_29 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_30 = V_5;
		NullCheck(L_30);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_31;
		L_31 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_30, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32;
		L_32 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_33;
		L_33 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_29, L_32);
		NullCheck(L_28);
		AppleInAppPurchaseReceipt_set_transactionID_m52670129F56664AF2849DD9DC82A4FB03C83BA65_inline(L_28, L_33, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_011e:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_34 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_35;
		L_35 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_36 = V_5;
		NullCheck(L_36);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_37;
		L_37 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_36, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38;
		L_38 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_39;
		L_39 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_35, L_38);
		NullCheck(L_34);
		AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mC8718D156C1D0791C30D4019B8BAC3316952CD3E_inline(L_34, L_39, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0141:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_40 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_42;
		L_42 = AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		AppleInAppPurchaseReceipt_set_purchaseDate_m11974FBFA2F4B63E263D94A5A5A4861442606782_inline(L_40, L_42, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0154:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_43 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_45;
		L_45 = AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		AppleInAppPurchaseReceipt_set_originalPurchaseDate_m6E6FF9B588168E7EC786D17612AC20F56BA1ABC5_inline(L_43, L_45, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0164:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_46 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_47 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_48;
		L_48 = AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m59741BB14025DD1E9F49BCDDF400A279F648542E_inline(L_46, L_48, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0174:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_49 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_51;
		L_51 = AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		AppleInAppPurchaseReceipt_set_cancellationDate_m23C7B503E096DEFFAC0C5A4275543052021DD911_inline(L_49, L_51, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0184:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_52 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_53 = V_5;
		NullCheck(L_53);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_54;
		L_54 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_53, 0, /*hidden argument*/NULL);
		NullCheck(L_54);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55;
		L_55 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_56;
		L_56 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleInAppPurchaseReceipt_set_productType_mDBDB45F498F407FC70626F371FF0CE71434FA288_inline(L_52, ((int32_t)((int32_t)L_56)), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01a0:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_57 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_58 = V_5;
		NullCheck(L_58);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_59;
		L_59 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_58, 0, /*hidden argument*/NULL);
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60;
		L_60 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_61;
		L_61 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		AppleInAppPurchaseReceipt_set_isFreeTrial_m408B34CE16162532C4CDBD3B330DC938C492B273_inline(L_57, ((int32_t)((int32_t)L_61)), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01bc:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_62 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_63 = V_5;
		NullCheck(L_63);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_64;
		L_64 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_63, 0, /*hidden argument*/NULL);
		NullCheck(L_64);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65;
		L_65 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_66;
		L_66 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m31C57E76238A788E71FCFB6EE3DC61957FC47B7B_inline(L_62, ((int32_t)((int32_t)L_66)), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01d8:
	{
		goto IL_01da;
	}

IL_01da:
	{
	}

IL_01db:
	{
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_01e0:
	{
		int32_t L_68 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_69 = ___inApp0;
		NullCheck(L_69);
		int64_t L_70;
		L_70 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_69, /*hidden argument*/NULL);
		V_8 = (bool)((((int64_t)((int64_t)((int64_t)L_68))) < ((int64_t)L_70))? 1 : 0);
		bool L_71 = V_8;
		if (L_71)
		{
			goto IL_000e;
		}
	}
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_72 = V_0;
		V_9 = L_72;
		goto IL_01f8;
	}

IL_01f8:
	{
		AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * L_73 = V_9;
		return L_73;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AppleReceiptParser_TryParseDateTimeNode_m6CFF7FDF0B65508ED49B22E44B071BD54A9E6F6E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = ___node0;
		NullCheck(L_1);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2;
		L_2 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_3);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_9;
		L_9 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_10;
		L_10 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_003f;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_12 = V_3;
		return L_12;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__ctor_m198D90CDE64ECA18FC0C9D81D79D6A8BC2E2C5BC (AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__cctor_m9944C351312895222D2C382AB3D2C126D9A886E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		((AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t2B80481B702602DA5DCBBC1EB9CFFE5AD4911858_il2cpp_TypeInfo_var))->set__mostRecentReceiptData_0(L_0);
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m22350DE526EC75EC41E2FAD343927210503EED8E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m87882E03A4ECB219EDB56ADC79A54DD86C597B29(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___parentNode0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Asn1Node_get_Deepness_mD2B01EF824FA33094E4BDD9E974A3B75BF1D69AB(L_0, /*hidden argument*/NULL);
		__this->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)((int64_t)((int64_t)1)))));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = ___parentNode0;
		__this->set_parentNode_9(L_2);
		int64_t L_3 = ___dataOffset1;
		__this->set_dataOffset_1(L_3);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_m87882E03A4ECB219EDB56ADC79A54DD86C597B29 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set_childNodeList_5(L_0);
		__this->set_data_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_dataLength_2(((int64_t)((int64_t)0)));
		__this->set_lengthFieldBytes_3(((int64_t)((int64_t)0)));
		__this->set_unusedBits_6((uint8_t)0);
		__this->set_tag_0((uint8_t)((int32_t)48));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = __this->get_childNodeList_5();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		__this->set_deepness_7(((int64_t)((int64_t)0)));
		__this->set_parentNode_9((Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_mF6092831329057DD6FD37A399D3C5008FF706308 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___startNode0;
		String_t* L_1;
		L_1 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_7 = ___baseLine1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___lineLen3;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		String_t* L_17 = ___baseLine1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_22;
		L_22 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0086;
	}

IL_006c:
	{
		String_t* L_23 = V_0;
		String_t* L_24 = ___baseLine1;
		String_t* L_25 = ___lStr2;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = ___lineLen3;
		String_t* L_29 = V_2;
		String_t* L_30;
		L_30 = Asn1Node_FormatLineHexString_m0D0D92949284C608272605271D38D4798D31414E(__this, L_25, L_27, L_28, L_29, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_23, L_24, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_0086:
	{
		goto IL_0093;
	}

IL_0089:
	{
		String_t* L_32 = V_0;
		String_t* L_33 = ___baseLine1;
		String_t* L_34;
		L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_0093:
	{
		String_t* L_35 = V_0;
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_5 = L_36;
		goto IL_00a2;
	}

IL_00a2:
	{
		String_t* L_37 = V_5;
		return L_37;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_mEB03ED94E460D1238DEE12EB0AEFF696034346A0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00c5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20 = ___msg3;
		int32_t L_21 = V_3;
		String_t* L_22 = ___msg3;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_20);
		String_t* L_25;
		L_25 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_25);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_19;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_27;
		L_27 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00c0;
	}

IL_007b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		String_t* L_33 = ___lStr0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_32;
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117(L_35, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		String_t* L_39 = ___msg3;
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		String_t* L_42;
		L_42 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_42);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_38;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_44;
		L_44 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_00c0:
	{
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
	}

IL_00c5:
	{
		int32_t L_47 = V_3;
		String_t* L_48 = ___msg3;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_48, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_5;
		if (L_50)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_51 = V_0;
		V_6 = L_51;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_52 = V_6;
		return L_52;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m0D0D92949284C608272605271D38D4798D31414E (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00a5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		String_t* L_19 = ___msg3;
		int32_t L_20 = V_3;
		String_t* L_21 = ___msg3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		NullCheck(L_19);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_24);
		String_t* L_25;
		L_25 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_18, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00a0;
	}

IL_006b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		String_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		String_t* L_31 = ___lStr0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_30;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117(L_33, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_32;
		String_t* L_36 = ___msg3;
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		String_t* L_39;
		L_39 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40;
		L_40 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_35, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a0:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
	}

IL_00a5:
	{
		int32_t L_43 = V_3;
		String_t* L_44 = ___msg3;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_44, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_47 = V_0;
		V_6 = L_47;
		goto IL_00bd;
	}

IL_00bd:
	{
		String_t* L_48 = V_6;
		return L_48;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m3927B51635F3EFF4DDBC20182D1C84470898A216 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m87882E03A4ECB219EDB56ADC79A54DD86C597B29(__this, /*hidden argument*/NULL);
		__this->set_dataOffset_1(((int64_t)((int64_t)0)));
		return;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31)))));
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m8CCACCA1C75A09906C36CAA5A02E6DC96C34BA88 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m7C5105D9E70877C9333E47E266E267E8D4DF52B3(__this, (bool)0, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		bool L_1;
		L_1 = Asn1Node_InternalLoadData_mBF6DA8B05A39BAE226A74FF310E134EEBDE12D63(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		IL2CPP_LEAVE(0x2A, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m7C5105D9E70877C9333E47E266E267E8D4DF52B3(__this, (bool)1, /*hidden argument*/NULL);
		Asn1Node_RecalculateTreePar_mA23F98F90CE85ECCA835E4457D1C26BD5D9CA226(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_mD2EB3A823C0481B210345E8D12EF21BA6925F580 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	{
		V_0 = (bool)1;
		int64_t L_0;
		L_0 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___xdata0;
		uint8_t L_2 = __this->get_tag_0();
		NullCheck(L_1);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___xdata0;
		int64_t L_4 = __this->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Asn1Util_DERLengthEncode_mD8FC4811667B0371D35479DFF62AFA1D2DE2DBE6(L_3, L_4, /*hidden argument*/NULL);
		uint8_t L_6 = __this->get_tag_0();
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___xdata0;
		uint8_t L_9 = __this->get_unusedBits_6();
		NullCheck(L_8);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_8, L_9);
	}

IL_0040:
	{
		int64_t L_10 = V_1;
		V_3 = (bool)((((int64_t)L_10) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_data_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_data_4();
		NullCheck(L_16);
		NullCheck(L_14);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
	}

IL_0071:
	{
		goto IL_00a2;
	}

IL_0074:
	{
		V_6 = 0;
		goto IL_0095;
	}

IL_007a:
	{
		int32_t L_17 = V_6;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_18;
		L_18 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(__this, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19 = V_5;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = ___xdata0;
		NullCheck(L_19);
		bool L_21;
		L_21 = Asn1Node_SaveData_mD2EB3A823C0481B210345E8D12EF21BA6925F580(L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0095:
	{
		int32_t L_23 = V_6;
		int64_t L_24 = V_1;
		V_7 = (bool)((((int64_t)((int64_t)((int64_t)L_23))) < ((int64_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_007a;
		}
	}
	{
	}

IL_00a2:
	{
		bool L_26 = V_0;
		V_8 = L_26;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_mFE4640DD1FDA287E21B75486B9ED34E01766920C (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		__this->set_data_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_0 = ((Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3 = V_0;
		NullCheck(L_3);
		Asn1Node_ClearAll_mFE4640DD1FDA287E21B75486B9ED34E01766920C(L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_1;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = __this->get_childNodeList_5();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = __this->get_childNodeList_5();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
		Asn1Node_RecalculateTreePar_mA23F98F90CE85ECCA835E4457D1C26BD5D9CA226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m28BEEC5A546F010053DD22F77362CE8370A4E4F6 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___xdata0, const RuntimeMethod* method)
{
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = ___xdata0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		Asn1Node_RecalculateTreePar_mA23F98F90CE85ECCA835E4457D1C26BD5D9CA226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((int64_t)((int64_t)L_1));
		goto IL_0010;
	}

IL_0010:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	bool V_1 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_2 = NULL;
	{
		V_0 = (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)NULL;
		int32_t L_0 = ___index0;
		int64_t L_1;
		L_1 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int64_t)((int64_t)((int64_t)L_0))) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = __this->get_childNodeList_5();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)CastclassClass((RuntimeObject*)L_5, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var));
	}

IL_0025:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint8_t L_0 = __this->get_tag_0();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Asn1Util_GetTagName_mE327C31021466482DF804EF977A88278D5C6D537(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_parentNode_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_m4310CDE0CC72881555E11EEC5B645E123E6DD4F9 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9787EA65D34ACB2E800972522D1FB9E8D86E0511);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A7D2EEB1F22F7D3B5BE89D41486AAF0411C31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * V_5 = NULL;
	RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * V_6 = NULL;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int64_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	String_t* V_19 = NULL;
	int32_t G_B23_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = __this->get_tag_0();
		V_8 = L_0;
		uint8_t L_1 = V_8;
		V_7 = L_1;
		uint8_t L_2 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0394;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0197;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_003e:
	{
		uint8_t L_3 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_02a0;
			}
			case 1:
			{
				goto IL_021d;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0488;
			}
			case 5:
			{
				goto IL_0488;
			}
			case 6:
			{
				goto IL_02a0;
			}
			case 7:
			{
				goto IL_02a0;
			}
			case 8:
			{
				goto IL_0488;
			}
			case 9:
			{
				goto IL_0488;
			}
			case 10:
			{
				goto IL_02a0;
			}
			case 11:
			{
				goto IL_02a0;
			}
			case 12:
			{
				goto IL_02a0;
			}
			case 13:
			{
				goto IL_0488;
			}
			case 14:
			{
				goto IL_02a0;
			}
			case 15:
			{
				goto IL_02a0;
			}
			case 16:
			{
				goto IL_02a0;
			}
			case 17:
			{
				goto IL_0488;
			}
			case 18:
			{
				goto IL_02a0;
			}
		}
	}
	{
		goto IL_0488;
	}

IL_0099:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int64_t L_6 = __this->get_dataOffset_1();
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int64_t L_10 = __this->get_dataLength_2();
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int64_t L_14 = __this->get_lengthFieldBytes_3();
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_18 = ___startNode0;
		String_t* L_19;
		L_19 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_17;
		String_t* L_21;
		L_21 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		uint8_t L_23 = __this->get_unusedBits_6();
		uint8_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
		String_t* L_26;
		L_26 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralB4A7D2EEB1F22F7D3B5BE89D41486AAF0411C31A, L_22, /*hidden argument*/NULL);
		V_1 = L_26;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		String_t* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_31, /*hidden argument*/NULL);
		int32_t L_33 = ___lineLen1;
		V_9 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_32))) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_35, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)1))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40;
		L_40 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_38, L_39, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0162;
	}

IL_0138:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		String_t* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_42;
		String_t* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_45);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_44;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		String_t* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_48);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_47;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_50;
		L_50 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_0162:
	{
		goto IL_0192;
	}

IL_0165:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_53 = ___startNode0;
		String_t* L_54;
		L_54 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_54, /*hidden argument*/NULL);
		int32_t L_56 = ___lineLen1;
		String_t* L_57 = V_2;
		String_t* L_58;
		L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_57, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		String_t* L_59;
		L_59 = Asn1Node_FormatLineHexString_m0D0D92949284C608272605271D38D4798D31414E(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_55, L_56, L_58, /*hidden argument*/NULL);
		String_t* L_60;
		L_60 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_51, L_52, L_59, /*hidden argument*/NULL);
		V_0 = L_60;
	}

IL_0192:
	{
		goto IL_05cc;
	}

IL_0197:
	{
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_61 = (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 *)il2cpp_codegen_object_new(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57(L_61, /*hidden argument*/NULL);
		V_5 = L_61;
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_62 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_64 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_64, L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_65;
		L_65 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_62, L_64);
		V_3 = L_65;
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_66 = V_5;
		String_t* L_67 = V_3;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = Oid_GetOidName_m95C0637D5EF5B0E687D52382B924FA6ECE4A0D11(L_66, L_67, /*hidden argument*/NULL);
		V_4 = L_68;
		String_t* L_69 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
		int64_t L_72 = __this->get_dataOffset_1();
		int64_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_71;
		int64_t L_76 = __this->get_dataLength_2();
		int64_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_78);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
		int64_t L_80 = __this->get_lengthFieldBytes_3();
		int64_t L_81 = L_80;
		RuntimeObject * L_82 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_82);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83 = L_79;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_84 = ___startNode0;
		String_t* L_85;
		L_85 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_83;
		String_t* L_87;
		L_87 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_87);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_88 = L_86;
		String_t* L_89 = V_4;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_89);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_90 = L_88;
		String_t* L_91 = V_3;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_91);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_91);
		String_t* L_92;
		L_92 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249, L_90, /*hidden argument*/NULL);
		String_t* L_93;
		L_93 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_69, L_92, /*hidden argument*/NULL);
		V_0 = L_93;
		goto IL_05cc;
	}

IL_021d:
	{
		RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * L_94 = (RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 *)il2cpp_codegen_object_new(RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m725CE5A8AB2B67DF5BEF5CDB5D4FA319F3FA6BF8(L_94, /*hidden argument*/NULL);
		V_6 = L_94;
		RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * L_95 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_97 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_97, L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		String_t* L_98;
		L_98 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_95, L_97);
		V_3 = L_98;
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_99 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_101 = L_100;
		int64_t L_102 = __this->get_dataOffset_1();
		int64_t L_103 = L_102;
		RuntimeObject * L_104 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_104);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_105 = L_101;
		int64_t L_106 = __this->get_dataLength_2();
		int64_t L_107 = L_106;
		RuntimeObject * L_108 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_107);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_108);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_109 = L_105;
		int64_t L_110 = __this->get_lengthFieldBytes_3();
		int64_t L_111 = L_110;
		RuntimeObject * L_112 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_111);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_112);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_112);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_113 = L_109;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_114 = ___startNode0;
		String_t* L_115;
		L_115 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_114, /*hidden argument*/NULL);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_115);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_115);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_116 = L_113;
		String_t* L_117;
		L_117 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_117);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_117);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_118 = L_116;
		String_t* L_119 = V_4;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_119);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_119);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_120 = L_118;
		String_t* L_121 = V_3;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, L_121);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_121);
		String_t* L_122;
		L_122 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral5F3ACD009658E07BAE430ABC62FC30CE666E7249, L_120, /*hidden argument*/NULL);
		String_t* L_123;
		L_123 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_99, L_122, /*hidden argument*/NULL);
		V_0 = L_123;
		goto IL_05cc;
	}

IL_02a0:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_124 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_125 = L_124;
		int64_t L_126 = __this->get_dataOffset_1();
		int64_t L_127 = L_126;
		RuntimeObject * L_128 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_127);
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_128);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_128);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_129 = L_125;
		int64_t L_130 = __this->get_dataLength_2();
		int64_t L_131 = L_130;
		RuntimeObject * L_132 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_131);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_132);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_133 = L_129;
		int64_t L_134 = __this->get_lengthFieldBytes_3();
		int64_t L_135 = L_134;
		RuntimeObject * L_136 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_135);
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, L_136);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_136);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = L_133;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_138 = ___startNode0;
		String_t* L_139;
		L_139 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_139);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_140 = L_137;
		String_t* L_141;
		L_141 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_141);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_141);
		String_t* L_142;
		L_142 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_140, /*hidden argument*/NULL);
		V_1 = L_142;
		uint8_t L_143 = __this->get_tag_0();
		V_11 = (bool)((((int32_t)L_143) == ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_144 = V_11;
		if (!L_144)
		{
			goto IL_0317;
		}
	}
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_145 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_145, /*hidden argument*/NULL);
		V_12 = L_145;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_146 = V_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_147 = __this->get_data_4();
		NullCheck(L_146);
		String_t* L_148;
		L_148 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_146, L_147);
		V_2 = L_148;
		goto IL_0325;
	}

IL_0317:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_149 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_150;
		L_150 = Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938(L_149, /*hidden argument*/NULL);
		V_2 = L_150;
	}

IL_0325:
	{
		String_t* L_151 = V_1;
		NullCheck(L_151);
		int32_t L_152;
		L_152 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_151, /*hidden argument*/NULL);
		String_t* L_153 = V_2;
		NullCheck(L_153);
		int32_t L_154;
		L_154 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_153, /*hidden argument*/NULL);
		int32_t L_155 = ___lineLen1;
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_154))) < ((int32_t)L_155))? 1 : 0);
		bool L_156 = V_13;
		if (!L_156)
		{
			goto IL_0367;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_157 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_158 = L_157;
		String_t* L_159 = V_0;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_159);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_159);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_160 = L_158;
		String_t* L_161 = V_1;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_161);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_161);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = L_160;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163 = L_162;
		String_t* L_164 = V_2;
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_164);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = L_163;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_166;
		L_166 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_165, /*hidden argument*/NULL);
		V_0 = L_166;
		goto IL_038f;
	}

IL_0367:
	{
		String_t* L_167 = V_0;
		String_t* L_168 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_169 = ___startNode0;
		String_t* L_170;
		L_170 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_169, /*hidden argument*/NULL);
		NullCheck(L_170);
		int32_t L_171;
		L_171 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_170, /*hidden argument*/NULL);
		int32_t L_172 = ___lineLen1;
		String_t* L_173 = V_2;
		String_t* L_174;
		L_174 = Asn1Node_FormatLineString_mEB03ED94E460D1238DEE12EB0AEFF696034346A0(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_171, L_172, L_173, /*hidden argument*/NULL);
		String_t* L_175;
		L_175 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_167, L_168, L_174, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_175;
	}

IL_038f:
	{
		goto IL_05cc;
	}

IL_0394:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_176 = __this->get_data_4();
		if (!L_176)
		{
			goto IL_03a8;
		}
	}
	{
		int64_t L_177 = __this->get_dataLength_2();
		G_B23_0 = ((((int64_t)L_177) < ((int64_t)((int64_t)((int64_t)8))))? 1 : 0);
		goto IL_03a9;
	}

IL_03a8:
	{
		G_B23_0 = 0;
	}

IL_03a9:
	{
		V_14 = (bool)G_B23_0;
		bool L_178 = V_14;
		if (!L_178)
		{
			goto IL_041e;
		}
	}
	{
		String_t* L_179 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_180 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_181 = L_180;
		int64_t L_182 = __this->get_dataOffset_1();
		int64_t L_183 = L_182;
		RuntimeObject * L_184 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_183);
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, L_184);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_184);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_185 = L_181;
		int64_t L_186 = __this->get_dataLength_2();
		int64_t L_187 = L_186;
		RuntimeObject * L_188 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_187);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_188);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_188);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_189 = L_185;
		int64_t L_190 = __this->get_lengthFieldBytes_3();
		int64_t L_191 = L_190;
		RuntimeObject * L_192 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_191);
		NullCheck(L_189);
		ArrayElementTypeCheck (L_189, L_192);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_192);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_193 = L_189;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_194 = ___startNode0;
		String_t* L_195;
		L_195 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_194, /*hidden argument*/NULL);
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, L_195);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_195);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_196 = L_193;
		String_t* L_197;
		L_197 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_196);
		ArrayElementTypeCheck (L_196, L_197);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_197);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_198 = L_196;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_199 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_200;
		L_200 = Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D(L_199, /*hidden argument*/NULL);
		V_15 = L_200;
		String_t* L_201;
		L_201 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_15), /*hidden argument*/NULL);
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, L_201);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_201);
		String_t* L_202;
		L_202 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral9787EA65D34ACB2E800972522D1FB9E8D86E0511, L_198, /*hidden argument*/NULL);
		String_t* L_203;
		L_203 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_179, L_202, /*hidden argument*/NULL);
		V_0 = L_203;
		goto IL_0483;
	}

IL_041e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_204 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_205 = L_204;
		int64_t L_206 = __this->get_dataOffset_1();
		int64_t L_207 = L_206;
		RuntimeObject * L_208 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_207);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_208);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_208);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_209 = L_205;
		int64_t L_210 = __this->get_dataLength_2();
		int64_t L_211 = L_210;
		RuntimeObject * L_212 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_211);
		NullCheck(L_209);
		ArrayElementTypeCheck (L_209, L_212);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_212);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_213 = L_209;
		int64_t L_214 = __this->get_lengthFieldBytes_3();
		int64_t L_215 = L_214;
		RuntimeObject * L_216 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_215);
		NullCheck(L_213);
		ArrayElementTypeCheck (L_213, L_216);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_216);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_217 = L_213;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_218 = ___startNode0;
		String_t* L_219;
		L_219 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_218, /*hidden argument*/NULL);
		NullCheck(L_217);
		ArrayElementTypeCheck (L_217, L_219);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_219);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_220 = L_217;
		String_t* L_221;
		L_221 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_221);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_221);
		String_t* L_222;
		L_222 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_220, /*hidden argument*/NULL);
		V_1 = L_222;
		String_t* L_223 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_224 = ___startNode0;
		String_t* L_225 = V_1;
		int32_t L_226 = ___lineLen1;
		String_t* L_227;
		L_227 = Asn1Node_GetHexPrintingStr_mF6092831329057DD6FD37A399D3C5008FF706308(__this, L_224, L_225, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_226, /*hidden argument*/NULL);
		String_t* L_228;
		L_228 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_223, L_227, /*hidden argument*/NULL);
		V_0 = L_228;
	}

IL_0483:
	{
		goto IL_05cc;
	}

IL_0488:
	{
		uint8_t L_229 = __this->get_tag_0();
		V_16 = (bool)((((int32_t)((int32_t)((int32_t)L_229&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_230 = V_16;
		if (!L_230)
		{
			goto IL_0565;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_231 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_232 = L_231;
		int64_t L_233 = __this->get_dataOffset_1();
		int64_t L_234 = L_233;
		RuntimeObject * L_235 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_234);
		NullCheck(L_232);
		ArrayElementTypeCheck (L_232, L_235);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_235);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_236 = L_232;
		int64_t L_237 = __this->get_dataLength_2();
		int64_t L_238 = L_237;
		RuntimeObject * L_239 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_238);
		NullCheck(L_236);
		ArrayElementTypeCheck (L_236, L_239);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_239);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_240 = L_236;
		int64_t L_241 = __this->get_lengthFieldBytes_3();
		int64_t L_242 = L_241;
		RuntimeObject * L_243 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_242);
		NullCheck(L_240);
		ArrayElementTypeCheck (L_240, L_243);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_243);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_244 = L_240;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_245 = ___startNode0;
		String_t* L_246;
		L_246 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_245, /*hidden argument*/NULL);
		NullCheck(L_244);
		ArrayElementTypeCheck (L_244, L_246);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_246);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_247 = L_244;
		String_t* L_248;
		L_248 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_247);
		ArrayElementTypeCheck (L_247, L_248);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_248);
		String_t* L_249;
		L_249 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_247, /*hidden argument*/NULL);
		V_1 = L_249;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_250 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_251;
		L_251 = Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938(L_250, /*hidden argument*/NULL);
		V_2 = L_251;
		String_t* L_252 = V_1;
		NullCheck(L_252);
		int32_t L_253;
		L_253 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_252, /*hidden argument*/NULL);
		String_t* L_254 = V_2;
		NullCheck(L_254);
		int32_t L_255;
		L_255 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_254, /*hidden argument*/NULL);
		int32_t L_256 = ___lineLen1;
		V_17 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)L_255))) < ((int32_t)L_256))? 1 : 0);
		bool L_257 = V_17;
		if (!L_257)
		{
			goto IL_053a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_258 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_259 = L_258;
		String_t* L_260 = V_0;
		NullCheck(L_259);
		ArrayElementTypeCheck (L_259, L_260);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_260);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_261 = L_259;
		String_t* L_262 = V_1;
		NullCheck(L_261);
		ArrayElementTypeCheck (L_261, L_262);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_262);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_263 = L_261;
		NullCheck(L_263);
		ArrayElementTypeCheck (L_263, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_264 = L_263;
		String_t* L_265 = V_2;
		NullCheck(L_264);
		ArrayElementTypeCheck (L_264, L_265);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_265);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_266 = L_264;
		NullCheck(L_266);
		ArrayElementTypeCheck (L_266, _stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		(L_266)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1AC39C0EA9E4D306D424F6C66A205ABF47D53B5E);
		String_t* L_267;
		L_267 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_266, /*hidden argument*/NULL);
		V_0 = L_267;
		goto IL_0562;
	}

IL_053a:
	{
		String_t* L_268 = V_0;
		String_t* L_269 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_270 = ___startNode0;
		String_t* L_271;
		L_271 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_270, /*hidden argument*/NULL);
		NullCheck(L_271);
		int32_t L_272;
		L_272 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_271, /*hidden argument*/NULL);
		int32_t L_273 = ___lineLen1;
		String_t* L_274 = V_2;
		String_t* L_275;
		L_275 = Asn1Node_FormatLineString_mEB03ED94E460D1238DEE12EB0AEFF696034346A0(__this, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_272, L_273, L_274, /*hidden argument*/NULL);
		String_t* L_276;
		L_276 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_268, L_269, L_275, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_276;
	}

IL_0562:
	{
		goto IL_05ca;
	}

IL_0565:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_277 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_278 = L_277;
		int64_t L_279 = __this->get_dataOffset_1();
		int64_t L_280 = L_279;
		RuntimeObject * L_281 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_280);
		NullCheck(L_278);
		ArrayElementTypeCheck (L_278, L_281);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_281);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_282 = L_278;
		int64_t L_283 = __this->get_dataLength_2();
		int64_t L_284 = L_283;
		RuntimeObject * L_285 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_284);
		NullCheck(L_282);
		ArrayElementTypeCheck (L_282, L_285);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_285);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_286 = L_282;
		int64_t L_287 = __this->get_lengthFieldBytes_3();
		int64_t L_288 = L_287;
		RuntimeObject * L_289 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_288);
		NullCheck(L_286);
		ArrayElementTypeCheck (L_286, L_289);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_289);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_290 = L_286;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_291 = ___startNode0;
		String_t* L_292;
		L_292 = Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30(__this, L_291, /*hidden argument*/NULL);
		NullCheck(L_290);
		ArrayElementTypeCheck (L_290, L_292);
		(L_290)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_292);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_293 = L_290;
		String_t* L_294;
		L_294 = Asn1Node_get_TagName_m6AC0A4455F2CD68FB4A83C49A52A00CF7B3A05F0(__this, /*hidden argument*/NULL);
		NullCheck(L_293);
		ArrayElementTypeCheck (L_293, L_294);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_294);
		String_t* L_295;
		L_295 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4202CE17CF8429812DBB3C69FBD0097EC2457F9F, L_293, /*hidden argument*/NULL);
		V_1 = L_295;
		String_t* L_296 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_297 = ___startNode0;
		String_t* L_298 = V_1;
		int32_t L_299 = ___lineLen1;
		String_t* L_300;
		L_300 = Asn1Node_GetHexPrintingStr_mF6092831329057DD6FD37A399D3C5008FF706308(__this, L_297, L_298, _stringLiteralC2DD8ADEA00866AFE6382302B25CE5A086DBCEF8, L_299, /*hidden argument*/NULL);
		String_t* L_301;
		L_301 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_296, L_300, /*hidden argument*/NULL);
		V_0 = L_301;
	}

IL_05ca:
	{
		goto IL_05cc;
	}

IL_05cc:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_302 = __this->get_childNodeList_5();
		NullCheck(L_302);
		int32_t L_303;
		L_303 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_302);
		V_18 = (bool)((((int32_t)((((int32_t)L_303) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_304 = V_18;
		if (!L_304)
		{
			goto IL_05f5;
		}
	}
	{
		String_t* L_305 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_306 = ___startNode0;
		int32_t L_307 = ___lineLen1;
		String_t* L_308;
		L_308 = Asn1Node_GetListStr_m0C0666B7796F3CD8A529B586634D6BFC6940D390(__this, L_306, L_307, /*hidden argument*/NULL);
		String_t* L_309;
		L_309 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_305, L_308, /*hidden argument*/NULL);
		V_0 = L_309;
	}

IL_05f5:
	{
		String_t* L_310 = V_0;
		V_19 = L_310;
		goto IL_05fa;
	}

IL_05fa:
	{
		String_t* L_311 = V_19;
		return L_311;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_mEBF365F501F5181D92752832D2D5CF6B989D6018 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, bool ___pureHexMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * V_2 = NULL;
	RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * V_3 = NULL;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_4 = NULL;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	bool V_7 = false;
	String_t* V_8 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		bool L_0 = ___pureHexMode0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC(L_3, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0175;
	}

IL_0027:
	{
		uint8_t L_5 = __this->get_tag_0();
		V_6 = L_5;
		uint8_t L_6 = V_6;
		V_5 = L_6;
		uint8_t L_7 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00ae;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_00c7;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0053:
	{
		uint8_t L_8 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_010c;
			}
			case 1:
			{
				goto IL_00e4;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_0139;
			}
			case 5:
			{
				goto IL_0139;
			}
			case 6:
			{
				goto IL_00fe;
			}
			case 7:
			{
				goto IL_00fe;
			}
			case 8:
			{
				goto IL_0139;
			}
			case 9:
			{
				goto IL_0139;
			}
			case 10:
			{
				goto IL_00fe;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_0139;
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
				goto IL_0139;
			}
			case 18:
			{
				goto IL_00fe;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00ae:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC(L_10, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0173;
	}

IL_00c7:
	{
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_12 = (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 *)il2cpp_codegen_object_new(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_13 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_13, L_15);
		V_0 = L_16;
		goto IL_0173;
	}

IL_00e4:
	{
		RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * L_17 = (RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 *)il2cpp_codegen_object_new(RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m725CE5A8AB2B67DF5BEF5CDB5D4FA319F3FA6BF8(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * L_18 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_data_4();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_20, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_18, L_20);
		V_0 = L_21;
		goto IL_0173;
	}

IL_00fe:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0173;
	}

IL_010c:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_24 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_24, /*hidden argument*/NULL);
		V_4 = L_24;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_25 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_data_4();
		NullCheck(L_25);
		String_t* L_27;
		L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_25, L_26);
		V_0 = L_27;
		goto IL_0173;
	}

IL_0123:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC(L_29, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0173;
	}

IL_0139:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938(L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0171;
	}

IL_015b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC(L_36, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_37;
	}

IL_0171:
	{
		goto IL_0173;
	}

IL_0173:
	{
	}

IL_0175:
	{
		String_t* L_38 = V_0;
		V_8 = L_38;
		goto IL_017a;
	}

IL_017a:
	{
		String_t* L_39 = V_8;
		return L_39;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m72CD93035CAD2EBEAB6CF94405932D343602CF79 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_dataLength_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int64_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1;
		L_1 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int64_t L_2 = V_1;
		V_3 = (bool)((((int64_t)L_2) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_data_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_data_4();
		NullCheck(L_8);
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))));
	}

IL_003f:
	{
		goto IL_0070;
	}

IL_0042:
	{
		V_6 = 0;
		goto IL_0063;
	}

IL_0048:
	{
		int32_t L_9 = V_6;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_10;
		L_10 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(__this, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11 = V_5;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = Asn1Node_SaveData_mD2EB3A823C0481B210345E8D12EF21BA6925F580(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_15 = V_6;
		int64_t L_16 = V_1;
		V_7 = (bool)((((int64_t)((int64_t)((int64_t)L_15))) < ((int64_t)L_16))? 1 : 0);
		bool L_17 = V_7;
		if (L_17)
		{
			goto IL_0048;
		}
	}
	{
	}

IL_0070:
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_18 = V_0;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_18);
		if ((int64_t)(L_19) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_19));
		V_2 = L_20;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_21, ((int64_t)((int64_t)0)));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_22 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_2;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_24);
		NullCheck(L_22);
		int32_t L_26;
		L_26 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)((int32_t)L_25)));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_27 = V_0;
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_2;
		V_8 = L_28;
		goto IL_00a2;
	}

IL_00a2:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_8;
		return L_29;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_mD2B01EF824FA33094E4BDD9E974A3B75BF1D69AB (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_deepness_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m7C5105D9E70877C9333E47E266E267E8D4DF52B3 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_requireRecalculatePar_10(L_0);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_mA23F98F90CE85ECCA835E4457D1C26BD5D9CA226 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, const RuntimeMethod* method)
{
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = __this->get_requireRecalculatePar_10();
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_005b;
	}

IL_0010:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0014:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = V_0;
		NullCheck(L_2);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3;
		L_3 = Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = V_0;
		NullCheck(L_4);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5;
		L_5 = Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0014;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = V_0;
		int64_t L_8;
		L_8 = Asn1Node_ResetBranchDataLength_m352802BE8330D7BA52DEFC9AED8C00EA05627C77(L_7, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_dataOffset_1(((int64_t)((int64_t)0)));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_deepness_7(((int64_t)((int64_t)0)));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11 = V_0;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_dataOffset_1();
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_13 = V_0;
		NullCheck(L_13);
		int64_t L_14 = L_13->get_lengthFieldBytes_3();
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)((int64_t)((int64_t)1)))), (int64_t)L_14));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15 = V_0;
		int64_t L_16 = V_1;
		Asn1Node_ResetChildNodePar_m32FEC6DA0CC4745E4891C1D87DC04CEA9FD922B1(__this, L_15, L_16, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m352802BE8330D7BA52DEFC9AED8C00EA05627C77 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int64_t V_7 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		V_1 = ((int64_t)((int64_t)0));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___node0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_1) < ((int64_t)((int64_t)((int64_t)1))))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3 = ___node0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_data_4();
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_6 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = ___node0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get_data_4();
		NullCheck(L_8);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))));
	}

IL_002f:
	{
		goto IL_0062;
	}

IL_0032:
	{
		V_4 = 0;
		goto IL_0050;
	}

IL_0038:
	{
		int64_t L_9 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_10 = ___node0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12;
		L_12 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_10, L_11, /*hidden argument*/NULL);
		int64_t L_13;
		L_13 = Asn1Node_ResetBranchDataLength_m352802BE8330D7BA52DEFC9AED8C00EA05627C77(L_12, /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_16 = ___node0;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int64_t)((int64_t)((int64_t)L_15))) < ((int64_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0038;
		}
	}
	{
	}

IL_0062:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19 = ___node0;
		int64_t L_20 = V_1;
		NullCheck(L_19);
		L_19->set_dataLength_2(L_20);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_21 = ___node0;
		NullCheck(L_21);
		uint8_t L_22 = L_21->get_tag_0();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24 = ___node0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_25 = L_24;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		NullCheck(L_25);
		L_25->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_0087:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_27 = ___node0;
		Asn1Node_ResetDataLengthFieldWidth_m7A926B8287F017141590F9A881A1894B2BD86B1B(L_27, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_28 = ___node0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_dataLength_2();
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_30 = ___node0;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_lengthFieldBytes_3();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)((int64_t)((int64_t)1)))), (int64_t)L_31));
		int64_t L_32 = V_0;
		V_7 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		int64_t L_33 = V_7;
		return L_33;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m7A926B8287F017141590F9A881A1894B2BD86B1B (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = ___node0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Asn1Util_DERLengthEncode_mD8FC4811667B0371D35479DFF62AFA1D2DE2DBE6(L_1, L_3, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5 = ___node0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_6 = V_0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		NullCheck(L_5);
		L_5->set_lengthFieldBytes_3(L_7);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_8);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m32FEC6DA0CC4745E4891C1D87DC04CEA9FD922B1 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___xNode0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_tag_0();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_3 = ___subOffset1;
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)((int64_t)((int64_t)1))));
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_001a:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = ___xNode0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6;
		L_6 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_8 = ___xNode0;
		NullCheck(L_7);
		L_7->set_parentNode_9(L_8);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_9 = V_1;
		int64_t L_10 = ___subOffset1;
		NullCheck(L_9);
		L_9->set_dataOffset_1(L_10);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12 = ___xNode0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_deepness_7();
		NullCheck(L_11);
		L_11->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)((int64_t)((int64_t)1)))));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_14 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15 = ___xNode0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_path_8();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_16, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_path_8(L_18);
		int64_t L_19 = ___subOffset1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20 = V_1;
		NullCheck(L_20);
		int64_t L_21 = L_20->get_lengthFieldBytes_3();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)1)), (int64_t)L_21))));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_22 = V_1;
		int64_t L_23 = ___subOffset1;
		Asn1Node_ResetChildNodePar_m32FEC6DA0CC4745E4891C1D87DC04CEA9FD922B1(__this, L_22, L_23, /*hidden argument*/NULL);
		int64_t L_24 = ___subOffset1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)L_26));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_28 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_29 = ___xNode0;
		NullCheck(L_29);
		int64_t L_30;
		L_30 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_29, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)((int64_t)((int64_t)L_28))) < ((int64_t)L_30))? 1 : 0);
		bool L_31 = V_3;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m0C0666B7796F3CD8A529B586634D6BFC6940D390 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = V_2;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5 = ___startNode0;
		int32_t L_6 = ___lineLen1;
		NullCheck(L_4);
		String_t* L_7;
		L_7 = Asn1Node_GetText_m4310CDE0CC72881555E11EEC5B645E123E6DD4F9(L_4, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_10 = V_1;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = __this->get_childNodeList_5();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_14 = V_0;
		V_4 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_15 = V_4;
		return L_15;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m55CDA663614EC0DF8D5DA04CD0DCFF52AC9F9D30 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___startNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = ((int64_t)((int64_t)0));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___startNode0;
		V_2 = (bool)((!(((RuntimeObject*)(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = ___startNode0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = Asn1Node_get_Deepness_mD2B01EF824FA33094E4BDD9E974A3B75BF1D69AB(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001b:
	{
		V_3 = ((int64_t)((int64_t)0));
		goto IL_0033;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)1))));
	}

IL_0033:
	{
		int64_t L_7 = V_3;
		int64_t L_8 = __this->get_deepness_7();
		int64_t L_9 = V_1;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_11 = V_0;
		V_5 = L_11;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_12 = V_5;
		return L_12;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->set_tag_0((uint8_t)((int32_t)((uint8_t)L_5)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___xdata0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		V_2 = L_7;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___xdata0;
		bool* L_9 = __this->get_address_of_isIndefiniteLength_11();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = Asn1Util_DerLengthDecode_m2AF86096D3AACD8F06AD60F3175DB35BF7EF54C5(L_8, (bool*)L_9, /*hidden argument*/NULL);
		__this->set_dataLength_2(L_10);
		int64_t L_11 = __this->get_dataLength_2();
		V_4 = (bool)((((int64_t)L_11) < ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		bool L_13 = V_0;
		V_5 = L_13;
		goto IL_0161;
	}

IL_004f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = ___xdata0;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
		V_3 = L_15;
		int64_t L_16 = V_3;
		int64_t L_17 = V_2;
		__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_17)));
		int64_t L_18 = V_1;
		int64_t L_19 = __this->get_dataLength_2();
		int64_t L_20 = __this->get_lengthFieldBytes_3();
		V_6 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)((int64_t)1)))), (int64_t)L_20))))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0081;
		}
	}
	{
		bool L_22 = V_0;
		V_5 = L_22;
		goto IL_0161;
	}

IL_0081:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_23;
		L_23 = Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24;
		L_24 = Asn1Node_get_ParentNode_m451F42B3655BAB662583F68501627CA6261581A2(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_tag_0();
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B7_0 = 1;
	}

IL_009d:
	{
		V_7 = (bool)G_B7_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_27 = __this->get_tag_0();
		if ((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		uint8_t L_28 = __this->get_tag_0();
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)30)))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B11_0 = 1;
	}

IL_00c0:
	{
		V_8 = (bool)G_B11_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_30 = V_0;
		V_5 = L_30;
		goto IL_0161;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_33 = __this->get_dataLength_2();
		V_10 = (bool)((((int64_t)L_33) < ((int64_t)((int64_t)((int64_t)1))))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_35 = V_0;
		V_5 = L_35;
		goto IL_0161;
	}

IL_00f4:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_36 = ___xdata0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_36);
		__this->set_unusedBits_6((uint8_t)((int32_t)((uint8_t)L_37)));
		int64_t L_38 = __this->get_dataLength_2();
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)((int64_t)((int64_t)1))))));
		__this->set_data_4(L_39);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_40 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_data_4();
		int64_t L_42 = __this->get_dataLength_2();
		NullCheck(L_40);
		int32_t L_43;
		L_43 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, ((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)((int64_t)((int64_t)1)))))));
		goto IL_015a;
	}

IL_0131:
	{
		int64_t L_44 = __this->get_dataLength_2();
		if ((int64_t)(L_44) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_44));
		__this->set_data_4(L_45);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_46 = ___xdata0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = __this->get_data_4();
		int64_t L_48 = __this->get_dataLength_2();
		NullCheck(L_46);
		int32_t L_49;
		L_49 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_46, L_47, 0, ((int32_t)((int32_t)L_48)));
	}

IL_015a:
	{
		V_0 = (bool)1;
		bool L_50 = V_0;
		V_5 = L_50;
		goto IL_0161;
	}

IL_0161:
	{
		bool L_51 = V_5;
		return L_51;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_1 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
			NullCheck(L_2);
			int64_t L_3;
			L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
			NullCheck(L_4);
			int64_t L_5;
			L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
			V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___xdata0;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_6);
			__this->set_tag_0((uint8_t)((int32_t)((uint8_t)L_7)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___xdata0;
			NullCheck(L_8);
			int64_t L_9;
			L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
			V_3 = L_9;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___xdata0;
			bool* L_11 = __this->get_address_of_isIndefiniteLength_11();
			IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
			int64_t L_12;
			L_12 = Asn1Util_DerLengthDecode_m2AF86096D3AACD8F06AD60F3175DB35BF7EF54C5(L_10, (bool*)L_11, /*hidden argument*/NULL);
			__this->set_dataLength_2(L_12);
			int64_t L_13 = __this->get_dataLength_2();
			if ((((int64_t)L_13) < ((int64_t)((int64_t)((int64_t)0)))))
			{
				goto IL_0054;
			}
		}

IL_0049:
		{
			int64_t L_14 = V_2;
			int64_t L_15 = __this->get_dataLength_2();
			G_B4_0 = ((((int64_t)L_14) < ((int64_t)L_15))? 1 : 0);
			goto IL_0055;
		}

IL_0054:
		{
			G_B4_0 = 1;
		}

IL_0055:
		{
			V_8 = (bool)G_B4_0;
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005b:
		{
			bool L_17 = V_0;
			V_9 = L_17;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0064:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_18 = ___xdata0;
			NullCheck(L_18);
			int64_t L_19;
			L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
			V_4 = L_19;
			int64_t L_20 = V_4;
			int64_t L_21 = V_3;
			__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21)));
			int64_t L_22 = __this->get_dataOffset_1();
			int64_t L_23 = __this->get_lengthFieldBytes_3();
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)((int64_t)1)))), (int64_t)L_23));
			uint8_t L_24 = __this->get_tag_0();
			V_10 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
			bool L_25 = V_10;
			if (!L_25)
			{
				goto IL_00bc;
			}
		}

IL_0097:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_26 = ___xdata0;
			NullCheck(L_26);
			int32_t L_27;
			L_27 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
			__this->set_unusedBits_6((uint8_t)((int32_t)((uint8_t)L_27)));
			int64_t L_28 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_28, (int64_t)((int64_t)((int64_t)1)))));
			int64_t L_29 = V_5;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)((int64_t)((int64_t)1))));
		}

IL_00bc:
		{
			int64_t L_30 = __this->get_dataLength_2();
			V_11 = (bool)((((int32_t)((((int64_t)L_30) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_11;
			if (!L_31)
			{
				goto IL_00d7;
			}
		}

IL_00cf:
		{
			bool L_32 = V_0;
			V_9 = L_32;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_00d7:
		{
			int64_t L_33 = __this->get_dataLength_2();
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_34 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_34, ((int32_t)((int32_t)L_33)), /*hidden argument*/NULL);
			V_6 = L_34;
			int64_t L_35 = __this->get_dataLength_2();
			if ((int64_t)(L_35) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_35));
			V_7 = L_36;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_37 = ___xdata0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_7;
			int64_t L_39 = __this->get_dataLength_2();
			NullCheck(L_37);
			int32_t L_40;
			L_40 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, ((int32_t)((int32_t)L_39)));
			uint8_t L_41 = __this->get_tag_0();
			V_12 = (bool)((((int32_t)L_41) == ((int32_t)3))? 1 : 0);
			bool L_42 = V_12;
			if (!L_42)
			{
				goto IL_0122;
			}
		}

IL_0113:
		{
			int64_t L_43 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)((int64_t)((int64_t)1)))));
		}

IL_0122:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_44 = V_6;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_7;
			NullCheck(L_46);
			NullCheck(L_44);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_44, L_45, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_47 = V_6;
			NullCheck(L_47);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_47, ((int64_t)((int64_t)0)));
			goto IL_0190;
		}

IL_013d:
		{
			int64_t L_48 = V_5;
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_49 = (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)il2cpp_codegen_object_new(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
			Asn1Node__ctor_m22350DE526EC75EC41E2FAD343927210503EED8E(L_49, __this, L_48, /*hidden argument*/NULL);
			V_13 = L_49;
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_50 = V_13;
			bool L_51 = __this->get_parseEncapsulatedData_12();
			NullCheck(L_50);
			L_50->set_parseEncapsulatedData_12(L_51);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_52 = V_6;
			NullCheck(L_52);
			int64_t L_53;
			L_53 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_52);
			V_3 = L_53;
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_54 = V_13;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_55 = V_6;
			NullCheck(L_54);
			bool L_56;
			L_56 = Asn1Node_InternalLoadData_mBF6DA8B05A39BAE226A74FF310E134EEBDE12D63(L_54, L_55, /*hidden argument*/NULL);
			V_14 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
			bool L_57 = V_14;
			if (!L_57)
			{
				goto IL_0174;
			}
		}

IL_016f:
		{
			bool L_58 = V_0;
			V_9 = L_58;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0174:
		{
			Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_59 = V_13;
			Asn1Node_AddChild_m28BEEC5A546F010053DD22F77362CE8370A4E4F6(__this, L_59, /*hidden argument*/NULL);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_60 = V_6;
			NullCheck(L_60);
			int64_t L_61;
			L_61 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_60);
			V_4 = L_61;
			int64_t L_62 = V_5;
			int64_t L_63 = V_4;
			int64_t L_64 = V_3;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_62, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_63, (int64_t)L_64))));
		}

IL_0190:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_65 = V_6;
			NullCheck(L_65);
			int64_t L_66;
			L_66 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_65);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_67 = V_6;
			NullCheck(L_67);
			int64_t L_68;
			L_68 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_67);
			V_15 = (bool)((((int64_t)L_66) < ((int64_t)L_68))? 1 : 0);
			bool L_69 = V_15;
			if (L_69)
			{
				goto IL_013d;
			}
		}

IL_01a6:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x1C9, FINALLY_01ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ab;
	}

FINALLY_01ab:
	{ // begin finally (depth: 1)
		{
			bool L_70 = V_0;
			V_16 = (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
			bool L_71 = V_16;
			if (!L_71)
			{
				goto IL_01c7;
			}
		}

IL_01b6:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_72 = ___xdata0;
			int64_t L_73 = V_1;
			NullCheck(L_72);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_72, L_73);
			Asn1Node_ClearAll_mFE4640DD1FDA287E21B75486B9ED34E01766920C(__this, /*hidden argument*/NULL);
		}

IL_01c7:
		{
			IL2CPP_END_FINALLY(427)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(427)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
	}

IL_01c9:
	{
		bool L_74 = V_0;
		V_9 = L_74;
		goto IL_01ce;
	}

IL_01ce:
	{
		bool L_75 = V_9;
		return L_75;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_mBF6DA8B05A39BAE226A74FF310E134EEBDE12D63 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	{
		V_0 = (bool)1;
		Asn1Node_ClearAll_mFE4640DD1FDA287E21B75486B9ED34E01766920C(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_2 = L_1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		V_1 = (uint8_t)((int32_t)((uint8_t)L_3));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___xdata0;
		int64_t L_5 = V_2;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		uint8_t L_6 = V_1;
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		uint8_t L_7 = V_1;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_8 = __this->get_parseEncapsulatedData_12();
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)27))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)24))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)25))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)22))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)19))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)17))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)20))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)28))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)12))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)21))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B18_0 = ((((int32_t)L_23) == ((int32_t)((int32_t)26)))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B18_0 = 1;
	}

IL_007f:
	{
		G_B20_0 = G_B18_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B20_0 = 0;
	}

IL_0082:
	{
		G_B22_0 = G_B20_0;
		goto IL_0085;
	}

IL_0084:
	{
		G_B22_0 = 1;
	}

IL_0085:
	{
		V_4 = (bool)G_B22_0;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_25 = ___xdata0;
		bool L_26;
		L_26 = Asn1Node_ListDecode_mE632EDFE4F453B612BF91316D7D9CD14656D945F(__this, L_25, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_28 = ___xdata0;
		bool L_29;
		L_29 = Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9(__this, L_28, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		goto IL_00c9;
	}

IL_00b5:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31 = ___xdata0;
		bool L_32;
		L_32 = Asn1Node_GeneralDecode_mE03D9141A8729BC4556959EAA44BDE08BDAD07E9(__this, L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00c8;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		bool L_34 = V_0;
		V_8 = L_34;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_35 = V_8;
		return L_35;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m82D7944674CA81797E10CDE60C05FAF1D281794E (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 *)il2cpp_codegen_object_new(Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22_il2cpp_TypeInfo_var);
		Asn1Node__ctor_m3927B51635F3EFF4DDBC20182D1C84470898A216(L_0, /*hidden argument*/NULL);
		__this->set_rootNode_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235 (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, ((int64_t)((int64_t)0)));
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = __this->get_rootNode_1();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Asn1Node_LoadData_m8CCACCA1C75A09906C36CAA5A02E6DC96C34BA88(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB89111EC34842EC45C03B81F4BDFBC7724B6905F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235_RuntimeMethod_var)));
	}

IL_0029:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___stream0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((int64_t)(L_7) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Parser_LoadData_mB0C8987D6183B96644060F67F64B4BF9D306C235_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_7));
		__this->set_rawData_0(L_8);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = ___stream0;
		NullCheck(L_9);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)((int64_t)0)));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_rawData_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_rawData_0();
		NullCheck(L_12);
		NullCheck(L_10);
		int32_t L_13;
		L_13 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))));
		return;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * Asn1Parser_get_RootNode_m9CAC415D72588F591B0D1BDFA2B69A8EAF3B931D (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, const RuntimeMethod* method)
{
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_rootNode_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m49234F1BD24E3387A68D654F011BA7C6E44665CE (int32_t ___lineLen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BAFCB89E7C61DD51CF32D48E1F883426E74C000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F9A6943D78A4154F6821755AA9A1C4A3E80717);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_1;
		L_1 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral61F9A6943D78A4154F6821755AA9A1C4A3E80717, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3 = ___lineLen0;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))), ((int32_t)61), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_2, _stringLiteral4BAFCB89E7C61DD51CF32D48E1F883426E74C000, L_4, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_ToString_mF8CE34B183E124A7D9931DDA8CF4B3302170EA73 (Asn1Parser_tD83987C33147CB1281AB76F91B084373912556BE * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_rootNode_1();
		String_t* L_1;
		L_1 = Asn1Parser_GetNodeText_m5E75D356335934F1228A521EF4D6C3E92B863A40(L_0, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m5E75D356335934F1228A521EF4D6C3E92B863A40 (Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___lineLen1;
		String_t* L_1;
		L_1 = Asn1Parser_GetNodeTextHeader_m49234F1BD24E3387A68D654F011BA7C6E44665CE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3 = ___node0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = ___node0;
		int32_t L_5 = ___lineLen1;
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Asn1Node_GetText_m4310CDE0CC72881555E11EEC5B645E123E6DD4F9(L_3, L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_9 = V_1;
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
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_m5D85DF29DF660EA75589DD51B8E02C1A10D5BDBC (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___inStr0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)));
		V_0 = L_2;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_1 = 0;
		goto IL_007b;
	}

IL_001a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		String_t* L_6 = ___inStr0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_8);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		int32_t L_12 = ___groupLen2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_13 = ___groupLen2;
		G_B4_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_6 = (bool)G_B4_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)32));
		V_4 = 0;
	}

IL_0053:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = ___lineLen1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0076;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)13));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)10));
		V_3 = 0;
	}

IL_0076:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_28 = V_1;
		String_t* L_29 = ___inStr0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = V_0;
		String_t* L_33;
		L_33 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_34);
		String_t* L_36;
		L_36 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_34, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		String_t* L_37 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_38 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_37);
		String_t* L_40;
		L_40 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_37, L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		String_t* L_41 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)13));
		NullCheck(L_41);
		String_t* L_44;
		L_44 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_41, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		String_t* L_45 = V_5;
		V_9 = L_45;
		goto IL_00cf;
	}

IL_00cf:
	{
		String_t* L_46 = V_9;
		return L_46;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_mFCA85BFBDF8C7D8C2EDEB91C925718804A590117 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = ___len0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_000c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4 = ___xch1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___len0;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = V_0;
		String_t* L_10;
		L_10 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_11 = V_3;
		return L_11;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_mFA3824FDB96AD367B107BAA60FD3A12B2EA5F22D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		V_1 = 0;
		goto IL_0017;
	}

IL_0008:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)8))|(int64_t)((int64_t)((uint64_t)L_4))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0008;
		}
	}
	{
		int64_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0025;
	}

IL_0025:
	{
		int64_t L_10 = V_3;
		return L_10;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m44A14DB4F85291B571C4D53776D9E3D5BC6AA938 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) < ((int32_t)1))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = V_0;
		V_3 = L_3;
		goto IL_0075;
	}

IL_001b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_1 = L_5;
		V_4 = 0;
		V_5 = 0;
		goto IL_0050;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = V_1;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___bytes0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
	}

IL_0049:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___bytes0;
		NullCheck(L_20);
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_002c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = V_1;
		String_t* L_23;
		L_23 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_24);
		String_t* L_26;
		L_26 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		String_t* L_27 = V_0;
		V_3 = L_27;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		V_3 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0060;
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)2)));
		V_0 = L_3;
		V_2 = 0;
		goto IL_004a;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = V_0;
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ((Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11>>(int32_t)4));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2))), (Il2CppChar)L_13);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ((Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)15)));
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1))), (Il2CppChar)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_21 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___bytes0;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = V_0;
		String_t* L_25;
		L_25 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0060;
	}

IL_0060:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m0B0ADD5DBA9E77F52ED4B468C12FA103B83D8AE0 (uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 4;
		goto IL_001d;
	}

IL_0005:
	{
		uint64_t L_0 = ___value0;
		int32_t L_1 = V_0;
		V_1 = (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0005;
		}
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_3 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mD8FC4811667B0371D35479DFF62AFA1D2DE2DBE6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___xdata0, uint64_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		uint64_t L_0 = ___length1;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_0) <= ((uint64_t)((int64_t)((int64_t)((int32_t)127))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___xdata0;
		uint64_t L_3 = ___length1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)((int32_t)((uint8_t)L_3)));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0068;
	}

IL_0021:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = ___xdata0;
		uint64_t L_6 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Asn1Util_BytePrecision_m0B0ADD5DBA9E77F52ED4B468C12FA103B83D8AE0(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)128))))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint64_t L_9 = ___length1;
		int32_t L_10;
		L_10 = Asn1Util_BytePrecision_m0B0ADD5DBA9E77F52ED4B468C12FA103B83D8AE0(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_005f;
	}

IL_0043:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___xdata0;
		uint64_t L_12 = ___length1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(31 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)L_12>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63))))))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
	}

IL_0068:
	{
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_19 = V_4;
		return L_19;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m2AF86096D3AACD8F06AD60F3175DB35BF7EF54C5 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		bool* L_0 = ___isIndefiniteLength1;
		*((int8_t*)L_0) = (int8_t)0;
		V_0 = ((int64_t)((int64_t)0));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_1 = (uint8_t)((int32_t)((uint8_t)L_2));
		uint8_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = V_1;
		V_0 = ((int64_t)((uint64_t)L_5));
		goto IL_007d;
	}

IL_0024:
	{
		uint8_t L_6 = V_1;
		V_3 = ((int64_t)((int64_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127)))));
		int64_t L_7 = V_3;
		V_4 = (bool)((((int64_t)L_7) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		bool* L_9 = ___isIndefiniteLength1;
		*((int8_t*)L_9) = (int8_t)1;
		V_5 = ((int64_t)((int64_t)((int32_t)-2)));
		goto IL_0082;
	}

IL_0041:
	{
		V_0 = ((int64_t)((int64_t)0));
		goto IL_006c;
	}

IL_0046:
	{
		int64_t L_10 = V_0;
		V_6 = (bool)((((int64_t)((int64_t)((int64_t)L_10>>(int32_t)((int32_t)24)))) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		V_5 = ((int64_t)((int64_t)(-1)));
		goto IL_0082;
	}

IL_005c:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = ___bt0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_12);
		V_1 = (uint8_t)((int32_t)((uint8_t)L_13));
		int64_t L_14 = V_0;
		uint8_t L_15 = V_1;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_14<<(int32_t)8))|(int64_t)((int64_t)((uint64_t)L_15))));
	}

IL_006c:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_17, (int64_t)((int64_t)((int64_t)1))));
		V_7 = (bool)((((int64_t)L_17) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_0046;
		}
	}
	{
	}

IL_007d:
	{
		int64_t L_19 = V_0;
		V_5 = L_19;
		goto IL_0082;
	}

IL_0082:
	{
		int64_t L_20 = V_5;
		return L_20;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_mE327C31021466482DF804EF977A88278D5C6D537 (uint8_t ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04E4C7E6115783DAF7E8E371EDC9AE581528EA78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0524144B9F212F40BEC2750DD0C06E4159777384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC347CF826668C4F33A1CD7ADF5419BAAE73FE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DEBA0A49D8FDF8FFD3E681909ACA71D8132580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA2E7519891D1B744F973A073D6CE50874854C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C71631187881B6DAB198AF4B06C779471926174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D231DAD9D02BE301A8CF4FBCABD5DE1FDCFF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral481CFA1B155F22067D8FEA989EB269E873B62B4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D13D434A39B045A12B8CCE2D63CFFAFE1972CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E6D858EA0BE7F6F1158A0A3EA4E4946B21A283);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68E810E310A6E1368AC66300136C585E142E80BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59A0C4D87BBB64A0C537CC6FCEBF8DE14A269);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral859BD87B9776D9CE86B7C752B95409950D61EB08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CBE6269D7D5D08B76852D89B90B601BAD02D7DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC35AB7561A701D96BD51BC1F1EE072F2F9718C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF3402AEC14A5C5A7E1E8A624F7B7F4D2123EA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB562730CA6FCD749B7C84DE73BEBD292D954C70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DA3B4CA745F231A5F6D027DDCEE9158AC52CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF403E6FC90C56524FFEE246E1374665DF60C2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C83DB7DD412566438B355E6504DBB01A12F5E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBDD70ED42B3745921307A6AF5729CDF0C49B732);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA206F53009B4409A8E1620933737D0F4D7E1B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2AF9005B6B2A5DCC73C4E00CBE3F19D96687B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF61206F351943EEC77681D8FE9F32833CBE6444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC3FA34132F5B79C1EC6AD3AAAC2C6A5B7F29E34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A854E69EA27FE94B3DD30F3C8F92D6E6560149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91195DA6E39E9A4D6BB7DBF2BF8A45CF0FB0A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF172F77C7E45F5898E6A62C11097CBEE26EBF4E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF69C981860A19A82ADD9552E5DDAFA32BFD3D7B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7906DC491A0486A30D111F231D1624CA5B94C94);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = ___tag0;
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)192)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0104;
		}
	}
	{
		uint8_t L_2 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)));
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)32))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00fe;
	}

IL_003d:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)64))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)128))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)192))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00fe;
	}

IL_005b:
	{
		String_t* L_10 = V_0;
		uint8_t L_11 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)));
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_10, _stringLiteral16DEBA0A49D8FDF8FFD3E681909ACA71D8132580, L_12, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00fe;
	}

IL_007e:
	{
		String_t* L_14 = V_0;
		uint8_t L_15 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)));
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_14, _stringLiteralDC3FA34132F5B79C1EC6AD3AAAC2C6A5B7F29E34, L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_00fe;
	}

IL_009e:
	{
		String_t* L_18 = V_0;
		uint8_t L_19 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_19&(int32_t)((int32_t)31)));
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_18, _stringLiteralE91195DA6E39E9A4D6BB7DBF2BF8A45CF0FB0A42, L_20, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_00fe;
	}

IL_00be:
	{
		String_t* L_22 = V_0;
		uint8_t L_23 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)));
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_22, _stringLiteralF69C981860A19A82ADD9552E5DDAFA32BFD3D7B7, L_24, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00fe;
	}

IL_00de:
	{
		String_t* L_26 = V_0;
		uint8_t L_27 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)));
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_26, _stringLiteral859BD87B9776D9CE86B7C752B95409950D61EB08, L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_0344;
	}

IL_0104:
	{
		uint8_t L_30 = ___tag0;
		V_6 = ((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)));
		int32_t L_31 = V_6;
		V_5 = L_31;
		int32_t L_32 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0195;
			}
			case 1:
			{
				goto IL_01a6;
			}
			case 2:
			{
				goto IL_01b7;
			}
			case 3:
			{
				goto IL_01c8;
			}
			case 4:
			{
				goto IL_01d9;
			}
			case 5:
			{
				goto IL_01ea;
			}
			case 6:
			{
				goto IL_01fb;
			}
			case 7:
			{
				goto IL_021d;
			}
			case 8:
			{
				goto IL_022e;
			}
			case 9:
			{
				goto IL_023f;
			}
			case 10:
			{
				goto IL_0334;
			}
			case 11:
			{
				goto IL_0250;
			}
			case 12:
			{
				goto IL_020c;
			}
			case 13:
			{
				goto IL_0334;
			}
			case 14:
			{
				goto IL_0334;
			}
			case 15:
			{
				goto IL_0261;
			}
			case 16:
			{
				goto IL_0272;
			}
			case 17:
			{
				goto IL_0283;
			}
			case 18:
			{
				goto IL_0294;
			}
			case 19:
			{
				goto IL_02a5;
			}
			case 20:
			{
				goto IL_02b6;
			}
			case 21:
			{
				goto IL_02c4;
			}
			case 22:
			{
				goto IL_02d2;
			}
			case 23:
			{
				goto IL_02e0;
			}
			case 24:
			{
				goto IL_02ee;
			}
			case 25:
			{
				goto IL_02fc;
			}
			case 26:
			{
				goto IL_030a;
			}
			case 27:
			{
				goto IL_0318;
			}
			case 28:
			{
				goto IL_0334;
			}
			case 29:
			{
				goto IL_0326;
			}
		}
	}
	{
		goto IL_0334;
	}

IL_0195:
	{
		String_t* L_33 = V_0;
		String_t* L_34;
		L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_33, _stringLiteralCF2AF9005B6B2A5DCC73C4E00CBE3F19D96687B4, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0342;
	}

IL_01a6:
	{
		String_t* L_35 = V_0;
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0342;
	}

IL_01b7:
	{
		String_t* L_37 = V_0;
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_37, _stringLiteralBF403E6FC90C56524FFEE246E1374665DF60C2D6, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0342;
	}

IL_01c8:
	{
		String_t* L_39 = V_0;
		String_t* L_40;
		L_40 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_39, _stringLiteralB9DA3B4CA745F231A5F6D027DDCEE9158AC52CAE, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0342;
	}

IL_01d9:
	{
		String_t* L_41 = V_0;
		String_t* L_42;
		L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_41, _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_0342;
	}

IL_01ea:
	{
		String_t* L_43 = V_0;
		String_t* L_44;
		L_44 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_43, _stringLiteralCF61206F351943EEC77681D8FE9F32833CBE6444, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_0342;
	}

IL_01fb:
	{
		String_t* L_45 = V_0;
		String_t* L_46;
		L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_45, _stringLiteral9CBE6269D7D5D08B76852D89B90B601BAD02D7DD, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0342;
	}

IL_020c:
	{
		String_t* L_47 = V_0;
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_47, _stringLiteral67E6D858EA0BE7F6F1158A0A3EA4E4946B21A283, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_0342;
	}

IL_021d:
	{
		String_t* L_49 = V_0;
		String_t* L_50;
		L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_49, _stringLiteral3C71631187881B6DAB198AF4B06C779471926174, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_0342;
	}

IL_022e:
	{
		String_t* L_51 = V_0;
		String_t* L_52;
		L_52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_51, _stringLiteralAC35AB7561A701D96BD51BC1F1EE072F2F9718C0, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_0342;
	}

IL_023f:
	{
		String_t* L_53 = V_0;
		String_t* L_54;
		L_54 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_53, _stringLiteral79C59A0C4D87BBB64A0C537CC6FCEBF8DE14A269, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_0342;
	}

IL_0250:
	{
		String_t* L_55 = V_0;
		String_t* L_56;
		L_56 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_55, _stringLiteralCBDD70ED42B3745921307A6AF5729CDF0C49B732, /*hidden argument*/NULL);
		V_0 = L_56;
		goto IL_0342;
	}

IL_0261:
	{
		String_t* L_57 = V_0;
		String_t* L_58;
		L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_57, _stringLiteral0AC347CF826668C4F33A1CD7ADF5419BAAE73FE0, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_0342;
	}

IL_0272:
	{
		String_t* L_59 = V_0;
		String_t* L_60;
		L_60 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_59, _stringLiteralADF3402AEC14A5C5A7E1E8A624F7B7F4D2123EA0, /*hidden argument*/NULL);
		V_0 = L_60;
		goto IL_0342;
	}

IL_0283:
	{
		String_t* L_61 = V_0;
		String_t* L_62;
		L_62 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_61, _stringLiteralF172F77C7E45F5898E6A62C11097CBEE26EBF4E1, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_0342;
	}

IL_0294:
	{
		String_t* L_63 = V_0;
		String_t* L_64;
		L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_63, _stringLiteral52D13D434A39B045A12B8CCE2D63CFFAFE1972CF, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_0342;
	}

IL_02a5:
	{
		String_t* L_65 = V_0;
		String_t* L_66;
		L_66 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_65, _stringLiteral68E810E310A6E1368AC66300136C585E142E80BF, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_0342;
	}

IL_02b6:
	{
		String_t* L_67 = V_0;
		String_t* L_68;
		L_68 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_67, _stringLiteralF7906DC491A0486A30D111F231D1624CA5B94C94, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_0342;
	}

IL_02c4:
	{
		String_t* L_69 = V_0;
		String_t* L_70;
		L_70 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_69, _stringLiteralE1A854E69EA27FE94B3DD30F3C8F92D6E6560149, /*hidden argument*/NULL);
		V_0 = L_70;
		goto IL_0342;
	}

IL_02d2:
	{
		String_t* L_71 = V_0;
		String_t* L_72;
		L_72 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_71, _stringLiteralCEA206F53009B4409A8E1620933737D0F4D7E1B6, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_0342;
	}

IL_02e0:
	{
		String_t* L_73 = V_0;
		String_t* L_74;
		L_74 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_73, _stringLiteralC3C83DB7DD412566438B355E6504DBB01A12F5E4, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_0342;
	}

IL_02ee:
	{
		String_t* L_75 = V_0;
		String_t* L_76;
		L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_75, _stringLiteral1FA2E7519891D1B744F973A073D6CE50874854C6, /*hidden argument*/NULL);
		V_0 = L_76;
		goto IL_0342;
	}

IL_02fc:
	{
		String_t* L_77 = V_0;
		String_t* L_78;
		L_78 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_77, _stringLiteral0524144B9F212F40BEC2750DD0C06E4159777384, /*hidden argument*/NULL);
		V_0 = L_78;
		goto IL_0342;
	}

IL_030a:
	{
		String_t* L_79 = V_0;
		String_t* L_80;
		L_80 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_79, _stringLiteral481CFA1B155F22067D8FEA989EB269E873B62B4F, /*hidden argument*/NULL);
		V_0 = L_80;
		goto IL_0342;
	}

IL_0318:
	{
		String_t* L_81 = V_0;
		String_t* L_82;
		L_82 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_81, _stringLiteral04E4C7E6115783DAF7E8E371EDC9AE581528EA78, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_0342;
	}

IL_0326:
	{
		String_t* L_83 = V_0;
		String_t* L_84;
		L_84 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_83, _stringLiteral44D231DAD9D02BE301A8CF4FBCABD5DE1FDCFF54, /*hidden argument*/NULL);
		V_0 = L_84;
		goto IL_0342;
	}

IL_0334:
	{
		String_t* L_85 = V_0;
		String_t* L_86;
		L_86 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_85, _stringLiteralB562730CA6FCD749B7C84DE73BEBD292D954C70E, /*hidden argument*/NULL);
		V_0 = L_86;
		goto IL_0342;
	}

IL_0342:
	{
	}

IL_0344:
	{
		String_t* L_87 = V_0;
		V_7 = L_87;
		goto IL_0349;
	}

IL_0349:
	{
		String_t* L_88 = V_7;
		return L_88;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Util::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Util__cctor_m57021A76347B8F96E30DEF933AF9FC765CB95F14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7822A373DBFB84F50AD542E87CA12213E9A5D654____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var))->set_hexDigits_0(L_1);
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
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m9FA247108B60F4E1344E450B404169BDF28DEF9A (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_mF539876E869E9FF1E736B375188336ADC7624827 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mB2F3A100B70517C5319AA791CEB21D257A94BCED (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m15EED9600F75A719439938F17830B1637D858ECA (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m1F728A29C29A5E667D6E7E0346CCFA7A30404AE0 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m3A1FB4CCE37EB42CB96E64C3A86E4537C6CB82AC (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m88AA839A5572D82295F4B085CFC18671419F27FF (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mCB697202E58D8821DB2860256803719455691943 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m057BE65B3101DEE2EF66E9FF5BDD1A741EA7EA32 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C134A36D015746C32203B98CC495F87311D9DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD381BE73F585C3796C220566E891E458F9D6290);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_2 = NULL;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_3 = NULL;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_4 = NULL;
	Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * V_5 = NULL;
	String_t* V_6 = NULL;
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	uint32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_02c2;
		}
	}
	{
		V_1 = 0;
		goto IL_02ae;
	}

IL_0021:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_3 = ___n0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5;
		L_5 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0043;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_8 = V_2;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((int64_t)L_9) == ((int64_t)((int64_t)((int64_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_8 = (bool)G_B5_0;
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_11 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940_RuntimeMethod_var)));
	}

IL_0050:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12 = V_2;
		NullCheck(L_12);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_13;
		L_13 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_12, 0, /*hidden argument*/NULL);
		V_2 = L_13;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15;
		L_15 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0071;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_16 = V_2;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_16, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B10_0 = 1;
	}

IL_0072:
	{
		V_9 = (bool)G_B10_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_19 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940_RuntimeMethod_var)));
	}

IL_007e:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20 = V_2;
		NullCheck(L_20);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_21;
		L_21 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_20, 0, /*hidden argument*/NULL);
		V_3 = L_21;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_22 = V_2;
		NullCheck(L_22);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_23;
		L_23 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_22, 1, /*hidden argument*/NULL);
		V_4 = L_23;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24 = V_3;
		NullCheck(L_24);
		uint8_t L_25;
		L_25 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_00b6;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_26 = V_4;
		NullCheck(L_26);
		uint8_t L_27;
		L_27 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)19))))
		{
			goto IL_00b3;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_28 = V_4;
		NullCheck(L_28);
		uint8_t L_29;
		L_29 = Asn1Node_get_MaskedTag_mF11D97EF9E0B7ECBFF9F9C41E24BFADB3A5C8714(L_28, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_29) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B16_0 = 0;
	}

IL_00b4:
	{
		G_B18_0 = G_B16_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B18_0 = 1;
	}

IL_00b7:
	{
		V_10 = (bool)G_B18_0;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c4;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_31 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940_RuntimeMethod_var)));
	}

IL_00c4:
	{
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_32 = (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 *)il2cpp_codegen_object_new(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57(L_32, /*hidden argument*/NULL);
		V_5 = L_32;
		Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * L_33 = V_5;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_34 = V_3;
		NullCheck(L_34);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35;
		L_35 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_36;
		L_36 = Oid_Decode_mAB921EDEC3BF5F48DADC823D7FFA627D368C2D24(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_37 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_37, /*hidden argument*/NULL);
		V_7 = L_37;
		String_t* L_38 = V_6;
		V_12 = L_38;
		String_t* L_39 = V_12;
		V_11 = L_39;
		String_t* L_40 = V_11;
		if (!L_40)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_41 = V_11;
		uint32_t L_42;
		L_42 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA4179D7D8427648F6CDD1215F7B4D899993E3BF9(L_41, /*hidden argument*/NULL);
		V_13 = L_42;
		uint32_t L_43 = V_13;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)184344010)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_44 = V_13;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)134011153))))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_0110;
	}

IL_0110:
	{
		uint32_t L_45 = V_13;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)167566391))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_011e;
	}

IL_011e:
	{
		uint32_t L_46 = V_13;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)184344010))))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_02a9;
	}

IL_012c:
	{
		uint32_t L_47 = V_13;
		if ((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)1208264641)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_48 = V_13;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)1191487022))))
		{
			goto IL_0199;
		}
	}
	{
		goto IL_0140;
	}

IL_0140:
	{
		uint32_t L_49 = V_13;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)1208264641))))
		{
			goto IL_0183;
		}
	}
	{
		goto IL_02a9;
	}

IL_014e:
	{
		uint32_t L_50 = V_13;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-1207168042))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_015c;
	}

IL_015c:
	{
		uint32_t L_51 = V_13;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-50542656))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_02a9;
	}

IL_016d:
	{
		String_t* L_52 = V_11;
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0207;
		}
	}
	{
		goto IL_02a9;
	}

IL_0183:
	{
		String_t* L_54 = V_11;
		bool L_55;
		L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0221;
		}
	}
	{
		goto IL_02a9;
	}

IL_0199:
	{
		String_t* L_56 = V_11;
		bool L_57;
		L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_56, _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_0238;
		}
	}
	{
		goto IL_02a9;
	}

IL_01af:
	{
		String_t* L_58 = V_11;
		bool L_59;
		L_59 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_58, _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_024f;
		}
	}
	{
		goto IL_02a9;
	}

IL_01c5:
	{
		String_t* L_60 = V_11;
		bool L_61;
		L_61 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_60, _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0266;
		}
	}
	{
		goto IL_02a9;
	}

IL_01db:
	{
		String_t* L_62 = V_11;
		bool L_63;
		L_63 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_62, _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_027b;
		}
	}
	{
		goto IL_02a9;
	}

IL_01f1:
	{
		String_t* L_64 = V_11;
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_0292;
		}
	}
	{
		goto IL_02a9;
	}

IL_0207:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_66 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_67 = V_4;
		NullCheck(L_67);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68;
		L_68 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		String_t* L_69;
		L_69 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_66, L_68);
		DistinguishedName_set_Country_m9FA247108B60F4E1344E450B404169BDF28DEF9A_inline(__this, L_69, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0221:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_70 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_71 = V_4;
		NullCheck(L_71);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72;
		L_72 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_73;
		L_73 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_70, L_72);
		DistinguishedName_set_Organization_mF539876E869E9FF1E736B375188336ADC7624827_inline(__this, L_73, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0238:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_74 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_75 = V_4;
		NullCheck(L_75);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76;
		L_76 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_77;
		L_77 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_74, L_76);
		DistinguishedName_set_OrganizationalUnit_mB2F3A100B70517C5319AA791CEB21D257A94BCED_inline(__this, L_77, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_024f:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_78 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_79 = V_4;
		NullCheck(L_79);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80;
		L_80 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		String_t* L_81;
		L_81 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_78, L_80);
		DistinguishedName_set_CommonName_mCB697202E58D8821DB2860256803719455691943_inline(__this, L_81, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0266:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_82 = V_4;
		NullCheck(L_82);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83;
		L_83 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_84;
		L_84 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_83, /*hidden argument*/NULL);
		DistinguishedName_set_SerialNumber_m057BE65B3101DEE2EF66E9FF5BDD1A741EA7EA32_inline(__this, L_84, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_027b:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_85 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_86 = V_4;
		NullCheck(L_86);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87;
		L_87 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		String_t* L_88;
		L_88 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_85, L_87);
		DistinguishedName_set_Dnq_m1F728A29C29A5E667D6E7E0346CCFA7A30404AE0_inline(__this, L_88, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0292:
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_89 = V_7;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_90 = V_4;
		NullCheck(L_90);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91;
		L_91 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		String_t* L_92;
		L_92 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_89, L_91);
		DistinguishedName_set_State_m88AA839A5572D82295F4B085CFC18671419F27FF_inline(__this, L_92, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_02a9:
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_02ae:
	{
		int32_t L_94 = V_1;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_95 = ___n0;
		NullCheck(L_95);
		int64_t L_96;
		L_96 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_95, /*hidden argument*/NULL);
		V_14 = (bool)((((int64_t)((int64_t)((int64_t)L_94))) < ((int64_t)L_96))? 1 : 0);
		bool L_97 = V_14;
		if (L_97)
		{
			goto IL_0021;
		}
	}
	{
	}

IL_02c2:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m52D16D76413F2962A013DE7692027A94B0F1B723 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___n20, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0;
		L_0 = DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_1 = ___n20;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_4;
		L_4 = DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_5 = ___n20;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_8;
		L_8 = DistinguishedName_get_Dnq_m15EED9600F75A719439938F17830B1637D858ECA_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_9 = ___n20;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DistinguishedName_get_Dnq_m15EED9600F75A719439938F17830B1637D858ECA_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_12;
		L_12 = DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_13 = ___n20;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_16;
		L_16 = DistinguishedName_get_State_m3A1FB4CCE37EB42CB96E64C3A86E4537C6CB82AC_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_17 = ___n20;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = DistinguishedName_get_State_m3A1FB4CCE37EB42CB96E64C3A86E4537C6CB82AC_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_20;
		L_20 = DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_21 = ___n20;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F_inline(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_ToString_m8F2E021201C3E80A613FE0DC03CDC566324BFFA4 (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31EFAEEDBC2BB686A5ABA0098A7A45FCE86FBD8A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3;
		L_3 = DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCACA63FC238CCA8ED535F7BFAF590FC831D8832);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6;
		L_6 = DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEFE5B4EE3917FFFE8F93D31E5E798F2A968F3FC6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9;
		L_9 = DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralADADD3B05013D84B886E96640AA7F89AF39D5AD6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12;
		L_12 = DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC (IAPSecurityException_tDBB6A6953008E4557ED98A218FDD5D92F18D86C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920 (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_mAFB378FB3FD0C4B6F7C85CB337BC162EFABDCEAD (InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_mA5E2F9963D2B7B6D7BF5C1DA106195BED3280863 (InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC(__this, /*hidden argument*/NULL);
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
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m95C0637D5EF5B0E687D52382B924FA6ECE4A0D11 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, String_t* ___inOidStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_0 = ((Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields*)il2cpp_codegen_static_fields_for(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		V_0 = (bool)((((RuntimeObject*)(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_2 = (StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)il2cpp_codegen_object_new(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79_il2cpp_TypeInfo_var);
		StringDictionary__ctor_mEA16941AB5C9CDBEE3B0572E3FA74DD1CC0C8637(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		((Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields*)il2cpp_codegen_static_fields_for(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var))->set_oidDictionary_0(L_2);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * L_3 = ((Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields*)il2cpp_codegen_static_fields_for(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		String_t* L_4 = ___inOidStr0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Collections.Specialized.StringDictionary::get_Item(System.String) */, L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_mAB921EDEC3BF5F48DADC823D7FFA627D368C2D24 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, ((int64_t)((int64_t)0)));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_3 = V_0;
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, __this, L_3);
		V_1 = L_4;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_5);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_m7C4DF55042765D96A273656A11A361130548CBDB (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint64_t V_2 = 0;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = ((int64_t)((int64_t)0));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___bt0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = (uint8_t)((int32_t)((uint8_t)L_1));
		String_t* L_2 = V_0;
		uint8_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969(((int32_t)((int32_t)L_3/(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint8_t L_7 = V_1;
		String_t* L_8;
		L_8 = Convert_ToString_m591519A05955A00954A48E0EA3F5CB9921C13969(((int32_t)((int32_t)L_7%(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0074;
	}

IL_0039:
	{
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = ___bt0;
		int32_t L_11;
		L_11 = Oid_DecodeValue_mFE83E8F74E068BD14B269BCC31AD0D865A1C21DC(__this, L_10, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_12, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0073;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641)), L_16, /*hidden argument*/NULL);
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Oid_Decode_m7C4DF55042765D96A273656A11A361130548CBDB_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0073:
	{
	}

IL_0074:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___bt0;
		NullCheck(L_19);
		int64_t L_20;
		L_20 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_19);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_21 = ___bt0;
		NullCheck(L_21);
		int64_t L_22;
		L_22 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_21);
		V_4 = (bool)((((int64_t)L_20) < ((int64_t)L_22))? 1 : 0);
		bool L_23 = V_4;
		if (L_23)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_24 = V_0;
		V_5 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		String_t* L_25 = V_5;
		return L_25;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57 (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_mFE83E8F74E068BD14B269BCC31AD0D865A1C21DC (Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, uint64_t* ___v1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_1 = 0;
		uint64_t* L_0 = ___v1;
		*((int64_t*)L_0) = (int64_t)((int64_t)((int64_t)0));
		goto IL_0039;
	}

IL_0009:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_0 = (uint8_t)((int32_t)((uint8_t)L_2));
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint64_t* L_4 = ___v1;
		uint64_t* L_5 = ___v1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_4) = (int64_t)((int64_t)((int64_t)L_6<<(int32_t)7));
		uint64_t* L_7 = ___v1;
		uint64_t* L_8 = ___v1;
		int64_t L_9 = *((int64_t*)L_8);
		uint8_t L_10 = V_0;
		*((int64_t*)L_7) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)127)))))));
		uint8_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_0038:
	{
	}

IL_0039:
	{
		V_4 = (bool)1;
		goto IL_0009;
	}

IL_003e:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__cctor_m58D08C171C114B2ED85065CF4884363D2659606B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_StaticFields*)il2cpp_codegen_static_fields_for(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var))->set_oidDictionary_0((StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 *)NULL);
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
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * PKCS7_get_data_m1871D8A0427E6A93D72B81A3085E4FBF00ED2AD1 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_data_m6E89804BC54099F4B4D610C3745FB575B71DEAB1 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * PKCS7_get_sinfos_m748935C5A47DDC30D072BBC1DF53FDBD05D2AB72 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m2D912B83FED611E6C4779654B9DA90949A07CB41 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * PKCS7_get_certChain_m6FF845BEEC289B22B182A97BB6F68D8E8BED7DA3 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_certChain_m572E90BA5DDD0371EB9A395A51F6FD821F00399A (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_m779839B5A14960404DCB3AA6245E4A015C9ADC18 (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___node0;
		__this->set_root_0(L_0);
		PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m464ADF67588E5A98A411631B69FFB99EDAE6C319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBF3A735E1128AAACD6B1E0E53FA16FB84F7822A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m506B23691AC022F69F44F691F4CF2593D308FA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m79C7E36D3C92330A95B40B22BD99F0C8DA674DEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_1 = NULL;
	int32_t V_2 = 0;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	{
		__this->set_validStructure_4((bool)0);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_root_0();
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002b;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = __this->get_root_0();
		NullCheck(L_2);
		int64_t L_3;
		L_3 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0253;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5 = __this->get_root_0();
		NullCheck(L_5);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6;
		L_6 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0060;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Asn1Node_GetDataStr_mEBF365F501F5181D92752832D2D5CF6B989D6018(L_9, (bool)0, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B7_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_13 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_006e:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_14 = __this->get_root_0();
		NullCheck(L_14);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15;
		L_15 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_14, 1, /*hidden argument*/NULL);
		V_1 = L_15;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_16 = V_1;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int64_t)L_17) == ((int64_t)((int64_t)((int64_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_19 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_0094:
	{
		V_2 = 0;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_23;
		L_23 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_20, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_24 = V_1;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_24, /*hidden argument*/NULL);
		if ((((int64_t)L_25) < ((int64_t)((int64_t)((int64_t)4)))))
		{
			goto IL_00be;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_26 = V_1;
		NullCheck(L_26);
		uint8_t L_27;
		L_27 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_26, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B14_0 = 1;
	}

IL_00bf:
	{
		V_6 = (bool)G_B14_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_29 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_00cb:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_30 = V_1;
		NullCheck(L_30);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_31;
		L_31 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_30, 0, /*hidden argument*/NULL);
		V_3 = L_31;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_32 = V_3;
		NullCheck(L_32);
		uint8_t L_33;
		L_33 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_32, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ee;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_35 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_00ee:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_36 = V_1;
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		NullCheck(L_36);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_39;
		L_39 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_40 = V_3;
		NullCheck(L_40);
		uint8_t L_41;
		L_41 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_40, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_0116;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_43 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_0116:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46 = L_45;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_47;
		L_47 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_44, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_48 = V_3;
		NullCheck(L_48);
		uint8_t L_49;
		L_49 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_48, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_013e;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_50 = V_3;
		NullCheck(L_50);
		int64_t L_51;
		L_51 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_50, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int64_t)L_51) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B23_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B23_0;
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_014b;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_53 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_014b:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_54 = V_3;
		NullCheck(L_54);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_55;
		L_55 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_54, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_56;
		L_56 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_55, 0, /*hidden argument*/NULL);
		PKCS7_set_data_m6E89804BC54099F4B4D610C3745FB575B71DEAB1_inline(__this, L_56, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_57 = V_1;
		NullCheck(L_57);
		int64_t L_58;
		L_58 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_57, /*hidden argument*/NULL);
		V_10 = (bool)((((int64_t)L_58) == ((int64_t)((int64_t)((int64_t)5))))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_01d6;
		}
	}
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_60 = (List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 *)il2cpp_codegen_object_new(List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9_il2cpp_TypeInfo_var);
		List_1__ctor_m506B23691AC022F69F44F691F4CF2593D308FA03(L_60, /*hidden argument*/List_1__ctor_m506B23691AC022F69F44F691F4CF2593D308FA03_RuntimeMethod_var);
		PKCS7_set_certChain_m572E90BA5DDD0371EB9A395A51F6FD821F00399A_inline(__this, L_60, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_61 = V_1;
		int32_t L_62 = V_2;
		int32_t L_63 = L_62;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		NullCheck(L_61);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_64;
		L_64 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_61, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_65 = V_3;
		NullCheck(L_65);
		int64_t L_66;
		L_66 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_65, /*hidden argument*/NULL);
		V_11 = (bool)((((int64_t)L_66) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_019e;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_68 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_019e:
	{
		V_12 = 0;
		goto IL_01c4;
	}

IL_01a3:
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_69;
		L_69 = PKCS7_get_certChain_m6FF845BEEC289B22B182A97BB6F68D8E8BED7DA3_inline(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_70 = V_3;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_72;
		L_72 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_70, L_71, /*hidden argument*/NULL);
		X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * L_73 = (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C *)il2cpp_codegen_object_new(X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C_il2cpp_TypeInfo_var);
		X509Cert__ctor_m15452EAB21FFCB79867DC723367D95B6C60B0B72(L_73, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_m464ADF67588E5A98A411631B69FFB99EDAE6C319(L_69, L_73, /*hidden argument*/List_1_Add_m464ADF67588E5A98A411631B69FFB99EDAE6C319_RuntimeMethod_var);
		int32_t L_74 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01c4:
	{
		int32_t L_75 = V_12;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_76 = V_3;
		NullCheck(L_76);
		int64_t L_77;
		L_77 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_76, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)((int64_t)((int64_t)L_75))) < ((int64_t)L_77))? 1 : 0);
		bool L_78 = V_13;
		if (L_78)
		{
			goto IL_01a3;
		}
	}
	{
	}

IL_01d6:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_79 = V_1;
		int32_t L_80 = V_2;
		int32_t L_81 = L_80;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		NullCheck(L_79);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_82;
		L_82 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_79, L_81, /*hidden argument*/NULL);
		V_3 = L_82;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_83 = V_3;
		NullCheck(L_83);
		uint8_t L_84;
		L_84 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01fb;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_85 = V_3;
		NullCheck(L_85);
		int64_t L_86;
		L_86 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_85, /*hidden argument*/NULL);
		G_B35_0 = ((((int64_t)L_86) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		goto IL_01fc;
	}

IL_01fb:
	{
		G_B35_0 = 1;
	}

IL_01fc:
	{
		V_14 = (bool)G_B35_0;
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0208;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_88 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS7_CheckStructure_m4FA7B227EBA421987745C8F427669FD3485BAA8D_RuntimeMethod_var)));
	}

IL_0208:
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_89 = (List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F *)il2cpp_codegen_object_new(List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F_il2cpp_TypeInfo_var);
		List_1__ctor_m79C7E36D3C92330A95B40B22BD99F0C8DA674DEF(L_89, /*hidden argument*/List_1__ctor_m79C7E36D3C92330A95B40B22BD99F0C8DA674DEF_RuntimeMethod_var);
		PKCS7_set_sinfos_m2D912B83FED611E6C4779654B9DA90949A07CB41_inline(__this, L_89, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023a;
	}

IL_0219:
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_90;
		L_90 = PKCS7_get_sinfos_m748935C5A47DDC30D072BBC1DF53FDBD05D2AB72_inline(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_91 = V_3;
		int32_t L_92 = V_15;
		NullCheck(L_91);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_93;
		L_93 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_91, L_92, /*hidden argument*/NULL);
		SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * L_94 = (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 *)il2cpp_codegen_object_new(SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11_il2cpp_TypeInfo_var);
		SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277(L_94, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_Add_mBF3A735E1128AAACD6B1E0E53FA16FB84F7822A9(L_90, L_94, /*hidden argument*/List_1_Add_mBF3A735E1128AAACD6B1E0E53FA16FB84F7822A9_RuntimeMethod_var);
		int32_t L_95 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_023a:
	{
		int32_t L_96 = V_15;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_97 = V_3;
		NullCheck(L_97);
		int64_t L_98;
		L_98 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_97, /*hidden argument*/NULL);
		V_16 = (bool)((((int64_t)((int64_t)((int64_t)L_96))) < ((int64_t)L_98))? 1 : 0);
		bool L_99 = V_16;
		if (L_99)
		{
			goto IL_0219;
		}
	}
	{
		__this->set_validStructure_4((bool)1);
	}

IL_0253:
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
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m7EF83991458B68DF4745BE44C93C427424345767 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_mFD34C71175C0BCF3013FC257FF8D4B14C37486C9 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___n0;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_1;
		L_1 = RSAKey_ParseNode_m3D32E36AFC8A70764B5459021CBB904CEB99ECA0(__this, L_0, /*hidden argument*/NULL);
		RSAKey_set_rsa_m7EF83991458B68DF4745BE44C93C427424345767_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * RSAKey_ParseNode_m3D32E36AFC8A70764B5459021CBB904CEB99ECA0 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7F604AA53E605CA5A4D06ADF4F5C4B6FCBD8E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * V_7 = NULL;
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * V_8 = NULL;
	int32_t G_B7_0 = 0;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = ___n0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)((int64_t)2))))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5;
		L_5 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7 = ___n0;
		NullCheck(L_7);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_8;
		L_8 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_9;
		L_9 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_11 = ___n0;
		NullCheck(L_11);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12;
		L_12 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_13;
		L_13 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_12, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Asn1Node_GetDataStr_mEBF365F501F5181D92752832D2D5CF6B989D6018(L_13, (bool)0, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral2A7F604AA53E605CA5A4D06ADF4F5C4B6FCBD8E8, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_16 = ___n0;
		NullCheck(L_16);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_17;
		L_17 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_17, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))) == ((int32_t)3))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B7_0;
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0101;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20 = ___n0;
		NullCheck(L_20);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_21;
		L_21 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_22;
		L_22 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_21, 0, /*hidden argument*/NULL);
		V_1 = L_22;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_23 = V_1;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_23, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_24) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0);
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_26 = V_1;
		NullCheck(L_26);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_27;
		L_27 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))), (int32_t)1)));
		V_4 = L_30;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_3;
		NullCheck(L_33);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_31, 1, (RuntimeArray *)(RuntimeArray *)L_32, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_36 = V_1;
		NullCheck(L_36);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_37;
		L_37 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_36, 1, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38;
		L_38 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_37, /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_40 = (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80(L_40, /*hidden argument*/NULL);
		V_7 = L_40;
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_41 = V_7;
		String_t* L_42 = V_5;
		String_t* L_43 = V_6;
		String_t* L_44;
		L_44 = RSAKey_ToXML_mF5F723766157ED7CC93AADED83EBC632EDD2BEA7(__this, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.AsymmetricAlgorithm::FromXmlString(System.String) */, L_41, L_44);
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_45 = V_7;
		V_8 = L_45;
		goto IL_0107;
	}

IL_0100:
	{
	}

IL_0101:
	{
		InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940 * L_46 = (InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidRSAData_t1F0AEAAB3073E4E58D7C5ED5A42F505ADBA98940_il2cpp_TypeInfo_var)));
		InvalidRSAData__ctor_mAFB378FB3FD0C4B6F7C85CB337BC162EFABDCEAD(L_46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSAKey_ParseNode_m3D32E36AFC8A70764B5459021CBB904CEB99ECA0_RuntimeMethod_var)));
	}

IL_0107:
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_47 = V_8;
		return L_47;
	}
}
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_mF5F723766157ED7CC93AADED83EBC632EDD2BEA7 (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B764AA8712500B6779AEFF44B47B45F9ECF8039);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___modulus0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEBF60A7C62C7CF38BEB570C5B0AF43904FFCB6B8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___exponent1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBCED53E33A2D1B5B5E90E0B5DE86443E44FD452A);
		String_t* L_8;
		L_8 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
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
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_m725CE5A8AB2B67DF5BEF5CDB5D4FA319F3FA6BF8 (RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_tBA392806FDD41AF7B4FEF91E8B8CD3A54514BFA8_il2cpp_TypeInfo_var);
		Oid__ctor_mC10AAB37B779050A5B18F4856839BCFE14B76F57(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.RelativeOid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RelativeOid_Decode_m7817692B71C86D7A64ABC89420D16297266F1791 (RelativeOid_tE76622CD7E53345714D462870B8C8A4075A08677 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = ((int64_t)((int64_t)0));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_000e:
	{
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___bt0;
			int32_t L_1;
			L_1 = Oid_DecodeValue_mFE83E8F74E068BD14B269BCC31AD0D865A1C21DC(__this, L_0, (uint64_t*)(&V_1), /*hidden argument*/NULL);
			bool L_2 = V_2;
			V_3 = L_2;
			bool L_3 = V_3;
			if (!L_3)
			{
				goto IL_002d;
			}
		}

IL_001f:
		{
			String_t* L_4;
			L_4 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
			V_0 = L_4;
			V_2 = (bool)0;
			goto IL_0042;
		}

IL_002d:
		{
			String_t* L_5 = V_0;
			String_t* L_6;
			L_6 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_1), /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0042:
		{
			goto IL_005f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0045;
		throw e;
	}

CATCH_0045:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE82977104FE357F4C1CE6D6A3DFD58AFEBFC641)), L_9, /*hidden argument*/NULL);
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelativeOid_Decode_m7817692B71C86D7A64ABC89420D16297266F1791_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_005f:
	{
	}

IL_0060:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = ___bt0;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_12);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = ___bt0;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_14);
		V_5 = (bool)((((int64_t)L_13) < ((int64_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_17 = V_0;
		V_6 = L_17;
		goto IL_0079;
	}

IL_0079:
	{
		String_t* L_18 = V_6;
		return L_18;
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
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m038EAD01447C25AC08735C9CD6300BA740C63BB0 (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m06D8B2388B5016ACC8741A06FC4DB52304C8315B (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m43A5682BFEE69E6AFA4E2773485DD8869080E902 (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD3575212D55E351A8022490EDDB2FECA4847EFA1 (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277 (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___n0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)((int64_t)((int64_t)5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_3 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_001f:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_5;
		L_5 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_9 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_0040:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SignerInfo_set_Version_m06D8B2388B5016ACC8741A06FC4DB52304C8315B_inline(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = SignerInfo_get_Version_m038EAD01447C25AC08735C9CD6300BA740C63BB0_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		G_B7_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B7_0 = 1;
	}

IL_0069:
	{
		V_3 = (bool)G_B7_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6 * L_18 = (UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6_il2cpp_TypeInfo_var)));
		UnsupportedSignerInfoVersion__ctor_mF22EE4649673DF0CAEC115147F2EFC17E3FD7BEA(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_0073:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19 = ___n0;
		NullCheck(L_19);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20;
		L_20 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_23, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_24) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B12_0 = 1;
	}

IL_0098:
	{
		V_4 = (bool)G_B12_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_26 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_00a4:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_27 = V_0;
		NullCheck(L_27);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_28;
		L_28 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_27, 1, /*hidden argument*/NULL);
		V_0 = L_28;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_29 = V_0;
		NullCheck(L_29);
		uint8_t L_30;
		L_30 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_29, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_32 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_00c7:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
		L_34 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_34, /*hidden argument*/NULL);
		SignerInfo_set_IssuerSerialNumber_m43A5682BFEE69E6AFA4E2773485DD8869080E902_inline(__this, L_35, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_36 = ___n0;
		NullCheck(L_36);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_37;
		L_37 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_36, 4, /*hidden argument*/NULL);
		V_0 = L_37;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_38 = V_0;
		NullCheck(L_38);
		uint8_t L_39;
		L_39 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_38, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 * L_41 = (InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidPKCS7Data_t22B1107B9400BC2CD9062FA6191EB3ADC833AD46_il2cpp_TypeInfo_var)));
		InvalidPKCS7Data__ctor_m4A94EB203E545D46A8C3CC4E11AAF2EBDFF54920(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignerInfo__ctor_mC41D0C044EA6922FA1FE49C894D770FEEF529277_RuntimeMethod_var)));
	}

IL_00fc:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_42 = V_0;
		NullCheck(L_42);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43;
		L_43 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_42, /*hidden argument*/NULL);
		SignerInfo_set_EncryptedDigest_mD3575212D55E351A8022490EDDB2FECA4847EFA1_inline(__this, L_43, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_mF22EE4649673DF0CAEC115147F2EFC17E3FD7BEA (UnsupportedSignerInfoVersion_t680EADDB9373582B554EAFD456ABE08CE08882D6 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m32CCBB07794ED03A282BB32204C4E76AAAE89BEC(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m13E238AB16C2758CB6CD07F4A3D93CFE3D395F61 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_m2EB2BDD79EAC3E5D2121CF9C9E0EDF1B22D70C43 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m3E5FBCC92677120AA5F339F785F65DCAF0CA949F (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_m7A9971797143DCCF4B18979AB900874BA654BD86 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_m27531D603830C730306B7CC35D0C0D0A5E96BE6D (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Subject_m9701D01645E40CBA76206871A54F10516788B18B (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Subject_mBE649EC34353D754C78934304934D52126B6318C (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Issuer_m72B64D194C52EB2B53A22C2B1A91449A3C2F2561 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB1CFF279F72029B4FD5A1DEF7E2ED21ECF13F34E (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mE21877BFCE23ADED6FA05C8B1A7C19A76679838F (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_m15452EAB21FFCB79867DC723367D95B6C60B0B72 (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___n0;
		X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_0 = NULL;
	Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___root0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001d;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_2 = ___root0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_3) == ((int64_t)((int64_t)((int64_t)3))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_5 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var)));
	}

IL_0028:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_6 = ___root0;
		NullCheck(L_6);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_7;
		L_7 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_6, 0, /*hidden argument*/NULL);
		__this->set_TbsCertificate_7(L_7);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_8 = __this->get_TbsCertificate_7();
		NullCheck(L_8);
		int64_t L_9;
		L_9 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_9) < ((int64_t)((int64_t)((int64_t)7))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_11 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var)));
	}

IL_004e:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_12 = __this->get_TbsCertificate_7();
		NullCheck(L_12);
		int64_t L_13;
		L_13 = Asn1Node_get_DataLength_m72CD93035CAD2EBEAB6CF94405932D343602CF79(L_12, /*hidden argument*/NULL);
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)((int64_t)((int64_t)4))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)((int64_t)((int64_t)4))))));
		__this->set_rawTBSCertificate_9(L_14);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_15 = ___root0;
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_rawTBSCertificate_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_rawTBSCertificate_9();
		NullCheck(L_18);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_19 = __this->get_TbsCertificate_7();
		NullCheck(L_19);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_20;
		L_20 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_21, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_24 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var)));
	}

IL_00ac:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t7DAE68DED85439DA7103539DDA67BAF7251F5C4E_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = Asn1Util_ToHexString_m1A5435449D50461103BE0C98A13601EB807994DE(L_26, /*hidden argument*/NULL);
		X509Cert_set_SerialNumber_m13E238AB16C2758CB6CD07F4A3D93CFE3D395F61_inline(__this, L_27, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_28 = __this->get_TbsCertificate_7();
		NullCheck(L_28);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_29;
		L_29 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_28, 3, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_30 = (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 *)il2cpp_codegen_object_new(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940(L_30, L_29, /*hidden argument*/NULL);
		X509Cert_set_Issuer_mB1CFF279F72029B4FD5A1DEF7E2ED21ECF13F34E_inline(__this, L_30, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_31 = __this->get_TbsCertificate_7();
		NullCheck(L_31);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_32;
		L_32 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_31, 5, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_33 = (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 *)il2cpp_codegen_object_new(DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_mF86CACF226C221D2EB73A79651601FC97A053940(L_33, L_32, /*hidden argument*/NULL);
		X509Cert_set_Subject_mBE649EC34353D754C78934304934D52126B6318C_inline(__this, L_33, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_34 = __this->get_TbsCertificate_7();
		NullCheck(L_34);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_35;
		L_35 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_34, 4, /*hidden argument*/NULL);
		V_1 = L_35;
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_36 = V_1;
		NullCheck(L_36);
		uint8_t L_37;
		L_37 = Asn1Node_get_Tag_m2B980E78E6953CADC1DB5D97BE64528D4816F353(L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0117;
		}
	}
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_38 = V_1;
		NullCheck(L_38);
		int64_t L_39;
		L_39 = Asn1Node_get_ChildNodeCount_mA381253B2A1957E921B09BD3379D0BA02AF90019(L_38, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_39) == ((int64_t)((int64_t)((int64_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0118;
	}

IL_0117:
	{
		G_B12_0 = 1;
	}

IL_0118:
	{
		V_5 = (bool)G_B12_0;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_0124;
		}
	}
	{
		InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 * L_41 = (InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidX509Data_tF70877CA461848364FFEA16AAA3A2E2FE5C05821_il2cpp_TypeInfo_var)));
		InvalidX509Data__ctor_mC813B35A8F415E38E1D7A74FDD5DAED89F27891E(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseNode_m7BEDAABCD421F6DBAE16BFB634E7DDD730A63C4E_RuntimeMethod_var)));
	}

IL_0124:
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_42 = V_1;
		NullCheck(L_42);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_43;
		L_43 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_42, 0, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_44;
		L_44 = X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF(__this, L_43, /*hidden argument*/NULL);
		X509Cert_set_ValidAfter_m2EB2BDD79EAC3E5D2121CF9C9E0EDF1B22D70C43_inline(__this, L_44, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_45 = V_1;
		NullCheck(L_45);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_46;
		L_46 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_45, 1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_47;
		L_47 = X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF(__this, L_46, /*hidden argument*/NULL);
		X509Cert_set_ValidBefore_m3E5FBCC92677120AA5F339F785F65DCAF0CA949F_inline(__this, L_47, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_48;
		L_48 = X509Cert_get_Subject_m9701D01645E40CBA76206871A54F10516788B18B_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_49;
		L_49 = X509Cert_get_Issuer_m72B64D194C52EB2B53A22C2B1A91449A3C2F2561_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_50;
		L_50 = DistinguishedName_Equals_m52D16D76413F2962A013DE7692027A94B0F1B723(L_48, L_49, /*hidden argument*/NULL);
		X509Cert_set_SelfSigned_m27531D603830C730306B7CC35D0C0D0A5E96BE6D_inline(__this, L_50, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_51 = __this->get_TbsCertificate_7();
		NullCheck(L_51);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_52;
		L_52 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_51, 6, /*hidden argument*/NULL);
		RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * L_53 = (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 *)il2cpp_codegen_object_new(RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64_il2cpp_TypeInfo_var);
		RSAKey__ctor_mFD34C71175C0BCF3013FC257FF8D4B14C37486C9(L_53, L_52, /*hidden argument*/NULL);
		X509Cert_set_PubKey_m7A9971797143DCCF4B18979AB900874BA654BD86_inline(__this, L_53, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_54 = ___root0;
		NullCheck(L_54);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_55;
		L_55 = Asn1Node_GetChildNode_mB002CCF1AD5FD255F122F489FCACEE111CC23C42(L_54, 2, /*hidden argument*/NULL);
		X509Cert_set_Signature_mE21877BFCE23ADED6FA05C8B1A7C19A76679838F_inline(__this, L_55, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B3_0 = 0;
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_0, /*hidden argument*/NULL);
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_1 = ___n0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = Asn1Node_get_Data_m2698B0BE639C6A0BE2D6AF7498375AAD0D4E77B0(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_8 = (bool)G_B3_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A * L_9 = (InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A_il2cpp_TypeInfo_var)));
		InvalidTimeFormat__ctor_mA5E2F9963D2B7B6D7BF5C1DA106195BED3280863(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF_RuntimeMethod_var)));
	}

IL_0038:
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A * L_15 = (InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidTimeFormat_t1EECB948153F132269C4195380EF9AB2AF9C096A_il2cpp_TypeInfo_var)));
		InvalidTimeFormat__ctor_mA5E2F9963D2B7B6D7BF5C1DA106195BED3280863(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Cert_ParseTime_m1C0FBF727A66BD3125B30027A4A705FF127B04CF_RuntimeMethod_var)));
	}

IL_0059:
	{
		V_1 = 0;
		V_2 = 0;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)13)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, 0, 2, /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)1900)));
		goto IL_00a7;
	}

IL_0094:
	{
		int32_t L_25 = V_2;
		V_12 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)50)))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)2000)));
	}

IL_00a7:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
		goto IL_00c2;
	}

IL_00ae:
	{
		String_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_29, 0, 4, /*hidden argument*/NULL);
		int32_t L_31;
		L_31 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)4));
	}

IL_00c2:
	{
		String_t* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35;
		L_35 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_33, L_34, 2, /*hidden argument*/NULL);
		int32_t L_36;
		L_36 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		String_t* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40;
		L_40 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_38, L_39, 2, /*hidden argument*/NULL);
		int32_t L_41;
		L_41 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		String_t* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		String_t* L_45;
		L_45 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_43, L_44, 2, /*hidden argument*/NULL);
		int32_t L_46;
		L_46 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		String_t* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		String_t* L_50;
		L_50 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_48, L_49, 2, /*hidden argument*/NULL);
		int32_t L_51;
		L_51 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		String_t* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		String_t* L_55;
		L_55 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, L_54, 2, /*hidden argument*/NULL);
		int32_t L_56;
		L_56 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
		int32_t L_58 = V_2;
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		int32_t L_63 = V_7;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_64;
		memset((&L_64), 0, sizeof(L_64));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_64), L_58, L_59, L_60, L_61, L_62, L_63, 1, /*hidden argument*/NULL);
		V_13 = L_64;
		goto IL_0134;
	}

IL_0134:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_65 = V_13;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * PKCS7_get_data_m1871D8A0427E6A93D72B81A3085E4FBF00ED2AD1_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m92F780FEDC1939BF19603D619B8C56A9957B973F_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m54E1B6B1799B3791724207C341E192861ADE2C8A_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m398EE497790C9EA9009B6AAF7E7EC0A239083D26_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mA3DC67A717037D17667BC36397392AE674EB5A3C_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m85B1F80B0DFDD26FAC95F91B45A41F2D101F284E_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_mECD30F9F5ABBB91C95AE72B1583530B721C0D28B_inline (AppleReceipt_t1D4B27A0B7960B65A1051FEE42E393E918133849 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m6D5C6567ADF9D1362653F5767E5F18194473D7C4_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m4FFD5BE2D157679AC18ECEED6E05CC6AA7DA361B_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m52670129F56664AF2849DD9DC82A4FB03C83BA65_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mC8718D156C1D0791C30D4019B8BAC3316952CD3E_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m11974FBFA2F4B63E263D94A5A5A4861442606782_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m6E6FF9B588168E7EC786D17612AC20F56BA1ABC5_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m59741BB14025DD1E9F49BCDDF400A279F648542E_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m23C7B503E096DEFFAC0C5A4275543052021DD911_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mDBDB45F498F407FC70626F371FF0CE71434FA288_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m408B34CE16162532C4CDBD3B330DC938C492B273_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m31C57E76238A788E71FCFB6EE3DC61957FC47B7B_inline (AppleInAppPurchaseReceipt_t2FF655B4221E0864FB46A12FF9C34200462B6863 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m9FA247108B60F4E1344E450B404169BDF28DEF9A_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_mF539876E869E9FF1E736B375188336ADC7624827_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mB2F3A100B70517C5319AA791CEB21D257A94BCED_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mCB697202E58D8821DB2860256803719455691943_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m057BE65B3101DEE2EF66E9FF5BDD1A741EA7EA32_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m1F728A29C29A5E667D6E7E0346CCFA7A30404AE0_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m88AA839A5572D82295F4B085CFC18671419F27FF_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mCF93722B5CE3CEC3A951CA2DCF536241DF1443F3_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m5F4109BDBB40977061F2E2361EF048F9ED9459CA_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m15EED9600F75A719439938F17830B1637D858ECA_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_m157DD2B52F1B76D25169A01E124AF14579F8ED52_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m3A1FB4CCE37EB42CB96E64C3A86E4537C6CB82AC_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m41FD94A2E3537F9DA228F0228730070119560B2F_inline (DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_data_m6E89804BC54099F4B4D610C3745FB575B71DEAB1_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_certChain_m572E90BA5DDD0371EB9A395A51F6FD821F00399A_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * PKCS7_get_certChain_m6FF845BEEC289B22B182A97BB6F68D8E8BED7DA3_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3DB7A2C434E802B5D6888AA4AC22E5198408BBF9 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m2D912B83FED611E6C4779654B9DA90949A07CB41_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * PKCS7_get_sinfos_m748935C5A47DDC30D072BBC1DF53FDBD05D2AB72_inline (PKCS7_tC10D4D8CB661CA7EEF356B29C777001B319C60F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_tDA2349A7F0AB0B64A7D283D86181AEF6F80B981F * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m7EF83991458B68DF4745BE44C93C427424345767_inline (RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * __this, RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m06D8B2388B5016ACC8741A06FC4DB52304C8315B_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m038EAD01447C25AC08735C9CD6300BA740C63BB0_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m43A5682BFEE69E6AFA4E2773485DD8869080E902_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD3575212D55E351A8022490EDDB2FECA4847EFA1_inline (SignerInfo_tA9479DEAC18358AC8990ECC5C4A100F190704A11 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m13E238AB16C2758CB6CD07F4A3D93CFE3D395F61_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB1CFF279F72029B4FD5A1DEF7E2ED21ECF13F34E_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Subject_mBE649EC34353D754C78934304934D52126B6318C_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_m2EB2BDD79EAC3E5D2121CF9C9E0EDF1B22D70C43_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m3E5FBCC92677120AA5F339F785F65DCAF0CA949F_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Subject_m9701D01645E40CBA76206871A54F10516788B18B_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * X509Cert_get_Issuer_m72B64D194C52EB2B53A22C2B1A91449A3C2F2561_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1564CABAC821769A6A1D0502252358322EE2A159 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_m27531D603830C730306B7CC35D0C0D0A5E96BE6D_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_m7A9971797143DCCF4B18979AB900874BA654BD86_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_t160D8A3BED4E8DF5CD557FA504D1168B704CBA64 * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mE21877BFCE23ADED6FA05C8B1A7C19A76679838F_inline (X509Cert_tD71B65643D87FD592F964B915DCD1DAF06EB789C * __this, Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_tA2B618DF4725914B61BBD1344B87550EFC429D22 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
