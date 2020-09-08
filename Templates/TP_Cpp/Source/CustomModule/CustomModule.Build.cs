using UnrealBuildTool;

public class CustomModule : ModuleRules
{
    public CustomModule(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "TPP_Cpp"});

        PublicIncludePaths.AddRange(new string[] {"CustomModule/Public"});
        PrivateIncludePaths.AddRange(new string[] {"CustomModule/Private"});
    }
}

