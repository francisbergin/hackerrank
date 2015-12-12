import string

t = int(input())

for _ in range(t):
    keyword = input()
    ciphertext = input().split()

    alphabet = string.ascii_uppercase

    seen = set()
    keyword_wo_dups = ''
    for c in keyword:
        if c in seen:
            continue
        keyword_wo_dups += c
        seen.add(c)

    keyword = keyword_wo_dups

    order = []
    for c in sorted(keyword):
        order.append(keyword.index(c))
        alphabet = alphabet.replace(c, '')

    alphabet = [alphabet[i:i+len(keyword)] for i in range(0, len(alphabet), len(keyword))]

    alphbet_map = ''

    for i in order:
        alphbet_map += keyword[i]
        for r in alphabet:
            if len(r) > i:
                alphbet_map += r[i]

    for i in ciphertext:
        for c in i:
            print(chr(ord('A') + alphbet_map.index(c)), end='')
        print(' ', end='')

    print()
