#!/usr/bin/env python3

n = int(input())
s = input()
k = int(input()) % 26

ns = ''

for i in s:
    if i.isalpha():
        if i.isupper():
            if ord(i) + k > ord('Z'):
                ns += chr(ord('A') + k - (ord('Z') - ord(i)) - 1)
                continue
            else:
                ns += chr(ord(i) + k)
                continue
        else:
            if ord(i) + k > ord('z'):
                ns += chr(ord('a') + k - (ord('z') - ord(i)) - 1)
                continue
            else:
                ns += chr(ord(i) + k)
                continue
    else:
        ns += i

print(ns)
