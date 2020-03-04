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

// Class Repair.RepairTypeId
// 0x0038 (0x0060 - 0x0028)
class URepairTypeId : public UObject
{
public:
	struct FText                                       DisplayName;                                              // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Repair.RepairTypeId");
		return ptr;
	}

};


// Class Repair.RepairableInterface
// 0x0000 (0x0028 - 0x0028)
class URepairableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Repair.RepairableInterface");
		return ptr;
	}


	void HandleDestroy();
	class UClass* GetRepairType();
	float GetRepairTime();
	TEnumAsByte<ERepairableState> GetRepairableState();
};


// Class Repair.RepairingInterface
// 0x0000 (0x0028 - 0x0028)
class URepairingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Repair.RepairingInterface");
		return ptr;
	}


	class UClass* GetRepairType();
};


// Class Repair.WoodRepairTypeId
// 0x0000 (0x0060 - 0x0060)
class UWoodRepairTypeId : public URepairTypeId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Repair.WoodRepairTypeId");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif