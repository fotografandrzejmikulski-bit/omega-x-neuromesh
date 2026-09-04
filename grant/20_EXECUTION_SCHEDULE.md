# OMEGA-X / NeuroMesh — Defensible Execution Schedule

## Objective

Close the remaining MegaGrants application gates as quickly as possible without converting unverified implementation into unsupported claims.

## Schedule principle

The project duration should be the shortest realistic period that can complete the funded work packages and generate reproducible evidence. No arbitrary 6/9/12-month duration is assumed merely to fill the form.

## Proposed work sequence

### WP1 — Governance and technical specification
- Freeze v0.1 policy and authorization scope.
- Freeze geometry operation contract.
- Freeze threat model and KPI definitions.
- Establish acceptance criteria.

### WP2 — Constrained Unreal prototype
- Build the minimal verification host in Unreal Engine 5.8.
- Compile the plugin and host.
- Load the plugin.
- Execute negative policy/safety tests.
- Execute the positive geometry-transform path.
- Verify post-change read-back.
- Exercise the bounded recovery path.

### WP3 — Validation and benchmarking
- Record engine/build context.
- Record successful/failed test outcomes.
- Measure execution time and resource use where meaningful.
- Establish deterministic baseline.
- Measure repeatability and failure/recovery behavior.
- Preserve raw evidence.

### WP4 — Demonstrator and grant evidence package
- Produce a minimal demonstrator based only on verified runtime behavior.
- Capture reproducible evidence.
- Update claims and limitations.
- Re-run reviewer red-team against the final application.
- Freeze final application and cover letter only after all factual gates close.

## Current hard constraint

The applicant currently does not have an Unreal Engine build environment available. Therefore WP2 runtime evidence cannot be represented as completed at this stage.

## Submission strategy

If an Unreal Engine environment becomes available before submission, perform only the minimum verification needed to close the highest-value evidence gates. If it does not, retain the source-level evidence boundary and present the funded work as development-and-validation rather than as a completed runtime product.

## Duration status

**OPEN — shortest defensible duration to be derived from final funded scope and verified resource availability.**
