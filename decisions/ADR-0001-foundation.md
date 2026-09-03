# ADR-0001: Verification-First Project Foundation

## Status

Accepted

## Context

OMEGA-X / NeuroMesh requires a repository structure that can support technical development, security review, evidence management, and grant documentation without allowing unsupported claims to become project facts.

## Decision

The project adopts a verification-first repository model with separate registers for claims and assumptions and dedicated areas for architecture, security, quality, grant strategy, and decisions.

## Consequences

### Positive

- Clear separation between fact, claim, hypothesis, target, and assumption.
- Easier technical and grant review.
- Reduced risk of documentation drift.
- Explicit security and quality gates.
- Better traceability from funding request to deliverables and KPIs.

### Negative

- More documentation overhead.
- Material claims require provenance and periodic verification.
- Releases may be blocked until evidence and security gates are satisfied.

## Reversal criteria

Revisit this decision only if the repository demonstrably benefits from a simpler governance structure without losing traceability, security, or evidence integrity.
