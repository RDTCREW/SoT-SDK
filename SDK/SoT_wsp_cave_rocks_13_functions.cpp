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

// Function wsp_cave_rocks_13.wsp_cave_rocks_12_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_cave_rocks_12_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_cave_rocks_13.wsp_cave_rocks_12_C.UserConstructionScript");

	Awsp_cave_rocks_12_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
