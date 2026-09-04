#include "OmegaXGeometry.h"
#include "GameFramework/Actor.h"

namespace OmegaX
{
    FGeometryTransformResult FGeometryTransform::Apply(const FGeometryTransformRequest& Request)
    {
        if (Request.Target == nullptr)
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, TEXT("Target actor is required") };
        }

        const FVector PreviousLocation = Request.Target->GetActorLocation();
        const FVector NewLocation = PreviousLocation + Request.Translation;

        Request.Target->SetActorLocation(NewLocation, false, nullptr, ETeleportType::None);

        const FVector VerifiedLocation = Request.Target->GetActorLocation();
        const bool bApplied = VerifiedLocation.Equals(NewLocation, KINDA_SMALL_NUMBER);

        return {
            bApplied,
            PreviousLocation,
            VerifiedLocation,
            bApplied ? TEXT("Geometry transform applied and verified") : TEXT("Post-change verification failed")
        };
    }
}
