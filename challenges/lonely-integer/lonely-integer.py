#!/usr/bin/env python3

N = input()
A = input().split()

for a in A:
    if A.count(a) == 1:
        print(a)
        break

