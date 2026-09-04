# Grant Budget Framework

## Budget rule

The application should request only the amount supported by the defined work packages and the current program rules.

`REQUEST = MIN(full defensible project cost, verified program maximum)`

The current official MegaGrants page states that average grants range from **$5,000 to $75,000**, with some extraordinary projects receiving up to **$150,000**. This does not justify requesting a maximum amount; the request must remain tied to defensible project cost. citeturn0news23

The program maximum and current application rules must be taken from the official source immediately before submission. A historical amount must not be reused as a current ceiling.

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

## Scenario planning

### FULL — €28,800 labor envelope

- 960 planned hours
- WP1–WP4
- constrained Unreal prototype
- runtime verification
- validation and benchmarking
- demonstrator and reproducible evidence package

### REDUCED — €21,600 labor envelope

- 720 planned hours
- WP1–WP4 with narrower validation breadth
- one primary demonstrator path
- focused positive/negative verification
- essential benchmarking and evidence packaging

### MVP — €14,400 labor envelope

- 480 planned hours
- one constrained end-to-end technical hypothesis
- minimal Unreal integration
- essential policy/safety verification
- minimal reproducible demonstrator
- no unnecessary platform expansion

The three scenarios are planning envelopes, not claims of incurred cost.

## Current project-specific cost priorities

1. **Development labor** — primary cost category; WP1–WP4 work directly performed by the applicant.
2. **Unreal development environment / hardware or rental** — potentially necessary because the applicant currently has no Unreal Engine build environment; allowability must be checked before inclusion.
3. **Required software/services and compute** — include only where a concrete development or validation need exists.
4. **Demonstrator/evidence production** — only defined, necessary costs.

## Additional-cost rule

Hardware, software, services, compute, rental, and demonstrator costs remain **TBD** until a concrete requirement and current defensible price are available. They must not be invented or silently added to the grant request.

## Recommended working position

Until concrete non-labor costs are verified, use **€28,800 as the provisional FULL project-cost envelope**. Do not represent this as the final requested grant amount until all necessary project costs and applicable program rules are checked.

## Exclusions

Do not include:

- invented personnel positions
- vague management overhead without a defined function
- purchases unrelated to the grant scope
- decorative contingency used only to increase the request
- unsupported market or revenue assumptions

## Budget table

| Category | WP | Deliverable | Basis of estimate | Amount | Allowability checked | Evidence |
|---|---|---|---|---:|---|---|
| Development labor | WP1–WP4 | Specification, prototype, validation, evidence | 960 h × €30/h | €28,800 provisional FULL envelope | Pending final program-form check | Planning estimate |
| Development environment / hardware or rental | WP2–WP3 | Unreal build/test capability | Actual required purchase/rental cost | TBD | Pending | Current quote/price required |
| Software/services | WP2–WP3 | Required development/testing tooling | Current documented price | TBD | Pending | Quote/link |
| Compute/infrastructure | WP2–WP3 | Build/test workload | Expected usage × current rate | TBD | Pending | Estimate |
| Dissemination/demo | WP4 | Submission/demo materials | Defined production requirement | TBD | Pending | Estimate |

## Final budget gate

Before submission, verify each line for necessity, calculation, allowability, and direct connection to a deliverable. Unsupported costs are removed rather than hidden inside another category.
