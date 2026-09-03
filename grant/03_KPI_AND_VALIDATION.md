# KPI and Validation Plan

The grant application must use KPIs that can actually be measured during the proposed work. Targets are not presented as achieved results.

| KPI | Measurement method | Baseline | Target | Evidence |
|---|---|---|---|---|
| End-to-end workflow completion | Run predefined test cases and record pass/fail | To be established in M1 | Defined after baseline measurement | Test results |
| Geometry-processing quality | Compare output against predefined acceptance criteria | To be established | Defined after baseline measurement | Sample outputs + metrics |
| Automation efficiency | Measure human steps/time for baseline vs prototype | To be established | Reduction target set after baseline | Benchmark log |
| Validation coverage | Count defined acceptance cases executed and passed | 0% at project start | Target set in M1 | Test report |
| Reproducibility | Re-run fixed test set in controlled environment | To be established | Same documented result within tolerance | Reproduction log |
| Security-policy enforcement | Execute allowed/blocked action test cases | To be established | All defined policy tests behave as specified | Security test log |

## Measurement rules

1. Establish the baseline before setting final numerical improvement targets where no validated baseline currently exists.
2. Record the test environment, software versions, dataset/task definitions, and measurement procedure.
3. Separate median/average performance from worst-case and failure-case behavior where relevant.
4. Preserve raw evidence sufficient for a reviewer to understand how a result was obtained.
5. Never convert a target into a result before the experiment has been executed.

## Validation sequence

`SPECIFICATION → BASELINE → IMPLEMENTATION → TEST → BENCHMARK → FAILURE ANALYSIS → RE-TEST → EVIDENCE LOCK`

## Acceptance gate

A milestone is accepted only when its stated deliverables exist and its acceptance criteria have recorded evidence. Missing measurements remain **UNKNOWN**, not assumed successful.
