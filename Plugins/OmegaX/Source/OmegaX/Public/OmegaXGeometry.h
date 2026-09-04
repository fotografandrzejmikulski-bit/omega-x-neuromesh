#pragma once

#include "CoreMinimal.h"

class AActor;

namespace OmegaX
{
    struct FGeometryTransformRequest
    {
        AActor* Target = nullptr;
        FVector Translation = FVector::ZeroVector;
    };

    struct FGeometryTransformResult
    {
        bool bApplied = false;
        FVector PreviousLocation = FVector::ZeroVector;
        FVector NewLocation = FVector::ZeroVector;
        FString Reason;
    };

    /**
     * Minimal controlled geometry operation.
     * This operation only translates a resolved Actor; policy authorization
     * must be performed before calling Apply.
     */
    class OMEGAX_API FGeometryTransform
    {
    public:
        static FGeometryTransformResult Apply(const FGeometryTransformRequest& Request);
    };
}
