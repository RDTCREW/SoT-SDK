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

// Class EmotingFramework.EmoteCoin
// 0x0118 (0x0528 - 0x0410)
class AEmoteCoin : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0410(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteCoin");
		return ptr;
	}

};


// Class EmotingFramework.EmoteIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UEmoteIdListingAsset : public UDataAsset
{
public:
	TArray<struct FName>                               EmoteIds;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteIdListingAsset");
		return ptr;
	}

};


// Class EmotingFramework.EmoteSettings
// 0x0028 (0x0060 - 0x0038)
class UEmoteSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       EmoteIdListingAsset;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       EmoteItemCategoriesListingAsset;                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	int                                                Pages;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
