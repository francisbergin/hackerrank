#!/usr/bin/env python3

def print_ans(ans):
    if ans.real == 0 and ans.imag == 0:
        print('0.00')
        return
    if ans.real != 0:
        if ans.real < 0:
            print('-', end='')
        print('%.2f' % abs(ans.real), end='')
        if ans.imag != 0:
            if ans.imag < 0:
                print(' -', end=' ')
            else:
                print(' +', end=' ')
        else:
            print('')
    if ans.imag != 0:
        if ans.real == 0 and ans.imag < 0:
            print('-', end='')
        print('%.2fi' % abs(ans.imag))

n1r, n1i = list(map(float, input().split(' ')))
n1 = complex(n1r, n1i)

n2r, n2i = list(map(float, input().split(' ')))
n2 = complex(n2r, n2i)

print_ans(n1+n2)
print_ans(n1-n2)
print_ans(n1*n2)
print_ans(n1/n2)
print('%.2f' % abs(n1))
print('%.2f' % abs(n2))
