using UnrealBuildTool;

public class OmegaXVerification : ModuleRules
{
    public OmegaXVerification(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "OmegaX"
            });
    }
}
