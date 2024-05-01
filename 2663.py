n = int(input())
participantes = int(input())
soma = 0
lista = []
for i in range(0, n):
    lista+=[int(input())]
lista.sort()
lista = lista[::-1]
for h in range(0, participantes):
    maxi = max(lista)
    soma+=lista.count(maxi)
    while maxi in lista:
        lista.remove(maxi)
    if len(lista) == 0 or soma >= participantes:
        break
print(soma)
