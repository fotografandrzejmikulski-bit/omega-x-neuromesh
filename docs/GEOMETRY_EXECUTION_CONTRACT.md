# OMEGA-X / NeuroMesh — Geometry Execution Contract

**Status:** IMPLEMENTED IN SOURCE — NOT BUILD-VERIFIED

## Purpose

Define the smallest executable Unreal Engine geometry primitive required to demonstrate a controlled state-changing operation.

## Operation

`Geometry.TransformActor`

The operation translates one already-resolved Unreal `AActor` by a supplied `FVector`.

## Required control sequence

```text
REQUEST
  → POLICY EVALUATION
  → SAFETY VALIDATION
  → AUTHORIZATION
  → OPTIONAL HUMAN APPROVAL
  → SNAPSHOT
  → APPLY
  → POST-CHANGE VERIFICATION
  → AUDIT
```

Policy evaluation is enforced inside the geometry operation before any state mutation. The request carries the policy inputs, so callers cannot obtain an authorized mutation merely by bypassing an external policy call.

## Safety boundary

The implementation:

- evaluates policy before touching the target;
- rejects a null target;
- rejects NaN translation input;
- rejects translation whose magnitude exceeds the v0.1 safety limit of 1000 Unreal units;
- records the pre-change location;
- applies translation only;
- reads the resulting location after mutation;
- reports whether the resulting location matches the requested value within Unreal's small-number tolerance;
- performs no arbitrary property mutation;
- performs no filesystem, network, credential, Blueprint, or Python execution.

## Current limitation

This contract does not yet provide a complete transactional rollback mechanism or persistent audit store. Those are validation targets, not completed capabilities.

## Evidence classification

| Item | Classification | Status |
|---|---|---|
| Geometry operation header exists | VERIFIED FACT | PASS |
| Geometry operation implementation exists | VERIFIED FACT | PASS |
| Policy evaluation is enforced inside the operation | VERIFIED FACT | PASS |
| Null-target negative test exists | VERIFIED FACT | PASS |
| Safety bound is implemented in source | VERIFIED FACT | PASS |
| Unreal compilation succeeds | MEASUREMENT | UNKNOWN |
| Positive Actor mutation executes in Unreal | MEASUREMENT | UNKNOWN |
| Post-change verification passes in Unreal | MEASUREMENT | UNKNOWN |
| Rollback is implemented | TARGET | NOT IMPLEMENTED |
| Persistent audit trail is implemented | TARGET | NOT IMPLEMENTED |

## Next gate

Do not claim a validated Unreal geometry workflow until the plugin is compiled and exercised in a real Unreal Engine environment with captured evidence.
