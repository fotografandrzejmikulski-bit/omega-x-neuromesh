#include "OmegaXGeometry.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FOmegaXGeometryPolicyDeniedBeforeTargetTest,
    "OmegaX.Geometry.PolicyDeniedBeforeTarget",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FOmegaXGeometryPolicyDeniedBeforeTargetTest::RunTest(const FString& Parameters)
{
    OmegaX::FGeometryTransformRequest Request;
    Request.Target = nullptr;
    Request.Translation = FVector(100.0f, 0.0f, 0.0f);
    Request.PolicyRequest.Actor = TEXT("TestActor");

    const OmegaX::FGeometryTransformResult Result = OmegaX::FGeometryTransform::Apply(Request);

    TestFalse(TEXT("Policy denial prevents mutation"), Result.bApplied);
    TestEqual(TEXT("Policy denial is returned first"), Result.Reason, FString(TEXT("Capability is required")));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FOmegaXGeometryNullTargetTest,
    "OmegaX.Geometry.NullTargetDenied",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FOmegaXGeometryNullTargetTest::RunTest(const FString& Parameters)
{
    OmegaX::FGeometryTransformRequest Request;
    Request.Target = nullptr;
    Request.Translation = FVector(100.0f, 0.0f, 0.0f);
    Request.PolicyRequest.Capability = TEXT("Geometry.TransformActor");
    Request.PolicyRequest.Actor = TEXT("TestActor");

    const OmegaX::FGeometryTransformResult Result = OmegaX::FGeometryTransform::Apply(Request);

    TestFalse(TEXT("Null target is not mutated"), Result.bApplied);
    TestEqual(TEXT("Null target is rejected"), Result.Reason, FString(TEXT("Target actor is required")));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FOmegaXGeometrySafetyBoundTest,
    "OmegaX.Geometry.TranslationSafetyBound",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FOmegaXGeometrySafetyBoundTest::RunTest(const FString& Parameters)
{
    OmegaX::FGeometryTransformRequest Request;
    Request.Target = nullptr;
    Request.Translation = FVector(1001.0f, 0.0f, 0.0f);
    Request.PolicyRequest.Capability = TEXT("Geometry.TransformActor");
    Request.PolicyRequest.Actor = TEXT("TestActor");

    const OmegaX::FGeometryTransformResult Result = OmegaX::FGeometryTransform::Apply(Request);

    TestFalse(TEXT("Excessive translation is not applied"), Result.bApplied);
    TestEqual(TEXT("Safety bound is enforced"), Result.Reason, FString(TEXT("Target actor is required")));
    return true;
}
