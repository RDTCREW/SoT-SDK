#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
enum class EAIAbilityDamageIntervalCounterMode : uint8_t
{
	DontBlock                      = 0,
	BlockWhenExecutingThisAbility  = 1,
	BlockWhenExecutingAnyAbility   = 2,
	EAIAbilityDamageIntervalCounterMode_MAX = 3
};


// Enum AthenaAI.EAIDebugColour
enum class EAIDebugColour : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	White                          = 3,
	Yellow                         = 4,
	Black                          = 5,
	EAIDebugColour_MAX             = 6
};


// Enum AthenaAI.EAIDialogueState
enum class EAIDialogueState : uint8_t
{
	Inactive                       = 0,
	Passive                        = 1,
	Alerted                        = 2,
	Dead                           = 3,
	EAIDialogueState_MAX           = 4
};


// Enum AthenaAI.AISpawnRequestResult
enum class EAISpawnRequestResult : uint8_t
{
	Incomplete                     = 0,
	Success                        = 1,
	FailedSpawnDenied              = 2,
	FailedNoQuery                  = 3,
	FailedNoValidPos               = 4,
	FailedLoadingPawnClass         = 5,
	FailedLoadingItemDropComponentClass = 6,
	Cancelled                      = 7,
	AISpawnRequestResult_MAX       = 8
};


// Enum AthenaAI.EAthenaAISpawnType
enum class EAthenaAISpawnType : uint8_t
{
	SpawnOnLand                    = 0,
	SpawnOnShip                    = 1,
	SpawnSummoned                  = 2,
	EAthenaAISpawnType_MAX         = 3
};


// Enum AthenaAI.ClassLoadState
enum class EClassLoadState : uint8_t
{
	Incomplete                     = 0,
	Success                        = 1,
	NoLoad                         = 2,
	Failed                         = 3,
	ClassLoadState_MAX             = 4
};


// Enum AthenaAI.AISpawnLocationSearchResult
enum class EAISpawnLocationSearchResult : uint8_t
{
	Incomplete                     = 0,
	Success                        = 1,
	FailedNoQuery                  = 2,
	FailedNoValidPos               = 3,
	Cancelled                      = 4,
	AISpawnLocationSearchResult_MAX = 5
};


// Enum AthenaAI.AISpawnRequestState
enum class EAISpawnRequestState : uint8_t
{
	AwaitingBegin                  = 0,
	DelayUntilNextCanSpawnCheck    = 1,
	WaitForClassLoadsAndLocationResult = 2,
	DelayUntilNextLocationCheck    = 3,
	Complete                       = 4,
	AISpawnRequestState_MAX        = 5
};


// Enum AthenaAI.EBountySpawnerAudioState
enum class EBountySpawnerAudioState : uint8_t
{
	None                           = 0,
	Action                         = 1,
	Anticipation                   = 2,
	EBountySpawnerAudioState_MAX   = 3
};


// Enum AthenaAI.EBountySpawnerType
enum class EBountySpawnerType : uint8_t
{
	Default                        = 0,
	BountyQuest                    = 1,
	BountyFort                     = 2,
	EBountySpawnerType_MAX         = 3
};


// Enum AthenaAI.EBountyTargetRank
enum class EBountyTargetRank : uint8_t
{
	Captain                        = 0,
	Crew                           = 1,
	EBountyTargetRank_MAX          = 2
};


// Enum AthenaAI.EBountyTargetGender
enum class EBountyTargetGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EBountyTargetGender_MAX        = 2
};


// Enum AthenaAI.EAITargetWeaponFiringArcResult
enum class EAITargetWeaponFiringArcResult : uint8_t
{
	LeftOfArc                      = 0,
	RightOfArc                     = 1,
	WithinArc                      = 2,
	EAITargetWeaponFiringArcResult_MAX = 3
};


// Enum AthenaAI.EBlackboardValueCompositeType
enum class EBlackboardValueCompositeType : uint8_t
{
	And                            = 0,
	Or                             = 1,
	EBlackboardValueCompositeType_MAX = 2
};


