#include "StateFlags.h"

bool UStateFlags::HasFlag(int32 Flags, int32 StateToCheck)
{
    return (Flags & StateToCheck) == StateToCheck;
}

int32 UStateFlags::AddFlag(int32 Flags, int32 StateToAdd)
{
    return Flags | StateToAdd;
}

UFUNCTION(BlueprintCallable, Category = "StateFlags")
int32 UStateFlags::RemoveFlag(int32 Flags, int32 StateToRemove)
{
    return Flags & ~StateToRemove;
}

UFUNCTION(BlueprintCallable, Category = "StateFlags")
bool UStateFlags::DontHasFlag(int32 Flags, int32 StateToCheck)
{
    return (Flags & StateToCheck) != StateToCheck;
}