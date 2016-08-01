#!/usr/bin/env python3

a = map(int, input().split())
b = map(int, input().split())

a_pts = 0
b_pts = 0

for x, y in zip(a, b):
    if x > y: a_pts += 1
    if x < y: b_pts += 1

print(a_pts, b_pts)
