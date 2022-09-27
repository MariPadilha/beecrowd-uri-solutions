tipo = input()
matriz=[]
linha=[]
for i in range(0, 12):
    for j in range(0, 12):
        linha+=[float(input())]
    matriz+=[linha[:]]
    linha.clear()
soma = itens = 0
a = 1; b = 11; l = 11
for p in range(0, 5):
    for i in range(a, b):
        soma += matriz[i][l]
        itens += 1
    l -= 1
    a += 1
    b -= 1
if tipo == 'M':
    soma = soma/itens
print(f'{soma:.1f}')
