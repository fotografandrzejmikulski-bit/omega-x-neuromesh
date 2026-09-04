# Final Submission Lock

**Date:** 2026-09-04
**Project:** OMEGA-X / NeuroMesh
**Purpose:** Final control point immediately before Epic MegaGrants submission.

## Current decision

The project documentation and grant narrative are synchronized and the applicant contact data supplied in the live-form preparation stage is now recorded. The final applicant form entry pack is prepared. Submission itself remains dependent only on live-form choices and the few factual items that cannot be inferred without risking fabrication.

## Evidence boundary

### Verified at source level

- Unreal Engine plugin vertical slice exists in the repository.
- Minimal C++ verification host exists.
- Deterministic/default-deny policy exists.
- `Geometry.TransformActor` is the explicitly authorized v0.1 capability.
- Geometry mutation performs policy evaluation before mutation.
- Bounded geometry safety validation exists.
- Post-change read-back verification exists.
- A bounded recovery attempt exists.
- Negative test cases are defined.
- Grant work is constrained to WP1–WP4.
- Static project-overview media artifact has been added to the repository.

### Not runtime-verified

- Unreal Engine compilation.
- Plugin loading.
- Automation-test execution.
- Positive runtime actor mutation.
- Runtime recovery success.
- Benchmark results.
- Measured performance improvement.
- End-to-end agent workflow.
- Completed runtime demonstrator.

These are funded development/validation objectives, not achieved results.

## Budget lock

Current planning scenarios:

- MVP: 480 h × €30/h = €14,400.
- REDUCED: 720 h × €30/h = €21,600.
- FULL: 960 h × €30/h = €28,800.

**Preferred planning scenario:** FULL / €28,800 labor envelope.

A 2026-09-04 mid-market reference rate of approximately €1 = $1.16245 gives approximately $33,479 for €28,800. This is a planning conversion only. The live Epic funding-range field controls the final selected USD range.

No unverified non-labor cost is included.

## Applicant-data lock

Confirmed:

- Applicant / legal name: Andrzej Mikulski.
- Individual / natural person.
- Poland.
- Contact email: mojealterego21@gmail.com.
- Phone: +48 455 575 337.
- Relevant social media: https://www.viewbug.com/member/andrzejM.
- Solo developer / team size 1.
- Previous Epic MegaGrant: No.
- Other project funding: No.
- Planning duration: 6 months, with objective to finish earlier without reducing validation quality.
- No Unreal Engine build environment currently available.

Still applicant/form controlled:

- Truthful selection and explanation for “How did you hear about Epic MegaGrants?”
- Exact live Project Type dropdown option.
- Reviewer-accessible Project media link.
- Exact live Project phase option.
- Community/open-source selection based on actual public contribution status.
- Any required Epic/Unreal account information.
- Any mandatory website/portfolio field.
- Any form-specific legal, tax, payment, or eligibility declarations.

## Final applicant form pack

`grant/24_FINAL_APPLICANT_FORM_ENTRY_PACK.md` contains the prepared field-by-field answers, final narrative text, budget wording, and explicit blockers.

## Repository visibility constraint

The GitHub repository is currently **PRIVATE**. Therefore its URL must not be treated as reviewer-accessible project media without an appropriate access mechanism. The application needs a public/reviewer-accessible media link or another accepted mechanism before submission.

## Final submission sequence

1. Open the live Epic application form.
2. Verify all eligibility and mandatory fields directly in the form.
3. Enter only confirmed applicant/legal data.
4. Select the truthful “How did you hear” option and matching explanation.
5. Select the exact truthful Project Type and Project phase options.
6. Provide reviewer-accessible project media.
7. Use the prepared project narrative and unique-features text.
8. Select the USD funding range containing approximately $33,500, subject to the live form.
9. Preserve the source-versus-runtime evidence boundary in every technical answer.
10. Apply the final claim audit to the exact entered text.
11. Apply the reviewer red-team to the exact entered text.
12. Submit before the verified deadline.

## Deadline control

The official Epic MegaGrants page was rechecked on 2026-09-04. Cycle 2 submissions run through September 4, 2026 at 11:59 PM ET; Epic localized European pages show the corresponding Central European deadline as September 5, 2026 at 05:59 CEST. Treat the English official schedule as the controlling submission deadline and recheck immediately before submission. citeturn0search0turn0search2

## Prohibited actions at finalization

- Do not claim a successful Unreal build without execution evidence.
- Do not claim benchmark improvement without measurement.
- Do not claim security guarantees beyond the tested scope.
- Do not call the recovery path a transactional rollback guarantee.
- Do not claim complete target-resource authorization.
- Do not invent applicant credentials, customers, revenue, partnerships, funding, costs, or eligibility.
- Do not inflate the request merely to approach a historical or advertised maximum.
- Do not submit the internal control documents as applicant-facing prose unless the form specifically requests them.

## Release criterion

The application is submission-ready only when the live form contains factual, internally consistent, evidence-bounded answers and all mandatory applicant/form gates are closed.

The absence of runtime evidence does not by itself invalidate the proposal; it requires the application to describe runtime verification, benchmarking, and demonstrator production as grant-funded work rather than completed achievements.
