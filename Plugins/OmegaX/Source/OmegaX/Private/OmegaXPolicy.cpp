#include "OmegaXPolicy.h"

namespace OmegaX
{
    namespace
    {
        bool IsExplicitlyAuthorizedCapability(const FString& Capability)
        {
            // v0.1 exposes one deliberately narrow capability for the first
            // controlled Unreal Engine workflow. Everything else is denied.
            return Capability.Equals(TEXT("Geometry.TransformActor"), ESearchCase::CaseSensitive);
        }
    }

    FPolicyDecision FPolicy::Evaluate(const FPolicyRequest& Request)
    {
        if (Request.Capability.IsEmpty())
        {
            return { EDecision::Deny, TEXT("Capability is required") };
        }

        if (Request.Actor.IsEmpty())
        {
            return { EDecision::Deny, TEXT("Actor is required") };
        }

        if (Request.bRequiresApproval)
        {
            return { EDecision::Deny, TEXT("Explicit approval is required") };
        }

        if (!IsExplicitlyAuthorizedCapability(Request.Capability))
        {
            return { EDecision::Deny, TEXT("Capability is not explicitly authorized") };
        }

        return { EDecision::Allow, TEXT("Capability is explicitly authorized") };
    }
}
