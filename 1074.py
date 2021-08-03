N = int(input())
lista = []
for i in range(0, N):
    o = int(input())
    if o < 0:
        if o % 2 != 0:
            lista += ['ODD NEGATIVE']
        if o % 2 == 0:
            lista += ['EVEN NEGATIVE']
    if o == 0:
        lista += ['NULL']
    if o > 0:
        if o % 2 != 0:
            lista += ['ODD POSITIVE']
        if o % 2 == 0:
            lista += ['EVEN POSITIVE']
for w in range(0, N):
    print(f'{lista[w]}')
