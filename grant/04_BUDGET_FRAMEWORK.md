# Grant Budget Framework

## Budget rule

The application should request only the amount supported by the defined work packages and the current program rules.

`REQUEST = MIN(full defensible project cost, verified program maximum)`

The program maximum must be taken from the current official source immediately before submission. A historical amount must not be reused as a current ceiling.

## Cost-to-value traceability

Every material cost must map to:

`COST → WORK PACKAGE → DELIVERABLE → KPI → IMPACT`

## Applicant-specific planning basis

The applicant is a solo developer and requested a realistic planning rate to be selected rather than supplying one.

**Working development rate: €30/hour.**

This is an internal planning estimate for the grant budget, not a market-rate claim and not a verified historical invoice rate. It is intentionally moderate for specialized C++/Unreal Engine development while keeping the proposal defensible for a solo-developer project.

For a six-month planning target, a full-time planning envelope of 160 hours/month gives:

`€30/hour × 160 hours/month = €4,800/month`

`€4,800/month × 6 months = €28,800`

The final labor amount must still be reconciled against the actual work allocation by work package and the applicable MegaGrants rules. Unused or unsupported hours must not be included merely to increase the request.

## Required budget categories

Use only categories that are actually necessary for the proposed work, for example:

- development labor directly attributable to the project
- required technical software/services
- compute or infrastructure required for development/testing
- testing and benchmarking costs
- documentation/demo/dissemination costs where allowable

## Current project-specific cost priorities

1. **Development labor** — primary cost category; WP1–WP4 work directly performed by the applicant.
2. **Unreal development environment / hardware or rental** — potentially necessary because the applicant currently has no Unreal Engine build environment; allowability must be checked before inclusion.
3. **Required software/services and compute** — include only where a concrete development or validation need exists.
4. **Demonstrator/evidence production** — only defined, necessary costs.

## Exclusions

Do not include:

- invented personnel positions
- vague management overhead without a defined function
- purchases unrelated to the grant scope
- decorative contingency used only to increase the request
- unsupported market or revenue assumptions

## Scenario planning

Maintain three internal scenarios:

### FULL
Complete grant-funded scope with all required work packages.

### REDUCED
The highest-value reduced scope that still produces a credible demonstrator and evidence package.

### MVP
The minimum credible scope that proves the central technical hypothesis and generates reviewer-verifiable evidence.

## Budget table template

| Category | WP | Deliverable | Basis of estimate | Amount | Allowability checked | Evidence |
|---|---|---|---|---:|---|---|
| Development labor | WP1–WP4 | Specification, prototype, validation, evidence | 30 €/h × verified project hours | TBD; planning envelope €28,800 | Pending program check | Applicant-confirmed planning rate |
| Development environment / hardware or rental | WP2–WP3 | Unreal build/test capability | Actual required purchase/rental cost | TBD | Pending program check | Current quote/price required |
| Software/services | WP2–WP3 | Required development/testing tooling | Current documented price | TBD | Pending program check | Quote/link |
| Compute/infrastructure | WP2–WP3 | Build/test workload | Expected usage × current rate | TBD | Pending program check | Estimate |
| Dissemination/demo | WP4 | Submission/demo materials | Defined production requirement | TBD | Pending program check | Estimate |

## Final budget gate

Before submission, verify each line for necessity, calculation, allowability, and direct connection to a deliverable. Unsupported costs are removed rather than hidden inside another category.
