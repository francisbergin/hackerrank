def non_coliding_dicts(dict1, dict2):
    for k in dict1:
        if k in dict2:
            if dict1[k] != dict2[k]:
                return False
    return True

ciphertext = input().split()
ciphertext_len = len(set(''.join(ciphertext)))

with open('dictionary.lst') as f:
    dictionary = f.read().lower().splitlines()

mapping = {}

for ct in sorted(ciphertext, key=lambda k: len(k), reverse=True):
    mappings_tmp = []
    for dt in [dt for dt in dictionary if len(dt) == len(ct)]:
        char_occ_ct = [[i for i, ltr in enumerate(ct) if ltr == c] for c in ct]
        char_occ_dt = [[i for i, ltr in enumerate(dt) if ltr == c] for c in dt]
        if not char_occ_ct == char_occ_dt:
            continue
        mapping_tmp = dict(zip(ct, dt))
        if not non_coliding_dicts(mapping, mapping_tmp):
            continue
        mappings_tmp.append(mapping_tmp)
    if len(mappings_tmp) == 1:
        mapping.update(mappings_tmp[0])
    if len(mapping) == ciphertext_len:
        break

for ct in ciphertext:
    for c in ct:
        print(mapping[c], end='')
    print(' ', end='')
