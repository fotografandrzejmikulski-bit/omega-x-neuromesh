# Threat Model

## Security objective

Protect project code, data, credentials, agent capabilities, external integrations, and generated artifacts against unauthorized access, unsafe execution, accidental destructive changes, and supply-chain compromise.

## Primary threat classes

| Threat | Potential impact | Required control |
|---|---|---|
| Prompt/tool injection | Unauthorized or unsafe agent action | Capability isolation, policy evaluation, input validation |
| Credential leakage | Account or infrastructure compromise | Secret management, least privilege, secret scanning |
| Over-privileged agent | Excessive blast radius | Explicit capability scopes and approval thresholds |
| Destructive mutation | Data/code loss | Snapshot, transactional writes, rollback |
| Identity spoofing | Unauthorized capability use | Authenticated principal/context, trusted identity source, authorization binding |
| Approval spoofing | Bypass of human-approval boundary | Authenticated approval state, non-repudiable approval record, authorization binding |
| Malicious dependency | Supply-chain compromise | Dependency pinning, provenance, review and scanning |
| Evidence contamination | False claims or invalid grant submission | Source hierarchy and evidence register |
| Documentation drift | Operational inconsistency | Automated consistency checks and change impact review |
| Unvalidated automation | Silent production failure | Tests, simulation, staged rollout, observability |

## Security invariants

1. Credentials are never committed to the repository.
2. Secrets are never placed in source, examples, fixtures, or logs.
3. External input is untrusted by default.
4. Agents receive only the capabilities required for the current task.
5. High-impact or irreversible actions require stronger authorization.
6. Security failures override aggregate quality scores.
7. A caller-supplied identity string is not treated as proof of caller authenticity.
8. A boolean indicating that approval is required is not equivalent to an authenticated approval grant.

## Current prototype-specific security boundary

The v0.1 geometry vertical slice contains a requester identity field and an approval-required flag, but does not yet implement an authenticated identity provider or separately authenticated approval grant. Therefore:

- the requester identity field is contextual input only;
- it must not be used as evidence that a caller is trusted;
- approval-required requests are conservatively denied because the prototype has no trusted approval mechanism;
- these gaps block any claim of complete authorization security.

The geometry operation itself evaluates the policy before mutation and applies bounded-input validation. This is source-level evidence, not runtime security validation.

## Incident response baseline

When a security-relevant failure is detected:

`CONTAIN → PRESERVE EVIDENCE → REVOKE/ROTATE → ASSESS BLAST RADIUS → PATCH → VERIFY → DOCUMENT → REVIEW`

## Security maturity gate

A component should not be treated as production-ready merely because the nominal workflow succeeds. Security testing must include negative cases, malformed inputs, unauthorized capability attempts, identity/approval trust-boundary analysis, failure recovery, and rollback validation.
