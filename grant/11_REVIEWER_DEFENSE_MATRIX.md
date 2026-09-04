# Reviewer Defense Matrix

This matrix is a grant-facing control document. It does not create evidence; it identifies what must be demonstrated before a claim can be used as a fact in the application.

| Reviewer challenge | Required answer | Evidence required | Status |
|---|---|---|---|
| What problem does the project solve? | Controlled, bounded automation/state-change problem in a concrete Unreal Engine workflow. | Project proposal + geometry/policy specification. | PARTIAL — workflow is bounded, runtime use case still requires demonstrator evidence |
| Why is Unreal Engine central? | UE is the target environment for the plugin vertical slice and verification host. | `.uplugin`, Build.cs, `.uproject`, target files. | PARTIAL — source integration exists; build/runtime integration not verified |
| What exists today? | Separate source implementation from validated runtime functionality. | Repository evidence + dated prototype status. | VERIFIED — source implementation present; runtime validation explicitly unknown |
| What will the grant pay for? | Implementation, Unreal integration, testing, benchmarking, failure analysis and evidence packaging. | Project plan + bottom-up budget. | OPEN — actual cost basis still missing |
| What makes the approach technically credible? | Explicit policy gate, default-deny behavior, bounded geometry validation, post-change verification and recovery attempt. | Versioned source + architecture/security docs. | PARTIAL — mechanism is source-evidenced; runtime behavior remains unverified |
| What is novel? | Specific combination of governed proposal/execution separation with constrained geometry automation and verification. | Comparative research/evidence. | OPEN — no unsupported novelty superlative permitted |
| How will success be measured? | Baseline, functional correctness, repeatability, failure/recovery behavior, policy enforcement and relevant performance/resource metrics. | KPI/benchmark plan + executed results. | PARTIAL — methodology exists; results not yet available |
| What could fail? | Build/integration failure, policy bypass, invalid mutation, failed verification/recovery, scope/capacity limits. | Threat model + risk register + implementation caveats. | VERIFIED AS RISK ANALYSIS; RUNTIME FAILURE RATES UNKNOWN |
| What happens if the main approach fails? | Narrow to the highest-value deterministic workflow while preserving the justified governance/validation layer. | Project scope/fallback strategy. | VERIFIED AS PROJECT FALLBACK |
| Can the results be reproduced? | Reproduce from pinned source, host project, engine context, inputs and defined procedures once the environment is available. | Reproducibility record + build/test logs. | OPEN — actual build/test record missing |
| Is the project too broad? | Grant scope is constrained to a minimal Unreal vertical slice and evidence-backed validation. | Project plan + prototype status. | VERIFIED AS SCOPE RULE |
| Is the funding request inflated? | Every material cost must map to work package, deliverable, KPI and impact. | Bottom-up cost model. | OPEN — applicant cost inputs missing |

## Red-team findings that must remain explicit

1. The repository currently proves source-level implementation, not a successful Unreal build or runtime demonstrator.
2. The geometry recovery path is implemented as a bounded recovery attempt; it is not a proven transactional rollback guarantee.
3. The v0.1 authorization model does not bind the capability grant to a specific target resource; this is a documented least-privilege limitation.
4. No achieved performance improvement may be claimed until a baseline and measurement are executed.
5. Applicant eligibility, legal/contact data, previous/other funding, duration, and actual cost basis remain applicant/application gates.

## Red-team rule

A reviewer objection is not considered answered merely because the narrative sounds persuasive. The answer is complete only when the required evidence or an explicit, honest limitation exists.

## Final status rule

`OPEN` remains `OPEN` until supporting evidence or a documented limitation is attached. Never mark a reviewer risk complete solely through rewriting.
