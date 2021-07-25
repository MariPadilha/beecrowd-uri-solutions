d = []
for c in range(0, 20):
    f = input()
    d += [f]
d.reverse()
for g in range(0, 20):
    print(f'N[{g}] = {d[g]}')
