n1 = int(input())
lista = []
for i in range(0, n1):
    a, b = input().split()
    a = int(a)
    b = int(b)
    c = a + b
    lista += [c]
for j in range(0, n1):
    print(f'{lista[j]}')
