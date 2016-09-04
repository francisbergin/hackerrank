#!/usr/bin/env python3

def prod(a, b):
    prod = 1
    for i in range(a, b+1):
        prod *= i
    return prod

T = int(input())

for _ in range(T):
    N, M = map(int, input().split())
    min_value = min(N, M)
    max_value = max(N, M)
    ans = prod(max_value+1, min_value+max_value) // prod(1, min_value)
    ans %= int(1e9+7)
    print(ans)
