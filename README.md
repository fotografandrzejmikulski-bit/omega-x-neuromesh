# OMEGA-X / NeuroMesh

A verification-first project system for AI governance, security, geometry automation, and grant-ready engineering.

## Project status

**Phase:** Prototype implementation started / build verification pending

The repository currently contains a minimal Unreal Engine plugin vertical slice for deterministic policy evaluation and one bounded geometry operation. Source implementation is present; Unreal Engine compilation, automation execution, positive runtime execution, and benchmarks remain unverified.

This repository separates verified facts, source claims, measurements, hypotheses, targets, and assumptions. Project claims are not treated as facts until supported by evidence.

## Core hierarchy

`TRUTH → SAFETY → CORRECTNESS → EVIDENCE → SYSTEM INTEGRITY → USER INTENT → STRATEGIC VALUE → EXECUTION → OPTIMIZATION → PRESENTATION`

## Core execution loop

`UNDERSTAND → MODEL → VERIFY → DECIDE → DESIGN → EXECUTE → TEST → ATTACK → MEASURE → REVIEW → OPTIMIZE → INTEGRATE → FINALIZE`

## Current prototype boundary

The current v0.1 vertical slice is intentionally narrow:

- deterministic default-deny policy;
- explicit `Geometry.TransformActor` capability;
- policy enforcement inside the geometry operation;
- bounded translation safety validation;
- pre-change location capture;
- post-change location verification;
- negative automation-test definitions.

The current prototype does **not** implement an authenticated requester identity, authenticated approval mechanism, persistent audit, transactional rollback, broad agent control, arbitrary Blueprint/Python execution, filesystem mutation, network access, or credential handling.

## Repository structure

- `docs/` — system architecture and operating model
- `claims/` — claim, evidence, and assumption control
- `security/` — threat model and security policy
- `grant/` — grant strategy and submission controls
- `quality/` — quality gates and reviewer/red-team controls
- `decisions/` — architecture and strategic decision records
- `Plugins/OmegaX/` — minimal Unreal Engine plugin vertical slice

## Non-negotiable rules

1. No unsupported superlatives or guarantees.
2. Hypotheses and targets must never be presented as measured results.
3. Security-sensitive actions follow least privilege and explicit policy evaluation.
4. Mutation safety requires validation before mutation and post-change verification; transactional snapshot/rollback remains a target until implemented and verified.
5. Funding requests are derived from defensible project scope and allowable program limits.
6. Project documentation must remain synchronized with architecture, implementation, evidence, and roadmap.
7. Source implementation must not be described as Unreal Engine runtime validation until real build/test evidence exists.
