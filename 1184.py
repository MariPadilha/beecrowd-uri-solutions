tipo = input()
matriz = []; linha = []
for i in range(0, 12):
    for n in range(0, 12):
        linha += [float(input())]
    matriz += [linha[:]]
    linha.clear()
soma = n = 0
t = 1
for p in range(0, 11):
    for j in range(t, 12):
        soma += matriz[j][p]
        n+=1
    t += 1

if tipo == 'S':
    print(f'{soma:.1f}')
else:
    print(f'{soma/n:.1f}')
