# Geometry Workflow — Validation Matrix

## Status

**PLANNED VALIDATION — NO RESULTS RECORDED**

| ID | Case | Expected result | Evidence required | Status |
|---|---|---|---|---|
| G-001 | Missing capability | Deny, no mutation | Test output + state comparison | NOT RUN |
| G-002 | Missing requester | Deny, no mutation | Test output + state comparison | NOT RUN |
| G-003 | Unknown capability | Deny, no mutation | Test output + state comparison | NOT RUN |
| G-004 | Approval required without approval | Deny, no mutation | Test output + state comparison | NOT RUN |
| G-005 | Unresolved actor | Reject before mutation | Test output + state comparison | NOT RUN |
| G-006 | Excessive translation | Reject before mutation | Test output + state comparison | NOT RUN |
| G-007 | Valid bounded translation | Allow only after explicit policy authorization | Runtime output + before/after transform | BLOCKED |
| G-008 | Post-change verification | Observed state matches expected state | Runtime verification log | BLOCKED |
| G-009 | Recovery/rollback | Previous state restored after induced failure | Before/after state + recovery log | BLOCKED |
| G-010 | Repeatability | Repeated valid operations produce consistent outcomes | Raw repeated-run measurements | BLOCKED |

## Gate

The geometry demonstrator cannot be described as validated until the applicable cases have been executed in a real Unreal Engine environment and their evidence has been preserved.

A passing source-level review does not substitute for runtime evidence.
