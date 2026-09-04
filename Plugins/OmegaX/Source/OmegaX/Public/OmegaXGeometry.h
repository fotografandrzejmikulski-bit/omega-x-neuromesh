#pragma once

#include "CoreMinimal.h"
#include "OmegaXPolicy.h"

class AActor;

namespace OmegaX
{
    struct FGeometryTransformRequest
    {
        AActor* Target = nullptr;
        FVector Translation = FVector::ZeroVector;
        FPolicyRequest PolicyRequest;
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
     * Policy authorization is enforced inside Apply before mutation.
     */
    class OMEGAX_API FGeometryTransform
    {
    public:
        static FGeometryTransformResult Apply(const FGeometryTransformRequest& Request);

    private:
        static constexpr float MaxTranslationMagnitude = 1000.0f;
    };
}
