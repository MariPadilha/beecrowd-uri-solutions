n = int(input())
e = []
for c in range(0, n):
    c = input()
    e += [c]
for d in range(0, n):
    if d == 0:
        print(f'resposta {d+1}: {e[d]}')
    else:
        print(f'resposta {d+1}: {e[d]}')
