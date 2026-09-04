# Evidence Register

This register is the source-of-truth index for material project claims.

| ID | Claim / proposition | Class | Evidence | Status |
|---|---|---|---|---|
| E-001 | The repository is private and the default branch is `main`. | VERIFIED FACT | GitHub repository metadata. | VERIFIED |
| E-002 | OMEGA-X / NeuroMesh is the integrated project scope represented by this repository. | SOURCE CLAIM | Project materials and repository documentation. | TO VERIFY |
| E-003 | The proposed control chain uses policy evaluation, safety gates, authorization, execution, verification and audit. | PROJECT DESIGN | `docs/ARCHITECTURE.md`. | DEFINED |
| E-004 | Grant funding ceilings and requirements are time-sensitive. | VERIFIED PRACTICE | Current official program source must be checked before submission. | PROCESS |
| E-005 | The repository now contains an Unreal Engine plugin manifest and C++ module implementation for OMEGA-X. | VERIFIED FACT | `Plugins/OmegaX/OmegaX.uplugin`; `Plugins/OmegaX/Source/OmegaX/OmegaX.Build.cs`; `Plugins/OmegaX/Source/OmegaX/Private/OmegaXModule.cpp`. | VERIFIED — SOURCE PRESENT |
| E-006 | The OMEGA-X plugin contains a deterministic default-deny policy implementation and negative automation-test definition. | VERIFIED FACT | `OmegaXPolicy.h`, `OmegaXPolicy.cpp`, `OmegaXPolicyTests.cpp`. | VERIFIED — SOURCE PRESENT |
| E-007 | The Unreal Engine plugin compiles and its automation tests pass. | UNKNOWN | No direct Unreal Engine build/test execution evidence captured yet. | BLOCKED |
| E-008 | The plugin provides a working Unreal Engine demonstrator. | UNKNOWN | No validated host project/runtime demonstration captured yet. | BLOCKED |
| E-009 | Unreal Engine performance or geometry-processing KPIs have been achieved. | UNKNOWN | No benchmark execution evidence captured yet. | BLOCKED |

## Evidence policy

A material claim is promoted to `VERIFIED` only when its evidence is identifiable and appropriate to the claim. User-provided descriptions are preserved as source claims until independently verified where verification is material.

## Evidence freshness

Time-sensitive claims require a verification date and source version or URL where practical. Historical evidence must not be silently reused as current evidence.

## Implementation evidence rule

Source presence proves that implementation artifacts exist in the repository. It does not prove successful compilation, runtime loading, test execution, performance, or demonstrator readiness. Those require direct execution evidence.
