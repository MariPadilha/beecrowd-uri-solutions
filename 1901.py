n = int(input())
matriz = []
lista = []
especies = []
for i in range(0, n):
    num = input().split(' ')
    for l in range(0, n):
        lista.append(num[l])
    matriz.append(lista[:])
    lista.clear()
for o in range(0, n*2):
    j, k = input().split(' ')
    j = int(j); k = int(k)
    if matriz[j-1][k-1] not in especies:
        especies+=[matriz[j-1][k-1]]
print(len(especies))
