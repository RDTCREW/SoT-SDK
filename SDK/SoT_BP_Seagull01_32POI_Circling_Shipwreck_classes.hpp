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

// BlueprintGeneratedClass BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C
// 0x0028 (0x0438 - 0x0410)
class ABP_Seagull01_32POI_Circling_Shipwreck_C : public AActor
{
public:
	class UWwiseEmitterComponent*                      WwiseEmitter2;                                            // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter1;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wil_seagull_01_ProcAnim32;                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
