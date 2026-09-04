#include "OmegaXGeometry.h"
#include "GameFramework/Actor.h"

namespace OmegaX
{
    FGeometryTransformResult FGeometryTransform::Apply(const FGeometryTransformRequest& Request)
    {
        const FPolicyDecision PolicyDecision = FPolicy::Evaluate(Request.PolicyRequest);
        if (PolicyDecision.Decision != EDecision::Allow)
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, PolicyDecision.Reason };
        }

        if (Request.Translation.ContainsNaN())
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, TEXT("Translation contains NaN") };
        }

        if (!Request.Translation.IsFinite())
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, TEXT("Translation contains non-finite values") };
        }

        if (Request.Translation.SizeSquared() > FMath::Square(MaxTranslationMagnitude))
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, TEXT("Translation exceeds safety limit") };
        }

        if (!IsValid(Request.Target))
        {
            return { false, FVector::ZeroVector, FVector::ZeroVector, TEXT("Target actor is required") };
        }

        const FVector PreviousLocation = Request.Target->GetActorLocation();
        const FVector NewLocation = PreviousLocation + Request.Translation;

        if (!NewLocation.IsFinite())
        {
            return { false, PreviousLocation, PreviousLocation, TEXT("Resulting actor location is non-finite") };
        }

        Request.Target->SetActorLocation(NewLocation, false, nullptr, ETeleportType::None);

        const FVector VerifiedLocation = Request.Target->GetActorLocation();
        const bool bApplied = VerifiedLocation.Equals(NewLocation, KINDA_SMALL_NUMBER);

        if (!bApplied)
        {
            Request.Target->SetActorLocation(PreviousLocation, false, nullptr, ETeleportType::None);
            const FVector RecoveryLocation = Request.Target->GetActorLocation();

            return {
                false,
                PreviousLocation,
                RecoveryLocation,
                TEXT("Post-change verification failed; recovery attempted")
            };
        }

        return {
            true,
            PreviousLocation,
            VerifiedLocation,
            TEXT("Geometry transform applied and verified")
        };
    }
}