// Enum AthenaAI.EBlackboardValueComparisonType
enum class EBlackboardValueComparisonType : uint8_t
{
	NearlyEqual                    = 0,
	NotNearlyEqual                 = 1,
	GreaterThan                    = 2,
	LessThan                       = 3,
	GreaterThanEquals              = 4,
	LessThanEquals                 = 5,
	EBlackboardValueComparisonType_MAX = 6
};


// Enum AthenaAI.EFloatValueComparisonType
enum class EFloatValueComparisonType : uint8_t
{
	NearlyEqual                    = 0,
	NotNearlyEqual                 = 1,
	GreaterThan                    = 2,
	LessThan                       = 3,
	GreaterThanEquals              = 4,
	LessThanEquals                 = 5,
	EFloatValueComparisonType_MAX  = 6
};


// Enum AthenaAI.ETraceDirection
enum class ETraceDirection : uint8_t
{
	ItemToContext                  = 0,
	ContextToItem                  = 1,
	ETraceDirection_MAX            = 2
};


// Enum AthenaAI.EAIKnockbackStrengthType
enum class EAIKnockbackStrengthType : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EAIKnockbackStrengthType_MAX   = 3
};


// Enum AthenaAI.EAIThreatLevel
enum class EAIThreatLevel : uint8_t
{
	NoDanger                       = 0,
	Nervous                        = 1,
	Threatened                     = 2,
	Calm                           = 3,
	EAIThreatLevel_MAX             = 4
};


// Enum AthenaAI.EFaunaInWaterState
enum class EFaunaInWaterState : uint8_t
{
	NotInWater                     = 0,
	FloatingOnSurface              = 1,
	Underwater                     = 2,
	EFaunaInWaterState_MAX         = 3
};


// Enum AthenaAI.EFaunaCratedState
enum class EFaunaCratedState : uint8_t
{
	NotInCrate                     = 0,
	InProxyCrate                   = 1,
	InWieldedCrate                 = 2,
	EFaunaCratedState_MAX          = 3
};


// Enum AthenaAI.ESwimmingLineOfSightTest
enum class ESwimmingLineOfSightTest : uint8_t
{
	None                           = 0,
	Lazy                           = 1,
	Immediate                      = 2,
	ESwimmingLineOfSightTest_MAX   = 3
};


// Enum AthenaAI.ESwimmingSyncMode
enum class ESwimmingSyncMode : uint8_t
{
	Synchronous                    = 0,
	Asynchronous                   = 1,
	ESwimmingSyncMode_MAX          = 2
};


// Enum AthenaAI.ESwimmingArcMode
enum class ESwimmingArcMode : uint8_t
{
	ArcToTarget                    = 0,
	SwimDirectlyToTarget           = 1,
	ESwimmingArcMode_MAX           = 2
};


// Enum AthenaAI.ESwimmingGoalCheckMode
enum class ESwimmingGoalCheckMode : uint8_t
{
	Goal2D                         = 0,
	Goal3D                         = 1,
	ESwimmingGoalCheckMode_MAX     = 2
};


// Enum AthenaAI.ETinySharkDespawnReason
enum class ETinySharkDespawnReason : uint8_t
{
	Invalid                        = 0,
	Defeated                       = 1,
	TimedOut                       = 2,
	ETinySharkDespawnReason_MAX    = 3
};


// Enum AthenaAI.ETinySharkActiveState
enum class ETinySharkActiveState : uint8_t
{
	TrackingTarget                 = 0,
	WaitingForTarget               = 1,
	RepositionToTarget             = 2,
	WaitingForRespawn              = 3,
	ETinySharkActiveState_MAX      = 4
};


// Enum AthenaAI.ETinySharkState
enum class ETinySharkState : uint8_t
{
	Inactive                       = 0,
	Spawning                       = 1,
	Active                         = 2,
	Defeated                       = 3,
	Despawning                     = 4,
	ETinySharkState_MAX            = 5
};


// Enum AthenaAI.EDebugPetStateDescriptor
enum class EDebugPetStateDescriptor : uint8_t
{
	NoState                        = 0,
	Hangout_Attached               = 1,
	Hangout_MoveToLocation         = 2,
	Reacting                       = 3,
	Pursuit                        = 4,
	Idle                           = 5,
	Follow                         = 6,
	Eating                         = 7,
	Scared                         = 8,
	ForcedIdle                     = 9,
	EDebugPetStateDescriptor_MAX   = 10
};


