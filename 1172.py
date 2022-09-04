lista = []
for i in range(0, 10):
    n = int(input())
    if n == 0 or n < 0:
        lista += [1]
    else:
        lista += [n]
for i in range(0, 10):
    print(f'X[{i}] = {lista[i]}')
