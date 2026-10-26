"""Analytic diagnostic for Eq. (8)-(12), not an ImageNet reproduction.

p = .5 delta(-a) + .5 delta(a); q_s = .5 delta(-s) + .5 delta(s).
At s=0, q is a single atom. Uses the paper's Laplace-distance kernel.
Reports the population raw field; no drift normalization or SGD is applied.
"""
import json
import math
from pathlib import Path


def weighted_mean(x, locations, tau):
    logits = [-abs(x-y)/tau for y in locations]
    top = max(logits)
    weights = [math.exp(v-top) for v in logits]
    return sum(w*y for w, y in zip(weights, locations))/sum(weights)


def drift(x, p, q, tau):
    return weighted_mean(x, p, tau)-weighted_mean(x, q, tau)


a, tau = 2.0, 1.0
p = [-a, a]
rows = []
for s in [0.0, 0.001, 0.01, 0.1]:
    q = [-s, s]
    residual = sum(drift(x, p, q, tau)**2 for x in q)/len(q)
    rows.append({"s": s, "raw_drift_squared_on_q": residual,
                 "W2_squared": (a-s)**2,
                 "drift_at_external_probe_x_1": drift(1.0, p, q, tau)})
assert drift(0.0, p, [0.0], tau) == 0.0
assert rows[0]["W2_squared"] == 4.0
assert rows[1]["raw_drift_squared_on_q"] < 0.0000041
result = {"a": a, "tau": tau, "scope": __doc__, "results": rows}
out = Path(__file__).with_name("symmetric-equilibrium-results.json")
out.write_text(json.dumps(result, indent=2), encoding="utf-8")
print(json.dumps(result, indent=2))
