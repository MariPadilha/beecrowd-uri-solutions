n = int(input())
lista = []
golpe1 = golpe2 = 0
for i in range(0, n):
    w = int(input())
    a, b, c = input().split()
    d, e, f = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    e = int(e)
    f = int(f)
    if c % 2 == 0:
        golpe1 = ((a + b) / 2) + w
    if c % 2 != 0:
        golpe1 = ((a + b) / 2)
    if f % 2 == 0:
        golpe2 = ((d + e) / 2) + w
    if f % 2 != 0:
        golpe2 = ((d + e) / 2)
    if golpe1 > golpe2:
        lista += ['Dabriel']
    if golpe1 < golpe2:
        lista += ['Guarte']
    if golpe1 == golpe2:
        lista += ['Empate']
for o in range(0, n):
    print(f'{lista[o]}')
