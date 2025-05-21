// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YaChaRule : ModuleRules
{
	public YaChaRule(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
