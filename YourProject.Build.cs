using UnrealBuildTool;

public class ShibaFramework54 : ModuleRules
{
	public ShibaFramework54(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Ensure the following are present in your public module dependencies
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "AIModule",
                "StateTreeModule",
                "GameplayStateTreeModule"
            }
	    );
	}
}
