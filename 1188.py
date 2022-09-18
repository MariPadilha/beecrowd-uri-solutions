tipo = input()
matriz = []; linha = []
for i in range(0, 12):
    for n in range(0, 12):
        linha += [float(input())]
    matriz += [linha[:]]
    linha.clear()
soma = n = 0
a = 5; b = 7
for p in range(7, 12):
    for j in range(a, b):
        soma += matriz[p][j]
        n+=1
    a -= 1; b += 1

if tipo == 'S':
    print(f'{soma:.1f}')
else:
    print(f'{soma/n:.1f}')
