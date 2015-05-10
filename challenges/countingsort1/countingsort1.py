#!/usr/bin/env python2

T = int(raw_input())

n = raw_input()
n = n.split()
n = map(int, n)

val = []
for i in range(100):
	val.append(0)

for a in range(0, T):
	val[n[a]] += 1

for i in range(100):
	print val[i],
