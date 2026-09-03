# Decision Log

This log records material architectural and strategic decisions with their rationale and evidence state.

| ID | Decision | Rationale | Status |
|---|---|---|---|
| D-001 | Use a verification-first repository structure. | Prevents unsupported claims and documentation drift. | ACCEPTED |
| D-002 | Use policy-driven capability governance for agents. | Limits blast radius and makes authorization auditable. | ACCEPTED |
| D-003 | Use transactional mutation for material state changes. | Reduces risk of irreversible errors and supports recovery. | ACCEPTED |
| D-004 | Require deterministic-baseline comparison for AI-assisted technical automation. | Establishes whether AI materially improves the task. | ACCEPTED |
| D-005 | Derive grant request from defensible full-scope cost and current program ceiling. | Maximizes defensibility rather than artificially maximizing the number. | ACCEPTED |

## Change rule

A decision may be revised when new evidence changes the expected value, risk, feasibility, or program constraints. Revisions should create a new decision record rather than silently rewriting historical rationale.
