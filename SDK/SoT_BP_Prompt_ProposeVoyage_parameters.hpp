#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize
struct UBP_Prompt_ProposeVoyage_C_PostInitialize_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased
struct UBP_Prompt_ProposeVoyage_C_Prompt_OfferPurchased_Params
{
	struct FOfferPurchasedEvent                        Ev;                                                       // (Parm)
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_ProposeVoyage_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate
struct UBP_Prompt_ProposeVoyage_C_Evaluate_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage
struct UBP_Prompt_ProposeVoyage_C_ExecuteUbergraph_BP_Prompt_ProposeVoyage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
