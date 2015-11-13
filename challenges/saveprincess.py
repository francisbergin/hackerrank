#!/usr/bin/env python3

def displayPathtoPrincess(n, grid):
	for i1 in range(0, n):
		tmp = list(grid[i1])
		for i2 in range(0, n):
			if tmp[i2] == 'm':
				m = (i1,i2)
			if tmp[i2] == 'p':
				p = (i1,i2)
	vert = p[0]-m[0]
	if vert > 0:
		for i in range(0, vert):
			print('DOWN')
	elif vert < 0:
		for i in range(0, abs(vert)):
			print('UP')
	horz = p[1]-m[1]
	if horz > 0:
		for i in range(0, horz):
			print('RIGHT')
	elif horz < 0:
		for i in range(0, abs(horz)):
			print('LEFT')

m = int(input())
grid = []
for i in range(0, m):
	grid.append(input().strip())

displayPathtoPrincess(m, grid)
