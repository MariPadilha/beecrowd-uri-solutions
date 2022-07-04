n = int(input())
num = input().split(' ')
numeros=[]
for i in range(0, n):
    p = int(num[i])
    numeros+=[p]
print(f'''Menor valor: {min(numeros)}
Posicao: {numeros.index(min(numeros))}''')
