# FINAL APPLICANT FORM ENTRY PACK — Epic MegaGrants Cycle 2, 2026

**Project:** OMEGA-X / NeuroMesh
**Applicant:** Andrzej Mikulski
**Status:** FINAL ENTRY PACK — use for the live Epic form; do not paste internal control language into applicant fields unless requested.

## 1. Applicant Information

### Who is applying?
**Individual (myself)**

### How did you hear about Epic MegaGrants?
**Google Search** — select this or the closest equivalent option in the live dropdown.

### Please explain how you heard about us
**I discovered Epic MegaGrants by chance while searching on Google.**

### Country
**Poland**

### Phone number
**+48 455 575 337**

### Relevant social media
**https://www.viewbug.com/member/andrzejM**

### Team size
**1**

## 2. Project Information

### Project Name
**OMEGA-X / NeuroMesh**

### Project Type
**Select the live-form category that most directly corresponds to a technical Unreal Engine tool/plugin or “Other” project. Do not select Games or UEFN.**

### Project media link
**Preferred:** use a publicly accessible project-overview/media URL.

A static project overview visual is available in the repository at:
`grant/OMEGA-X-NeuroMesh-Project-Overview.svg`

If the live form accepts a GitHub file URL, use the repository file URL only if Epic reviewers can access the repository. The repository is currently PRIVATE, so this link is not reviewer-accessible by default.

**Do not claim this visual is a runtime demo. It is a project architecture overview.**

### Project build link
Optional. Leave blank unless a reviewer-accessible build/artifact is available.

### Project website
Optional. Leave blank unless a genuine project website exists.

### Project phase
**Prototype** (or the closest truthful live-form option if “Prototype” is not offered).

### Is your project currently in Unreal Engine or Unreal Editor for Fortnite?
**Unreal Engine**

### Is your project open source and/or does it give back to the 3D community?
**Select only the option supported by the actual repository visibility/licensing and intended contribution plan.** The current GitHub repository is private, so do not select “open source” solely because source code exists. If the current plan does not establish a concrete public contribution commitment, use **none** unless the applicant has a separate truthful basis for “gives back to 3D community.”

## 3. Project Details

### Elevator pitch — max 225 characters
OMEGA-X / NeuroMesh brings governed AI-assisted geometry automation to Unreal Engine, separating proposals from execution with explicit authorization, safety validation, verification and audit.

### Full project details
OMEGA-X / NeuroMesh is a focused technical project for controlled automation in Unreal Engine workflows. It combines a governance and authorization layer with geometry-oriented automation so that AI-assisted proposals do not receive unrestricted authority over project state.

The core execution model is: proposal → policy evaluation → safety validation → authorization → execution → verification → audit. For state-changing operations, the intended model adds validation before application and verification after execution, with recovery mechanisms where technically justified.

A source-implemented OMEGA-X Unreal Engine plugin vertical slice and minimal C++ verification host are already present in the project repository. The current source implementation includes deterministic/default-deny policy logic, an explicitly authorized Geometry.TransformActor capability, bounded geometry safety checks, post-change read-back verification, and a bounded recovery attempt.

The next development stage is deliberately concrete: establish the Unreal Engine build environment, compile and load the plugin, execute the defined tests, validate the positive geometry workflow, test failure and recovery behavior, establish a baseline, measure the defined KPIs, and produce a demonstrable Unreal Engine workflow with reproducible evidence.

The project is intentionally not presented as a finished universal platform. Runtime compilation, plugin loading, positive runtime mutation, successful runtime recovery, benchmark results and end-to-end agent execution remain validation objectives rather than completed results.

Work is organized into four bounded stages: governance/specification, constrained Unreal prototype, validation/benchmarking, and demonstrator/evidence packaging. The six-month planning envelope can finish earlier if resources permit without reducing validation quality.

### Unique features
1. Explicit separation between AI proposal and privileged execution.
2. Deterministic/default-deny authorization with narrowly scoped capabilities.
3. Pre-mutation safety validation and post-mutation state verification.
4. Geometry automation designed around measurable deterministic baselines rather than AI-only claims.
5. Failure and recovery behavior treated as first-class validation targets.
6. Auditability of material state-changing actions.
7. Evidence discipline that distinguishes source implementation, runtime measurements, targets and unknowns.
8. A deliberately bounded Unreal Engine vertical slice rather than an oversized autonomous-agent platform.

## 4. Funding

### Funding range in USD
Current internal planning envelope: **€28,800** labor.

Reference conversion on 2026-09-04: approximately **€1 = $1.16245**, giving approximately **$33,479**. This is a planning conversion only.

**Select the live form's USD funding range that contains approximately $33,500.** Do not select a higher range merely to approach a program maximum.

### High-level budget / how funds will be used
The requested funding will support a six-month development-and-validation program focused on turning the current source-implemented vertical slice into an evidence-backed Unreal Engine demonstrator.

Primary use of funds:
- engineering time for governance, authorization and geometry workflow implementation;
- Unreal Engine integration and build/runtime verification;
- functional, regression, failure and recovery testing;
- baseline measurement and KPI benchmarking;
- demonstrator production and reproducibility/evidence packaging.

Current labor planning envelope: 960 hours × €30/hour = €28,800. This is an internal planning estimate. No unverified hardware, software, cloud, rental or other non-labor cost is included. If a development environment becomes a necessary project expense, it should be added only after its actual requirement, cost and allowability are verified.

### Additional funding
**No** — based on the applicant's confirmed statement that there is no other funding for this project.

### Stay Informed
Optional; applicant choice.

## 5. Final factual boundaries

- Applicant/legal name: Andrzej Mikulski.
- Applicant type: Individual / natural person.
- Country: Poland.
- Email: mojealterego21@gmail.com.
- Phone: +48 455 575 337.
- Relevant social media: https://www.viewbug.com/member/andrzejM.
- Team size: 1.
- Previous Epic MegaGrant: No.
- Other project funding: No.
- Unreal build environment currently available: No.
- Project repository is currently PRIVATE.
- Runtime build/test/demonstrator evidence is not currently verified.

## 6. Blocking items before clicking Submit

1. Confirm the live dropdown's exact label corresponding to **Google Search**; use that option and the explanation above.
2. Confirm the exact live Project Type dropdown option.
3. Provide a reviewer-accessible Project media link. A private GitHub repository does not satisfy reviewer accessibility by itself.
4. Confirm the live Project phase option.
5. Make the truthful community/open-source selection based on the actual public contribution status.
6. Select the USD funding range containing approximately $33,500, subject to the live form.
7. Review every answer against the final project repository and evidence boundary.
8. Submit before the official Cycle 2 deadline: September 4, 2026 at 11:59 PM ET.

## 7. Submission prohibition

Do not claim successful Unreal Engine compilation, plugin loading, positive runtime mutation, runtime recovery, benchmark improvement, completed demonstrator, security guarantee, transactional rollback guarantee, or end-to-end agent operation unless direct evidence exists at submission time.
