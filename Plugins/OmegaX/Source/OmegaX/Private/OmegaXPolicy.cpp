#include "OmegaXPolicy.h"

namespace OmegaX
{
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

        // v0.1 intentionally exposes no implicit capabilities.
        return { EDecision::Deny, TEXT("Capability is not explicitly authorized") };
    }
}
