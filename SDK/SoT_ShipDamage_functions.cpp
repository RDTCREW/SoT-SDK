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

// Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::UnregisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart");

	UDamageablePartsInterface_UnregisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageableActor                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageablePartsInterface::RegisterDamageablePart(class AActor* DamageableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart");

	UDamageablePartsInterface_RegisterDamageablePart_Params params;
	params.DamageableActor = DamageableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipDamage.DamageablePartsInterface.GetDamageableParts
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UDamageablePartsInterface::GetDamageableParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.GetDamageableParts");

	UDamageablePartsInterface_GetDamageableParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
