n = int(input())
lista = []
numeros = []
for i in range(0, n):
    numero = int(input())
    if numero not in lista:
        lista+=[numero]
    numeros+=[numero]
lista.sort()
for k in lista:
    print(f'{k} aparece {numeros.count(k)} vez(es)')
