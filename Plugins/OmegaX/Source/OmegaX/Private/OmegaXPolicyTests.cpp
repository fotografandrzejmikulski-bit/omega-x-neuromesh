#include "OmegaXPolicy.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FOmegaXPolicyDefaultDenyTest,
    "OmegaX.Policy.DefaultDeny",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FOmegaXPolicyDefaultDenyTest::RunTest(const FString& Parameters)
{
    using namespace OmegaX;

    const FPolicyDecision MissingCapability = FPolicy::Evaluate({ TEXT(""), TEXT("agent"), false });
    TestEqual(TEXT("Missing capability is denied"), MissingCapability.Decision, EDecision::Deny);

    const FPolicyDecision MissingActor = FPolicy::Evaluate({ TEXT("Geometry.TransformActor"), TEXT(""), false });
    TestEqual(TEXT("Missing actor is denied"), MissingActor.Decision, EDecision::Deny);

    const FPolicyDecision ApprovalRequired = FPolicy::Evaluate({ TEXT("Geometry.TransformActor"), TEXT("agent"), true });
    TestEqual(TEXT("Approval-required request is denied before approval"), ApprovalRequired.Decision, EDecision::Deny);

    const FPolicyDecision UnknownCapability = FPolicy::Evaluate({ TEXT("unknown.capability"), TEXT("agent"), false });
    TestEqual(TEXT("Unknown capability is denied by default"), UnknownCapability.Decision, EDecision::Deny);

    const FPolicyDecision AuthorizedCapability = FPolicy::Evaluate({ TEXT("Geometry.TransformActor"), TEXT("agent"), false });
    TestEqual(TEXT("Explicitly authorized capability is allowed"), AuthorizedCapability.Decision, EDecision::Allow);

    return true;
}
