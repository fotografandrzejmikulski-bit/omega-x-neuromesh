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

## Current high-priority claims — red-team status

| Claim | Class | Required evidence | Status |
|---|---|---|---|
| Repository contains an Unreal Engine plugin and a minimal Unreal verification host | FACT | Versioned repository files | VERIFIED |
| OMEGA-X governance model exists as a defined architecture | OBSERVATION / DESIGN | Versioned architecture and implementation docs | VERIFIED AS DESIGN; NOT PROOF OF RUNTIME VALIDATION |
| OMEGA-X v0.1 policy is deterministic/default-deny with an explicit `Geometry.TransformActor` capability | FACT | Versioned policy implementation | VERIFIED IN SOURCE |
| Geometry transform primitive performs policy checks and bounded safety validation before mutation | FACT | Versioned geometry implementation | VERIFIED IN SOURCE |
| Geometry transform performs post-change read-back verification and contains a bounded recovery attempt | FACT | Versioned geometry implementation | VERIFIED IN SOURCE; RUNTIME RECOVERY NOT PROVEN |
| Negative policy/geometry test cases are defined | FACT | Versioned test source | VERIFIED IN SOURCE; TEST EXECUTION NOT PROVEN |
| NeuroMesh workflow can produce the proposed geometry result in Unreal Engine | HYPOTHESIS / MEASUREMENT | Built host + positive runtime test + benchmark | OPEN — NOT RUNTIME VERIFIED |
| Prototype improves the baseline workflow | TARGET | Benchmark comparison | TARGET — NO RESULT CLAIM PERMITTED |
| Security policy prevents defined unauthorized actions | TARGET / MEASUREMENT | Executed adversarial tests | TARGET — SOURCE CONTROLS EXIST; RUNTIME TEST RESULT UNKNOWN |
| Requested grant amount is allowable and justified | FACT | Current official rules + applicant cost basis | OPEN |

## Explicit reviewer limitations

The repository evidence supports a **source-implemented vertical slice**, not a claim of a build-verified or runtime-validated Unreal demonstrator. The application must therefore use future-oriented language for runtime behavior, benchmarks, performance, recovery success, and end-to-end agent workflows until direct evidence exists.

The v0.1 policy is capability-scoped but does not yet bind authorization to a specific target resource. This is a documented least-privilege limitation, not evidence of complete authorization coverage.

## Submission lock

No material claim is submission-ready while its status is OPEN unless the application explicitly presents it as an assumption, hypothesis, or target.
