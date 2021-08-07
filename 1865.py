a = int(input())
lista = []
vezes = 0
for i in range(0, a):
    b, c = input().split()
    if b == 'Thor':
        lista += ['Y']
        vezes += 1
    if b != 'Thor':
        lista += ['N']
        vezes += 1
for j in range(0, vezes):
    print(f'{lista[j]}')
