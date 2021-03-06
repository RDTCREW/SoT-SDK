// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Decal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HullInterface_C::Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullInterface.BP_HullInterface_C.Apply Hit");

	UBP_HullInterface_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
