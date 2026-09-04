# Unreal Engine Build Verification Protocol

**Status:** UNVERIFIED — execution requires a local Unreal Engine environment.

## Purpose

This protocol defines the minimum reproducible evidence required before OMEGA-X claims successful Unreal Engine compilation, plugin loading, or automated-test execution.

## Repository prerequisites

The plugin must contain:

- `Plugins/OmegaX/OmegaX.uplugin`
- `Plugins/OmegaX/Source/OmegaX/OmegaX.Build.cs`
- `Plugins/OmegaX/Source/OmegaX/Private/OmegaXModule.cpp`
- `Plugins/OmegaX/Source/OmegaX/Public/OmegaXPolicy.h`
- `Plugins/OmegaX/Source/OmegaX/Private/OmegaXPolicy.cpp`
- `Plugins/OmegaX/Source/OmegaX/Private/OmegaXPolicyTests.cpp`

## Required verification evidence

Record the exact:

1. Unreal Engine version.
2. Operating system and architecture.
3. Compiler/toolchain version.
4. Test host project and commit.
5. Plugin loading result.
6. Build result and complete relevant log excerpt.
7. Automation test command/filter used.
8. Test result for `OmegaX.Policy.DefaultDeny`.
9. Any warnings/errors.

## Minimum acceptance sequence

1. Place/enable the plugin in a valid Unreal Engine project.
2. Generate/update project files as required by the selected host environment.
3. Build the host project and plugin with Unreal Build Tool through the normal project build path.
4. Launch the editor or appropriate test target.
5. Run the `OmegaX.Policy.DefaultDeny` automation test.
6. Preserve the raw build/test output as evidence.
7. If a failure occurs, record the failure before modifying the implementation.
8. Re-run after the root cause is corrected.

## Current result

No Unreal Engine build or runtime execution has been performed by this repository workflow. Therefore:

- compilation: **UNKNOWN**
- plugin load: **UNKNOWN**
- automation test execution: **UNKNOWN**
- runtime policy behavior: **UNKNOWN**

The source files demonstrate an implementation attempt, not successful engine integration.

## Evidence rule

A green static inspection is not a substitute for an Unreal Engine build. A source-level test definition is not a substitute for executed test output. These states remain separate until direct evidence is captured.

## Official technical basis

Epic's Unreal Engine documentation states that each module requires a `Build.cs` file and a module implementation, and that Unreal Build Tool uses module build rules rather than the IDE solution as the build-system source of truth.

- https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-modules
- https://dev.epicgames.com/documentation/en-us/unreal-engine/how-to-make-a-gameplay-module-in-unreal-engine
