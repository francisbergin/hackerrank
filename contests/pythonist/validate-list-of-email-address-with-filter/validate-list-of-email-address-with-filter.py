#!/usr/bin/env python3

N = int(input())
a = []

def is_valid_email(s):
    if len(s.split('@')) != 2:
        return False
    uname = s.split('@')[0]
    if uname == '': # testcase 5!!!
        return False
    for i in uname:
        if not (i.isalnum() or i == '-' or i == '_'):
            return False
    if len(s.split('@')[1].split('.')) != 2:
        return False
    wname = s.split('@')[1].split('.')[0]
    ename = s.split('@')[1].split('.')[1]
    for i in wname:
        if not i.isalnum():
            return False
    if len(ename) > 3:
        return False
    for i in ename:
        if not i.isalnum():
            return False
    return True

for _ in range(N):
    tmp = input()
    if is_valid_email(tmp):
        a.append(tmp)

a.sort()

print(a)
