# OMEGA-X / NeuroMesh — Minimal Geometry Workflow Specification

## Status

**SPECIFICATION ONLY — NOT IMPLEMENTATION PROOF**

This document defines the smallest geometry-oriented workflow that can later be implemented and measured inside Unreal Engine. It deliberately does not claim that the workflow currently executes.

## Objective

Provide one bounded geometry operation that demonstrates the OMEGA-X control model without introducing unnecessary editor automation or broad agent capabilities.

## Proposed operation

`Geometry.TransformActor`

The operation accepts a narrowly defined request:

- target actor identifier;
- translation vector;
- optional rotation and scale parameters;
- requesting actor/agent identity;
- policy context;
- approval state.

The first demonstrator should use translation only. Rotation and scale remain explicitly out of scope until the translation path is verified.

## Required execution chain

`REQUEST → POLICY EVALUATION → SAFETY VALIDATION → AUTHORIZATION → OPTIONAL HUMAN APPROVAL → SNAPSHOT → APPLY → VERIFY → AUDIT`

A request must not mutate Unreal Engine state when policy evaluation returns `Deny`.

## Safety constraints

1. Empty or malformed capability is denied.
2. Empty requester identity is denied.
3. Unknown capabilities are denied by default.
4. Requests requiring approval are denied until approval is explicitly represented.
5. Target actor must be resolvable before mutation.
6. Translation magnitude should have an explicit configurable limit in the first implementation.
7. Mutation should preserve enough pre-change state to restore the actor where feasible.
8. Verification must compare expected and observed post-change state before the operation is considered successful.

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
- approval-required request without approval → `Deny`;
- unresolved actor → no mutation;
- excessive translation → no mutation.

### Positive functional case

After an explicit allow policy is implemented and verified, a permitted translation request should move exactly the selected actor by the requested bounded vector and pass post-mutation verification.

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

- Specification: **PRESENT**
- Unreal implementation: **NOT VERIFIED**
- Runtime execution: **UNKNOWN**
- Benchmark: **NOT AVAILABLE**
- Demonstrator evidence: **NOT AVAILABLE**
