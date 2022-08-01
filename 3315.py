lista1 = 0; lista2 = 0; lista3 = 0; lista4 = 0
for i in range(0, 4):
    a = input().split(' ')
    if i == 0:
        for i in range(0, 7):
            lista1 += int(a[i])
    if i == 1:
        for i in range(0, 7):
            lista2 += int(a[i])
    if i == 2:
        for i in range(0, 7):
            lista3 += int(a[i])
    if i == 3:
        for i in range(0, 7):
            lista4 += int(a[i])
f = max(lista1,lista2,lista3,lista4)
g = bin(f)
print(f'{f} = {g[2:]}')
