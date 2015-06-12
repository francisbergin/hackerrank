#!/usr/bin/env python3

N, M = list(map(int, input().split()))
team = []
for _ in range(N):
    team.append(int(input(), 2))

max_val = 0
max_cnt = 0

for i1 in range(N):
    for i2 in range(i1+1, N):
        tmp = team[i1] | team[i2]
        tmp = len(bin(tmp)[2:].replace('0',''))
        if tmp > max_val:
            max_val = tmp
            max_cnt = 1
        elif tmp == max_val:
            max_cnt += 1

print(max_val)
print(max_cnt)
