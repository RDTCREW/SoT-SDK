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

// BlueprintGeneratedClass BP_OutpostCrate_bld_shop_wood_box_02_a.BP_OutpostCrate_bld_shop_wood_box_02_a_C
// 0x0018 (0x0510 - 0x04F8)
class ABP_OutpostCrate_bld_shop_wood_box_02_a_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OutpostCrate_bld_shop_wood_box_02_a.BP_OutpostCrate_bld_shop_wood_box_02_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
