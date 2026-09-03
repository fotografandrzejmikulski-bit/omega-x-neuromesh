# System Architecture

## Scope

OMEGA-X / NeuroMesh is defined here as a proposed integrated system architecture. Implementation status must be established from repository evidence; architectural intent is not implementation proof.

## Control model

The preferred agent execution chain is:

`AGENT PROPOSES → POLICY EVALUATES → SAFETY GATE → AUTHORIZATION → OPTIONAL HUMAN APPROVAL → EXECUTION → VERIFICATION → AUDIT`

## Transactional mutation model

Any state-changing operation should follow:

`SNAPSHOT → PROPOSE → STATIC VALIDATION → SEMANTIC VALIDATION → SECURITY VALIDATION → HUMAN APPROVAL WHEN REQUIRED → APPLY → VERIFY → COMMIT`

The system should support rollback where technically feasible and record enough information to reconstruct what changed, why it changed, and which policy permitted it.

## AI necessity test

AI should be used where probabilistic reasoning, semantic interpretation, classification, generation, or planning provides material value. Deterministic algorithms and rule engines should be preferred for operations where they provide higher reliability, lower cost, lower latency, or stronger reproducibility.

## Human authority

- **L0 OBSERVE** — system only observes.
- **L1 ASSIST** — system recommends; human executes.
- **L2 CONTROLLED ACTION** — narrowly scoped automated actions under policy.
- **L3 SUPERVISED AUTONOMY** — automation with defined approval thresholds.
- **L4 HIGH AUTONOMY** — broad automation with strong monitoring and rollback.
- **L5 SUPERVISED AUTONOMY** — project-defined ceiling requiring explicit governance evidence before adoption.

The authority level for a component must be justified by risk, reversibility, blast radius, and evidence.

## Architectural invariants

1. No silent privilege escalation.
2. No execution without policy evaluation for controlled capabilities.
3. No material claim without provenance.
4. No destructive mutation without a recoverable state where feasible.
5. No KPI is presented as achieved until measured.
6. No grant claim is treated as current until checked against the applicable official program source.
