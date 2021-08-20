n = int(input())
lista = []
for i in range(0, n):
    j = input()
    if j == 'Batmain':
        lista += ['N']
    else:
        lista += ['Y']
for l in range(0, n):
    print(f'{lista[l]}')
