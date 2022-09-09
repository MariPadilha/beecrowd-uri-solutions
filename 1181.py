linha = int(input())
tipo = input()
matriz = []
coluna = []
soma = 0
for i in range(0, 12):
    for a in range(0, 12):
        coluna += [float(input())]
    matriz += [coluna[:]]
    coluna.clear()
for i in range(0, 12):
    soma += matriz[linha][i]
if tipo == 'S':
    print(f'{soma:.1f}')
else:
    print(f'{soma/12:.1f}')
