// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BigModeJam : ModuleRules
{
	public BigModeJam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
