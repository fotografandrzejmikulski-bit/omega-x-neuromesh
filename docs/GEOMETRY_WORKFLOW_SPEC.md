# OMEGA-X / NeuroMesh — Minimal Geometry Workflow Specification

## Status

**SOURCE IMPLEMENTATION PRESENT — RUNTIME NOT VERIFIED**

This document defines the smallest geometry-oriented workflow implemented in the current source vertical slice and the evidence required to promote it to runtime-verified status.

## Objective

Provide one bounded geometry operation that demonstrates the OMEGA-X control model without introducing unnecessary editor automation or broad agent capabilities.

## Implemented operation

`Geometry.TransformActor`

The current source request contains:

- target actor pointer;
- translation vector;
- requesting actor/agent identity string;
- capability/policy context;
- approval-required flag.

The implemented demonstrator path is translation only. Rotation and scale remain out of scope until the translation path is verified.

## Required execution chain

`REQUEST → POLICY EVALUATION → SAFETY VALIDATION → AUTHORIZATION → OPTIONAL HUMAN APPROVAL → SNAPSHOT → APPLY → VERIFY → AUDIT`

In the current source implementation, policy evaluation is enforced inside the geometry operation before target access or mutation. Safety validation then rejects invalid translation input and excessive translation magnitude. The current primitive captures pre-change location and verifies the observed post-change location.

Persistent audit, transactional rollback, and an authenticated identity/trust boundary are not implemented in this vertical slice.

## Safety constraints

1. Empty or malformed capability is denied.
2. Empty requester identity is denied.
3. Unknown capabilities are denied by default.
4. Requests marked as requiring approval are denied until an approval mechanism exists; the current v0.1 primitive does not yet model a separately authenticated approval grant.
5. Target actor must be non-null before mutation.
6. Translation containing NaN is rejected.
7. Translation magnitude above 1000 Unreal units is rejected.
8. Mutation captures pre-change location.
9. Verification compares expected and observed post-change location before reporting success.
10. The current requester identity is an input field, not an authenticated principal. It must not be represented as proof of caller authenticity.

## Evidence to capture

For every demonstrator run record:

- Unreal Engine version;
- operating system and compiler/toolchain;
- plugin revision/commit;
- request payload;
- policy decision and reason;
- approval state;
- actor pre-state;
- requested transform;
- actor post-state;
- verification result;
- execution duration;
- failure/recovery result where applicable.

## Acceptance tests

### Negative security cases

- missing capability → `Deny`;
- missing requester → `Deny`;
- unknown capability → `Deny`;
- approval-required request without an explicit approval mechanism → `Deny`;
- unresolved actor → no mutation;
- excessive translation → no mutation;
- NaN translation → no mutation.

### Positive functional case

After the source path is build-verified in Unreal Engine, a permitted translation request should move exactly the selected actor by the requested bounded vector and pass post-mutation verification.

## Measurement plan

The first benchmark should compare:

1. manual baseline;
2. deterministic controlled automation;
3. controlled automation with the OMEGA-X policy path.

Measure only after the workflow executes in a real Unreal Engine environment. Candidate metrics are completion time, failure rate, policy-denial correctness, verification success, and repeatability.

No numerical target is an achieved result until measured.

## Scope boundary

This specification does **not** authorize implementation of:

- unrestricted actor manipulation;
- arbitrary Blueprint execution;
- arbitrary Python execution;
- filesystem mutation;
- network access;
- credential handling;
- autonomous broad editor control.

Those capabilities require separate threat analysis, authorization rules, tests, and evidence.

## Current evidence state

- Source implementation: **PRESENT**
- Source-level negative tests: **DEFINED**
- Unreal implementation: **NOT BUILD-VERIFIED**
- Runtime execution: **UNKNOWN**
- Authenticated requester identity: **NOT IMPLEMENTED**
- Persistent audit: **NOT IMPLEMENTED**
- Transactional rollback: **NOT IMPLEMENTED**
- Benchmark: **NOT AVAILABLE**
- Demonstrator evidence: **NOT AVAILABLE**
