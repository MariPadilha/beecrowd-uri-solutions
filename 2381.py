n, ind = input().split(" ")
ind = int(ind)-1
lista = []
for i in range(0, int(n)):
    lista+=[input()]
lista.sort()
print(lista[ind])
