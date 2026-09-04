# Final Reviewer Red-Team — Pre-Submission Control

## Audit date

2026-09-04

## Purpose

This document is the final reviewer attack performed before the application narrative and cover letter are frozen. It does not create evidence and does not convert unknowns into facts.

## Executive verdict

**NARRATIVE DEFENSIBLE WITH EXPLICIT OPEN GATES.**

The proposal can be defended as a bounded Unreal Engine development-and-validation project because it does not present the current source implementation as a runtime-validated product. The principal remaining weaknesses are evidence and application-form gates, not narrative inconsistency.

## Reviewer attack

### 1. "Is there actually something here today?"

**Answer:** Yes, at source level. The repository contains an OMEGA-X Unreal Engine plugin vertical slice, a minimal verification host, deterministic/default-deny policy logic, an explicitly authorized `Geometry.TransformActor` capability, geometry safety checks, post-change read-back verification, and a bounded recovery attempt.

**Limitation:** Successful Unreal compilation, plugin loading, runtime tests, and demonstrator execution are not currently evidenced.

**Classification:** FACT / SOURCE-VERIFIED; RUNTIME UNKNOWN.

### 2. "Why should Epic fund work that is not yet runtime validated?"

**Answer:** The requested funding is positioned specifically as the development-and-validation bridge from the current source-implemented vertical slice to a reproducible Unreal Engine demonstrator, including integration, testing, benchmarking, failure analysis, and evidence packaging.

**Risk:** The proposal must not imply that runtime validation has already occurred.

### 3. "Is the project too broad?"

**Answer:** No. The grant scope is constrained to WP1–WP4 and one highest-value workflow, with proof-before-scale as the governing rule. Broad autonomous-agent infrastructure is explicitly outside the funded scope unless evidence justifies expansion.

### 4. "What is actually novel?"

**Answer:** The proposal should describe the technical combination and engineering approach without claiming industry-first or absolute novelty. Any stronger novelty statement requires comparative evidence that is not currently present.

**Classification:** OPEN COMPARATIVE QUESTION; NO SUPERLATIVE CLAIM PERMITTED.

### 5. "Where are the benchmark numbers?"

**Answer:** They do not yet exist. The proposal defines the measurement methodology and commits to producing baseline and benchmark results during WP3.

**Classification:** TARGET / FUTURE MEASUREMENT.

### 6. "Does the recovery mechanism guarantee rollback?"

**Answer:** No. The source contains a bounded recovery attempt after failed post-change verification. It is not represented as a transactional rollback guarantee.

### 7. "Is the authorization model complete?"

**Answer:** No. v0.1 is intentionally narrow. The current capability model does not bind authorization to a specific target resource, which is documented as a least-privilege limitation to be addressed or constrained by the funded workflow.

### 8. "Why €28,800?"

**Answer:** €28,800 is the current FULL planning envelope: 960 hours × €30/hour over six months. The €30/hour rate is explicitly an internal planning estimate. The amount is not yet presented as a final Epic request because non-labor costs and live form/program constraints remain to be verified.

### 9. "Why is a six-month schedule necessary?"

**Answer:** Six months is a planning envelope covering specification, implementation, Unreal integration, validation, benchmarking, demonstrator production, and evidence packaging. The project explicitly aims to finish earlier if resources permit without reducing validation quality.

### 10. "Can a solo developer execute this?"

**Answer:** The project is scoped as a constrained vertical slice rather than a large platform. The confirmed operating model is solo development. Additional personnel must not be represented as current team members unless formally confirmed.

### 11. "What happens if Unreal integration fails?"

**Answer:** The fallback is to narrow the implementation to the highest-value deterministic workflow while preserving the justified governance and validation architecture. The application must report the limitation rather than manufacture a successful runtime result.

### 12. "Why is Unreal central rather than incidental?"

**Answer:** Unreal Engine is the intended execution and validation environment for the plugin vertical slice, geometry mutation, project-state interaction, and demonstrator. The source repository already contains the corresponding plugin and host structure; runtime integration remains a funded validation task.

## Budget attack result

**PASS AS PROVISIONAL PLANNING MODEL.**

The current cost model is internally coherent:

`960 h × €30/h = €28,800`

However, the following must remain open until directly verified:

- allowability under the live application/form;
- whether development environment/hardware/rental is required and allowable;
- any required software/services/compute;
- final requested grant amount.

No unsupported cost is added to close the gap.

## Application integrity rules

Before submission:

- do not convert source evidence into runtime claims;
- do not convert targets into achieved results;
- do not claim benchmark improvements before measurement;
- do not claim complete security;
- do not claim transactional rollback unless demonstrated;
- do not claim target-resource authorization that is not implemented;
- do not claim eligibility beyond what the live form and official guidance establish;
- do not infer legal identity from repository ownership or email;
- do not submit internal control sections as applicant-facing prose;
- do not leave unresolved placeholders in the actual submitted form.

## Final gate status

| Gate | Status |
|---|---|
| Narrative consistency | PASS |
| Technical claim discipline | PASS |
| Reviewer attack | PASS WITH LIMITATIONS DOCUMENTED |
| Scope control | PASS |
| Budget model | PROVISIONAL PASS |
| Runtime evidence | OPEN / NOT AVAILABLE |
| Demonstrator evidence | OPEN / NOT AVAILABLE |
| Live eligibility/form verification | OPEN |
| Legal identity | OPEN |
| Final requested amount | OPEN |
| Final application text | NOT YET FROZEN |
| Final cover letter | NOT YET FROZEN |

## Release decision

Do not label the application package `FINAL` until the remaining factual gates are closed or explicitly represented as applicant-entered/form-dependent fields. If the live form remains inaccessible, preserve the evidence boundary and do not fabricate its contents.
