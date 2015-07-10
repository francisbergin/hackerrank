#!/usr/bin/env python3

with open('trainingdata.txt') as f:
    data = f.read().splitlines()

data = [[float(x),float(y)] for [x,y] in [x.split(',') for x in data]]

data = sorted(data, key=lambda x: x[0])

val = float(input())

for ind, i in enumerate(data):
    if i[0] == val:
        print(i[1])
    elif i[0] - val >= 0:
        if ind == 0:
            low = 0, 0
        else:
            low = data[ind-1][0], data[ind-1][1]
        ans = low[1] + ((i[1]-low[1]) * ((val-low[0])/(i[0]-low[0])))
        print(ans)
        exit(0)
