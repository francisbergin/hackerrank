#!/usr/bin/env python3

def dirty_pos(b):
    dirt = []
    for rind, r in enumerate(b):
        for cind, c in enumerate(r):
            if c == 'd':
                dirt.append((rind, cind))
    return dirt

def num_pos_between(pos1, pos2):
    return abs(pos1[0]-pos2[0]) + abs(pos1[1]-pos2[1])

def minimum_pos(b, pos):
    for r in b:
        if r != ['-', '-', '-', '-', '-']:
            break
    else:
        return 0

    min_pos = []

    for i in dirty_pos(b):
        btmp = [list(x) for x in b]
        btmp[i[0]][i[1]] = '-'
        num_pos = num_pos_between(pos, i)
        num_pos += minimum_pos(btmp, i)
        min_pos.append(num_pos)

    return min(min_pos)

def get_move(src, dst):
    if (src[0] - dst[0]) > 0:
        return "UP"
    elif (src[0] - dst[0]) < 0:
        return "DOWN"
    elif (src[1] - dst[1]) > 0:
        return "LEFT"
    elif (src[1] - dst[1]) < 0:
        return "RIGHT"

r, c = list(map(int, input().split()))
b = []
for _ in range(5):
    b.append(input())
if b[r][c] == 'd':
    print('CLEAN')
    exit(0)

choices = {}

for i in dirty_pos(b):
    btmp = [list(x) for x in b]
    btmp[i[0]][i[1]] = '-'
    btmp[r][c] = '-'
    choices[i] = num_pos_between((r,c), i)
    choices[i] += minimum_pos(btmp, i)

dst = min(choices, key=choices.get)

print(get_move((r,c), dst))
