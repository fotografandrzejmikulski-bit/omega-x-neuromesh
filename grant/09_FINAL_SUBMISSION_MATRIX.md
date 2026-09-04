# Final Submission Matrix

| Requirement | Source | Owner | Status | Blocking? |
|---|---|---|---|---|
| Current MegaGrants cycle/deadline | Official Epic MegaGrants page | Application | VERIFIED — rechecked 2026-09-04; Cycle 2 closes Sep 4, 2026 at 11:59 PM ET | YES |
| Applicant eligibility | Official Epic FAQ/application | Applicant | TBD — live form-level verification still required | YES |
| Unreal Engine relevance | Project proposal + repository integration artifacts | Project | VERIFIED AT SOURCE LEVEL — runtime proof remains a funded validation objective | YES |
| Concrete project scope | Project plan + prototype status | Project | VERIFIED — bounded WP1–WP4 scope | NO |
| Milestones and deliverables | Project plan | Project | VERIFIED — M1–M4 defined | NO |
| Baseline and KPI methodology | KPI validation plan | Project | VERIFIED — methodology defined; results unavailable and correctly positioned as future validation | YES |
| Budget and requested amount | Budget framework + current program rules | Application | PARTIAL — €28,800 labor planning envelope; final request pending allowable-cost/form verification | YES |
| Evidence for technical claims | Claim/evidence registers + source implementation | Project | VERIFIED AT SOURCE LEVEL — runtime measurements remain unavailable and are not claimed as results | YES |
| Applicant identity/contact data | Applicant data template | Applicant | PARTIAL — type, country, email, solo status and funding disclosures confirmed; legal/form identity remains applicant-controlled | YES |
| Previous/other funding disclosures | Applicant confirmation | Applicant | VERIFIED — previous MegaGrant: No; other project funding: No | NO |
| Demo / supporting material | Actual project artifacts | Project | PARTIAL — source artifacts present; runtime demonstrator remains a grant-funded objective | YES |
| Final claim audit | Claim audit | Project | UPDATED — unsupported runtime/result claims locked as targets/unknown | YES |
| Reviewer red-team | Reviewer objections | Project | EXECUTED — remaining evidence/form gaps documented | YES |
| Final dossier status | `14_FINAL_DOSSIER_STATUS.md` | Project/Application | ACTIVE CONTROL POINT | YES |

## Current evidence position

The repository contains a source-implemented OMEGA-X Unreal Engine plugin vertical slice and a minimal C++ verification host. The source evidence covers deterministic/default-deny policy logic, the explicit `Geometry.TransformActor` capability, bounded geometry safety checks, post-change verification, a bounded recovery attempt, and defined negative test cases.

The following are **not** currently established by direct runtime evidence: successful Unreal Engine compilation, plugin loading, executed automation tests, positive actor mutation, successful runtime recovery, measured performance improvement, and an end-to-end agent workflow. These remain development and validation objectives rather than achieved results.

## Confirmed applicant inputs

- Applicant type: Individual / natural person
- Country: Poland
- Contact email: mojealterego21@gmail.com
- Working model: Solo developer
- Previous Epic MegaGrant funding: No
- Other funding for this project: No
- Planning duration: 6 months, with an objective to finish earlier if resources permit without reducing validation quality
- Unreal Engine build environment currently available: No
- Primary project/technical link: repository URL recorded in `grant/08_APPLICANT_DATA.md`

## Budget position

The current preferred planning scenario is FULL: 960 hours × €30/hour = €28,800 labor envelope. MVP and REDUCED scenarios remain €14,400 and €21,600 respectively. No unverified non-labor cost has been added.

The final requested amount must remain the smallest defensible amount supporting the committed scope after current program rules, allowable costs, and any necessary development-environment cost are verified.

## Submission rule

A blocking item may not be marked complete without supporting evidence or explicit applicant confirmation. Unknown items stay unknown.

## Current timing

The official Epic MegaGrants program page was rechecked on 2026-09-04 and currently lists Cycle 2 submissions through September 4, 2026, closing at 11:59 PM ET. citeturn0news0

## Completion rule

The dossier is ready only when every blocking item has verified evidence or explicit applicant confirmation, followed by a final claim audit and reviewer red-team against the actual final application text.

## Final integrity decision

The absence of Unreal runtime evidence does **not** authorize a runtime-success claim. If the live submission is made without new runtime evidence, the application must remain explicitly framed as a development-and-validation proposal whose funded work includes Unreal build verification, runtime testing, benchmarking, demonstrator production, and evidence capture.

No technical claim should be upgraded merely to make the application appear more mature.
