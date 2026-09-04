# Final Submission Input Gate

## Purpose

This file is the final factual-input control point before the application and cover letter are frozen.

The technical repository audit is complete at the current evidence boundary. Remaining blockers are factual inputs and, where available, direct runtime evidence. No missing fact may be inferred or fabricated.

## Current verified state

- Unreal Engine plugin vertical slice: source present.
- Minimal C++ verification host: source present.
- Architecture specification: PASS.
- Threat-model baseline: PASS.
- KPI/validation methodology: PASS.
- Source-level policy and geometry controls: documented and auditable.
- Unreal compilation, plugin loading, automation execution, concrete runtime integration, demonstrator, benchmarks: not runtime-verified.
- v0.1 target-resource binding limitation: explicitly documented.

## Required applicant confirmations

The applicant must provide or confirm:

1. Legal/applicant name.
2. Individual / company / organization status.
3. Country of application.
4. Contact email.
5. Website or portfolio, if applicable.
6. Solo developer or team; if team, names/roles relevant to the application.
7. Current Unreal Engine / Epic account context relevant to eligibility.
8. Previous Epic MegaGrant funding: yes/no, with relevant project information if yes.
9. Other funding for this project: yes/no, with amount/source if applicable.
10. Current project status and demonstrable work available for submission.
11. Proposed project duration.
12. Realistic development resource assumptions and cost basis.
13. Requested funding amount, derived from the verified cost basis and applicable program rules.
14. Any required tax/payment/legal information requested by the submission portal.

## Runtime evidence gate

If a usable Unreal Engine 5.8 development environment is available, capture only reproducible evidence:

- engine version and environment;
- successful project/plugin compilation;
- plugin load;
- automation test execution;
- positive authorized geometry transformation;
- denied/invalid operation cases;
- post-change verification;
- bounded recovery attempt where intentionally tested;
- demonstrator capture;
- measured benchmark data.

If this evidence cannot be produced before submission, the application must retain the explicit source-level boundary and must not claim runtime success.

## Finalization sequence

After applicant facts and available runtime evidence are closed:

1. Update `grant/08_APPLICANT_DATA_TEMPLATE.md` with confirmed facts.
2. Derive duration, work-package resource needs, and defensible cost basis.
3. Set the requested amount only after cost and program-rule verification.
4. Update `grant/09_FINAL_SUBMISSION_MATRIX.md`.
5. Update `grant/14_FINAL_DOSSIER_STATUS.md`.
6. Re-run the factual claim audit against the complete application narrative.
7. Re-run the reviewer red-team against the actual final application text.
8. Freeze the final grant application.
9. Freeze the final cover letter.
10. Perform one last official MegaGrants page/deadline verification immediately before submission.

## Submission integrity rule

The final submission must distinguish:

- verified source facts;
- measured runtime results;
- targets and expected outcomes;
- assumptions supplied by the applicant;
- unresolved limitations.

No numerical performance, security guarantee, runtime-success, recovery-guarantee, eligibility, budget, or applicant-specific claim may be presented as fact without evidence or explicit applicant confirmation.
