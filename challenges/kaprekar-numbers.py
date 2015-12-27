p = int(input())
q = int(input())

a = []

for i in range(p, q+1):
    d = len(str(i))
    s = str(i*i)
    if len(s) % 2 != 0: s = '0' + s
    if int(s[:d]) + int(s[d:] if s[d:] else 0) == i:
        a.append(i)

print(' '.join([str(i) for i in a]) if a else 'INVALID RANGE')
