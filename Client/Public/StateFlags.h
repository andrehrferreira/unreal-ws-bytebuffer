#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StateFlags.generated.h"

UCLASS()
class CLIENT_API UStateFlags : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static const int32 None = 0;
    static const int32 Moving = 1 << 0;
    static const int32 Chilled = 1 << 1;
    static const int32 Stunned = 1 << 2;
    static const int32 Dead = 1 << 3;
    static const int32 CanRotate = 1 << 4;
    static const int32 Ally = 1 << 5;
    static const int32 Enemy = 1 << 6;
    static const int32 NegativeKarma = 1 << 7;
    static const int32 Burning = 1 << 8;
    static const int32 Bleeding = 1 << 9;
    static const int32 Poisoned = 1 << 10;
    static const int32 ArcaneShield = 1 << 11;
    static const int32 Knockback = 1 << 12;
    static const int32 Stealth = 1 << 13;
    static const int32 SafeZone = 1 << 14;
    static const int32 DuelZone = 1 << 15;
    static const int32 Mounted = 1 << 18;
    static const int32 Feared = 1 << 19;
    static const int32 Invulnerable = 1 << 22;
    static const int32 Warmode = 1 << 23;
    static const int32 FireSpray = 1 << 24;
    static const int32 Vampirism = 1 << 25;
    static const int32 Frozen = 1 << 26;
    static const int32 Casting = 1 << 27;
    static const int32 Untargettable = 1 << 28;
    static const int32 Frenzy = 1 << 29;
    static const int32 Admin = 1 << 30;

    UFUNCTION(BlueprintCallable, Category = "ToS")
    static bool HasFlag(int32 Flags, int32 StateToCheck);

    UFUNCTION(BlueprintCallable, Category = "ToS")
    static bool DontHasFlag(int32 Flags, int32 StateToCheck);

    UFUNCTION(BlueprintCallable, Category = "ToS")
    static int32 AddFlag(int32 Flags, int32 StateToAdd);

    UFUNCTION(BlueprintCallable, Category = "ToS")
    static int32 RemoveFlag(int32 Flags, int32 StateToRemove);
};