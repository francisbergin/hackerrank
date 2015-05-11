#!/usr/bin/env python2

N = int(raw_input())

for i in range(0, N):
	valog = raw_input()
	val = valog.upper()
	val = list(val)
	if val[0] == 'H' and val[1] == 'I' and val[2] != 'D' and val[3] != 'D':
		print valog
