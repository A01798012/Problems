#!/usr/bin/env python3
import random
N = 20
X = 10**9 + 1
print(N, random.randint(1,X))
for _ in range(N):
    print(random.randint(1, X), end=" ")
