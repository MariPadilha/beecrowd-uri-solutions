P = int(input())
lista = []
for i in range(0, P):
    a, b, c, d = input().split()
    e, f = input().split()
    e = int(e)
    f = int(f)
    soma = e + f
    if soma % 2 == 0 and b == 'PAR':
        lista += [a]
    if soma % 2 == 0 and b == 'IMPAR':
        lista += [c]
    if soma % 2 != 0 and b == 'PAR':
        lista += [c]
    if soma % 2 != 0 and b == 'IMPAR':
        lista += [a]
for k in range(0, P):
    print(f'{lista[k]}')
