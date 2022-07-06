n = int(input())
a = 0
lista=[]
numeros = []
for i in range(0, n):
    num = int(input())
    numeros+=[num]
    for j in range(1, num):
        if num%j==0:
            a+=j
    if a == num:
        lista+=[True]
    else:
        lista+=[False]
    a = 0
for l in range(0, n):
    print(f'{numeros[l]} eh perfeito') if lista[l] == True else print(f'{numeros[l]} nao eh perfeito')
