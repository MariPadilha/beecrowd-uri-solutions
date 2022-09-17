coluna = int(input())
tipo = input()
matriz = []; linha = []
for i in range(0, 12):
    for n in range(0, 12):
        linha += [float(input())]
    matriz += [linha[:]]
    linha.clear()
soma = 0
for p in range(0, 12):
    soma += matriz[p][coluna]
if tipo == 'S':
    print(f'{soma:.1f}')
else:
    print(f'{soma/12:.1f}')
