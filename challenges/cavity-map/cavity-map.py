#!/usr/bin/env python3

n = int(input())

mapp = []

for i in range(n):
	mapp.append([int(c) for c in list(input())])

ans = [row[:] for row in mapp]

for i1 in range(1, n-1):
	for i2 in range(1, n-1):
		if (mapp[i1][i2] > mapp[i1-1][i2]) & (mapp[i1][i2] > mapp[i1][i2-1]) & (mapp[i1][i2] > mapp[i1+1][i2]) & (mapp[i1][i2] > mapp[i1][i2+1]):
			ans[i1][i2] = 'X'

for i1 in range(n):
	for i2 in range(n):
		print(ans[i1][i2], end='')
	print('')
