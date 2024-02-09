lista = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P']
n = -2
lista2 = []
for i in range(0, 14):
    if i > 11 or i < 8:
        a, b = map(int,input().split(' '))
        if a > b:
            lista2+=[lista[0]]
        else:
            lista2+=[lista[1]]
        lista.pop(0)
        lista.pop(0)
    else:
        a, b = map(int, input().split(' '))
        if a > b:
            lista += [lista2[0]]
        else:
            lista += [lista2[1]]
        lista2.pop(0)
        lista2.pop(0)
a, b = map(int, input().split(' '))
print(lista2[0]) if a > b else print(lista2[1])
