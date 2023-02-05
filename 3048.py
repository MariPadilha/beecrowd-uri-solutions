n = int(input())
soma = 1
lista = []
lista+=[int(input())]
for i in range(1, n):
    numero = int(input())
    if numero != lista[i-1]:
        soma+=1
    lista+=[numero]
print(soma)
