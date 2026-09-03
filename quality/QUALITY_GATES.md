# Quality Gates

## Grand Master Score

The project quality model uses a 100-point weighted score:

| Dimension | Weight |
|---|---:|
| Truth | 20 |
| Correctness | 15 |
| Security | 15 |
| Evidence | 10 |
| Architecture | 10 |
| User Value | 10 |
| Scalability | 5 |
| Maintainability | 5 |
| UX | 3 |
| Community | 2 |
| Strategy | 3 |
| Grant Value | 2 |
| **Total** | **100** |

A critical security failure overrides the aggregate score.

## Release gates

### G0 — Definition

Scope, non-goals, assumptions, risks, dependencies, and success criteria are recorded.

### G1 — Evidence

Material claims have provenance and epistemic classification. Unknowns are explicit.

### G2 — Design

Architecture, threat model, authorization boundaries, failure modes, and rollback strategy are documented.

### G3 — Verification

Tests and reproducible measurements exist for the intended behavior. Negative and adversarial cases are included.

### G4 — Integration

Code, configuration, documentation, roadmap, claims, and KPIs are consistent.

### G5 — Release

Security, quality, evidence, and operational gates pass. Known residual risks are documented and accepted by the appropriate authority.

## Required statuses

Use explicit statuses such as `DRAFT`, `IN_PROGRESS`, `BLOCKED`, `VERIFIED`, `READY`, and `RELEASED`. Never infer readiness from silence or from the existence of a file alone.
