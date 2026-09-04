#include "OmegaXGeometry.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FOmegaXGeometryNullTargetTest,
    "OmegaX.Geometry.NullTargetDenied",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FOmegaXGeometryNullTargetTest::RunTest(const FString& Parameters)
{
    const OmegaX::FGeometryTransformResult Result =
        OmegaX::FGeometryTransform::Apply({ nullptr, FVector(100.0f, 0.0f, 0.0f) });

    TestFalse(TEXT("Null target is not mutated"), Result.bApplied);
    TestEqual(TEXT("Null target is rejected"), Result.Reason, FString(TEXT("Target actor is required")));
    return true;
}
