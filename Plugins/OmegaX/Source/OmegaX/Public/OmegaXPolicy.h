#pragma once

#include "CoreMinimal.h"

namespace OmegaX
{
    enum class EDecision : uint8
    {
        Deny,
        Allow
    };

    struct FPolicyRequest
    {
        FString Capability;
        FString Actor;
        bool bRequiresApproval = false;
    };

    struct FPolicyDecision
    {
        EDecision Decision = EDecision::Deny;
        FString Reason;
    };

    /**
     * Minimal deterministic policy gate.
     * Unknown capabilities are denied by default.
     */
    class OMEGAX_API FPolicy
    {
    public:
        static FPolicyDecision Evaluate(const FPolicyRequest& Request);
    };
}
