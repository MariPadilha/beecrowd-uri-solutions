n = int(input())
lista = []
for i in range(0, n):
    a, b, c = input().split()
    a = float(a)
    b = float(b)
    c = float(c)
    media = (2.0 * a) + (3.0 * b) + (5.0 * c)
    media = media / 10
    lista += [media]
for h in range(0, n):
    print(f'{lista[h]:.1f}')