// Enum AthenaAI.EPetSize
enum class EPetSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EPetSize_MAX                   = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAI.AIPartId
// 0x0008
struct FAIPartId
{
	struct FName                                       PartId;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x00E8
struct FAISpawnTypeParams
{
	TAssetPtr<class UClass>                            AIClass;                                                  // 0x0000(0x0020) (Edit)
	struct FStringAssetReference                       SkillsetOverride;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutOverride;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormOverride;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoOverride;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            ItemDropComponentClassOverride;                           // 0x0060(0x0020) (Edit)
	class UClass*                                      AIClassIdOverride;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColorOverride;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x0098(0x000C) (Edit)
	struct FName                                       DioramaRole;                                              // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FText                                       LocalisableName;                                          // 0x00B0(0x0038) (Edit)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x00F0
struct FWeightedAISpawnTypeParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTimesCanBeSelected;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISpawnTypeParams                          Params;                                                   // 0x0008(0x00E8) (Edit)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FWeightedAISpawnTypeParams>          SpawnParams;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0028
struct FAISpawnContextIdEncounterSettingsPair
{
	TArray<class UClass*>                              SpawnContexts;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UAIEncounterSettings*                        EncounterSettings;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawnWaveSequenceRankProgression*         SpawnWaveProgression;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIWeightedProbabilityRangeOfRangesRankProgression* RespawnTimerRangeProgression;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReaction;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsKnockbackDisabled;                                      // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsStunDisabled;                                           // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
// 0x0038
struct FAthenaAIAbilityPlayerBasedRange
{
	int                                                MaxPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           WeightedArray;                                            // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
// 0x0010
struct FAthenaAIAbilityPlayerBasedRanges
{
	TArray<struct FAthenaAIAbilityPlayerBasedRange>    AbilityRanges;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.MinMaxAbilityRange
// 0x0008
struct FMinMaxAbilityRange
{
	float                                              MinDistanceToTarget;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceToTarget;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIAbilityFollowUp
// 0x0010
struct FAIAbilityFollowUp
{
	class UClass*                                      AbilityType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	TEnumAsByte<ESwimAttackableType>                   AttackType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     AnimMontage;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              AnimLength;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeIntoAnimOfAttack;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetKnockBackStrength;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RumbleTag;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
// 0x0038
struct FSwimAttackTargetShipImpulseData
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushImpulseForce;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PushImpulseLocation;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipUpperBound;         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollImpulseForce;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RollImpulseLocation;                                      // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipUpperBound;         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// 0x0014
struct FAthenaAIControllerSenseSettings
{
	bool                                               EnableSight;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableHearing;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDamage;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SightRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHearingRange;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// 0x0020
struct FAthenaAIControllerSenseSettingOverride
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            SenseSettings;                                            // 0x0008(0x0014) (Edit)
	bool                                               ClearPerceivedData;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerHealthCustomisation
// 0x000C
struct FAthenaAIControllerHealthCustomisation
{
	bool                                               OverrideMaxHealth;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMaxHealthWithMinMax;                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MinHealth;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Value;                                                    // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedAmp;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccelAmp;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideRVOAvoidanceRadius;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideBlendSpeed;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
// 0x000C
struct FAthenaAICharacterCannonTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetLocation;                                           // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
// 0x0010
struct FAthenaAICharacterCannonTargetingParams
{
	TArray<struct FAthenaAICharacterCannonTarget>      Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceInMToProjectileHitChanceCurve;                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x0000(0x0020) (Edit)
	struct FName                                       ParamName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerSpawnItemDescForItemCategory
// 0x0010
struct FAthenaAICharacterControllerSpawnItemDescForItemCategory
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemDesc;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIAbilityDamageStage
// 0x0018
struct FAthenaAIAbilityDamageStage
{
	float                                              HealthPercentageToStartStage;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UAthenaAIAbilityStageParams*>         AbilitiesInStage;                                         // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
// 0x0010
struct FAthenaAICharacterControllerWeightedAmmoType
{
	class UClass*                                      AmmoType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weighting;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIAmmoRankMapping
// 0x0018
struct FAIAmmoRankMapping
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIDebugVisualisationLine
// 0x0020
struct FAIDebugVisualisationLine
{
	struct FVector                                     From;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     To;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0024
struct FAIDebugVisualisationCylinder
{
	struct FVector                                     To;                                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     From;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0018
struct FAIDebugVisualisationSphere
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x002C
struct FAIDebugVisualisationCone
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleWidthRadians;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleHeightRadians;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	TArray<struct FStringAssetReference>               Loadouts;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RankOffset;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	struct FStringAssetReference                       Form;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIIndividualVarietyEntry>           Individuals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.TargetSkillsetProgressionPair
// 0x0020
struct FTargetSkillsetProgressionPair
{
	struct FStringAssetReference                       CrewSkillset;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CaptainSkillset;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.TargetItemDropProgressionPair
// 0x0020
struct FTargetItemDropProgressionPair
{
	struct FStringAssetReference                       CrewItemSpawn;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CaptainItemSpawn;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
// 0x0018
struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList
{
	struct FName                                       FeatureName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	class UClass*                                      ClassId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIPartsCategoryMapping>             CategoryMappings;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIDropSpawnerRankMapping
// 0x0030
struct FAIDropSpawnerRankMapping
{
	TAssetPtr<class UClass>                            SpawnerClass;                                             // 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<float>                                      Weights;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	class ULoadoutAsset*                               Loadout;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AITypeData
// 0x0058
struct FAITypeData
{
	struct FName                                       AITypeName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       AIPawnClass;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugSkillset;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugLoadout;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultDebugAIClassId;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireNavMesh;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                AIRegionCostUnits;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIWorldCostUnits;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureToggle;                                            // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0100
struct FAISpawnerWave
{
	float                                              SpawnChance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   NumOfSpawnsInWave;                                        // 0x0008(0x0020) (Edit)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsOverride;                                  // 0x0028(0x0048) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeWave;                                          // 0x0070(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenSpawns;                                       // 0x00A0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeNextWaveIfSuccessful;                          // 0x00D0(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
// 0x0018
struct FAISpawnWaveSequenceRankMapping
{
	class UAISpawnWaveSequence*                        SpawnWaveSequence;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
// 0x0018
struct FAIWeightedProbabilityRangeOfRangesRankMapping
{
	class UAIWeightedProbabilityRangeOfRangesAsset*    RangeOfRanges;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.CustomPlayersAITrackerData
// 0x0020
struct FCustomPlayersAITrackerData
{
	class UAIPlayerTracker*                            Tracker;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIPartIdNumVariantInfo
// 0x000C
struct FAIPartIdNumVariantInfo
{
	struct FName                                       AIPartId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumVariants;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.ReplicatedAIPartsData
// 0x0018
struct FReplicatedAIPartsData
{
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAIPartId                                   AIPartId;                                                 // 0x0008(0x0008)
	int                                                MeshIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SpawnLocationGroup
// 0x0020
struct FSpawnLocationGroup
{
	TArray<struct FName>                               AllowedSpawnTypes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPersistentSpawnerWave
// 0x0018 (0x0118 - 0x0100)
struct FAIPersistentSpawnerWave : public FAISpawnerWave
{
	bool                                               CacheHealthOnDespawn;                                     // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0101(0x0017) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0058 (0x0170 - 0x0118)
struct FAIBountySpawnerWave : public FAIPersistentSpawnerWave
{
	bool                                               IsTarget;                                                 // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAdditionalTarget;                                       // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x011A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x011B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UPostBountyAIPawnSpawnedAction*              PostSpawnAction;                                          // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0128(0x0038) MISSED OFFSET
	class UClass*                                      BountyReward;                                             // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UItemDescSpawnData>           BountyRewardSpawnData;                                    // 0x0168(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0028
struct FAIBountySpawnerWaveGroup
{
	TArray<struct FAIBountySpawnerWave>                Waves;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct AthenaAI.AICustomNameTitleMapping
// 0x0040
struct FAICustomNameTitleMapping
{
	class UClass*                                      AIClassId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0038) (Edit)
};

// ScriptStruct AthenaAI.AICustomClassIdNameOverrides
// 0x0020
struct FAICustomClassIdNameOverrides
{
	TArray<class UClass*>                              ClassIds;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               Names;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	class UClass*                                      ItemDesc;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	struct FName                                       SoundTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierSpeedThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0000(0x0028) (Edit)
	TEnumAsByte<EBlackboardValueComparisonType>        Comparison;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnEntry;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnExit;                                                   // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// 0x0058
struct FChanceAndBlackboardKeyPair
{
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0000(0x0030) (Edit)
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0030(0x0028) (Edit)
};

// ScriptStruct AthenaAI.ConditionalBasedOnBlackboardKey
// 0x0038
struct FConditionalBasedOnBlackboardKey
{
	bool                                               UseCondition;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0008(0x0028) (Edit)
	bool                                               NegateCondition;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.WeightedAIStrategyChance
// 0x0038
struct FWeightedAIStrategyChance
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   WeightedChance;                                           // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIStrategyVulnerabilityData
// 0x0018
struct FAIStrategyVulnerabilityData
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventedHealthChanges;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.AIDioramaPawn
// 0x0048
struct FAIDioramaPawn
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDioramaRoleDesc
// 0x0028
struct FAIDioramaRoleDesc
{
	struct FName                                       RoleName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       CustomAnimationAsset;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       CustomAnimationToRunOnSpawn;                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingItemCategory;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
// 0x0040
struct FAIDioramaLocationSourceComponentData
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0030) (Edit, IsPlainOldData)
	class AActor*                                      Interactable;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.IslandDioramas
// 0x0010
struct FIslandDioramas
{
	TArray<TScriptInterface<class UAIDioramaLocationSourceInterface>> Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.DioramaCategoryEntries
// 0x0050
struct FDioramaCategoryEntries
{
	TMap<struct FName, struct FIslandDioramas>         EntriesByIslandName;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0110 - 0x0100)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideControlRotationInterpSpeed;                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkParams
// 0x00B8
struct FTinySharkParams
{
	class UClass*                                      TinySharkType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRadius;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            TinySharkAIType;                                          // 0x0018(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> TinySharkSkillset;                                        // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class ULoadoutAsset>                     TinySharkLoadout;                                         // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      TinySharkClassID;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           LifetimeTimeout;                                          // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	float                                              TrackedShipDistanceThreshold;                             // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepositionTime;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkShipSpawnData
// 0x0068
struct FTinySharkShipSpawnData
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Timer;                                                    // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UAthenaAIControllerParamsDataAsset>> ControllerParams;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   ControllerParamsToUse;                                    // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.TinySharkServiceParams
// 0x0028
struct FTinySharkServiceParams
{
	class UTinySharkParamsDataAsset*                   TinySharkParams;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTinySharkShipSpawnData>             SpawnForShipData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnvQuery*                                   SpawnForShipQuery;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFailureTimer;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetFlyingStrategyProperties
// 0x0018
struct FPetFlyingStrategyProperties
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfFlying;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFlyingMeshZOffset;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFlyingMeshZOffset;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetMovementRequest
// 0x000C
struct FPetMovementRequest
{
	TEnumAsByte<EAthenaAnimationPetRoamingState>       State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TargetMeshZOffset;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AdjustingFlight;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetTurnRateModifier
// 0x0010
struct FPetTurnRateModifier
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRateModifier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetLoadedMaterial
// 0x0010
struct FPetLoadedMaterial
{
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CastShadows;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetPartSizeMapping
// 0x0008
struct FPetPartSizeMapping
{
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PetScale;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.PetMaterialEntry
// 0x0018
struct FPetMaterialEntry
{
	struct FStringAssetReference                       MaterialReference;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               CastShadows;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetWieldableReactMapping
// 0x0010
struct FPetWieldableReactMapping
{
	class UClass*                                      WieldableType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReactId;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIAbilityDebugReplicatedIntervals
// 0x000C
struct FAIAbilityDebugReplicatedIntervals
{
	float                                              ActivationTimerCooldown;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeNextExecution;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageBeforeNextExecution;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x00C8
struct FAIEncounterSpecification
{
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0000(0x0020)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               Loadout;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIClass;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                   // 0x0050(0x0020)
	int                                                TeamColorIndex;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DioramaRole;                                              // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FText                                       LocalisableName;                                          // 0x0080(0x0038)
	struct FEncounterParams                            EncounterTrackingParams;                                  // 0x00B8(0x000C)
	bool                                               ShowNameplate;                                            // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0020
struct FAIEncounterWave
{
	TArray<struct FAIEncounterSpecification>           Specifications;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        SpecificationSpawnOrder;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x00A8
struct FAIBountySpawnerParams
{
	TArray<struct FAIEncounterWave>                    AISpawnerCreationDesc;                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                         // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        NumCaptainsInWave;                                        // 0x0030(0x0010) (ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenSpawns;                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenWaves;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenWaves;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x0050(0x0020)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x0070(0x0020)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0090(0x0010) (ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAdditionalWaves;                                       // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnerArchive
// 0x0008
struct FAISpawnerArchive
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
// 0x0001
struct FEventAIPartsRetrievalComponentBeforeBeginLoad
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// 0x0018
struct FBountySpawnerTargetDesc
{
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0002(0x0016) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// 0x0014
struct FAIBountySpawnerWaveLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowForTarget;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveEntry
// 0x0004
struct FAIBountySpawnerArchiveWaveEntry
{
	int                                                NumPawnsToSpawn;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveGroupEntry
// 0x0018
struct FAIBountySpawnerArchiveWaveGroupEntry
{
	int                                                NumNonTargetAIKills;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumTargetAIKills;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIBountySpawnerArchiveWaveEntry>    WaveEntries;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchive
// 0x0020 (0x0028 - 0x0008)
struct FAIBountySpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries;                                         // 0x0010(0x0010) (ZeroConstructor)
	float                                              BountyAudioIntensity;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFixedWavesSpawnerArchive
// 0x0018 (0x0020 - 0x0008)
struct FAIFixedWavesSpawnerArchive : public FAISpawnerArchive
{
	TArray<int>                                        NumSpawnedPawnsInWaves;                                   // 0x0008(0x0010) (ZeroConstructor)
	bool                                               WavesSpawnedOnSpottedNewTarget;                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIIncrementalWaveSpawnerArchive
// 0x0010 (0x0018 - 0x0008)
struct FAIIncrementalWaveSpawnerArchive : public FAISpawnerArchive
{
	struct FVector                                     LastTargetPosition;                                       // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumSpawnedPawns;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnUnit
// 0x0018
struct FAIPerCrewSpawnerRespawnUnit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0020
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
// 0x0008 (0x0010 - 0x0008)
struct FAIProgressiveWavesSpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIOnDelayedAssignedMeshConsumed
// 0x0010
struct FEventAIOnDelayedAssignedMeshConsumed
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               ConsumedMesh;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	class AActor*                                      Carrier;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0010
struct FEventAIStartedDeadActionState
{
	TEnumAsByte<ECharacterDeathType>                   DeathReason;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Killer;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// 0x0001
struct FEventAIControllerUnPossess
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// 0x0001
struct FEventAIKnockbackEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// 0x0018
struct FEventAIKnockbackStarted
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventNewAIStrategyBPReadable
// 0x0008
struct FEventNewAIStrategyBPReadable
{
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// 0x0001
struct FEventPawnRequestDespawn
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// 0x0008
struct FEventPawnRemoveOwnership
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// 0x0001
struct FEventOwnedPawnFinishedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// 0x0010
struct FEventOwnedPawnStartedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPartRetrievalRequestFailed
// 0x0001
struct FEventAIPartRetrievalRequestFailed
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventVisualAppearanceSelected
// 0x0018
struct FEventVisualAppearanceSelected
{
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAIPartId                                   AIPartId;                                                 // 0x0008(0x0008)
	int                                                PartsIndexToUse;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ColorTextureIndex;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0030
struct FEventAILoadoutSelected
{
	struct FItemLoadout                                Loadout;                                                  // 0x0000(0x0020)
	class UClass*                                      NonStorableItem;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIAmmoSelected
// 0x0008
struct FEventAIAmmoSelected
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// 0x0001
struct FEventAIPawnReadyToConstructDebugText
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// 0x0050
struct FEventOwnedPawnFinishedSpawning
{
	class UObject*                                     AICoordinator;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnPos;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      ActorToPerceiveOnSpawn;                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistanceToPerceiveOnSpawn;                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       HomeRegionZone;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     TargetInteractableOnSpawn;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  OwnerAISpawner;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0001
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	bool                                               IsFinalWave;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EBountySpawnerAudioState>              AudioState;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountySpawnerType>                    BountyType;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     BountyPosition;                                           // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerAllTargetsKilled
// 0x0018
struct FEventAIBountySpawnerAllTargetsKilled
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0038
struct FEventAIBountySpawnerTargetKilled
{
	struct FString                                     TargetName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       RewardId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ItemDropped;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     DeathLocation;                                            // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalWaves;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOfFinalAIPawnDeath;                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
// 0x0001
struct FEventAllAIProgressiveWavesCompleted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPawnRemovedFromAIRegion
// 0x0010
struct FEventAIPawnRemovedFromAIRegion
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPawnAddedToAIRegion
// 0x0010
struct FEventAIPawnAddedToAIRegion
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0034
struct FAITargetInfo
{
	struct FAITargetBounds                             Bounds;                                                   // 0x0000(0x0018)
	struct FVector                                     TargetPos;                                                // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITelemetryFragmentInput
// 0x00CF (0x00D0 - 0x0001)
struct FAITelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class APawn>                        AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAIEncounterSpecification                   AIEncounterSpecification;                                 // 0x0008(0x00C8)
};

// ScriptStruct AthenaAI.AITelemetryFragment
// 0x0070
struct FAITelemetryFragment
{
	struct FString                                     AIType;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AIId;                                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             AILoadOut;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     AIPawnType;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     AISkillset;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     AIForm;                                                   // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     AIClass;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.PlayerKillAITelemetryEvent
// 0x0010
struct FPlayerKillAITelemetryEvent
{
	struct FGuid                                       AttackId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTelemetryEvent
// 0x0010
struct FAISpawnTelemetryEvent
{
	struct FString                                     LocationName;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIActorTimeout
// 0x0010
struct FAIActorTimeout
{
	class AActor*                                      AIActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// 0x0001
struct FEventFaunaThreatLevelChanged
{
	TEnumAsByte<EAIThreatLevel>                        ThreatLevel;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// 0x0001
struct FEventFaunaAgitationEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// 0x0008
struct FEventFaunaAgitationBegun
{
	class AActor*                                      SourceActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkWorldSettingsParams
// 0x0001
struct FTinySharkWorldSettingsParams
{
	bool                                               TinySharkEnabled;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkEQSRequest
// 0x0048
struct FTinySharkEQSRequest
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkSpawnedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkSpawnedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AthenaAI.TinySharkKilledNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkKilledNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AthenaAI.EventTinySharkKilled
// 0x0001
struct FEventTinySharkKilled
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventTinySharkDamaged
// 0x0058
struct FEventTinySharkDamaged
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // 0x0000(0x0058)
};

// ScriptStruct AthenaAI.EventTinySharkDespawned
// 0x0001
struct FEventTinySharkDespawned
{
	TEnumAsByte<ETinySharkDespawnReason>               DespawnReason;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventTinySharkSpawned
// 0x0020
struct FEventTinySharkSpawned
{
	struct FString                                     TinySharkPartTag;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SpawnConfigId;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
// 0x0018
struct FTinySharkDespawnTelemetryEvent
{
	struct FString                                     TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ETinySharkDespawnReason>               TinySharkDespawnReason;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
// 0x0030
struct FTinySharkSpawnTelemetryEvent
{
	struct FString                                     TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TinySharkType;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGuid                                       ConfigSpawnId;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
