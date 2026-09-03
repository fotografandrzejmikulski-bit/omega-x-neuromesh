# Grant Claim Audit

This document is the control layer for statements used in the application.

## Claim classes

- **FACT** — directly established and source-backed.
- **OBSERVATION** — directly observed in project work.
- **MEASUREMENT** — produced by a defined experiment.
- **SOURCE CLAIM** — statement made by an external source and cited as such.
- **TARGET** — intended future result.
- **ASSUMPTION** — working premise not yet verified.
- **HYPOTHESIS** — technical proposition requiring validation.
- **UNKNOWN** — insufficient evidence.

## Rules

1. Every material technical or market claim must have a class.
2. Every FACT/SOURCE CLAIM used in the grant must have a traceable source.
3. Every MEASUREMENT must identify its method and evidence.
4. Every TARGET must remain future-oriented until achieved and measured.
5. Unsupported superlatives such as "first", "only", "best", "revolutionary", "enterprise-grade", or "100% secure" are excluded unless independently supportable within a defined scope.
6. Statements about funding rules must be checked against the current official program source.

## Current high-priority claims to verify before submission

| Claim | Class | Required evidence | Status |
|---|---|---|---|
| Project uses Unreal Engine / Epic technology in the proposed workflow | FACT / SOURCE CLAIM | Project evidence + official product/program alignment | OPEN |
| OMEGA-X governance model exists as a defined architecture | OBSERVATION / DESIGN | Versioned architecture document | OPEN |
| NeuroMesh workflow can produce the proposed geometry result | HYPOTHESIS / MEASUREMENT | Prototype + benchmark | OPEN |
| Prototype improves the baseline workflow | TARGET | Benchmark comparison | OPEN |
| Security policy prevents defined unauthorized actions | TARGET / MEASUREMENT | Explicit adversarial tests | OPEN |
| Requested grant amount is allowable | FACT | Current official program rules | OPEN |

## Submission lock

No material claim is submission-ready while its status is OPEN unless the application explicitly presents it as an assumption, hypothesis, or target.
