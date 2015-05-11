#!/usr/bin/env python3

N = int(input())
l = len(bin(N)[2::])

for i in range(1, N+1):
    # decimal
    tmp = i
    for _ in range(l - len(str(tmp))):
        print(' ', end='')
    print(tmp, end=' ')

    # octal
    tmp = oct(i)[2::]
    for _ in range(l - len(str(tmp))):
        print(' ', end='')
    print(tmp, end=' ')

    # hex
    tmp = hex(i)[2::]
    for _ in range(l - len(str(tmp))):
        print(' ', end='')
    print(tmp.upper(), end=' ')

    # bin
    tmp = bin(i)[2::]
    for _ in range(l - len(str(tmp))):
        print(' ', end='')
    print(tmp, end='')

    print('')
