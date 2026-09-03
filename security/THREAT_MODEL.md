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

## Incident response baseline

When a security-relevant failure is detected:

`CONTAIN → PRESERVE EVIDENCE → REVOKE/ROTATE → ASSESS BLAST RADIUS → PATCH → VERIFY → DOCUMENT → REVIEW`

## Security maturity gate

A component should not be treated as production-ready merely because the nominal workflow succeeds. Security testing must include negative cases, malformed inputs, unauthorized capability attempts, failure recovery, and rollback validation.
