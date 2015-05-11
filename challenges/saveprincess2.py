#!/usr/bin/env python3

n = int(input())
x, y = list(map(int, input().split()))
grid = []

for _ in range(0, n):
    grid.append(input().strip())

for i1 in range(0, n):
    tmp = list(grid[i1])
    for i2 in range(0, n):
        if tmp[i2] == 'm':
            m = (i1,i2)
        if tmp[i2] == 'p':
            p = (i1,i2)
vert = p[0]-m[0]
horz = p[1]-m[1]
if vert > 0:
    print('DOWN')
elif vert < 0:
    print('UP')
elif horz > 0:
    print('RIGHT')
elif horz < 0:
    print('LEFT')
