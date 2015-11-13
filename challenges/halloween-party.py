#!/usr/bin/env python2

T = int(raw_input())

for i in range(0, T):
	K = int(raw_input())
	if K%2 == 0:
		print (K/2)*(K/2)
	else:
		print int(((K/2.0)+0.5)*((K/2.0)-0.5))
