#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.Default.Factory::Create(System.Boolean)
extern void Factory_Create_m6C674014D793DC022F77337C5560D4381A80994A (void);
// 0x00000002 System.Void UnityEngine.Purchasing.Default.IWindowsIAP::BuildDummyProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>)
// 0x00000003 System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Initialize(UnityEngine.Purchasing.Default.IWindowsIAPCallback)
// 0x00000004 System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean)
// 0x00000005 System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Purchase(System.String)
// 0x00000006 System.Void UnityEngine.Purchasing.Default.IWindowsIAP::FinaliseTransaction(System.String)
// 0x00000007 System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
extern void WinProductDescription_set_platformSpecificID_m979E0B898D3D1CF67C06869F70DA52529F2F0080 (void);
// 0x00000008 System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
extern void WinProductDescription_set_price_m3DB234AB3789B0E58F0D4C4AB02B279A2E9DF1F0 (void);
// 0x00000009 System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
extern void WinProductDescription_set_title_m7BDF7AEE66C17D5CEE4B298CA842FEA17BEA5BD2 (void);
// 0x0000000A System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
extern void WinProductDescription_set_description_m5442459CB272CBE838BC62E7CD9A2F4CC1B7BC46 (void);
// 0x0000000B System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
extern void WinProductDescription_set_ISOCurrencyCode_m59D7C9FDBD34AC3C300360DBD1A305D8817BAB3C (void);
// 0x0000000C System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
extern void WinProductDescription_set_priceDecimal_m6C8EE4D776F14BBFA4927BB6B453FD39EE692ABD (void);
// 0x0000000D System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
extern void WinProductDescription_set_receipt_m2E99FA19126E00A6931E0511071AA8EE831B85DC (void);
// 0x0000000E System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
extern void WinProductDescription_set_transactionID_m3D3D0AFDAA64738F6F0D5CBFA21A7EFA27458EC4 (void);
// 0x0000000F System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
extern void WinProductDescription_set_consumable_m28531961788733F79E47F8D5AE054A95B8146EE2 (void);
// 0x00000010 System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
extern void WinProductDescription__ctor_m6133BB09C2299027F76001EC4DC35E55221A1E05 (void);
static Il2CppMethodPointer s_methodPointers[16] = 
{
	Factory_Create_m6C674014D793DC022F77337C5560D4381A80994A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WinProductDescription_set_platformSpecificID_m979E0B898D3D1CF67C06869F70DA52529F2F0080,
	WinProductDescription_set_price_m3DB234AB3789B0E58F0D4C4AB02B279A2E9DF1F0,
	WinProductDescription_set_title_m7BDF7AEE66C17D5CEE4B298CA842FEA17BEA5BD2,
	WinProductDescription_set_description_m5442459CB272CBE838BC62E7CD9A2F4CC1B7BC46,
	WinProductDescription_set_ISOCurrencyCode_m59D7C9FDBD34AC3C300360DBD1A305D8817BAB3C,
	WinProductDescription_set_priceDecimal_m6C8EE4D776F14BBFA4927BB6B453FD39EE692ABD,
	WinProductDescription_set_receipt_m2E99FA19126E00A6931E0511071AA8EE831B85DC,
	WinProductDescription_set_transactionID_m3D3D0AFDAA64738F6F0D5CBFA21A7EFA27458EC4,
	WinProductDescription_set_consumable_m28531961788733F79E47F8D5AE054A95B8146EE2,
	WinProductDescription__ctor_m6133BB09C2299027F76001EC4DC35E55221A1E05,
};
static const int32_t s_InvokerIndices[16] = 
{
	4509,
	2454,
	2454,
	2478,
	2454,
	2454,
	2454,
	2454,
	2454,
	2454,
	2454,
	2414,
	2454,
	2454,
	2478,
	27,
};
extern const CustomAttributesCacheGenerator g_winrt_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_winrt_CodeGenModule;
const Il2CppCodeGenModule g_winrt_CodeGenModule = 
{
	"winrt.dll",
	16,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_winrt_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
