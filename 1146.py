lista=[]
a = 0
while True:
    n = int(input())
    if n == 0:
        break
    lista+=[n]
for j in range(0, len(lista)):
    for i in range(1, lista[j]+1):
        print(i,end='') if j == len(lista) - 1 and i == lista[j] or i == lista[j] else print(i,end=' ')
    if j != len(lista)-1:
        print('\n',end='')
print()
