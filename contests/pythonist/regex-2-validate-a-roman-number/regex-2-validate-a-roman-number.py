#!/usr/bin/env python3

rn = input()

c = 'IVXLCDM'
no_good = ['VX', 'LC', 'DM', 'VV', 'LL', 'DD']

prev_char = ''
prev_cnt = 0

for i in rn:
    if i not in c:
        print('False')
        exit(0)
    if i == prev_char:
        prev_cnt += 1
    else:
        prev_char = i
        prev_cnt = 1
    if prev_cnt >= 4:
        print('False')
        exit(0)
for i in no_good:
    if i in rn:
        print('False')
        exit(0)

print('True')
