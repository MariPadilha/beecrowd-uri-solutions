n = int(input())
lista = []
for i in range(0, n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    c = a + b
    if c == 0:
        lista += ['PROXYCITY']
    if c == 1:
        lista += ['P.Y.N.G.']
    if c == 2:
        lista += ['DNSUEY!']
    if c == 3:
        lista += ['SERVERS']
    if c == 4:
        lista += ['HOST!']
    if c == 5:
        lista += ['CRIPTONIZE']
    if c == 6:
        lista += ['OFFLINE DAY']
    if c == 7:
        lista += ['SALT']
    if c == 8:
        lista += ['ANSWER!']
    if c == 9:
        lista += ['RAR?']
    if c == 10:
        lista += ['WIFI ANTENNAS']
for k in range(0, n):
    print(f'{lista[k]}')
