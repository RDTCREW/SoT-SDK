#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C
// 0x0018 (0x0580 - 0x0568)
class ABP_LargeShip_CageLatch_03_b_C : public APetCageSwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        cap_cage_door_03_b;                                       // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_LargeShip_CageLatch_03_b(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif