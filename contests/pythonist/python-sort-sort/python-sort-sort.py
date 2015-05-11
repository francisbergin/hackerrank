#!/usr/bin/env python3

N, M = map(int, input().split(' '))
a = []

for i in range(N):
    a.append(list(map(int, input().split(' '))))

K = int(input())

a.sort(key=lambda x: x[K])

for i1 in range(N):
    for i2 in range(M):
        print(a[i1][i2], end='')
        if i2 == M - 1:
            print('')
        else:
            print(' ', end='')
